
void ossl_rand_pool_keep_random_devices_open(int param_1)

{
  if (param_1 != 0) {
    keep_random_devices_open = param_1;
    return;
  }
  ossl_rand_pool_cleanup();
  keep_random_devices_open = param_1;
  return;
}

