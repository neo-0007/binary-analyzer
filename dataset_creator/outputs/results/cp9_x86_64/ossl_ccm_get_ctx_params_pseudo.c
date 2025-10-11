
int ossl_ccm_get_ctx_params(byte *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,"ivlen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0xf - *(long *)(param_1 + 8));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x97;
      goto LAB_00485301;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"taglen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x10));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0xa0;
      goto LAB_00485301;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"iv");
  if (lVar2 == 0) {
LAB_00485173:
    lVar2 = OSSL_PARAM_locate(param_2,"updated-iv");
    if (lVar2 != 0) {
      if (*(ulong *)(lVar2 + 0x18) < 0xfU - *(long *)(param_1 + 8)) {
        ERR_new();
        uVar3 = 0xb5;
        goto LAB_00485281;
      }
      iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x30);
      if (iVar1 == 0) {
        iVar1 = OSSL_PARAM_set_octet_ptr(lVar2,param_1 + 0x30,*(undefined8 *)(lVar2 + 0x18));
        if (iVar1 == 0) {
          ERR_new();
          uVar3 = 0xba;
          goto LAB_00485301;
        }
      }
    }
    lVar2 = OSSL_PARAM_locate(param_2,"keylen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x18));
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0xc1;
        goto LAB_00485301;
      }
    }
    lVar2 = OSSL_PARAM_locate(param_2,"tlsaadpad");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x28));
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 199;
LAB_00485301:
        ERR_set_debug("../providers/implementations/ciphers/ciphercommon_ccm.c",uVar3,
                      "ossl_ccm_get_ctx_params");
        ERR_set_error(0x39,0x68,0);
        return 0;
      }
    }
    iVar1 = 1;
    lVar2 = OSSL_PARAM_locate(param_2,"tag");
    if (lVar2 != 0) {
      if ((*param_1 & 9) == 9) {
        if (*(int *)(lVar2 + 8) == 5) {
          iVar1 = (**(code **)(*(long *)(param_1 + 0x90) + 0x28))
                            (param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
          if (iVar1 != 0) {
            *param_1 = *param_1 & 0xe3;
            iVar1 = 1;
          }
        }
        else {
          ERR_new();
          iVar1 = 0;
          ERR_set_debug("../providers/implementations/ciphers/ciphercommon_ccm.c",0xd2,
                        "ossl_ccm_get_ctx_params");
          ERR_set_error(0x39,0x68,0);
        }
      }
      else {
        ERR_new();
        iVar1 = 0;
        ERR_set_debug("../providers/implementations/ciphers/ciphercommon_ccm.c",0xce,
                      "ossl_ccm_get_ctx_params");
        ERR_set_error(0x39,0x77,0);
      }
    }
  }
  else {
    if (0xfU - *(long *)(param_1 + 8) <= *(ulong *)(lVar2 + 0x18)) {
      iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x30);
      if (iVar1 == 0) {
        iVar1 = OSSL_PARAM_set_octet_ptr(lVar2,param_1 + 0x30,*(undefined8 *)(lVar2 + 0x18));
        if (iVar1 == 0) {
          ERR_new();
          uVar3 = 0xad;
          goto LAB_00485301;
        }
      }
      goto LAB_00485173;
    }
    ERR_new();
    uVar3 = 0xa8;
LAB_00485281:
    iVar1 = 0;
    ERR_set_debug("../providers/implementations/ciphers/ciphercommon_ccm.c",uVar3,
                  "ossl_ccm_get_ctx_params");
    ERR_set_error(0x39,0x6d,0);
  }
  return iVar1;
}

