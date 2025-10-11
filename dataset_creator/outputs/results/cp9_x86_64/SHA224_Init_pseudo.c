
int SHA224_Init(SHA256_CTX *c)

{
  c->h[0] = 0xc1059ed8;
  c->h[1] = 0x367cd507;
  c->h[2] = 0x3070dd17;
  c->h[3] = 0xf70e5939;
  c->h[4] = 0xffc00b31;
  c->h[5] = 0x68581511;
  c->h[6] = 0x64f98fa7;
  c->h[7] = 0xbefa4fa4;
  *(undefined1 (*) [16])(c->data + 0xe) = (undefined1  [16])0x0;
  c->Nl = 0;
  c->Nh = 0;
  c->data[0] = 0;
  c->data[1] = 0;
  c->md_len = 0x1c;
  c->data[2] = 0;
  c->data[3] = 0;
  c->data[4] = 0;
  c->data[5] = 0;
  c->data[6] = 0;
  c->data[7] = 0;
  c->data[8] = 0;
  c->data[9] = 0;
  c->data[10] = 0;
  c->data[0xb] = 0;
  c->data[0xc] = 0;
  c->data[0xd] = 0;
  return 1;
}

