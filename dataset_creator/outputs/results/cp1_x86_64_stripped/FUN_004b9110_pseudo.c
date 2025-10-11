
undefined8 FUN_004b9110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_004bbf30();
  if ((int)uVar2 != 0) {
    iVar1 = FUN_004b7840(param_1,param_3);
    uVar2 = 1;
    if (-1 < iVar1) {
      uVar2 = FUN_004b18d0(param_1,param_1,param_3);
      return uVar2;
    }
  }
  return uVar2;
}

