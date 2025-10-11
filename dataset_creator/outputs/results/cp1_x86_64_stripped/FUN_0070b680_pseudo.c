
undefined8 FUN_0070b680(uint param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  
  if (param_1 < 0x20) {
    uVar3 = (&DAT_00946980)[(ulong)param_1 * 2] & 0xffffffff;
    if (((&DAT_00946980)[(ulong)param_1 * 2] & 1) == 0) {
      return 0x16;
    }
    puVar1 = (ulong *)((ulong)(param_1 + 0x31) * 0x10 + *(long *)(in_FS_OFFSET + 0x10));
    if (param_2 == 0) goto LAB_0070b6d8;
  }
  else {
    if (0x3ff < param_1) {
      return 0x16;
    }
    uVar3 = (&DAT_00946980)[(ulong)param_1 * 2] & 0xffffffff;
    if (((&DAT_00946980)[(ulong)param_1 * 2] & 1) == 0) {
      return 0x16;
    }
    lVar2 = *(long *)(in_FS_OFFSET + (ulong)(param_1 >> 5) * 8 + 0x510);
    if (lVar2 == 0) {
      if (param_2 == 0) {
        return 0;
      }
      lVar2 = FUN_00711600(0x20,0x10);
      if (lVar2 == 0) {
        return 0xc;
      }
      *(long *)(in_FS_OFFSET + (ulong)(param_1 >> 5) * 8 + 0x510) = lVar2;
    }
    puVar1 = (ulong *)(lVar2 + (ulong)(param_1 & 0x1f) * 0x10);
  }
  *(undefined1 *)(in_FS_OFFSET + 0x610) = 1;
LAB_0070b6d8:
  puVar1[1] = param_2;
  *puVar1 = uVar3;
  return 0;
}

