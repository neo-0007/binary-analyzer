
ulong malloc_usable_size(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + -8) & 0xfffffffffffffff8;
    uVar2 = uVar3 - 0x10;
    if ((*(ulong *)(param_1 + -8) & 2) == 0) {
      uVar2 = *(ulong *)(param_1 + 8 + uVar2);
      uVar1 = (ulong)((uint)uVar2 & 1);
      if ((uVar2 & 1) != 0) {
        uVar1 = uVar3 - 8;
      }
      return uVar1;
    }
  }
  return uVar2;
}

