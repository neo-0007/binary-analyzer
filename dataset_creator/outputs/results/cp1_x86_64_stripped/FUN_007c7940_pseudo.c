
ulong FUN_007c7940(long param_1)

{
  ulong uVar1;
  long in_FS_OFFSET;
  
  uVar1 = FUN_0076f0b0(*(long *)(param_1 + 0x6a0) + *(long *)(param_1 + 0x690),
                       *(long *)(param_1 + 0x698) - *(long *)(param_1 + 0x6a0),7);
  if ((int)uVar1 != 0) {
    uVar1 = (ulong)*(uint *)(in_FS_OFFSET + -0x58);
  }
  return uVar1;
}

