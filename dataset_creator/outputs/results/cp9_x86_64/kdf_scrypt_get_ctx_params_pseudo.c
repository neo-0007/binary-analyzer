
undefined8 kdf_scrypt_get_ctx_params(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = OSSL_PARAM_locate(param_2,"size");
  if (lVar1 != 0) {
    uVar2 = OSSL_PARAM_set_size_t(lVar1,0xffffffffffffffff);
    return uVar2;
  }
  return 0xfffffffe;
}

