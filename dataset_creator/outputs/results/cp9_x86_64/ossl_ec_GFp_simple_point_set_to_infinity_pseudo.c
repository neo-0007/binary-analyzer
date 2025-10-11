
undefined8 ossl_ec_GFp_simple_point_set_to_infinity(undefined8 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x28) = 0;
  BN_zero_ex(*(undefined8 *)(param_2 + 0x20));
  return 1;
}

