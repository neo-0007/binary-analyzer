
undefined8 FUN_00409880(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    iVar2 = FUN_005379a0(uVar1);
    if (iVar2 != 0) {
      return uVar1;
    }
  }
  return 0;
}

