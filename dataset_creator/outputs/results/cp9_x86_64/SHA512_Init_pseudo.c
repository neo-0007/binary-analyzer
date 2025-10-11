
int SHA512_Init(SHA512_CTX *c)

{
  c->Nl = 0;
  c->h[0] = 0x6a09e667f3bcc908;
  c->h[1] = 0xbb67ae8584caa73b;
  c->h[2] = 0x3c6ef372fe94f82b;
  c->h[3] = 0xa54ff53a5f1d36f1;
  c->h[4] = 0x510e527fade682d1;
  c->h[5] = 0x9b05688c2b3e6c1f;
  c->h[6] = 0x1f83d9abfb41bd6b;
  c->h[7] = 0x5be0cd19137e2179;
  c->num = 0;
  c->md_len = 0x40;
  c->Nh = 0;
  return 1;
}

