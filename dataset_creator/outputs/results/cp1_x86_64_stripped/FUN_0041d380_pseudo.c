
undefined8 FUN_0041d380(long param_1,uint param_2)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  uint local_c [3];
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (iVar1 == 2) {
      puVar2 = *(ulong **)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x20) = 4;
      if (puVar2 == (ulong *)0x0) {
        return 1;
      }
      if (*(long *)(param_1 + 0x18) == 4) {
        *(uint *)puVar2 = param_2;
        return 1;
      }
      if (*(long *)(param_1 + 0x18) == 8) {
        *(undefined8 *)(param_1 + 0x20) = 8;
        *puVar2 = (ulong)param_2;
        return 1;
      }
LAB_0041d3ed:
      local_c[0] = param_2;
      uVar3 = FUN_0041cb10(param_1,local_c,4);
      return uVar3;
    }
    if (iVar1 == 1) {
      puVar2 = *(ulong **)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x20) = 4;
      if (puVar2 == (ulong *)0x0) {
        return 1;
      }
      if (*(long *)(param_1 + 0x18) != 4) {
        if (*(long *)(param_1 + 0x18) == 8) {
          *(undefined8 *)(param_1 + 0x20) = 8;
          *puVar2 = (ulong)param_2;
          return 1;
        }
        goto LAB_0041d3ed;
      }
      if (-1 < (int)param_2) {
        *(uint *)puVar2 = param_2;
        return 1;
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

