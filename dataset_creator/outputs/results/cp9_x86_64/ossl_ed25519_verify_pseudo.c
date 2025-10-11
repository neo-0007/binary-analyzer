
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool ossl_ed25519_verify(void *param_1,size_t param_2,void *param_3,uint *param_4,undefined8 param_5
                        ,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  char cVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  byte bVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  int *piVar24;
  long lVar25;
  long lVar26;
  long in_FS_OFFSET;
  bool bVar27;
  long local_b18;
  uint local_acc;
  int local_ac8 [10];
  int local_aa0 [2];
  undefined1 local_a98 [16];
  undefined1 local_a88 [16];
  undefined8 local_a78;
  int local_a70;
  undefined1 auStack_a6c [12];
  undefined1 local_a60 [16];
  undefined8 local_a50;
  undefined4 local_a48;
  undefined1 auStack_a44 [12];
  undefined1 local_a38 [16];
  undefined8 local_a28;
  int local_a18 [10];
  int local_9f0;
  int local_9ec;
  int local_9e8;
  int local_9e4;
  int local_9e0;
  int local_9dc;
  int local_9d8;
  int local_9d4;
  int local_9d0;
  int local_9cc;
  undefined4 local_9c8;
  undefined1 auStack_9c4 [12];
  undefined1 local_9b8 [16];
  undefined8 local_9a8;
  int local_9a0 [10];
  int local_978 [10];
  int local_950 [10];
  int local_928 [10];
  int local_900 [10];
  undefined1 local_8d8 [40];
  int local_8b0 [10];
  int local_888 [10];
  undefined1 local_860 [40];
  int local_838 [10];
  undefined1 local_810 [40];
  undefined1 local_7e8 [40];
  undefined1 local_7c0 [40];
  int local_798 [10];
  undefined1 auStack_770 [40];
  undefined1 auStack_748 [40];
  undefined1 auStack_720 [40];
  undefined1 local_6f8 [160];
  undefined1 local_658 [160];
  undefined1 local_5b8 [160];
  undefined1 local_518 [160];
  undefined1 local_478 [160];
  undefined1 local_3d8 [160];
  undefined1 local_338 [159];
  byte bStack_299;
  undefined8 local_298;
  undefined8 uStack_290;
  uchar local_288 [64];
  char local_248 [256];
  byte local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_298 = _DAT_007ee0f0;
  uStack_290 = _UNK_007ee0f8;
  if (*(byte *)((long)param_3 + 0x3f) < 0x11) {
    if (*(byte *)((long)param_3 + 0x3f) == 0x10) {
      if ((((*(long *)((long)param_3 + 0x30) != allzeroes) ||
           (*(int *)((long)param_3 + 0x38) != DAT_007e6468)) ||
          (*(short *)((long)param_3 + 0x3c) != DAT_007e646c)) ||
         (*(char *)((long)param_3 + 0x3e) != DAT_007e646e)) goto LAB_004d94c1;
      lVar13 = 0xe;
      bVar17 = 0x14;
      while( true ) {
        bVar8 = *(byte *)((long)param_3 + lVar13 + 0x21);
        if (bVar8 < bVar17) break;
        if ((bVar8 >= bVar17 && bVar8 != bVar17) || (lVar13 == -1)) goto LAB_004d94c1;
        bVar17 = *(byte *)((long)&local_298 + lVar13);
        lVar13 = lVar13 + -1;
      }
    }
    lVar22 = ((ulong)*(byte *)((long)param_4 + 5) << 8 | (ulong)*(byte *)((long)param_4 + 6) << 0x10
             | (ulong)(byte)param_4[1]) * 0x40;
    lVar14 = ((ulong)*(byte *)((long)param_4 + 0xb) << 8 | (ulong)(byte)param_4[3] << 0x10 |
             (ulong)*(byte *)((long)param_4 + 10)) * 8;
    lVar10 = ((ulong)(byte)param_4[6] << 8 | (ulong)*(byte *)((long)param_4 + 0x19) << 0x10 |
             (ulong)*(byte *)((long)param_4 + 0x17)) * 0x20;
    uVar18 = ((uint)*(byte *)((long)param_4 + 0x1e) << 8 |
              (*(byte *)((long)param_4 + 0x1f) & 0x7f) << 0x10 |
             (uint)*(byte *)((long)param_4 + 0x1d)) * 4;
    lVar13 = (ulong)uVar18 + 0x1000000;
    lVar19 = lVar22 + 0x1000000;
    lVar1 = lVar14 + 0x1000000;
    lVar21 = (lVar13 >> 0x19) * 0x13 + (ulong)*param_4;
    lVar26 = ((ulong)(byte)param_4[2] << 8 | (ulong)*(byte *)((long)param_4 + 9) << 0x10 |
             (ulong)*(byte *)((long)param_4 + 7)) * 0x20 + (lVar19 >> 0x19);
    lVar2 = (ulong)param_4[4] + 0x1000000;
    lVar3 = lVar26 + 0x2000000;
    lVar4 = lVar10 + 0x1000000;
    lVar7 = (lVar1 >> 0x19) +
            ((ulong)*(byte *)((long)param_4 + 0xe) << 8 |
             (ulong)*(byte *)((long)param_4 + 0xf) << 0x10 | (ulong)*(byte *)((long)param_4 + 0xd))
            * 4;
    lVar5 = lVar21 + 0x2000000;
    lVar25 = ((ulong)*(byte *)((long)param_4 + 0x15) << 8 |
              (ulong)*(byte *)((long)param_4 + 0x16) << 0x10 | (ulong)(byte)param_4[5]) * 0x80 +
             (lVar2 >> 0x19);
    lVar6 = lVar25 + 0x2000000;
    local_9f0 = (int)lVar21 - ((uint)lVar5 & 0xfc000000);
    lVar15 = (lVar4 >> 0x19) +
             ((ulong)*(byte *)((long)param_4 + 0x1b) << 8 | (ulong)(byte)param_4[7] << 0x10 |
             (ulong)*(byte *)((long)param_4 + 0x1a)) * 0x10;
    lVar21 = lVar7 + 0x2000000;
    local_9ec = (int)(lVar5 >> 0x1a) + ((int)lVar22 - ((uint)lVar19 & 0xfe000000));
    lVar19 = lVar15 + 0x2000000;
    local_9e8 = (int)lVar26 - ((uint)lVar3 & 0xfc000000);
    local_9e4 = (int)(lVar3 >> 0x1a) + ((int)lVar14 - ((uint)lVar1 & 0xfe000000));
    local_9e0 = (int)lVar7 - ((uint)lVar21 & 0xfc000000);
    local_9dc = (int)(lVar21 >> 0x1a) + (param_4[4] - ((uint)lVar2 & 0xfe000000));
    local_9d4 = ((int)lVar10 - ((uint)lVar4 & 0xfe000000)) + (int)(lVar6 >> 0x1a);
    local_9d8 = (int)lVar25 - ((uint)lVar6 & 0xfc000000);
    local_9d0 = (int)lVar15 - ((uint)lVar19 & 0xfc000000);
    local_9cc = (uVar18 - ((uint)lVar13 & 0xfe000000)) + (int)(lVar19 >> 0x1a);
    local_9a8 = 0;
    auStack_9c4 = SUB1612((undefined1  [16])0x0,4);
    local_9c8 = 1;
    local_9b8 = (undefined1  [16])0x0;
    fe_sq(local_ac8);
    fe_mul(local_a98,local_ac8,d);
    piVar12 = (int *)auStack_9c4;
    iVar20 = 1;
    piVar11 = local_ac8;
    piVar16 = piVar12;
    while( true ) {
      *piVar11 = *piVar11 - iVar20;
      piVar11 = piVar11 + 1;
      if (piVar11 == local_aa0) break;
      iVar20 = *piVar16;
      piVar16 = piVar16 + 1;
    }
    iVar20 = 1;
    piVar11 = (int *)local_a98;
    while( true ) {
      *piVar11 = *piVar11 + iVar20;
      piVar11 = piVar11 + 1;
      if (piVar11 == &local_a70) break;
      iVar20 = *piVar12;
      piVar12 = piVar12 + 1;
    }
    fe_sq(local_978,local_a98);
    fe_mul(local_978,local_978,local_a98);
    iVar20 = 4;
    fe_sq(local_a18,local_978);
    fe_mul(local_a18,local_a18,local_a98);
    fe_mul(local_a18,local_a18,local_ac8);
    fe_sq(local_8d8,local_a18);
    fe_sq(local_838,local_8d8);
    fe_sq(local_838,local_838);
    fe_mul(local_838,local_a18,local_838);
    fe_mul(local_8d8,local_8d8,local_838);
    fe_sq(local_8d8,local_8d8);
    fe_mul(local_8d8,local_838,local_8d8);
    fe_sq(local_838,local_8d8);
    do {
      fe_sq(local_838,local_838);
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    iVar20 = 9;
    fe_mul(local_8d8,local_838,local_8d8);
    fe_sq(local_838,local_8d8);
    do {
      fe_sq(local_838,local_838);
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    iVar20 = 0x13;
    fe_mul(local_838,local_838,local_8d8);
    fe_sq(local_798,local_838);
    do {
      fe_sq(local_798,local_798);
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    iVar20 = 9;
    fe_mul(local_838,local_798,local_838);
    fe_sq(local_838,local_838);
    do {
      fe_sq(local_838,local_838);
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    iVar20 = 0x31;
    fe_mul(local_8d8,local_838,local_8d8);
    fe_sq(local_838,local_8d8);
    do {
      fe_sq(local_838,local_838);
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    iVar20 = 99;
    fe_mul(local_838,local_838,local_8d8);
    fe_sq(local_798,local_838);
    do {
      fe_sq(local_798,local_798);
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    iVar20 = 0x31;
    fe_mul(local_838,local_798,local_838);
    fe_sq(local_838,local_838);
    do {
      fe_sq(local_838,local_838);
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    fe_mul(local_8d8,local_838,local_8d8);
    fe_sq(local_8d8,local_8d8);
    fe_sq(local_8d8,local_8d8);
    fe_mul(local_a18,local_8d8,local_a18);
    fe_mul(local_a18,local_a18,local_978);
    fe_mul(local_a18,local_a18,local_ac8);
    fe_sq(local_838,local_a18);
    fe_mul(local_838,local_838,local_a98);
    lVar13 = 0;
    do {
      *(int *)((long)local_798 + lVar13) =
           *(int *)((long)local_838 + lVar13) - *(int *)(lVar13 + (long)local_ac8);
      lVar13 = lVar13 + 4;
    } while (lVar13 != 0x28);
    fe_tobytes(local_148,local_798);
    iVar20 = CRYPTO_memcmp(local_148,zero_1,0x20);
    if (iVar20 != 0) {
      lVar13 = 0;
      do {
        *(int *)((long)local_798 + lVar13) =
             *(int *)(lVar13 + (long)local_ac8) + *(int *)((long)local_838 + lVar13);
        lVar13 = lVar13 + 4;
      } while (lVar13 != 0x28);
      fe_tobytes(local_148,local_798);
      iVar20 = CRYPTO_memcmp(local_148,zero_1,0x20);
      if (iVar20 != 0) goto LAB_004d94c1;
      fe_mul(local_a18,local_a18,sqrtm1);
    }
    fe_tobytes(local_148,local_a18);
    piVar12 = local_a18;
    if ((local_148[0] & 1) != *(byte *)((long)param_4 + 0x1f) >> 7) {
      do {
        *piVar12 = -*piVar12;
        piVar12 = piVar12 + 1;
      } while (piVar12 != &local_9f0);
    }
    piVar12 = local_9a0;
    fe_mul(piVar12,local_a18,&local_9f0);
    piVar11 = local_a18;
    do {
      *piVar11 = -*piVar11;
      piVar11 = piVar11 + 1;
    } while (piVar11 != &local_9f0);
    do {
      *piVar12 = -*piVar12;
      piVar12 = piVar12 + 1;
    } while (piVar12 != local_978);
    type = (EVP_MD *)EVP_MD_fetch(param_5,"SHA512",param_6);
    if (type != (EVP_MD *)0x0) {
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      if (((ctx != (EVP_MD_CTX *)0x0) &&
          (iVar20 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0), iVar20 != 0)) &&
         ((iVar20 = EVP_DigestUpdate(ctx,param_3,0x20), iVar20 != 0 &&
          ((iVar20 = EVP_DigestUpdate(ctx,param_4,0x20), iVar20 != 0 &&
           (iVar20 = EVP_DigestUpdate(ctx,param_1,param_2), iVar20 != 0)))))) {
        iVar20 = EVP_DigestFinal_ex(ctx,local_288,&local_acc);
        if (iVar20 != 0) {
          x25519_sc_reduce(local_288);
          slide(local_248,local_288);
          slide(local_148,(long)param_3 + 0x20);
          ge_p3_to_cached(local_798,local_a18);
          ge_p3_dbl(local_978,local_a18);
          fe_mul(local_838,local_978,local_900);
          fe_mul(local_810,local_950,local_928);
          fe_mul(local_7e8,local_928,local_900);
          fe_mul(local_7c0,local_978,local_950);
          ge_add(local_978,local_838,local_798);
          fe_mul(local_8d8,local_978,local_900);
          fe_mul(local_8b0,local_950,local_928);
          fe_mul(local_888,local_928,local_900);
          fe_mul(local_860,local_978,local_950);
          ge_p3_to_cached(local_6f8,local_8d8);
          ge_add(local_978,local_838,local_6f8);
          fe_mul(local_8d8,local_978,local_900);
          fe_mul(local_8b0,local_950,local_928);
          fe_mul(local_888,local_928,local_900);
          fe_mul(local_860,local_978,local_950);
          ge_p3_to_cached(local_658,local_8d8);
          ge_add(local_978,local_838,local_658);
          fe_mul(local_8d8,local_978,local_900);
          fe_mul(local_8b0,local_950,local_928);
          fe_mul(local_888,local_928,local_900);
          fe_mul(local_860,local_978,local_950);
          ge_p3_to_cached(local_5b8,local_8d8);
          ge_add(local_978,local_838,local_5b8);
          fe_mul(local_8d8,local_978,local_900);
          fe_mul(local_8b0,local_950,local_928);
          fe_mul(local_888,local_928,local_900);
          fe_mul(local_860,local_978,local_950);
          ge_p3_to_cached(local_518,local_8d8);
          ge_add(local_978,local_838,local_518);
          fe_mul(local_8d8,local_978,local_900);
          fe_mul(local_8b0,local_950,local_928);
          fe_mul(local_888,local_928,local_900);
          fe_mul(local_860,local_978,local_950);
          ge_p3_to_cached(local_478,local_8d8);
          ge_add(local_978,local_838,local_478);
          fe_mul(local_8d8,local_978,local_900);
          fe_mul(local_8b0,local_950,local_928);
          fe_mul(local_888,local_928,local_900);
          fe_mul(local_860,local_978,local_950);
          ge_p3_to_cached(local_3d8,local_8d8);
          ge_add(local_978,local_838,local_3d8);
          fe_mul(local_8d8,local_978,local_900);
          fe_mul(local_8b0,local_950,local_928);
          fe_mul(local_888,local_928,local_900);
          fe_mul(local_860,local_978,local_950);
          ge_p3_to_cached(local_338,local_8d8);
          lVar13 = 0xff;
          local_a78 = 0;
          local_a50 = 0;
          auStack_a6c = SUB1612((undefined1  [16])0x0,4);
          local_a70 = 1;
          local_a28 = 0;
          auStack_a44 = SUB1612((undefined1  [16])0x0,4);
          local_a48 = 1;
          local_a98 = (undefined1  [16])0x0;
          local_a88 = (undefined1  [16])0x0;
          local_a60 = (undefined1  [16])0x0;
          local_a38 = (undefined1  [16])0x0;
LAB_004da1ad:
          if ((local_248[lVar13] == '\0') && (local_148[lVar13] == 0)) goto code_r0x004da1a3;
          local_b18 = (long)(int)lVar13;
          do {
            ge_p2_dbl(local_978,local_a98);
            cVar9 = local_248[local_b18];
            if (cVar9 < '\x01') {
              if (cVar9 != '\0') {
                fe_mul(local_8d8,local_978,local_900);
                fe_mul(local_8b0,local_950,local_928);
                fe_mul(local_888,local_928,local_900);
                piVar12 = local_950;
                fe_mul(local_860,local_978,local_950);
                piVar11 = local_978;
                piVar16 = local_8b0;
                do {
                  piVar24 = piVar16 + -10;
                  iVar20 = *piVar16;
                  piVar23 = piVar11 + 1;
                  piVar16 = piVar16 + 1;
                  *piVar11 = *piVar24 + iVar20;
                  piVar11 = piVar23;
                } while (piVar23 != piVar12);
                piVar11 = piVar12;
                piVar16 = local_8b0;
                do {
                  iVar20 = *piVar16;
                  piVar24 = piVar16 + -10;
                  piVar23 = piVar11 + 1;
                  piVar16 = piVar16 + 1;
                  *piVar11 = iVar20 - *piVar24;
                  piVar11 = piVar23;
                } while (piVar23 != local_928);
                lVar13 = (long)-((int)cVar9 / 2) * 0xa0;
                fe_mul(local_928,local_978,auStack_770 + lVar13);
                fe_mul(piVar12,piVar12,local_798 + (long)-((int)cVar9 / 2) * 0x28);
                fe_mul(local_900,auStack_720 + lVar13,local_860);
                fe_mul(local_978,local_888,auStack_748 + lVar13);
                lVar13 = 0;
                do {
                  lVar19 = lVar13 + 4;
                  *(int *)(lVar13 + (long)local_ac8) = *(int *)((long)local_978 + lVar13) * 2;
                  piVar11 = local_978;
                  lVar13 = lVar19;
                } while (lVar19 != 0x28);
                do {
                  piVar16 = piVar11 + 1;
                  *piVar11 = piVar11[0x14] - piVar11[10];
                  piVar11 = piVar16;
                } while (piVar16 != piVar12);
                do {
                  *piVar12 = *piVar12 + piVar12[10];
                  piVar12 = piVar12 + 1;
                  piVar11 = local_900;
                  piVar16 = local_ac8;
                } while (piVar12 != local_928);
                do {
                  piVar23 = piVar16 + 1;
                  piVar11[-10] = *piVar16 - *piVar11;
                  piVar11 = piVar11 + 1;
                  piVar16 = piVar23;
                  piVar12 = local_900;
                  piVar24 = local_ac8;
                } while (local_aa0 != piVar23);
                do {
                  iVar20 = *piVar24;
                  piVar24 = piVar24 + 1;
                  *piVar12 = *piVar12 + iVar20;
                  piVar12 = piVar12 + 1;
                } while (local_aa0 != piVar24);
              }
            }
            else {
              fe_mul(local_8d8,local_978,local_900);
              fe_mul(local_8b0,local_950,local_928);
              fe_mul(local_888,local_928,local_900);
              fe_mul(local_860,local_978,local_950);
              ge_add(local_978,local_8d8,local_798 + (long)(cVar9 >> 1) * 0x28);
            }
            bVar17 = local_148[local_b18];
            if ((char)bVar17 < '\x01') {
              if (bVar17 != 0) {
                fe_mul(local_8d8,local_978,local_900);
                fe_mul(local_8b0,local_950,local_928);
                fe_mul(local_888,local_928,local_900);
                piVar12 = local_950;
                fe_mul(local_860,local_978,local_950);
                piVar11 = local_978;
                piVar16 = local_8b0;
                do {
                  piVar24 = piVar16 + -10;
                  iVar20 = *piVar16;
                  piVar23 = piVar11 + 1;
                  piVar16 = piVar16 + 1;
                  *piVar11 = *piVar24 + iVar20;
                  piVar11 = piVar23;
                } while (piVar12 != piVar23);
                piVar11 = piVar12;
                piVar16 = local_8b0;
                do {
                  iVar20 = *piVar16;
                  piVar24 = piVar16 + -10;
                  piVar23 = piVar11 + 1;
                  piVar16 = piVar16 + 1;
                  *piVar11 = iVar20 - *piVar24;
                  piVar11 = piVar23;
                } while (local_928 != piVar23);
                lVar13 = (long)-((int)(char)bVar17 / 2) * 0x78;
                fe_mul(local_928,local_978,lVar13 + 0x7e64a8);
                fe_mul(piVar12,piVar12,Bi + lVar13);
                fe_mul(local_900,lVar13 + 0x7e64d0,local_860);
                lVar13 = 0;
                do {
                  lVar19 = lVar13 + 4;
                  *(int *)(lVar13 + (long)local_ac8) = *(int *)((long)local_888 + lVar13) * 2;
                  piVar11 = local_978;
                  lVar13 = lVar19;
                } while (lVar19 != 0x28);
                do {
                  piVar16 = piVar11 + 1;
                  *piVar11 = piVar11[0x14] - piVar11[10];
                  piVar11 = piVar16;
                } while (piVar12 != piVar16);
                do {
                  *piVar12 = *piVar12 + piVar12[10];
                  piVar12 = piVar12 + 1;
                  piVar11 = local_900;
                  piVar16 = local_ac8;
                } while (local_928 != piVar12);
                do {
                  piVar23 = piVar16 + 1;
                  piVar11[-10] = *piVar16 - *piVar11;
                  piVar11 = piVar11 + 1;
                  piVar16 = piVar23;
                  piVar12 = local_900;
                  piVar24 = local_ac8;
                } while (local_aa0 != piVar23);
                do {
                  iVar20 = *piVar24;
                  piVar24 = piVar24 + 1;
                  *piVar12 = *piVar12 + iVar20;
                  piVar12 = piVar12 + 1;
                } while (local_aa0 != piVar24);
              }
            }
            else {
              fe_mul(local_8d8,local_978,local_900);
              fe_mul(local_8b0,local_950,local_928);
              fe_mul(local_888,local_928,local_900);
              fe_mul(local_860,local_978,local_950);
              ge_madd(local_978,local_8d8,Bi + (long)((char)bVar17 >> 1) * 0x78);
            }
            fe_mul(local_a98,local_978,local_900);
            fe_mul(&local_a70,local_950,local_928);
            fe_mul(&local_a48,local_928,local_900);
            local_b18 = local_b18 + -1;
          } while ((int)local_b18 != -1);
LAB_004da66f:
          ge_p3_tobytes(local_148,local_a98);
          iVar20 = CRYPTO_memcmp(local_148,param_3,0x20);
          bVar27 = iVar20 == 0;
          goto LAB_004d9c7a;
        }
      }
      bVar27 = false;
LAB_004d9c7a:
      EVP_MD_free(type);
      EVP_MD_CTX_free(ctx);
      goto LAB_004d94c3;
    }
  }
LAB_004d94c1:
  bVar27 = false;
LAB_004d94c3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar27;
code_r0x004da1a3:
  bVar27 = lVar13 == 0;
  lVar13 = lVar13 + -1;
  if (bVar27) goto LAB_004da66f;
  goto LAB_004da1ad;
}

