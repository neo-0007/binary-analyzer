
void dsa_cmp_parameters(long param_1,long param_2)

{
  ossl_ffc_params_cmp(*(long *)(param_1 + 0x20) + 8,*(long *)(param_2 + 0x20) + 8,1);
  return;
}

