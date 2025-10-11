
undefined8 EVP_PKEY_todata(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = EVP_PKEY_export(param_1,param_2,ossl_pkey_todata_cb,param_3);
    return uVar1;
  }
  return 0;
}

