
int ossl_pw_get_passphrase
              (void *param_1,ulong param_2,ulong *param_3,undefined8 param_4,int param_5,
              int *param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  char *pcVar6;
  UI *ui;
  UI_METHOD *meth;
  char *result_buf;
  undefined8 uVar7;
  UI_METHOD *local_58;
  char *local_50;
  
  if (*param_6 == 1) {
    pvVar5 = *(void **)(param_6 + 2);
    if (pvVar5 != (void *)0x0) {
      uVar4 = *(ulong *)(param_6 + 4);
      goto LAB_0053bb11;
    }
LAB_0053bbdd:
    pcVar6 = (char *)OSSL_PARAM_locate_const(param_4,"info");
    if (pcVar6 == (char *)0x0) {
LAB_0053bbfe:
      if (*param_6 == 2) {
        meth = (UI_METHOD *)UI_UTIL_wrap_read_pem_callback(*(undefined8 *)(param_6 + 2),param_5);
        local_50 = *(char **)(param_6 + 4);
        local_58 = meth;
        if (meth == (UI_METHOD *)0x0) {
          ERR_new();
          uVar7 = 0x110;
          goto LAB_0053beb6;
        }
LAB_0053bc9f:
        if ((param_2 == 0 || param_3 == (ulong *)0x0) || (param_1 == (void *)0x0)) {
          ERR_new();
          ERR_set_debug("../crypto/passphrase.c",0x80,"do_ui_passphrase");
          uVar7 = 0xc0102;
LAB_0053be54:
          ERR_set_error(0xf,uVar7,0);
          UI_destroy_method(local_58);
          return 0;
        }
        ui = UI_new();
        if (ui == (UI *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/passphrase.c",0x85,"do_ui_passphrase");
          uVar7 = 0xc0100;
          goto LAB_0053be54;
        }
        UI_set_method(ui,meth);
        if (local_50 != (char *)0x0) {
          UI_add_user_data(ui,local_50);
        }
        pcVar6 = UI_construct_prompt(ui,"pass phrase",pcVar6);
        lVar1 = param_2 + 1;
        if (pcVar6 == (char *)0x0) {
          result_buf = (char *)0x0;
          iVar2 = 0;
          ERR_new();
          ERR_set_debug("../crypto/passphrase.c",0x92,"do_ui_passphrase");
          ERR_set_error(0xf,0xc0100,0);
          local_50 = (char *)0x0;
        }
        else {
          local_50 = (char *)CRYPTO_zalloc(lVar1,"../crypto/passphrase.c",0x97);
          if (local_50 == (char *)0x0) {
            ERR_new();
            result_buf = (char *)0x0;
            iVar2 = 0;
            ERR_set_debug("../crypto/passphrase.c",0x99,"do_ui_passphrase");
            ERR_set_error(0xf,0xc0100,0);
          }
          else {
            iVar2 = UI_add_input_string(ui,pcVar6,2,local_50,0,(int)param_2);
            if (iVar2 + -1 < 0) {
              ERR_new();
              iVar2 = 0;
              result_buf = (char *)0x0;
              ERR_set_debug("../crypto/passphrase.c",0xa1,"do_ui_passphrase");
              ERR_set_error(0xf,0x80028,0);
            }
            else if (param_5 == 0) {
              result_buf = (char *)0x0;
LAB_0053bd7f:
              iVar3 = UI_process(ui);
              if (iVar3 == -2) {
                ERR_new();
                iVar2 = 0;
                ERR_set_debug("../crypto/passphrase.c",0xb8,"do_ui_passphrase");
                ERR_set_error(0xf,0x80109,0);
              }
              else {
                if (iVar3 == -1) {
                  ERR_new();
                  uVar7 = 0xbb;
                }
                else {
                  iVar3 = UI_get_result_length(ui,iVar2 + -1);
                  if (-1 < iVar3) {
                    iVar2 = 1;
                    *param_3 = (long)iVar3;
                    memcpy(param_1,local_50,(long)iVar3);
                    goto LAB_0053bdd0;
                  }
                  ERR_new();
                  uVar7 = 0xc0;
                }
LAB_0053bf40:
                iVar2 = 0;
                ERR_set_debug("../crypto/passphrase.c",uVar7,"do_ui_passphrase");
                ERR_set_error(0xf,0x80028,0);
              }
            }
            else {
              result_buf = (char *)CRYPTO_zalloc(lVar1,"../crypto/passphrase.c",0xa7);
              if (result_buf != (char *)0x0) {
                iVar3 = UI_add_verify_string(ui,pcVar6,2,result_buf,0,(int)param_2,local_50);
                if (0 < iVar3) goto LAB_0053bd7f;
                ERR_new();
                uVar7 = 0xb1;
                goto LAB_0053bf40;
              }
              ERR_new();
              iVar2 = 0;
              ERR_set_debug("../crypto/passphrase.c",0xa9,"do_ui_passphrase");
              ERR_set_error(0xf,0xc0100,0);
            }
          }
        }
LAB_0053bdd0:
        CRYPTO_clear_free(result_buf,lVar1,"../crypto/passphrase.c",0xca);
        CRYPTO_clear_free(local_50,lVar1,"../crypto/passphrase.c",0xcb);
        CRYPTO_free(pcVar6);
        UI_free(ui);
        UI_destroy_method(local_58);
        goto LAB_0053bb5c;
      }
      if (*param_6 == 4) {
        local_50 = *(char **)(param_6 + 4);
        meth = *(UI_METHOD **)(param_6 + 2);
        local_58 = (UI_METHOD *)0x0;
        if (meth != (UI_METHOD *)0x0) goto LAB_0053bc9f;
      }
      ERR_new();
      ERR_set_debug("../crypto/passphrase.c",0x119,"ossl_pw_get_passphrase");
      pcVar6 = "No password method specified";
    }
    else {
      if (*(int *)(pcVar6 + 8) == 4) {
        pcVar6 = *(char **)(pcVar6 + 0x10);
        goto LAB_0053bbfe;
      }
      ERR_new();
      ERR_set_debug("../crypto/passphrase.c",0x100,"ossl_pw_get_passphrase");
      pcVar6 = "Prompt info data type incorrect";
    }
    iVar2 = 0;
    ERR_set_error(0xf,0x80106,pcVar6);
  }
  else {
    if (((*(byte *)(param_6 + 6) & 1) != 0) &&
       (pvVar5 = *(void **)(param_6 + 8), pvVar5 != (void *)0x0)) {
      uVar4 = *(ulong *)(param_6 + 10);
LAB_0053bb11:
      if (uVar4 < param_2) {
        param_2 = uVar4;
      }
      memcpy(param_1,pvVar5,param_2);
      *param_3 = param_2;
      return 1;
    }
    if (*param_6 != 3) goto LAB_0053bbdd;
    iVar2 = (**(code **)(param_6 + 2))(param_1,param_2,param_3,param_4,*(undefined8 *)(param_6 + 4))
    ;
LAB_0053bb5c:
    if (iVar2 == 0) {
      return 0;
    }
    if ((*(byte *)(param_6 + 6) & 1) == 0) {
      return iVar2;
    }
    pvVar5 = *(void **)(param_6 + 8);
    uVar4 = *param_3;
    if ((pvVar5 == (void *)0x0) || (*(ulong *)(param_6 + 10) < uVar4)) {
      pvVar5 = (void *)CRYPTO_clear_realloc
                                 (pvVar5,*(ulong *)(param_6 + 10),uVar4 + 1,"../crypto/passphrase.c"
                                  ,0x128);
      if (pvVar5 == (void *)0x0) {
        OPENSSL_cleanse(param_1,*param_3);
        ERR_new();
        uVar7 = 0x12e;
LAB_0053beb6:
        ERR_set_debug("../crypto/passphrase.c",uVar7,"ossl_pw_get_passphrase");
        ERR_set_error(0xf,0xc0100,0);
        return 0;
      }
      *(void **)(param_6 + 8) = pvVar5;
      uVar4 = *param_3;
    }
    memcpy(pvVar5,param_1,uVar4);
    *(undefined1 *)(*(long *)(param_6 + 8) + *param_3) = 0;
    *(ulong *)(param_6 + 10) = *param_3;
  }
  return iVar2;
}

