
undefined8 FUN_00548260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_00547df0(param_2,param_3,8,8,3,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x30) = param_1;
    return 1;
  }
  return 0;
}

