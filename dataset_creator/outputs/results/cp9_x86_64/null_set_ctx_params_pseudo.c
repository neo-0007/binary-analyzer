
undefined4 null_set_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = OSSL_PARAM_locate_const(param_2,"tls-mac-size");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_get_size_t(lVar2,param_1 + 8);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/cipher_null.c",0xa9,"null_set_ctx_params")
      ;
      ERR_set_error(0x39,0x67,0);
      return 0;
    }
  }
  return 1;
}

