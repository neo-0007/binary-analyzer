
undefined8 camellia_cbc_cts_set_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate_const(param_2,"cts_mode");
  if (lVar2 == 0) {
LAB_0044766a:
    uVar3 = ossl_cipher_generic_set_ctx_params(param_1,param_2);
    return uVar3;
  }
  if (*(int *)(lVar2 + 8) == 4) {
    iVar1 = ossl_cipher_cbc_cts_mode_name2id(*(undefined8 *)(lVar2 + 0x10));
    if (-1 < iVar1) {
      *(int *)(param_1 + 0x38) = iVar1;
      goto LAB_0044766a;
    }
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/ciphers/cipher_camellia_cts.inc",0x55,
                "camellia_cbc_cts_set_ctx_params");
  ERR_set_error(0x39,0x68,0);
  return 0;
}

