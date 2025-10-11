
int RSA_padding_check_PKCS1_type_2(uchar *to,int tlen,uchar *f,int fl,int rsa_len)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  byte *pbVar15;
  uint uVar16;
  
  if (tlen < 1) {
    return -1;
  }
  if (fl < 1) {
    uVar12 = 0xffffffff;
  }
  else if ((rsa_len < fl) || (rsa_len < 0xb)) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_pk1.c",0xbe,"RSA_padding_check_PKCS1_type_2");
    ERR_set_error(4,0x9f,0);
    uVar12 = 0xffffffff;
  }
  else {
    pvVar5 = CRYPTO_malloc(rsa_len,"../crypto/rsa/rsa_pk1.c",0xc2);
    if (pvVar5 == (void *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_pk1.c",0xc4,"RSA_padding_check_PKCS1_type_2");
      ERR_set_error(4,0xc0100,0);
      uVar12 = 0xffffffff;
    }
    else {
      pbVar7 = f + fl;
      pbVar15 = (byte *)((long)pvVar5 + (long)rsa_len);
      pbVar9 = pbVar15;
      do {
        pbVar9 = pbVar9 + -1;
        uVar12 = ~fl & fl - 1U;
        uVar13 = ((int)uVar12 >> 0x1f) + 1;
        pbVar7 = pbVar7 + -(ulong)uVar13;
        fl = fl - uVar13;
        bVar2 = ~(byte)((int)uVar12 >> 0x1f) & *pbVar7;
        *pbVar9 = bVar2;
      } while ((int)pbVar15 - (int)pbVar9 < rsa_len);
      lVar14 = 2;
      uVar10 = ~(ulong)(rsa_len - 1);
      if (rsa_len < 1) {
        uVar10 = 0xffffffffffffffff;
      }
      uVar13 = 0;
      pbVar15 = pbVar15 + uVar10;
      uVar12 = 0;
      do {
        uVar8 = (int)(~(uint)pbVar15[lVar14] & pbVar15[lVar14] - 1) >> 0x1f;
        uVar3 = ~uVar13 & uVar8;
        uVar13 = uVar13 | uVar8;
        uVar8 = (uint)lVar14;
        lVar14 = lVar14 + 1;
        uVar12 = uVar3 & uVar8 | ~uVar3 & uVar12;
      } while ((int)lVar14 < rsa_len);
      uVar13 = rsa_len - 0xb;
      uVar3 = 1;
      uVar16 = rsa_len - (uVar12 + 1);
      uVar11 = ~((int)((tlen - uVar16 ^ uVar16 | uVar16 ^ tlen) ^ tlen) >> 0x1f) &
               ~((int)((uVar12 - 10 ^ 10 | uVar12 ^ 10) ^ uVar12) >> 0x1f) &
               (int)(~(uint)bVar2 & bVar2 - 1 & ~(uint)(pbVar15[1] ^ 2) & (pbVar15[1] ^ 2) - 1) >>
               0x1f;
      uVar8 = (int)((uVar13 - tlen ^ tlen | tlen ^ uVar13) ^ uVar13) >> 0x1f;
      uVar8 = uVar8 & uVar13 | tlen & ~uVar8;
      if (1 < (int)uVar13) {
        do {
          uVar4 = uVar3 & uVar12 - 10;
          bVar2 = (char)(~(byte)(uVar4 >> 0x18) & (byte)(uVar4 - 1 >> 0x18)) >> 7;
          if (0xb < (int)(rsa_len - uVar3)) {
            pbVar9 = pbVar15 + 0xb;
            do {
              pbVar7 = pbVar9 + 1;
              *pbVar9 = pbVar9[(int)uVar3] & ~bVar2 | bVar2 & *pbVar9;
              pbVar9 = pbVar7;
            } while (pbVar15 + (ulong)((rsa_len - uVar3) - 0xc) + 0xc != pbVar7);
          }
          uVar3 = uVar3 * 2;
        } while ((int)uVar3 < (int)uVar13);
      }
      uVar10 = 0;
      iVar6 = -uVar16;
      if (uVar8 != 0) {
        do {
          bVar1 = (byte)(uVar16 >> 0x18);
          uVar12 = (uint)iVar6 >> 0x18;
          bVar2 = (byte)(uVar10 >> 0x18);
          iVar6 = iVar6 + 1;
          bVar2 = (char)((bVar1 ^ bVar2 | bVar1 ^ (byte)uVar12) ^ bVar2) >> 7 & (byte)uVar11;
          to[uVar10] = ~bVar2 & to[uVar10] | pbVar15[uVar10 + 0xb] & bVar2;
          uVar10 = uVar10 + 1;
        } while (uVar8 != uVar10);
      }
      CRYPTO_clear_free(pbVar15,(long)rsa_len,"../crypto/rsa/rsa_pk1.c",0x10a);
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_pk1.c",0x111,"RSA_padding_check_PKCS1_type_2");
      ERR_set_error(4,0x9f,0);
      err_clear_last_constant_time(uVar11 & 1);
      uVar12 = uVar11 & uVar16 | ~uVar11;
    }
  }
  return uVar12;
}

