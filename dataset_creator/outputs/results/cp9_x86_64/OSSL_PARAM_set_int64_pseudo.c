
undefined8 OSSL_PARAM_set_int64(long param_1,ulong param_2)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong local_10 [2];
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (iVar1 == 1) {
      puVar2 = *(ulong **)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x20) = 8;
      if (puVar2 == (ulong *)0x0) {
        return 1;
      }
      if (*(long *)(param_1 + 0x18) != 4) {
        if (*(long *)(param_1 + 0x18) == 8) {
          *puVar2 = param_2;
          return 1;
        }
LAB_0041c0dd:
        local_10[0] = param_2;
        uVar3 = general_set_int(param_1,local_10,8);
        return uVar3;
      }
      if (param_2 + 0x80000000 >> 0x20 == 0) {
        *(undefined8 *)(param_1 + 0x20) = 4;
        *(int *)puVar2 = (int)param_2;
        return 1;
      }
    }
    else if (iVar1 == 2) {
      if (-1 < (long)param_2) {
        puVar2 = *(ulong **)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x20) = 8;
        if (puVar2 == (ulong *)0x0) {
          return 1;
        }
        if (*(long *)(param_1 + 0x18) != 4) {
          if (*(long *)(param_1 + 0x18) == 8) {
            *puVar2 = param_2;
            return 1;
          }
          goto LAB_0041c0dd;
        }
        if ((long)param_2 < 0x100000000) {
          *(undefined8 *)(param_1 + 0x20) = 4;
          *(int *)puVar2 = (int)param_2;
          return 1;
        }
      }
    }
    else if (iVar1 == 3) {
      *(undefined8 *)(param_1 + 0x20) = 8;
      if (*(double **)(param_1 + 0x10) == (double *)0x0) {
        return 1;
      }
      if (*(long *)(param_1 + 0x18) == 8) {
        uVar4 = -param_2;
        if (0 < (long)param_2) {
          uVar4 = param_2;
        }
        if (uVar4 >> 0x35 == 0) {
          **(double **)(param_1 + 0x10) = (double)(long)param_2;
          return 1;
        }
      }
    }
  }
  return 0;
}

