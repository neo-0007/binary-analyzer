
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0041d520(long param_1,ulong *param_2)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if ((param_2 == (ulong *)0x0) || (param_1 == 0)) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 1) {
    if (*(long *)(param_1 + 0x18) == 4) {
      *param_2 = (long)**(int **)(param_1 + 0x10);
    }
    else {
      if (*(long *)(param_1 + 0x18) != 8) goto LAB_0041d564;
      *param_2 = **(ulong **)(param_1 + 0x10);
    }
  }
  else {
    if (iVar2 == 2) {
      if (*(long *)(param_1 + 0x18) == 4) {
        *param_2 = (ulong)**(uint **)(param_1 + 0x10);
        return 1;
      }
      if (*(long *)(param_1 + 0x18) != 8) {
LAB_0041d564:
        uVar3 = FUN_0041cc50(param_1,param_2,8);
        return uVar3;
      }
      uVar4 = **(ulong **)(param_1 + 0x10);
      if ((long)uVar4 < 0) {
        return 0;
      }
    }
    else {
      if (iVar2 != 3) {
        return 0;
      }
      if (*(long *)(param_1 + 0x18) != 8) {
        return 0;
      }
      dVar1 = **(double **)(param_1 + 0x10);
      if (dVar1 < _DAT_007cf6e0) {
        return 0;
      }
      if (DAT_007cf6e8 <= dVar1) {
        return 0;
      }
      uVar4 = (ulong)dVar1;
      if (dVar1 != (double)(long)uVar4) {
        return 0;
      }
    }
    *param_2 = uVar4;
  }
  return 1;
}

