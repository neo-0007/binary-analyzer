
undefined8 ossl_pw_enable_passphrase_caching(long param_1)

{
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  return 1;
}

