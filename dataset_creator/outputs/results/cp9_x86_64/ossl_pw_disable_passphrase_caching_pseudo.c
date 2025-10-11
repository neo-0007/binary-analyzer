
undefined8 ossl_pw_disable_passphrase_caching(long param_1)

{
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  return 1;
}

