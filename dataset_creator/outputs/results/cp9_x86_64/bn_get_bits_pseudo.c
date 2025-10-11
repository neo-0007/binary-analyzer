
ulong bn_get_bits(long *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar4;
  uint uVar3;
  
  uVar4 = 0;
  if (-0x40 < (int)param_2) {
    uVar3 = param_2 + 0x3f;
    if (-1 < (int)param_2) {
      uVar3 = param_2;
    }
    iVar2 = (int)uVar3 >> 6;
    if (iVar2 < (int)param_1[1]) {
      uVar4 = *(ulong *)(*param_1 + (long)iVar2 * 8);
      if (((param_2 & 0x3f) != 0) &&
         (uVar4 = uVar4 >> (sbyte)(param_2 & 0x3f), iVar2 + 1 < (int)param_1[1])) {
        bVar1 = (byte)((int)param_2 >> 0x1f);
        uVar4 = uVar4 | *(long *)(*param_1 + 8 + (long)iVar2 * 8) <<
                        (((bVar1 >> 2) - ((char)param_2 + (bVar1 >> 2) & 0x3f)) + 0x40 & 0x3f);
      }
    }
  }
  return uVar4;
}

