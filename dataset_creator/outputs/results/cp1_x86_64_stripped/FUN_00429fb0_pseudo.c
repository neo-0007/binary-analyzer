
ulong FUN_00429fb0(long param_1)

{
  ulong uVar1;
  
  if (*(ulong *)(param_1 + 0x38) <= *(ulong *)(param_1 + 0x30)) {
    uVar1 = *(ulong *)(param_1 + 0x30);
    if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x18)) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}

