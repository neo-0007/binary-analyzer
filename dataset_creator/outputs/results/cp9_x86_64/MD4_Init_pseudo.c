
int MD4_Init(MD4_CTX *c)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  c->Nl = 0;
  c->Nh = 0;
  *(undefined8 *)(c->data + 0xf) = 0;
  puVar2 = (undefined8 *)((ulong)c->data & 0xfffffffffffffff8);
  uVar1 = (ulong)(((int)c - (int)puVar2) + 0x5cU >> 3);
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  c->A = 0x67452301;
  c->B = 0xefcdab89;
  c->C = 0x98badcfe;
  c->D = 0x10325476;
  return 1;
}

