
undefined8 ossl_provider_set_fallback(byte *param_1)

{
  if (param_1 != (byte *)0x0) {
    *param_1 = *param_1 | 4;
    return 1;
  }
  return 0;
}

