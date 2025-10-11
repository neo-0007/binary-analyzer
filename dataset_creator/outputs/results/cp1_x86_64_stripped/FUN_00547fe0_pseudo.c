
undefined8 FUN_00547fe0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = FUN_00547df0(param_1,param_2,4,4,1,0);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x30) = param_3;
    return 1;
  }
  return 0;
}

