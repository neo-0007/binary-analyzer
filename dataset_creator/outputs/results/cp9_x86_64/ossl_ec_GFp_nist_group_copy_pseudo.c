
void ossl_ec_GFp_nist_group_copy(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  ossl_ec_GFp_simple_group_copy();
  return;
}

