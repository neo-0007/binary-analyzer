
undefined8 OSSL_PARAM_set_uint64(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong local_10 [2];
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (iVar1 == 2) {
      puVar3 = *(ulong **)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x20) = 8;
      if (puVar3 == (ulong *)0x0) {
        return 1;
      }
      if (*(long *)(param_1 + 0x18) != 4) {
        if (*(long *)(param_1 + 0x18) == 8) {
          *puVar3 = param_2;
          return 1;
        }
LAB_0041c43d:
        local_10[0] = param_2;
        uVar2 = general_set_uint(param_1,local_10,8);
        return uVar2;
      }
      if (param_2 >> 0x20 == 0) {
LAB_0041c51a:
        *(undefined8 *)(param_1 + 0x20) = 4;
        *(int *)puVar3 = (int)param_2;
        return 1;
      }
    }
    else if (iVar1 == 1) {
      puVar3 = *(ulong **)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x20) = 8;
      if (puVar3 == (ulong *)0x0) {
        return 1;
      }
      if (*(long *)(param_1 + 0x18) == 4) {
        if (param_2 < 0x80000000) goto LAB_0041c51a;
      }
      else {
        if (*(long *)(param_1 + 0x18) != 8) goto LAB_0041c43d;
        if (-1 < (long)param_2) {
          *puVar3 = param_2;
          return 1;
        }
      }
    }
    else if (((iVar1 == 3) && (*(undefined8 *)(param_1 + 0x20) = 8, *(long *)(param_1 + 0x18) == 8))
            && (param_2 >> 0x35 == 0)) {
      **(double **)(param_1 + 0x10) = (double)(long)param_2;
      return 1;
    }
  }
  return 0;
}

