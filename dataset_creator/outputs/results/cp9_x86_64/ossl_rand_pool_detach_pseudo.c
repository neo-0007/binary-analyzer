
undefined8 ossl_rand_pool_detach(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  param_1[6] = 0;
  *param_1 = 0;
  return uVar1;
}

