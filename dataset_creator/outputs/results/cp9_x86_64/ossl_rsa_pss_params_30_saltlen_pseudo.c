
undefined4 ossl_rsa_pss_params_30_saltlen(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0xc);
  }
  return 0x14;
}

