
undefined8 FUN_00417f00(undefined8 param_1,int param_2,int param_3,long param_4,uint *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_5 == (uint *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/core_fetch.c",0x27,"ossl_method_construct_precondition");
    FUN_0051f8f0(0xf,0xc0102,0);
    return 0;
  }
  *param_5 = 0;
  if ((param_3 == 0) || (*(int *)(param_4 + 0x14) != 0)) {
    uVar2 = FUN_00421cd0(param_1,(long)param_2,param_5);
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

