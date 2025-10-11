
int WHIRLPOOL_Init(WHIRLPOOL_CTX *c)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  (c->H).q[0] = 0.0;
  c->bitlen[3] = 0;
  puVar2 = (undefined8 *)((ulong)((long)&c->H + 8U) & 0xfffffffffffffff8);
  uVar1 = (ulong)(((int)c - (int)puVar2) + 0xa8U >> 3);
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return 1;
}

