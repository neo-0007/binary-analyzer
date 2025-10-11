
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0041cf60(long param_1,undefined4 *param_2)

{
  double dVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((param_2 == (undefined4 *)0x0) || (param_1 == 0)) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 1) {
    if (*(long *)(param_1 + 0x18) == 4) {
      uVar4 = 1;
      *param_2 = **(undefined4 **)(param_1 + 0x10);
    }
    else {
      if (*(long *)(param_1 + 0x18) != 8) {
LAB_0041cfa4:
        uVar4 = FUN_0041cc50(param_1,param_2,4);
        return uVar4;
      }
      uVar4 = 0;
      if (**(long **)(param_1 + 0x10) + 0x80000000U >> 0x20 == 0) {
        *param_2 = (int)**(long **)(param_1 + 0x10);
        uVar4 = 1;
      }
    }
  }
  else {
    if (iVar2 == 2) {
      if (*(long *)(param_1 + 0x18) == 4) {
        uVar3 = (ulong)**(uint **)(param_1 + 0x10);
        if ((int)**(uint **)(param_1 + 0x10) < 0) {
          return 0;
        }
      }
      else {
        if (*(long *)(param_1 + 0x18) != 8) goto LAB_0041cfa4;
        uVar3 = **(ulong **)(param_1 + 0x10);
        if (0x7fffffff < uVar3) {
          return 0;
        }
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
      if (dVar1 < _DAT_007cf6c0) {
        return 0;
      }
      if (DAT_007cf6c8 < dVar1) {
        return 0;
      }
      uVar3 = (ulong)(uint)(int)dVar1;
      if (dVar1 != (double)(int)dVar1) {
        return 0;
      }
    }
    *param_2 = (int)uVar3;
    uVar4 = 1;
  }
  return uVar4;
}

