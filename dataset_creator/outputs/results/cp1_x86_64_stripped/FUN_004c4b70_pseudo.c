
ushort FUN_004c4b70(long param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = (byte)(param_2 & 0xf);
  if (0xb < (param_2 & 0xf)) {
    param_1 = param_1 + 1;
    bVar1 = bVar1 - 8;
  }
  return *(ushort *)(param_1 + (ulong)(param_2 >> 4) * 2) >> (bVar1 & 0x1f) & 0x1f;
}

