
undefined4 null_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,"ivlen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x82;
      goto LAB_00449de9;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"keylen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x87;
      goto LAB_00449de9;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"tls-mac");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_octet_ptr
                      (lVar2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x8d;
LAB_00449de9:
      ERR_set_debug("../providers/implementations/ciphers/cipher_null.c",uVar3,"null_get_ctx_params"
                   );
      ERR_set_error(0x39,0x68,0);
      return 0;
    }
  }
  return 1;
}

