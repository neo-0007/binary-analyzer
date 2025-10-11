
undefined8 FUN_004b89b0(long *param_1,uint param_2)

{
  ulong *puVar1;
  int iVar2;
  
  if ((-1 < (int)param_2) && (iVar2 = (int)param_2 >> 6, iVar2 < (int)param_1[1])) {
    if ((param_2 & 0x3f) == 0) {
      *(int *)(param_1 + 1) = iVar2;
      FUN_004b8490();
      return 1;
    }
    *(int *)(param_1 + 1) = iVar2 + 1;
    puVar1 = (ulong *)(*param_1 + (long)iVar2 * 8);
    *puVar1 = *puVar1 & ~(-1L << (sbyte)(param_2 & 0x3f));
    FUN_004b8490();
    return 1;
  }
  return 0;
}

