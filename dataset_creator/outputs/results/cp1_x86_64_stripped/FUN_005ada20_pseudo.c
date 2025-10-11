
undefined8 FUN_005ada20(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_005ad530(param_1,0);
  uVar2 = 0;
  if (0 < iVar1) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 8);
    }
    uVar2 = 1;
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = **(undefined8 **)(param_1 + 0x10);
    }
  }
  return uVar2;
}

