
void ossl_rand_pool_reattach(undefined8 *param_1,void *param_2)

{
  *param_1 = param_2;
  OPENSSL_cleanse(param_2,param_1[1]);
  param_1[1] = 0;
  return;
}

