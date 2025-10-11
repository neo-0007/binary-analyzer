
bool ossl_gcm_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = OSSL_PARAM_locate(param_2,"ivlen");
  if ((lVar2 == 0) ||
     (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) {
    lVar2 = OSSL_PARAM_locate(param_2,"keylen");
    if ((lVar2 != 0) &&
       (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 8)), iVar1 == 0)) {
      ERR_new();
      uVar4 = 0x94;
      goto LAB_00485ed9;
    }
    lVar2 = OSSL_PARAM_locate(param_2,"taglen");
    if (lVar2 != 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == -1) {
        lVar3 = 0x10;
      }
      iVar1 = OSSL_PARAM_set_size_t(lVar2,lVar3);
      if (iVar1 == 0) {
        ERR_new();
        uVar4 = 0x9d;
        goto LAB_00485ed9;
      }
    }
    lVar2 = OSSL_PARAM_locate(param_2,"iv");
    if (lVar2 != 0) {
      if (*(int *)(param_1 + 0x50) == 0) {
        return false;
      }
      if (*(ulong *)(lVar2 + 0x18) < *(ulong *)(param_1 + 0x10)) {
        ERR_new();
        uVar4 = 0xa7;
        goto LAB_00485f81;
      }
      iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x55);
      if ((iVar1 == 0) &&
         (iVar1 = OSSL_PARAM_set_octet_ptr(lVar2,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10)),
         iVar1 == 0)) {
        ERR_new();
        uVar4 = 0xac;
        goto LAB_00485ed9;
      }
    }
    lVar2 = OSSL_PARAM_locate(param_2,"updated-iv");
    if (lVar2 != 0) {
      if (*(int *)(param_1 + 0x50) == 0) {
        return false;
      }
      if (*(ulong *)(lVar2 + 0x18) < *(ulong *)(param_1 + 0x10)) {
        ERR_new();
        uVar4 = 0xb6;
LAB_00485f81:
        ERR_set_debug("../providers/implementations/ciphers/ciphercommon_gcm.c",uVar4,
                      "ossl_gcm_get_ctx_params");
        ERR_set_error(0x39,0x6d,0);
        return false;
      }
      iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x55);
      if ((iVar1 == 0) &&
         (iVar1 = OSSL_PARAM_set_octet_ptr(lVar2,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10)),
         iVar1 == 0)) {
        ERR_new();
        uVar4 = 0xbb;
        goto LAB_00485ed9;
      }
    }
    lVar2 = OSSL_PARAM_locate(param_2,"tlsaadpad");
    if ((lVar2 == 0) ||
       (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x20)), iVar1 != 0)) {
      lVar2 = OSSL_PARAM_locate(param_2,"tag");
      if (lVar2 != 0) {
        if (((0xf < *(long *)(lVar2 + 0x18) - 1U) || ((*(byte *)(param_1 + 0x54) & 1) == 0)) ||
           (*(long *)(param_1 + 0x18) == -1)) {
          ERR_new(lVar2);
          ERR_set_debug("../providers/implementations/ciphers/ciphercommon_gcm.c",0xcc,
                        "ossl_gcm_get_ctx_params");
          ERR_set_error(0x39,0x6e,0);
          return false;
        }
        iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0xd5);
        if (iVar1 == 0) {
          ERR_new();
          uVar4 = 0xd0;
          goto LAB_00485ed9;
        }
      }
      lVar2 = OSSL_PARAM_locate(param_2,"tlsivgen");
      if (lVar2 == 0) {
        return true;
      }
      if ((*(long *)(lVar2 + 0x10) != 0) && (*(int *)(lVar2 + 8) == 5)) {
        iVar1 = getivgen(param_1,*(long *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
        return iVar1 != 0;
      }
      return false;
    }
    ERR_new();
    uVar4 = 0xc2;
  }
  else {
    ERR_new();
    uVar4 = 0x8f;
  }
LAB_00485ed9:
  ERR_set_debug("../providers/implementations/ciphers/ciphercommon_gcm.c",uVar4,
                "ossl_gcm_get_ctx_params");
  ERR_set_error(0x39,0x68,0);
  return false;
}

