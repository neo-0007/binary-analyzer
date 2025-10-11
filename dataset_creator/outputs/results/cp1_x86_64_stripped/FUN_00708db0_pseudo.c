
long FUN_00708db0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (*(ulong *)(param_1 + 0x10) < *(ulong *)(param_1 + 0x28)) {
    uVar1 = *(ulong *)(param_1 + 0x28);
  }
  return uVar1 - *(long *)(param_1 + 0x18);
}

