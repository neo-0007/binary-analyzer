
long FUN_00692f40(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((*(byte *)(param_1 + 0x40) & 8) == 0) {
    return -1;
  }
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar2 = *(ulong *)(param_1 + 0x18);
  if ((uVar1 != 0) && ((uVar2 == 0 || (uVar2 < uVar1)))) {
    *(ulong *)(param_1 + 0x18) = uVar1;
    return (long)(uVar1 - *(long *)(param_1 + 0x10)) >> 2;
  }
  return (long)(uVar2 - *(long *)(param_1 + 0x10)) >> 2;
}

