
undefined8
CRYPTO_alloc_ex_data(undefined4 param_1,undefined8 param_2,CRYPTO_EX_DATA *param_3,int param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = CRYPTO_get_ex_data(param_3,param_4);
  if (pvVar1 != (void *)0x0) {
    return 1;
  }
  uVar2 = ossl_crypto_alloc_ex_data_intern(param_1,param_2,param_3,param_4);
  return uVar2;
}

