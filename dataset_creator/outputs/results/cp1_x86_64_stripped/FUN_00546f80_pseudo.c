
undefined8 FUN_00546f80(long *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_1 != (long *)0x0) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) {
    iVar1 = FUN_00768ac0(*(undefined8 *)*param_1);
    FUN_007104f0(*param_1);
    if (iVar1 == -1) {
      return 0;
    }
    if (iVar1 == 0) {
      return 1;
    }
  }
  puVar2 = (undefined4 *)FUN_006d2700();
  *puVar2 = 0x16;
  return 0;
}

