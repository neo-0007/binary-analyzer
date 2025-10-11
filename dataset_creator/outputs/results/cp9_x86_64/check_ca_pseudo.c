
uint check_ca(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(ulong *)(param_1 + 0xe8) & 0x400000002) != 2) {
    uVar1 = *(uint *)(param_1 + 0xe8);
    if ((uVar1 & 1) != 0) {
      return uVar1 >> 4 & 1;
    }
    if ((uVar1 & 0x2040) == 0x2040) {
      uVar2 = 3;
    }
    else {
      uVar2 = 4;
      if (((uVar1 & 2) == 0) && (uVar2 = 0, (uVar1 & 8) != 0)) {
        uVar2 = -(uint)((*(uint *)(param_1 + 0xf4) & 7) != 0) & 5;
      }
    }
  }
  return uVar2;
}

