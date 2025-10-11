
char * __strchr_evex(undefined1 (*param_1) [32],char param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  sbyte sVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 in_ZMM16 [64];
  
  auVar11 = vpbroadcastb_avx512vl();
  auVar10 = vpxorq_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
  auVar18 = ZEXT1632(auVar10);
  if (((uint)param_1 & 0xfff) < 0xfe1) {
    auVar12 = vmovdqu64_avx512vl(*param_1);
    auVar13 = vpxorq_avx512vl(auVar11,auVar12);
    auVar12 = vpminub_avx512vl(auVar12,auVar13);
    uVar1 = vpcmpb_avx512vl(auVar12,auVar18,0);
    uVar7 = (uint)uVar1;
    if (uVar7 != 0) {
      uVar4 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      if (param_2 != (*param_1)[uVar4]) {
        return (char *)0x0;
      }
      return *param_1 + uVar4;
    }
  }
  else {
    auVar12 = vmovdqa64_avx512vl(*(undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0));
    auVar13 = vpxorq_avx512vl(auVar11,auVar12);
    auVar12 = vpminub_avx512vl(auVar12,auVar13);
    uVar1 = vpcmpb_avx512vl(auVar12,auVar18,0);
    uVar7 = (int)uVar1 >> ((uint)param_1 & 0x1f);
    if (uVar7 != 0) {
      uVar4 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      if (param_2 != (*param_1)[uVar4]) {
        return (char *)0x0;
      }
      return *param_1 + uVar4;
    }
  }
  uVar9 = (ulong)param_1 & 0xffffffffffffffe0;
  auVar12 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar9 + 0x20));
  auVar13 = vpxorq_avx512vl(auVar11,auVar12);
  auVar12 = vpminub_avx512vl(auVar12,auVar13);
  auVar13 = ZEXT1632(auVar10);
  uVar1 = vpcmpb_avx512vl(auVar12,auVar13,0);
  uVar7 = (uint)uVar1;
  if (uVar7 == 0) {
    auVar12 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar9 + 0x40));
    uVar1 = vpcmpb_avx512vl(auVar11,auVar12,0);
    uVar7 = (uint)uVar1;
    uVar1 = vpcmpb_avx512vl(auVar13,auVar12,0);
    if ((int)uVar1 == 0 && uVar7 == 0) {
      auVar12 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar9 + 0x60));
      auVar14 = vpxorq_avx512vl(auVar11,auVar12);
      auVar12 = vpminub_avx512vl(auVar12,auVar14);
      uVar1 = vpcmpb_avx512vl(auVar12,auVar13,0);
      uVar7 = (uint)uVar1;
      if (uVar7 == 0) {
        auVar12 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar9 + 0x80));
        uVar1 = vpcmpb_avx512vl(auVar11,auVar12,0);
        uVar7 = (uint)uVar1;
        uVar1 = vpcmpb_avx512vl(auVar13,auVar12,0);
        if ((int)uVar1 == 0 && uVar7 == 0) {
          uVar9 = uVar9 + 0x20 & 0xffffffffffffff80;
          do {
            uVar8 = uVar9;
            auVar12 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0x80));
            auVar13 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0xa0));
            auVar14 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0xc0));
            auVar15 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0xe0));
            auVar16 = vpxorq_avx512vl(auVar11,auVar12);
            uVar9 = vpcmpb_avx512vl(auVar13,auVar11,4);
            auVar17 = vpxorq_avx512vl(auVar11,auVar14);
            uVar2 = vpcmpb_avx512vl(auVar15,auVar11,4);
            auVar12 = vpminub_avx512vl(auVar16,auVar12);
            auVar14 = vpminub_avx512vl(auVar17,auVar14);
            auVar13 = vpminub_avx512vl(auVar13,auVar12);
            auVar16[1] = ((byte)(uVar9 >> 1) & 1) * auVar13[1];
            auVar16[0] = ((byte)uVar9 & 1) * auVar13[0];
            auVar16[2] = ((byte)(uVar9 >> 2) & 1) * auVar13[2];
            auVar16[3] = ((byte)(uVar9 >> 3) & 1) * auVar13[3];
            auVar16[4] = ((byte)(uVar9 >> 4) & 1) * auVar13[4];
            auVar16[5] = ((byte)(uVar9 >> 5) & 1) * auVar13[5];
            auVar16[6] = ((byte)(uVar9 >> 6) & 1) * auVar13[6];
            auVar16[7] = ((byte)(uVar9 >> 7) & 1) * auVar13[7];
            auVar16[8] = ((byte)(uVar9 >> 8) & 1) * auVar13[8];
            auVar16[9] = ((byte)(uVar9 >> 9) & 1) * auVar13[9];
            auVar16[10] = ((byte)(uVar9 >> 10) & 1) * auVar13[10];
            auVar16[0xb] = ((byte)(uVar9 >> 0xb) & 1) * auVar13[0xb];
            auVar16[0xc] = ((byte)(uVar9 >> 0xc) & 1) * auVar13[0xc];
            auVar16[0xd] = ((byte)(uVar9 >> 0xd) & 1) * auVar13[0xd];
            auVar16[0xe] = ((byte)(uVar9 >> 0xe) & 1) * auVar13[0xe];
            auVar16[0xf] = ((byte)(uVar9 >> 0xf) & 1) * auVar13[0xf];
            auVar16[0x10] = ((byte)(uVar9 >> 0x10) & 1) * auVar13[0x10];
            auVar16[0x11] = ((byte)(uVar9 >> 0x11) & 1) * auVar13[0x11];
            auVar16[0x12] = ((byte)(uVar9 >> 0x12) & 1) * auVar13[0x12];
            auVar16[0x13] = ((byte)(uVar9 >> 0x13) & 1) * auVar13[0x13];
            auVar16[0x14] = ((byte)(uVar9 >> 0x14) & 1) * auVar13[0x14];
            auVar16[0x15] = ((byte)(uVar9 >> 0x15) & 1) * auVar13[0x15];
            auVar16[0x16] = ((byte)(uVar9 >> 0x16) & 1) * auVar13[0x16];
            auVar16[0x17] = ((byte)(uVar9 >> 0x17) & 1) * auVar13[0x17];
            auVar16[0x18] = ((byte)(uVar9 >> 0x18) & 1) * auVar13[0x18];
            auVar16[0x19] = ((byte)(uVar9 >> 0x19) & 1) * auVar13[0x19];
            auVar16[0x1a] = ((byte)(uVar9 >> 0x1a) & 1) * auVar13[0x1a];
            auVar16[0x1b] = ((byte)(uVar9 >> 0x1b) & 1) * auVar13[0x1b];
            auVar16[0x1c] = ((byte)(uVar9 >> 0x1c) & 1) * auVar13[0x1c];
            auVar16._30_2_ = auVar13._30_2_;
            auVar16[0x1d] = ((byte)(uVar9 >> 0x1d) & 1) * auVar13[0x1d];
            auVar13 = vpminub_avx512vl(auVar15,auVar14);
            auVar13 = vpminub_avx512vl(auVar13,auVar16);
            auVar15[1] = ((byte)(uVar2 >> 1) & 1) * auVar13[1];
            auVar15[0] = ((byte)uVar2 & 1) * auVar13[0];
            auVar15[2] = ((byte)(uVar2 >> 2) & 1) * auVar13[2];
            auVar15[3] = ((byte)(uVar2 >> 3) & 1) * auVar13[3];
            auVar15[4] = ((byte)(uVar2 >> 4) & 1) * auVar13[4];
            auVar15[5] = ((byte)(uVar2 >> 5) & 1) * auVar13[5];
            auVar15[6] = ((byte)(uVar2 >> 6) & 1) * auVar13[6];
            auVar15[7] = ((byte)(uVar2 >> 7) & 1) * auVar13[7];
            auVar15[8] = ((byte)(uVar2 >> 8) & 1) * auVar13[8];
            auVar15[9] = ((byte)(uVar2 >> 9) & 1) * auVar13[9];
            auVar15[10] = ((byte)(uVar2 >> 10) & 1) * auVar13[10];
            auVar15[0xb] = ((byte)(uVar2 >> 0xb) & 1) * auVar13[0xb];
            auVar15[0xc] = ((byte)(uVar2 >> 0xc) & 1) * auVar13[0xc];
            auVar15[0xd] = ((byte)(uVar2 >> 0xd) & 1) * auVar13[0xd];
            auVar15[0xe] = ((byte)(uVar2 >> 0xe) & 1) * auVar13[0xe];
            auVar15[0xf] = ((byte)(uVar2 >> 0xf) & 1) * auVar13[0xf];
            auVar15[0x10] = ((byte)(uVar2 >> 0x10) & 1) * auVar13[0x10];
            auVar15[0x11] = ((byte)(uVar2 >> 0x11) & 1) * auVar13[0x11];
            auVar15[0x12] = ((byte)(uVar2 >> 0x12) & 1) * auVar13[0x12];
            auVar15[0x13] = ((byte)(uVar2 >> 0x13) & 1) * auVar13[0x13];
            auVar15[0x14] = ((byte)(uVar2 >> 0x14) & 1) * auVar13[0x14];
            auVar15[0x15] = ((byte)(uVar2 >> 0x15) & 1) * auVar13[0x15];
            auVar15[0x16] = ((byte)(uVar2 >> 0x16) & 1) * auVar13[0x16];
            auVar15[0x17] = ((byte)(uVar2 >> 0x17) & 1) * auVar13[0x17];
            auVar15[0x18] = ((byte)(uVar2 >> 0x18) & 1) * auVar13[0x18];
            auVar15[0x19] = ((byte)(uVar2 >> 0x19) & 1) * auVar13[0x19];
            auVar15[0x1a] = ((byte)(uVar2 >> 0x1a) & 1) * auVar13[0x1a];
            auVar15[0x1b] = ((byte)(uVar2 >> 0x1b) & 1) * auVar13[0x1b];
            auVar15[0x1c] = ((byte)(uVar2 >> 0x1c) & 1) * auVar13[0x1c];
            auVar15._30_2_ = auVar13._30_2_;
            auVar15[0x1d] = ((byte)(uVar2 >> 0x1d) & 1) * auVar13[0x1d];
            uVar1 = vpcmpb_avx512vl(auVar15,auVar18,0);
            uVar9 = uVar8 + 0x80;
          } while ((int)uVar1 == 0);
          uVar3 = vpcmpb_avx512vl(auVar12,auVar18,0);
          uVar7 = (uint)uVar3;
          if (uVar7 == 0) {
            uVar3 = vpcmpb_avx512vl(auVar16,auVar18,0);
            uVar7 = (uint)uVar3;
            if (uVar7 == 0) {
              uVar3 = vpcmpb_avx512vl(auVar14,auVar18,0);
              lVar5 = 0;
              for (uVar9 = CONCAT44((int)uVar1,(int)uVar3); (uVar9 & 1) == 0;
                  uVar9 = uVar9 >> 1 | 0x8000000000000000) {
                lVar5 = lVar5 + 1;
              }
              if (param_2 == *(char *)(uVar8 + 0xc0 + lVar5)) {
                return (char *)(uVar8 + 0xc0 + lVar5);
              }
            }
            else {
              uVar4 = 0;
              for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar4 = uVar4 + 1;
              }
              if (param_2 == *(char *)(uVar8 + 0xa0 + (ulong)uVar4)) {
                return (char *)(uVar8 + 0xa0 + (ulong)uVar4);
              }
            }
          }
          else {
            uVar4 = 0;
            for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            if (param_2 == *(char *)(uVar9 + uVar4)) {
              return (char *)(uVar9 + uVar4);
            }
          }
          return (char *)0x0;
        }
        uVar4 = 0;
        for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        sVar6 = ((byte)uVar4 < 0x21) * (' ' - (byte)uVar4);
        if ((uint)((int)uVar1 << sVar6) >> sVar6 == 0) {
          return (char *)(uVar9 + 0x80 + (ulong)uVar4);
        }
      }
      else {
        uVar4 = 0;
        for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        if (param_2 == *(char *)(uVar9 + 0x60 + (ulong)uVar4)) {
          return (char *)(uVar9 + 0x60 + (ulong)uVar4);
        }
      }
    }
    else {
      uVar4 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      sVar6 = ((byte)uVar4 < 0x21) * (' ' - (byte)uVar4);
      if ((uint)((int)uVar1 << sVar6) >> sVar6 == 0) {
        return (char *)(uVar9 + 0x40 + (ulong)uVar4);
      }
    }
  }
  else {
    uVar4 = 0;
    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    if (param_2 == *(char *)(uVar9 + 0x20 + (ulong)uVar4)) {
      return (char *)(uVar9 + 0x20 + (ulong)uVar4);
    }
  }
  return (char *)0x0;
}

