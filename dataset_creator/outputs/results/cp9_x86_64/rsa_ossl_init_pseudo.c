
undefined8 rsa_ossl_init(long param_1)

{
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 6;
  return 1;
}

