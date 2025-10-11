
undefined8 dsa_init(long param_1)

{
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 1;
  ossl_ffc_params_init(param_1 + 8);
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
  return 1;
}

