
undefined8 FUN_00435ec0(int *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((param_1 != (int *)0x0) && (-1 < param_2)) {
    iVar2 = *param_1;
    uVar4 = 0;
    if (param_2 < iVar2) {
      iVar3 = iVar2 + -1;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (long)param_2 * 8);
      uVar4 = *puVar1;
      if (param_2 != iVar3) {
        thunk_FUN_00713610(puVar1,*(long *)(param_1 + 2) + 8 + (long)param_2 * 8,
                           (long)((iVar2 - param_2) + -1) << 3);
        iVar3 = *param_1 + -1;
      }
      *param_1 = iVar3;
    }
    return uVar4;
  }
  return 0;
}

