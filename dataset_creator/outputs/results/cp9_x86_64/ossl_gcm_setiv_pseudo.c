
undefined8 ossl_gcm_setiv(long param_1)

{
  CRYPTO_gcm128_setiv(param_1 + 0xf8);
  return 1;
}

