
undefined8 ossl_pkey_todata_cb(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = OSSL_PARAM_dup();
  *param_2 = uVar1;
  return 1;
}

