
long FUN_007097f0(uint param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  if (param_1 < 0x20) {
    plVar1 = (long *)((ulong)(param_1 + 0x31) * 0x10 + *(long *)(in_FS_OFFSET + 0x10));
  }
  else {
    if (0x3ff < param_1) {
      return 0;
    }
    lVar2 = *(long *)(in_FS_OFFSET + (ulong)(param_1 >> 5) * 8 + 0x510);
    if (lVar2 == 0) {
      return 0;
    }
    plVar1 = (long *)(lVar2 + (ulong)(param_1 & 0x1f) * 0x10);
  }
  lVar2 = plVar1[1];
  if ((lVar2 != 0) && ((&DAT_00946980)[(ulong)param_1 * 2] != *plVar1)) {
    plVar1[1] = 0;
    lVar2 = 0;
  }
  return lVar2;
}

