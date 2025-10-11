
undefined8 FUN_005aa2c0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_004239c0(param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_005aa230(param_1,lVar1,param_3,param_4);
    return uVar2;
  }
  return 0xffffffff;
}

