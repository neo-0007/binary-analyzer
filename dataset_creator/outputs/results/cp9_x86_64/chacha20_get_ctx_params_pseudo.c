
undefined4 chacha20_get_ctx_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,"ivlen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0x10);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x51;
      goto LAB_00447a31;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"keylen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0x20);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x56;
LAB_00447a31:
      ERR_set_debug("../providers/implementations/ciphers/cipher_chacha20.c",uVar3,
                    "chacha20_get_ctx_params");
      ERR_set_error(0x39,0x68,0);
      return 0;
    }
  }
  return 1;
}

