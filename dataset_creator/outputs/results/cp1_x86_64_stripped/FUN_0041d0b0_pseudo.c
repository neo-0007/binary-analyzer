
undefined8 FUN_0041d0b0(long param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int local_c [3];
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (iVar1 == 1) {
      plVar2 = *(long **)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x20) = 4;
      if (plVar2 == (long *)0x0) {
        return 1;
      }
      if (*(long *)(param_1 + 0x18) == 4) {
        *(int *)plVar2 = param_2;
        return 1;
      }
      if (*(long *)(param_1 + 0x18) == 8) {
        *(undefined8 *)(param_1 + 0x20) = 8;
        *plVar2 = (long)param_2;
        return 1;
      }
LAB_0041d11d:
      local_c[0] = param_2;
      uVar3 = FUN_0041ccc0(param_1,local_c,4);
      return uVar3;
    }
    if (iVar1 == 2) {
      if (-1 < param_2) {
        plVar2 = *(long **)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x20) = 4;
        if (plVar2 == (long *)0x0) {
          return 1;
        }
        if (*(long *)(param_1 + 0x18) == 4) {
          *(int *)plVar2 = param_2;
          return 1;
        }
        if (*(long *)(param_1 + 0x18) == 8) {
          *(undefined8 *)(param_1 + 0x20) = 8;
          *plVar2 = (long)param_2;
          return 1;
        }
        goto LAB_0041d11d;
      }
    }
    else if (iVar1 == 3) {
      *(undefined8 *)(param_1 + 0x20) = 8;
      if (*(double **)(param_1 + 0x10) == (double *)0x0) {
        return 1;
      }
      if (*(long *)(param_1 + 0x18) == 8) {
        **(double **)(param_1 + 0x10) = (double)param_2;
        return 1;
      }
    }
  }
  return 0;
}

