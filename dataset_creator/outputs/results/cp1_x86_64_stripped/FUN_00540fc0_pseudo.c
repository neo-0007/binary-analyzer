
undefined8 FUN_00540fc0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_004ed9e0(param_2);
  if ((int)uVar2 != 0) {
    iVar1 = FUN_0040f1c0(param_1,0x198,param_2);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_004ed620(param_2);
    uVar2 = 0;
  }
  return uVar2;
}

