
uint FUN_0059eab0(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return (uint)(param_1 != 0);
  }
  if (param_1 == 0) {
LAB_0059eb88:
    uVar2 = 0xffffffff;
  }
  else {
    if ((((*(long *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 8) == 0)) ||
        (iVar1 = FUN_005ad530(param_1,0), -1 < iVar1)) &&
       (((*(long *)(param_2 + 0x18) != 0 && (*(int *)(param_2 + 8) == 0)) ||
        (iVar1 = FUN_005ad530(param_2,0), -1 < iVar1)))) {
      iVar1 = *(int *)(param_1 + 0x20) - *(int *)(param_2 + 0x20);
      if (*(int *)(param_1 + 0x20) == 0 && iVar1 == 0) {
        return 0;
      }
      if ((*(long *)(param_1 + 0x18) != 0) && (*(long *)(param_2 + 0x18) != 0)) {
        if (iVar1 == 0) {
          iVar1 = thunk_FUN_00713570();
        }
        if (-1 < iVar1) {
          return (uint)(0 < iVar1);
        }
        goto LAB_0059eb88;
      }
    }
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}

