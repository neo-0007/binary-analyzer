
undefined4 FUN_004bbb80(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  FUN_004b2c00(param_4);
  lVar2 = FUN_004b2df0(param_4);
  if (lVar2 != 0) {
    iVar1 = FUN_004b8360(lVar2,param_3);
    if (iVar1 != 0) {
      iVar1 = FUN_004b34a0(param_1,0,lVar2,param_2,param_4);
      if (iVar1 != 0) goto LAB_004bbbd7;
    }
  }
  param_3 = 0xffffffff;
LAB_004bbbd7:
  FUN_004b2d50(param_4);
  return param_3;
}

