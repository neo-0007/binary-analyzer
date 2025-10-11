
undefined8 FUN_00475130(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_0043b840();
  if ((iVar2 != 0) && (param_2 == 8)) {
    uVar1 = *param_1;
    iVar2 = FUN_0042c5e0(uVar1,0xf000);
    if (iVar2 == 0) {
      *param_1 = 0;
      return uVar1;
    }
  }
  return 0;
}

