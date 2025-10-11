
ulong FUN_006950d0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if ((uVar2 != 0) && (uVar1 <= uVar2)) {
    return uVar2;
  }
  return uVar1;
}

