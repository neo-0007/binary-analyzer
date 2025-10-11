
ulong FUN_00617430(long param_1,undefined4 *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  
  uVar9 = 0xffffffff;
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0xc);
LAB_0061745c:
  uVar2 = *param_2;
LAB_0061745f:
  switch(uVar2) {
  case 1:
    if ((*(long *)(param_2 + 2) != 0) || (*(long *)(param_2 + 4) != 0)) {
      *param_2 = 2;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto switchD_0061746b_caseD_2;
      uVar2 = 2;
      goto LAB_006177ed;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bss_conn.c",0x5a,"conn_state");
    FUN_0051f8f0(0x20,0x90,"hostname=%s service=%s",*(undefined8 *)(param_2 + 2),
                 *(undefined8 *)(param_2 + 4));
    break;
  case 2:
switchD_0061746b_caseD_2:
    iVar1 = param_2[1];
    if (iVar1 == 6) {
      uVar6 = 10;
    }
    else if (iVar1 == 0x100) {
      uVar6 = 0;
    }
    else {
      if (iVar1 != 4) {
        FUN_0051f420();
        FUN_0051f540("../crypto/bio/bss_conn.c",0x7b,"conn_state");
        FUN_0051f8f0(0x20,0x92,0);
        break;
      }
      uVar6 = 2;
    }
    iVar1 = FUN_005c0430(*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4),0,uVar6,1,
                         param_2 + 8);
    if (iVar1 != 0) {
      if (*(long *)(param_2 + 8) != 0) {
        *(long *)(param_2 + 10) = *(long *)(param_2 + 8);
        *param_2 = 3;
        if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_00617722;
        goto switchD_0061746b_caseD_3;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bss_conn.c",0x84,"conn_state");
      FUN_0051f8f0(0x20,0x8e,0);
    }
    break;
  case 3:
switchD_0061746b_caseD_3:
    uVar2 = FUN_005bfd60(*(undefined8 *)(param_2 + 10));
    uVar3 = FUN_005bfd50(*(undefined8 *)(param_2 + 10));
    uVar4 = FUN_005bfd40(*(undefined8 *)(param_2 + 10));
    uVar5 = FUN_004af5f0(uVar4,uVar3,uVar2);
    uVar9 = (ulong)uVar5;
    if (uVar5 != 0xffffffff) {
      *(uint *)(param_1 + 0x38) = uVar5;
      *param_2 = 4;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        FUN_004ab6c0(param_1,0xf);
        FUN_0051f000();
        uVar5 = param_2[6];
        uVar6 = FUN_005bfdc0(*(undefined8 *)(param_2 + 10));
        iVar1 = FUN_004af6d0(*(undefined4 *)(param_1 + 0x38),uVar6,uVar5 | 4);
        *(undefined4 *)(param_1 + 0x34) = 0;
        if (iVar1 == 0) goto LAB_00617680;
        FUN_0051f1a0();
        *param_2 = 5;
        goto LAB_00617506;
      }
      uVar2 = 4;
      goto LAB_006177ed;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bss_conn.c",0x90,"conn_state");
    puVar8 = (undefined4 *)FUN_006d2700();
    FUN_0051f8f0(2,*puVar8,"calling socket(%s, %s)",*(undefined8 *)(param_2 + 2),
                 *(undefined8 *)(param_2 + 4));
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bss_conn.c",0x93,"conn_state");
    FUN_0051f8f0(0x20,0x76,0);
    break;
  case 4:
    FUN_004ab6c0(param_1,0xf);
    FUN_0051f000();
    uVar5 = param_2[6];
    uVar6 = FUN_005bfdc0(*(undefined8 *)(param_2 + 10));
    uVar5 = FUN_004af6d0(*(undefined4 *)(param_1 + 0x38),uVar6,uVar5 | 4);
    *(undefined4 *)(param_1 + 0x34) = 0;
    uVar9 = (ulong)uVar5;
    if (uVar5 == 0) {
LAB_00617680:
      uVar5 = FUN_004b1020(0);
      uVar9 = (ulong)uVar5;
      if (uVar5 != 0) {
        uVar9 = 0;
        FUN_004ab6e0(param_1,0xc);
        *param_2 = 6;
        *(undefined4 *)(param_1 + 0x34) = 2;
        FUN_0051f050();
        break;
      }
      lVar7 = FUN_005bfd30(*(undefined8 *)(param_2 + 10));
      *(long *)(param_2 + 10) = lVar7;
      if (lVar7 != 0) goto code_r0x006176a8;
      FUN_0051f1a0();
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bss_conn.c",0xb1,"conn_state");
      puVar8 = (undefined4 *)FUN_006d2700();
      FUN_0051f8f0(2,*puVar8,"calling connect(%s, %s)",*(undefined8 *)(param_2 + 2),
                   *(undefined8 *)(param_2 + 4));
      *param_2 = 7;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_0061747e;
      uVar2 = 7;
    }
    else {
      FUN_0051f1a0();
      *param_2 = 5;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto switchD_0061746b_caseD_5;
LAB_006177e8:
      uVar2 = 5;
    }
    goto LAB_006177ed;
  case 5:
switchD_0061746b_caseD_5:
LAB_00617506:
    uVar9 = 1;
    goto joined_r0x00617509;
  case 6:
    iVar1 = FUN_004aebe0(*(undefined4 *)(param_1 + 0x38));
    if (iVar1 == 0) {
      *param_2 = 5;
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_006177e8;
      goto switchD_0061746b_caseD_5;
    }
    FUN_004ab6c0(param_1,0xf);
    lVar7 = FUN_005bfd30(*(undefined8 *)(param_2 + 10));
    *(long *)(param_2 + 10) = lVar7;
    if (lVar7 == 0) {
      uVar9 = 0;
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bss_conn.c",0xca,"conn_state");
      FUN_0051f8f0(2,iVar1,"calling connect(%s, %s)",*(undefined8 *)(param_2 + 2),
                   *(undefined8 *)(param_2 + 4));
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bss_conn.c",0xcd,"conn_state");
      FUN_0051f8f0(0x20,0x6e,0);
      break;
    }
    FUN_004b0060(*(undefined4 *)(param_1 + 0x38));
    *param_2 = 3;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto switchD_0061746b_caseD_3;
LAB_00617722:
    uVar2 = 3;
    goto LAB_006177ed;
  case 7:
LAB_0061747e:
    uVar9 = 0;
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bss_conn.c",0xd5,"conn_state");
    FUN_0051f8f0(0x20,0x67,0);
  }
joined_r0x00617509:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return uVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x006174d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (*UNRECOVERED_JUMPTABLE)(param_1,*param_2,uVar9);
  return uVar9;
code_r0x006176a8:
  FUN_004b0060(*(undefined4 *)(param_1 + 0x38));
  *param_2 = 3;
  FUN_0051f050();
  uVar2 = *param_2;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_006177ed;
  goto LAB_0061745f;
LAB_006177ed:
  uVar5 = (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,uVar9);
  uVar9 = (ulong)uVar5;
  if (uVar5 == 0) {
    return uVar9;
  }
  goto LAB_0061745c;
}

