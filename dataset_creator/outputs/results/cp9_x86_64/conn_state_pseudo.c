
ulong conn_state(BIO *param_1,undefined4 *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  
  uVar9 = 0xffffffff;
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0xc);
LAB_006153bc:
  uVar2 = *param_2;
LAB_006153bf:
  switch(uVar2) {
  case 1:
    if ((*(long *)(param_2 + 2) != 0) || (*(long *)(param_2 + 4) != 0)) {
      *param_2 = 2;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto switchD_006153cb_caseD_2;
      uVar2 = 2;
      goto LAB_0061574d;
    }
    ERR_new();
    ERR_set_debug("../crypto/bio/bss_conn.c",0x5a,"conn_state");
    ERR_set_error(0x20,0x90,"hostname=%s service=%s",*(undefined8 *)(param_2 + 2),
                  *(undefined8 *)(param_2 + 4));
    break;
  case 2:
switchD_006153cb_caseD_2:
    iVar1 = param_2[1];
    if (iVar1 == 6) {
      uVar6 = 10;
    }
    else if (iVar1 == 0x100) {
      uVar6 = 0;
    }
    else {
      if (iVar1 != 4) {
        ERR_new();
        ERR_set_debug("../crypto/bio/bss_conn.c",0x7b,"conn_state");
        ERR_set_error(0x20,0x92,0);
        break;
      }
      uVar6 = 2;
    }
    iVar1 = BIO_lookup(*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4),0,uVar6,1,
                       param_2 + 8);
    if (iVar1 != 0) {
      if (*(long *)(param_2 + 8) != 0) {
        *(long *)(param_2 + 10) = *(long *)(param_2 + 8);
        *param_2 = 3;
        if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_00615682;
        goto switchD_006153cb_caseD_3;
      }
      ERR_new();
      ERR_set_debug("../crypto/bio/bss_conn.c",0x84,"conn_state");
      ERR_set_error(0x20,0x8e,0);
    }
    break;
  case 3:
switchD_006153cb_caseD_3:
    uVar2 = BIO_ADDRINFO_protocol(*(undefined8 *)(param_2 + 10));
    uVar3 = BIO_ADDRINFO_socktype(*(undefined8 *)(param_2 + 10));
    uVar4 = BIO_ADDRINFO_family(*(undefined8 *)(param_2 + 10));
    uVar5 = BIO_socket(uVar4,uVar3,uVar2);
    uVar9 = (ulong)uVar5;
    if (uVar5 != 0xffffffff) {
      *(uint *)&param_1->next_bio = uVar5;
      *param_2 = 4;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        BIO_clear_flags(param_1,0xf);
        ERR_set_mark();
        uVar5 = param_2[6];
        uVar6 = BIO_ADDRINFO_address(*(undefined8 *)(param_2 + 10));
        iVar1 = BIO_connect(*(undefined4 *)&param_1->next_bio,uVar6,uVar5 | 4);
        *(undefined4 *)((long)&param_1->ptr + 4) = 0;
        if (iVar1 == 0) goto LAB_006155e0;
        ERR_clear_last_mark();
        *param_2 = 5;
        goto LAB_00615466;
      }
      uVar2 = 4;
      goto LAB_0061574d;
    }
    ERR_new();
    ERR_set_debug("../crypto/bio/bss_conn.c",0x90,"conn_state");
    piVar8 = __errno_location();
    ERR_set_error(2,*piVar8,"calling socket(%s, %s)",*(undefined8 *)(param_2 + 2),
                  *(undefined8 *)(param_2 + 4));
    ERR_new();
    ERR_set_debug("../crypto/bio/bss_conn.c",0x93,"conn_state");
    ERR_set_error(0x20,0x76,0);
    break;
  case 4:
    BIO_clear_flags(param_1,0xf);
    ERR_set_mark();
    uVar5 = param_2[6];
    uVar6 = BIO_ADDRINFO_address(*(undefined8 *)(param_2 + 10));
    uVar5 = BIO_connect(*(undefined4 *)&param_1->next_bio,uVar6,uVar5 | 4);
    *(undefined4 *)((long)&param_1->ptr + 4) = 0;
    uVar9 = (ulong)uVar5;
    if (uVar5 == 0) {
LAB_006155e0:
      uVar5 = BIO_sock_should_retry(0);
      uVar9 = (ulong)uVar5;
      if (uVar5 != 0) {
        uVar9 = 0;
        BIO_set_flags(param_1,0xc);
        *param_2 = 6;
        *(undefined4 *)((long)&param_1->ptr + 4) = 2;
        ERR_pop_to_mark();
        break;
      }
      lVar7 = BIO_ADDRINFO_next(*(undefined8 *)(param_2 + 10));
      *(long *)(param_2 + 10) = lVar7;
      if (lVar7 != 0) goto code_r0x00615608;
      ERR_clear_last_mark();
      ERR_new();
      ERR_set_debug("../crypto/bio/bss_conn.c",0xb1,"conn_state");
      piVar8 = __errno_location();
      ERR_set_error(2,*piVar8,"calling connect(%s, %s)",*(undefined8 *)(param_2 + 2),
                    *(undefined8 *)(param_2 + 4));
      *param_2 = 7;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_006153de;
      uVar2 = 7;
    }
    else {
      ERR_clear_last_mark();
      *param_2 = 5;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto switchD_006153cb_caseD_5;
LAB_00615748:
      uVar2 = 5;
    }
    goto LAB_0061574d;
  case 5:
switchD_006153cb_caseD_5:
LAB_00615466:
    uVar9 = 1;
    goto joined_r0x00615469;
  case 6:
    iVar1 = BIO_sock_error(*(int *)&param_1->next_bio);
    if (iVar1 == 0) {
      *param_2 = 5;
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_00615748;
      goto switchD_006153cb_caseD_5;
    }
    BIO_clear_flags(param_1,0xf);
    lVar7 = BIO_ADDRINFO_next(*(undefined8 *)(param_2 + 10));
    *(long *)(param_2 + 10) = lVar7;
    if (lVar7 == 0) {
      uVar9 = 0;
      ERR_new();
      ERR_set_debug("../crypto/bio/bss_conn.c",0xca,"conn_state");
      ERR_set_error(2,iVar1,"calling connect(%s, %s)",*(undefined8 *)(param_2 + 2),
                    *(undefined8 *)(param_2 + 4));
      ERR_new();
      ERR_set_debug("../crypto/bio/bss_conn.c",0xcd,"conn_state");
      ERR_set_error(0x20,0x6e,0);
      break;
    }
    BIO_closesocket(*(undefined4 *)&param_1->next_bio);
    *param_2 = 3;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto switchD_006153cb_caseD_3;
LAB_00615682:
    uVar2 = 3;
    goto LAB_0061574d;
  case 7:
LAB_006153de:
    uVar9 = 0;
    ERR_new();
    ERR_set_debug("../crypto/bio/bss_conn.c",0xd5,"conn_state");
    ERR_set_error(0x20,0x67,0);
  }
joined_r0x00615469:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return uVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x00615434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (*UNRECOVERED_JUMPTABLE)(param_1,*param_2,uVar9);
  return uVar9;
code_r0x00615608:
  BIO_closesocket(*(undefined4 *)&param_1->next_bio);
  *param_2 = 3;
  ERR_pop_to_mark();
  uVar2 = *param_2;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_0061574d;
  goto LAB_006153bf;
LAB_0061574d:
  uVar5 = (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,uVar9);
  uVar9 = (ulong)uVar5;
  if (uVar5 == 0) {
    return uVar9;
  }
  goto LAB_006153bc;
}

