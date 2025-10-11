
undefined8
ossl_method_construct_precondition
          (undefined8 param_1,int param_2,int param_3,long param_4,uint *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_5 == (uint *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/core_fetch.c",0x27,"ossl_method_construct_precondition");
    ERR_set_error(0xf,0xc0102,0);
    return 0;
  }
  *param_5 = 0;
  if ((param_3 == 0) || (*(int *)(param_4 + 0x14) != 0)) {
    uVar2 = ossl_provider_test_operation_bit(param_1,(long)param_2,param_5);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar1 = (uint)(*param_5 == 0);
  }
  else {
    uVar1 = 1;
  }
  *param_5 = uVar1;
  return 1;
}

