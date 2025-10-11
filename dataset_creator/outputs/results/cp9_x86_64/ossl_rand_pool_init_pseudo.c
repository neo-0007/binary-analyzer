
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ossl_rand_pool_init(void)

{
  random_devices = 0xffffffff;
  DAT_00933f48 = 0xffffffff;
  _DAT_00933f70 = 0xffffffff;
  _DAT_00933f98 = 0xffffffff;
  return 1;
}

