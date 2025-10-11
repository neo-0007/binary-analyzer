
int RIPEMD160_Init(RIPEMD160_CTX *c)

{
  c->A = 0x67452301;
  c->B = 0xefcdab89;
  c->C = 0x98badcfe;
  c->D = 0x10325476;
  c->E = 0;
  c->Nl = 0;
  c->Nh = 0;
  c->data[0] = 0;
  c->data[1] = 0;
  c->data[2] = 0;
  c->data[3] = 0;
  c->data[4] = 0;
  c->E = 0xc3d2e1f0;
  c->data[5] = 0;
  c->data[6] = 0;
  c->data[7] = 0;
  c->data[8] = 0;
  c->data[9] = 0;
  c->data[10] = 0;
  c->data[0xb] = 0;
  c->data[0xc] = 0;
  *(undefined1 (*) [16])(c->data + 0xd) = (undefined1  [16])0x0;
  return 1;
}

