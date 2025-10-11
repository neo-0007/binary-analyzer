
undefined4 aes_ocb_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = OSSL_PARAM_locate(param_2,"ivlen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x20));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x19f;
      goto LAB_00441ee9;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"keylen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x1a4;
      goto LAB_00441ee9;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"taglen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x368));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x1aa;
      goto LAB_00441ee9;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"iv");
  if (lVar2 != 0) {
    if (*(ulong *)(lVar2 + 0x18) < *(ulong *)(param_1 + 0x20)) {
      ERR_new();
      uVar3 = 0x1b2;
      goto LAB_00441ea1;
    }
    iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x74);
    if (iVar1 == 0) {
      iVar1 = OSSL_PARAM_set_octet_ptr(lVar2,param_1 + 0x74,*(undefined8 *)(param_1 + 0x20));
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x1b7;
        goto LAB_00441ee9;
      }
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"updated-iv");
  if (lVar2 != 0) {
    if (*(ulong *)(lVar2 + 0x18) < *(ulong *)(param_1 + 0x20)) {
      ERR_new();
      uVar3 = 0x1be;
LAB_00441ea1:
      ERR_set_debug("../providers/implementations/ciphers/cipher_aes_ocb.c",uVar3,
                    "aes_ocb_get_ctx_params");
      ERR_set_error(0x39,0x6d,0);
      return 0;
    }
    iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x94);
    if (iVar1 == 0) {
      iVar1 = OSSL_PARAM_set_octet_ptr(lVar2,param_1 + 0x94,*(undefined8 *)(param_1 + 0x20));
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x1c3;
LAB_00441ee9:
        ERR_set_debug("../providers/implementations/ciphers/cipher_aes_ocb.c",uVar3,
                      "aes_ocb_get_ctx_params");
        ERR_set_error(0x39,0x68,0);
        return 0;
      }
    }
  }
  uVar4 = 1;
  lVar2 = OSSL_PARAM_locate(param_2,"tag");
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) == 5) {
      if (((*(byte *)(param_1 + 0x3c) & 2) == 0) ||
         (*(size_t *)(lVar2 + 0x18) != *(size_t *)(param_1 + 0x368))) {
        ERR_new();
        uVar4 = 0;
        ERR_set_debug("../providers/implementations/ciphers/cipher_aes_ocb.c",0x1ce,
                      "aes_ocb_get_ctx_params");
        ERR_set_error(0x39,0x76,0);
      }
      else {
        memcpy(*(void **)(lVar2 + 0x10),(void *)(param_1 + 0x380),*(size_t *)(param_1 + 0x368));
      }
    }
    else {
      ERR_new();
      uVar4 = 0;
      ERR_set_debug("../providers/implementations/ciphers/cipher_aes_ocb.c",0x1ca,
                    "aes_ocb_get_ctx_params");
      ERR_set_error(0x39,0x67,0);
    }
  }
  return uVar4;
}

