
undefined8 FUN_00420b10(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_0041ffb0(param_1,1,param_2);
  if (-1 < iVar1) {
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = FUN_0041fe90(param_1);
    return uVar2;
  }
  return 0;
}

