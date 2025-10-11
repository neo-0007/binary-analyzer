
undefined8 FUN_005481a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_00547df0(param_1,param_2,8,8,2,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x30) = param_3;
    return 1;
  }
  return 0;
}

