
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 OSSL_PARAM_get_uint32(long param_1,int *param_2)

{
  double dVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((param_2 == (int *)0x0) || (param_1 == 0)) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 2) {
    if (*(long *)(param_1 + 0x18) == 4) {
      *param_2 = **(int **)(param_1 + 0x10);
      return 1;
    }
    if (*(long *)(param_1 + 0x18) != 8) {
LAB_0041bc94:
      uVar4 = general_get_uint(param_1,param_2,4);
      return uVar4;
    }
    uVar2 = **(ulong **)(param_1 + 0x10);
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 != 3) {
        return 0;
      }
      if (*(long *)(param_1 + 0x18) != 8) {
        return 0;
      }
      dVar1 = **(double **)(param_1 + 0x10);
      if (dVar1 < _default_rwlockattr) {
        return 0;
      }
      if (DAT_007c57b8 < dVar1) {
        return 0;
      }
      iVar3 = (int)(long)dVar1;
      if (dVar1 != (double)((long)dVar1 & 0xffffffff)) {
        return 0;
      }
      goto LAB_0041bd07;
    }
    if (*(long *)(param_1 + 0x18) == 4) {
      iVar3 = **(int **)(param_1 + 0x10);
      if (iVar3 < 0) {
        return 0;
      }
      goto LAB_0041bd07;
    }
    if (*(long *)(param_1 + 0x18) != 8) goto LAB_0041bc94;
    uVar2 = **(ulong **)(param_1 + 0x10);
  }
  iVar3 = (int)uVar2;
  if (uVar2 >> 0x20 != 0) {
    return 0;
  }
LAB_0041bd07:
  *param_2 = iVar3;
  return 1;
}

