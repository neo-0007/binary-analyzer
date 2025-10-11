
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 OSSL_PARAM_get_double(long param_1,double *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((param_2 != (double *)0x0) && (param_1 != 0)) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 3) {
      uVar4 = 0;
      if (*(long *)(param_1 + 0x18) == 8) {
        uVar4 = 1;
        *param_2 = **(double **)(param_1 + 0x10);
      }
    }
    else if (iVar1 == 2) {
      if (*(long *)(param_1 + 0x18) == 4) {
        uVar4 = 1;
        *param_2 = (double)**(uint **)(param_1 + 0x10);
      }
      else {
        if (*(long *)(param_1 + 0x18) != 8) {
          return 0;
        }
        uVar4 = 0;
        if (**(ulong **)(param_1 + 0x10) >> 0x35 == 0) {
          uVar4 = 1;
          *param_2 = (double)(long)**(ulong **)(param_1 + 0x10);
        }
      }
    }
    else {
      uVar4 = 0;
      if (iVar1 == 1) {
        if (*(long *)(param_1 + 0x18) == 4) {
          uVar4 = 1;
          *param_2 = (double)**(int **)(param_1 + 0x10);
        }
        else if (*(long *)(param_1 + 0x18) == 8) {
          uVar2 = **(ulong **)(param_1 + 0x10);
          uVar3 = -uVar2;
          if (0 < (long)uVar2) {
            uVar3 = uVar2;
          }
          if (uVar3 >> 0x35 == 0) {
            uVar4 = 1;
            *param_2 = (double)(long)uVar2 + _default_rwlockattr;
          }
        }
      }
    }
    return uVar4;
  }
  return 0;
}

