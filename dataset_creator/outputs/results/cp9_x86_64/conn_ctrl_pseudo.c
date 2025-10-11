
ulong conn_ctrl(BIO *param_1,int param_2,long param_3,BIO *param_4)

{
  bio_st *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  _func_603 *ptr;
  char *pcVar5;
  BIO_METHOD *pBVar6;
  ulong uVar7;
  
  pbVar1 = param_1->prev_bio;
  iVar4 = (int)param_3;
  if (param_2 < 0x10) {
    switch(param_2) {
    case 1:
      iVar4 = *(int *)&param_1->next_bio;
      *(undefined4 *)&pbVar1->method = 1;
      if (iVar4 != -1) {
        BIO_closesocket();
        *(undefined4 *)&param_1->next_bio = 0xffffffff;
      }
      uVar2._0_4_ = pbVar1->flags;
      uVar2._4_4_ = pbVar1->retry_reason;
      BIO_ADDRINFO_free(uVar2);
      pbVar1->flags = 0;
      pbVar1->retry_reason = 0;
      *(undefined4 *)&param_1->ptr = 0;
      return 0;
    case 2:
      return (ulong)(*(uint *)&param_1->ptr >> 0xb & 1);
    case 8:
      return (long)*(int *)&param_1->field_0x2c;
    case 9:
      *(int *)&param_1->field_0x2c = iVar4;
      return 1;
    case 0xb:
      return 1;
    case 0xc:
      if (pbVar1->callback != (_func_603 *)0x0) {
        BIO_ctrl(param_4,100,0,pbVar1->callback);
      }
      if (pbVar1->cb_arg != (char *)0x0) {
        BIO_ctrl(param_4,100,1,pbVar1->cb_arg);
      }
      BIO_int_ctrl(param_4,100,3,*(int *)((long)&pbVar1->method + 4));
      BIO_ctrl(param_4,0x9b,(long)pbVar1->init,(void *)0x0);
      BIO_callback_ctrl(param_4,0xe,(fp *)pbVar1->ptr);
      return 1;
    case 0xf:
      param_4->method = (BIO_METHOD *)pbVar1->ptr;
      return 1;
    }
    goto switchD_0061596a_caseD_4d;
  }
  switch(param_2) {
  case 0x48:
    iVar4 = setsockopt(*(int *)&param_1->next_bio,0x11a,(iVar4 == 0) + 1,param_4,
                       *(socklen_t *)&param_4->next_bio);
    if (iVar4 == 0) {
      BIO_set_flags(param_1,(-(uint)(param_3 == 0) & 0xffffe000) + 0x4000);
      return 1;
    }
    goto switchD_0061596a_caseD_4d;
  case 0x49:
    iVar4 = 0x4000;
    goto LAB_00615b05;
  case 0x4a:
    uVar7 = 0;
    BIO_set_flags(param_1,0x1000);
    *(char *)&pbVar1->shutdown = (char)param_3;
    break;
  case 0x4b:
    uVar7 = 0;
    BIO_clear_flags(param_1,0x1000);
    break;
  case 0x4c:
    iVar4 = 0x2000;
LAB_00615b05:
    iVar4 = BIO_test_flags(param_1,iVar4);
    uVar7 = (ulong)(iVar4 != 0);
    break;
  default:
    goto switchD_0061596a_caseD_4d;
  case 100:
    if (param_4 == (BIO *)0x0) {
      return 1;
    }
    param_1->num = 1;
    if (param_3 == 0) {
      pcVar5 = pbVar1->cb_arg;
      CRYPTO_free(pbVar1->callback);
      pbVar1->callback = (_func_603 *)0x0;
      iVar4 = BIO_parse_hostserv(param_4,&pbVar1->callback,&pbVar1->cb_arg,0);
      if (pbVar1->cb_arg == pcVar5) {
        return (long)iVar4;
      }
      CRYPTO_free(pcVar5);
      return (long)iVar4;
    }
    if (param_3 == 1) {
      CRYPTO_free(pbVar1->cb_arg);
      pcVar5 = CRYPTO_strdup((char *)param_4,"../crypto/bio/bss_conn.c",0x1c6);
      pbVar1->cb_arg = pcVar5;
      return (ulong)(pcVar5 != (char *)0x0);
    }
    if (param_3 == 2) {
      ptr = (_func_603 *)BIO_ADDR_hostname_string(param_4,1);
      pcVar5 = (char *)BIO_ADDR_service_string(param_4,1);
      if ((ptr != (_func_603 *)0x0) && (pcVar5 != (char *)0x0)) {
        CRYPTO_free(pbVar1->callback);
        pbVar1->callback = ptr;
        CRYPTO_free(pbVar1->cb_arg);
        pbVar1->cb_arg = pcVar5;
        uVar3._0_4_ = pbVar1->flags;
        uVar3._4_4_ = pbVar1->retry_reason;
        BIO_ADDRINFO_free(uVar3);
        pbVar1->flags = 0;
        pbVar1->retry_reason = 0;
        *(undefined8 *)&pbVar1->num = 0;
        return 1;
      }
      CRYPTO_free(ptr);
      CRYPTO_free(pcVar5);
      return 0;
    }
    if (param_3 == 3) {
      *(undefined4 *)((long)&pbVar1->method + 4) = *(undefined4 *)&param_4->method;
      return 1;
    }
    goto switchD_0061596a_caseD_4d;
  case 0x65:
    uVar7 = 1;
    if (*(int *)&pbVar1->method != 5) {
      iVar4 = conn_state(param_1,pbVar1);
      uVar7 = (ulong)iVar4;
    }
    break;
  case 0x66:
    if (param_3 == 0) {
      uVar7 = 1;
      pbVar1->init = pbVar1->init & 0xfffffff7;
    }
    else {
      uVar7 = 1;
      pbVar1->init = pbVar1->init | 8;
    }
    break;
  case 0x69:
    if (param_1->num == 0) {
      uVar7 = 0xffffffffffffffff;
    }
    else {
      if (param_4 != (BIO *)0x0) {
        *(undefined4 *)&param_4->method = *(undefined4 *)&param_1->next_bio;
      }
      uVar7 = (ulong)*(int *)&param_1->next_bio;
    }
    break;
  case 0x7b:
    if (param_4 != (BIO *)0x0) {
      if (param_3 == 0) {
        param_4->method = (BIO_METHOD *)pbVar1->callback;
        return 1;
      }
      if (param_3 == 1) {
        param_4->method = (BIO_METHOD *)pbVar1->cb_arg;
        return 1;
      }
      if (param_3 == 2) {
        pBVar6 = (BIO_METHOD *)BIO_ADDRINFO_address(*(undefined8 *)&pbVar1->num);
        param_4->method = pBVar6;
        return 1;
      }
      if (param_3 == 3) {
        iVar4 = BIO_ADDRINFO_family(*(undefined8 *)&pbVar1->num);
        if (iVar4 == 2) {
          return 4;
        }
        if (iVar4 == 10) {
          return 6;
        }
        if (iVar4 != 0) {
          return 0xffffffffffffffff;
        }
        return (long)*(int *)((long)&pbVar1->method + 4);
      }
    }
switchD_0061596a_caseD_4d:
    uVar7 = 0;
    break;
  case 0x9b:
    pbVar1->init = iVar4;
    uVar7 = 1;
  }
  return uVar7;
}

