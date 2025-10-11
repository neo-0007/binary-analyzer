
undefined4 ossl_rsa_pss_params_30_maskgenalg(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0x38f;
}

