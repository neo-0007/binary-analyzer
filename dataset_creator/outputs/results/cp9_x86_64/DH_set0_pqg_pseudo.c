
undefined8 DH_set0_pqg(long param_1,long param_2,undefined8 param_3,long param_4)

{
  if (param_2 == 0 && *(long *)(param_1 + 8) == 0) {
    return 0;
  }
  if (param_4 != 0 || *(long *)(param_1 + 0x18) != 0) {
    ossl_ffc_params_set0_pqg(param_1 + 8);
    ossl_dh_cache_named_group(param_1);
    *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
    return 1;
  }
  return 0;
}

