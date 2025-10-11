
undefined8 ossl_pkcs7_ctx_get0_propq(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}

