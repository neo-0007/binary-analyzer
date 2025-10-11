
undefined8 dh_init(long param_1)

{
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 1;
  ossl_ffc_params_init(param_1 + 8);
  *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
  return 1;
}

