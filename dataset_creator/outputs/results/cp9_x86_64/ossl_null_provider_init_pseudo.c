
undefined8
ossl_null_provider_init
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_3 = null_dispatch_table;
  *param_4 = param_1;
  return 1;
}

