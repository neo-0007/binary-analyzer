
uint check_purpose_ocsp_helper(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 1;
  if ((param_3 != 0) && (uVar2 = 0, (*(ulong *)(param_2 + 0xe8) & 0x400000002) != 2)) {
    uVar1 = *(uint *)(param_2 + 0xe8);
    if ((uVar1 & 1) != 0) {
      return uVar1 >> 4 & 1;
    }
    if ((uVar1 & 0x2040) == 0x2040) {
      return 3;
    }
    uVar2 = 4;
    if (((uVar1 & 2) == 0) && (uVar2 = 0, (uVar1 & 8) != 0)) {
      return -(uint)((*(uint *)(param_2 + 0xf4) & 7) != 0) & 5;
    }
  }
  return uVar2;
}

