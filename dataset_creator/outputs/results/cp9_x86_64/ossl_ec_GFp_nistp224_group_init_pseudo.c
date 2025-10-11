
void ossl_ec_GFp_nistp224_group_init(long param_1)

{
  ossl_ec_GFp_simple_group_init();
  *(undefined4 *)(param_1 + 0x70) = 1;
  return;
}

