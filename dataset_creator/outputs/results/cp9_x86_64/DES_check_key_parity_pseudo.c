
int DES_check_key_parity(const_DES_cblock *key)

{
  uchar *puVar1;
  byte bVar2;
  uint uVar3;
  
  puVar1 = key[1];
  uVar3 = 0xffffffff;
  do {
    bVar2 = (*key)[0];
    key = (const_DES_cblock *)((long)key + 1);
    bVar2 = bVar2 >> 4 ^ bVar2;
    bVar2 = bVar2 >> 2 ^ bVar2;
    uVar3 = uVar3 & (int)((uint)(byte)(bVar2 >> 1 ^ bVar2) << 0x1f) >> 0x1f;
  } while ((const_DES_cblock *)puVar1 != key);
  return uVar3 & 1;
}

