
uint FUN_004d1e10(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  
  pbVar1 = param_1 + 8;
  uVar3 = 0xffffffff;
  do {
    bVar2 = *param_1;
    param_1 = param_1 + 1;
    bVar2 = bVar2 >> 4 ^ bVar2;
    bVar2 = bVar2 >> 2 ^ bVar2;
    uVar3 = uVar3 & (int)((uint)(byte)(bVar2 >> 1 ^ bVar2) << 0x1f) >> 0x1f;
  } while (pbVar1 != param_1);
  return uVar3 & 1;
}

