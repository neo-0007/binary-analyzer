
void ossl_ffc_params_set0_j(long param_1,undefined8 param_2)

{
  BN_free(*(BIGNUM **)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}

