
undefined8 camellia_cbc_cts_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = OSSL_PARAM_locate(param_2,"cts_mode");
  if (lVar2 != 0) {
    lVar3 = ossl_cipher_cbc_cts_mode_id2name(*(undefined4 *)(param_1 + 0x38));
    if (lVar3 != 0) {
      iVar1 = OSSL_PARAM_set_utf8_string(lVar2,lVar3);
      if (iVar1 != 0) goto LAB_00446ac3;
    }
    ERR_new();
    ERR_set_debug("../providers/implementations/ciphers/cipher_camellia_cts.inc",0x38,
                  "camellia_cbc_cts_get_ctx_params");
    ERR_set_error(0x39,0x68,0);
    return 0;
  }
LAB_00446ac3:
  uVar4 = ossl_cipher_generic_get_ctx_params(param_1,param_2);
  return uVar4;
}

