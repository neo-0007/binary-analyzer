
int CRYPTO_memcmp(void *a,void *b,size_t len)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  if (len != 0) {
    if (len == 0x10) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
      return (int)(*a != *b || *(long *)((long)a + 8) != *(long *)((long)b + 8));
    }
    do {
                    /* WARNING: Load size is inaccurate */
      bVar1 = *a;
      a = (void *)((long)a + 1);
                    /* WARNING: Load size is inaccurate */
      bVar2 = *b;
      b = (void *)((long)b + 1);
      uVar4 = (ulong)(byte)((byte)uVar4 | bVar1 ^ bVar2);
      len = len - 1;
    } while (len != 0);
    uVar3 = (uint)(-uVar4 >> 0x3f);
  }
  return uVar3;
}

