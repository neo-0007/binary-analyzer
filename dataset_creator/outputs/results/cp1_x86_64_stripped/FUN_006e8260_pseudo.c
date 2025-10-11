
ulong FUN_006e8260(byte *param_1)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*param_1;
  if (*param_1 == 0) {
    return 0;
  }
  bVar1 = param_1[1];
  param_1 = param_1 + 1;
  if (bVar1 != 0) {
    do {
      param_1 = param_1 + 1;
      uVar2 = uVar2 * 0x10 + (ulong)bVar1;
      if ((uVar2 & 0xf0000000) != 0) {
        uVar2 = uVar2 & 0xffffffff0fffffff ^ (ulong)(((uint)uVar2 & 0xf0000000) >> 0x18);
      }
      bVar1 = *param_1;
    } while (bVar1 != 0);
    return uVar2;
  }
  return uVar2;
}

