
bool __libc_alloca_cutoff(ulong param_1)

{
  ulong uVar1;
  long in_FS_OFFSET;
  
  uVar1 = 0x10000;
  if (((*(ulong *)(in_FS_OFFSET + 0x698) >> 2) - 1 < 0x10000) &&
     (uVar1 = *(ulong *)(in_FS_OFFSET + 0x698) >> 2, *(ulong *)(in_FS_OFFSET + 0x698) < 4)) {
    uVar1 = 0x40000;
  }
  return param_1 <= uVar1;
}

