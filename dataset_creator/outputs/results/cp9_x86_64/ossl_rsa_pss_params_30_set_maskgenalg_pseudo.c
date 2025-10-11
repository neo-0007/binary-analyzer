
undefined8 ossl_rsa_pss_params_30_set_maskgenalg(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = param_2;
    return 1;
  }
  return 0;
}

