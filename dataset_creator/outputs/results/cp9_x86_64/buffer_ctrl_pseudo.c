
size_t buffer_ctrl(BIO *param_1,int param_2,size_t param_3,BIO *param_4)

{
  bio_st *pbVar1;
  int iVar2;
  _func_603 *p_Var3;
  _func_603 *p_Var4;
  long lVar5;
  size_t sVar6;
  void *pvVar7;
  int iVar8;
  _func_603 *p_Var9;
  _func_603 *p_Var10;
  int iVar11;
  BIO *bp;
  void *ptr;
  long in_FS_OFFSET;
  undefined1 local_41;
  long local_40;
  
  pbVar1 = param_1->prev_bio;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x1d < param_2) {
    iVar2 = (int)param_3;
    if (param_2 == 0x75) {
      iVar11 = iVar2;
      iVar8 = iVar2;
      if (param_4 != (BIO *)0x0) {
        if (*(int *)&param_4->method == 0) {
          iVar8 = *(int *)((long)&pbVar1->method + 4);
        }
        else {
          iVar11 = *(int *)&pbVar1->method;
        }
      }
      pvVar7 = *(void **)&pbVar1->init;
      p_Var3 = pbVar1->callback;
      if ((iVar11 < 0x1001) || (*(int *)&pbVar1->method == iVar11)) {
        sVar6 = 1;
        if (0x1000 < iVar8) {
          ptr = pvVar7;
          if (iVar8 == *(int *)((long)&pbVar1->method + 4)) goto LAB_00614f34;
LAB_00614fdb:
          pvVar7 = CRYPTO_malloc(iVar2,"../crypto/bio/bf_buff.c",0x148);
          if (pvVar7 != (void *)0x0) goto LAB_00614eff;
          if (pbVar1->callback != p_Var3) {
            CRYPTO_free(p_Var3);
          }
LAB_00615018:
          ERR_new();
          ERR_set_debug("../crypto/bio/bf_buff.c",0x199,"buffer_ctrl");
          ERR_set_error(0x20,0xc0100,0);
          goto LAB_00614c38;
        }
      }
      else {
        if ((long)param_3 < 1) goto LAB_00614c38;
        p_Var3 = (_func_603 *)CRYPTO_malloc(iVar2,"../crypto/bio/bf_buff.c",0x143);
        if (p_Var3 == (_func_603 *)0x0) goto LAB_00615018;
        if ((0x1000 < iVar8) && (*(int *)((long)&pbVar1->method + 4) != iVar8)) goto LAB_00614fdb;
LAB_00614eff:
        if (pbVar1->callback == p_Var3) {
          ptr = *(void **)&pbVar1->init;
        }
        else {
          CRYPTO_free(pbVar1->callback);
          *(int *)&pbVar1->method = iVar11;
          pbVar1->callback = p_Var3;
          pbVar1->cb_arg = (char *)0x0;
          ptr = *(void **)&pbVar1->init;
        }
LAB_00614f34:
        if (pvVar7 == ptr) {
          sVar6 = 1;
        }
        else {
          sVar6 = 1;
          CRYPTO_free(ptr);
          *(void **)&pbVar1->init = pvVar7;
          pbVar1->flags = 0;
          pbVar1->retry_reason = 0;
          *(int *)((long)&pbVar1->method + 4) = iVar8;
        }
      }
    }
    else if (param_2 < 0x76) {
      if (param_2 == 0x65) {
        if (*(long *)&param_1->references == 0) goto LAB_00614c38;
        BIO_clear_flags(param_1,0xf);
        sVar6 = BIO_ctrl(*(BIO **)&param_1->references,0x65,param_3,param_4);
        BIO_copy_next_retry(param_1);
      }
      else {
        if (param_2 != 0x74) goto switchD_00614b25_caseD_4;
        if (*(int *)&pbVar1->cb_arg < 1) goto LAB_00614c38;
        sVar6 = 0;
        p_Var9 = pbVar1->callback + *(int *)((long)&pbVar1->cb_arg + 4);
        p_Var3 = p_Var9 + 1;
        p_Var10 = p_Var9;
        while (p_Var4 = p_Var3, sVar6 = sVar6 + (*p_Var10 == (_func_603)0xa),
              p_Var4 != p_Var9 + 1 + (*(int *)&pbVar1->cb_arg - 1)) {
          p_Var10 = p_Var4;
          p_Var3 = p_Var4 + 1;
        }
      }
    }
    else {
      if (param_2 != 0x7a) {
switchD_00614b25_caseD_4:
        bp = *(BIO **)&param_1->references;
        if (bp != (BIO *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00614c8b:
            sVar6 = BIO_ctrl(bp,param_2,param_3,param_4);
            return sVar6;
          }
          goto LAB_00614e05;
        }
        goto LAB_00614c38;
      }
      if ((long)*(int *)&pbVar1->method < (long)param_3) {
        if ((long)param_3 < 1) goto LAB_00614c38;
        p_Var3 = (_func_603 *)CRYPTO_malloc(iVar2,"../crypto/bio/bf_buff.c",0x124);
        if (p_Var3 == (_func_603 *)0x0) goto LAB_00615018;
        CRYPTO_free(pbVar1->callback);
        pbVar1->callback = p_Var3;
      }
      else {
        p_Var3 = pbVar1->callback;
      }
      *(int *)&pbVar1->cb_arg = iVar2;
      *(undefined4 *)((long)&pbVar1->cb_arg + 4) = 0;
      sVar6 = 1;
      memcpy(p_Var3,param_4,(long)iVar2);
    }
    goto LAB_00614c3b;
  }
  switch(param_2) {
  case 1:
    bp = *(BIO **)&param_1->references;
    pbVar1->cb_arg = (char *)0x0;
    pbVar1->flags = 0;
    pbVar1->retry_reason = 0;
    if (bp != (BIO *)0x0) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00614e05;
      param_2 = 1;
      goto LAB_00614c8b;
    }
    goto LAB_00614c38;
  case 2:
    if (*(int *)&pbVar1->cb_arg < 1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        bp = *(BIO **)&param_1->references;
        param_2 = 2;
        goto LAB_00614c8b;
      }
      goto LAB_00614e05;
    }
    goto LAB_00614c38;
  case 3:
    sVar6 = (size_t)pbVar1->flags;
    break;
  default:
    goto switchD_00614b25_caseD_4;
  case 10:
    sVar6 = (size_t)*(int *)&pbVar1->cb_arg;
    if (sVar6 == 0) {
      bp = *(BIO **)&param_1->references;
      if (bp != (BIO *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          param_2 = 10;
          goto LAB_00614c8b;
        }
        goto LAB_00614e05;
      }
      goto LAB_00614c38;
    }
    break;
  case 0xb:
    bp = *(BIO **)&param_1->references;
    if (bp != (BIO *)0x0) {
      if (pbVar1->flags < 1) {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00614e05;
      }
      else {
        while( true ) {
          BIO_clear_flags(param_1,0xf);
          if (pbVar1->flags < 1) break;
          iVar2 = BIO_write(*(BIO **)&param_1->references,
                            (void *)((long)pbVar1->retry_reason + *(long *)&pbVar1->init),
                            pbVar1->flags);
          sVar6 = (size_t)iVar2;
          BIO_copy_next_retry(param_1);
          if (iVar2 < 1) goto LAB_00614c3b;
          pbVar1->retry_reason = pbVar1->retry_reason + iVar2;
          pbVar1->flags = pbVar1->flags - iVar2;
        }
        pbVar1->flags = 0;
        pbVar1->retry_reason = 0;
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00614e05;
        bp = *(BIO **)&param_1->references;
      }
      param_2 = 0xb;
      goto LAB_00614c8b;
    }
LAB_00614c38:
    sVar6 = 0;
    break;
  case 0xc:
    lVar5 = BIO_int_ctrl(param_4,0x75,(long)*(int *)&pbVar1->method,0);
    if (lVar5 == 0) goto LAB_00614c38;
    lVar5 = BIO_int_ctrl(param_4,0x75,(long)*(int *)((long)&pbVar1->method + 4),1);
    sVar6 = (size_t)(lVar5 != 0);
    break;
  case 0xd:
    sVar6 = (size_t)pbVar1->flags;
    if (sVar6 == 0) {
      bp = *(BIO **)&param_1->references;
      if (bp != (BIO *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          param_2 = 0xd;
          goto LAB_00614c8b;
        }
        goto LAB_00614e05;
      }
      goto LAB_00614c38;
    }
    break;
  case 0x1d:
    buffer_read(param_1,&local_41,0);
    sVar6 = param_3;
    if ((long)*(int *)&pbVar1->cb_arg <= (long)param_3) {
      sVar6 = (long)*(int *)&pbVar1->cb_arg;
    }
    memcpy(param_4,pbVar1->callback + *(int *)((long)&pbVar1->cb_arg + 4),sVar6);
  }
LAB_00614c3b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar6;
  }
LAB_00614e05:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

