
int FUN_00754060(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 in_ZMM16 [64];
  undefined1 in_ZMM17 [64];
  undefined1 auVar27 [48];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar28 [16];
  
  auVar27 = in_ZMM17._16_48_;
  uVar10 = 0;
  auVar13 = vpxorq_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
  uVar6 = ((uint)param_1 | (uint)param_2) & 0xfff;
  if (uVar6 < 0xf81) {
    auVar15 = vmovdqu64_avx512vl(*param_1);
    uVar2 = vptestmb_avx512vl(auVar15,auVar15);
    uVar1 = vpcmpb_avx512vl(auVar15,*param_2,0);
    uVar6 = ((uint)uVar2 & (uint)uVar1) + 1;
    if (uVar6 != 0) {
      uVar7 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      return (uint)(byte)(*param_1)[uVar7] - (uint)(byte)(*param_2)[uVar7];
    }
    auVar15 = vmovdqu64_avx512vl(param_1[1]);
    uVar2 = vptestmb_avx512vl(auVar15,auVar15);
    uVar1 = vpcmpb_avx512vl(auVar15,param_2[1],0);
    uVar6 = ((uint)uVar2 & (uint)uVar1) + 1;
    if (uVar6 != 0) {
      uVar7 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      return (uint)(byte)param_1[1][uVar7] - (uint)(byte)param_2[1][uVar7];
    }
    auVar15 = vmovdqu64_avx512vl(param_1[2]);
    uVar2 = vptestmb_avx512vl(auVar15,auVar15);
    uVar1 = vpcmpb_avx512vl(auVar15,param_2[2],0);
    uVar6 = ((uint)uVar2 & (uint)uVar1) + 1;
    if (uVar6 != 0) {
      uVar7 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      return (uint)(byte)param_1[2][uVar7] - (uint)(byte)param_2[2][uVar7];
    }
    auVar15 = vmovdqu64_avx512vl(param_1[3]);
    uVar2 = vptestmb_avx512vl(auVar15,auVar15);
    uVar1 = vpcmpb_avx512vl(auVar15,param_2[3],0);
    uVar6 = ((uint)uVar2 & (uint)uVar1) + 1;
    if (uVar6 != 0) {
      uVar7 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      return (uint)(byte)param_1[3][uVar7] - (uint)(byte)param_2[3][uVar7];
    }
  }
  else {
    if (uVar6 < 0xfe1) {
      do {
        auVar15 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(*param_1 + uVar10));
        auVar27 = ZEXT1648(auVar15._16_16_);
        uVar2 = vptestmb_avx512vl(auVar15,auVar15);
        uVar1 = vpcmpb_avx512vl(auVar15,*(undefined1 (*) [32])(*param_2 + uVar10),0);
        uVar7 = ((uint)uVar2 & (uint)uVar1) + 1;
        if (uVar7 != 0) goto LAB_007543d0;
        uVar10 = (ulong)((int)uVar10 + 0x20);
        uVar6 = uVar6 + 0x20;
      } while ((int)uVar6 < 0xfe1);
    }
    if ((int)uVar6 < 0xff1) {
      auVar14 = vmovdqu64_avx512vl(*(undefined1 (*) [16])(*param_1 + uVar10));
      auVar27 = (undefined1  [48])0x0;
      uVar2 = vptestmb_avx512vl(ZEXT1632(auVar14),ZEXT1632(auVar14));
      uVar1 = vpcmpb_avx512vl(auVar14,*(undefined1 (*) [16])(*param_2 + uVar10),0);
      uVar7 = ((uint)uVar2 & 0xffff & (uint)uVar1) - 0xffff;
      if (uVar7 != 0) goto LAB_007543d0;
      uVar10 = (ulong)((int)uVar10 + 0x10);
      uVar6 = uVar6 + 0x10;
    }
    if ((int)uVar6 < 0xff9) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = *(ulong *)(*param_1 + uVar10);
      auVar25._16_48_ = auVar27;
      auVar25._0_16_ = auVar14;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = *(ulong *)(*param_2 + uVar10);
      uVar2 = vptestmb_avx512vl(auVar25._0_32_,auVar25._0_32_);
      uVar1 = vpcmpb_avx512vl(auVar14,auVar28,0);
      uVar7 = ((uint)uVar2 & 0xffff & (uint)uVar1 & 0xff) - 0xff;
      if (uVar7 != 0) goto LAB_007543d0;
      uVar10 = (ulong)((int)uVar10 + 8);
      uVar6 = uVar6 + 8;
    }
    if ((int)uVar6 < 0xffd) {
      auVar26._0_16_ = ZEXT416(*(uint *)(*param_1 + uVar10));
      auVar26._16_48_ = auVar27;
      uVar2 = vptestmb_avx512vl(auVar26._0_32_,auVar26._0_32_);
      uVar1 = vpcmpb_avx512vl(auVar26._0_16_,ZEXT416(*(uint *)(*param_2 + uVar10)),0);
      uVar7 = ((uint)uVar2 & 0xffff & (uint)uVar1) - 0xf;
      if (uVar7 != 0) {
LAB_007543d0:
        uVar6 = 0;
        for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        return (uint)(byte)(*param_1)[uVar6 + uVar10] - (uint)(byte)(*param_2)[uVar6 + uVar10];
      }
      uVar10 = (ulong)((int)uVar10 + 4);
    }
    uVar6 = (uint)(byte)(*param_1)[uVar10];
    uVar7 = (uint)(byte)(*param_2)[uVar10];
    if ((*param_1)[uVar10] == 0) {
      return uVar6 - uVar7;
    }
    while( true ) {
      if (uVar6 - uVar7 != 0) {
        return uVar6 - uVar7;
      }
      uVar6 = (int)uVar10 + 1;
      uVar10 = (ulong)uVar6;
      if (uVar6 == 0x80) break;
      uVar6 = (uint)(byte)(*param_1)[uVar10];
      uVar7 = (uint)(byte)(*param_2)[uVar10];
      if ((*param_1)[uVar10] == 0) {
        return uVar6 - uVar7;
      }
    }
  }
  lVar8 = ((ulong)(param_1 + 4) & 0xffffffffffffff80) - (long)param_1;
  param_1 = (undefined1 (*) [32])((long)param_1 + lVar8);
  param_2 = (undefined1 (*) [32])(lVar8 + (long)param_2);
  uVar10 = 0x1000 - (ulong)((uint)param_2 & 0xfff) >> 7 & 0xffffffff;
  while( true ) {
    iVar9 = (int)uVar10;
    uVar10 = (ulong)(iVar9 - 1);
    if (iVar9 == 0) {
      uVar6 = (uint)param_2 & 0x7f;
      lVar8 = -(ulong)uVar6;
      if (uVar6 < 0x40) {
        auVar15 = vmovdqu64_avx512vl(*(undefined1 (*) [32])((long)param_1 + lVar8));
        auVar16 = vmovdqu64_avx512vl(*(undefined1 (*) [32])((long)param_1 + lVar8 + 0x20));
        uVar3 = vptestmb_avx512vl(auVar15,auVar15);
        uVar1 = vpcmpb_avx512vl(auVar15,*(undefined1 (*) [32])((long)param_2 + lVar8),0);
        uVar4 = vptestmb_avx512vl(auVar16,auVar16);
        uVar2 = vpcmpb_avx512vl(auVar16,*(undefined1 (*) [32])((long)param_2 + lVar8 + 0x20),0);
        uVar10 = CONCAT44(~((uint)uVar4 & (uint)uVar2),~((uint)uVar3 & (uint)uVar1)) >>
                 ((ulong)uVar6 & 0x3f);
        if (uVar10 != 0) {
          lVar8 = 0;
          for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000) {
            lVar8 = lVar8 + 1;
          }
          return (uint)(byte)(*param_1)[lVar8] - (uint)(byte)(*param_2)[lVar8];
        }
      }
      auVar15 = vmovdqu64_avx512vl(*(undefined1 (*) [32])((long)param_1 + lVar8 + 0x40));
      auVar16 = vmovdqu64_avx512vl(*(undefined1 (*) [32])((long)param_1 + lVar8 + 0x60));
      uVar3 = vptestmb_avx512vl(auVar15,auVar15);
      uVar1 = vpcmpb_avx512vl(auVar15,*(undefined1 (*) [32])((long)param_2 + lVar8 + 0x40),0);
      uVar4 = vptestmb_avx512vl(auVar16,auVar16);
      uVar2 = vpcmpb_avx512vl(auVar16,*(undefined1 (*) [32])((long)param_2 + lVar8 + 0x60),0);
      uVar11 = CONCAT44(~((uint)uVar4 & (uint)uVar2),~((uint)uVar3 & (uint)uVar1));
      uVar12 = 0;
      uVar7 = uVar6 - 0x40;
      if (uVar7 != 0 && 0x3f < uVar6) {
        uVar12 = (ulong)uVar7;
        uVar11 = uVar11 >> ((byte)uVar7 & 0x3f);
      }
      uVar10 = 0x1f;
      if (uVar11 != 0) {
        lVar5 = 0;
        for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x8000000000000000) {
          lVar5 = lVar5 + 1;
        }
        lVar8 = lVar5 + lVar8 + uVar12;
        return (uint)*(byte *)((long)param_1 + lVar8 + 0x40) -
               (uint)*(byte *)((long)param_2 + lVar8 + 0x40);
      }
    }
    auVar15 = vmovdqa64_avx512vl(*param_1);
    auVar16 = vmovdqa64_avx512vl(param_1[1]);
    auVar17 = vmovdqa64_avx512vl(param_1[2]);
    auVar18 = vmovdqa64_avx512vl(param_1[3]);
    auVar19 = vpminub_avx512vl(auVar16,auVar15);
    auVar20 = vpminub_avx512vl(auVar18,auVar17);
    auVar19 = vpminub_avx512vl(auVar20,auVar19);
    uVar2 = vptestmb_avx512vl(auVar19,auVar19);
    auVar19 = vpxorq_avx512vl(auVar15,*param_2);
    auVar20 = vpxorq_avx512vl(auVar16,param_2[1]);
    auVar21 = vpxorq_avx512vl(auVar17,param_2[2]);
    auVar22 = vpxorq_avx512vl(auVar18,param_2[3]);
    auVar23 = vporq_avx512vl(auVar20,auVar19);
    auVar24 = vporq_avx512vl(auVar22,auVar21);
    auVar23 = vporq_avx512vl(auVar24,auVar23);
    uVar1 = vpcmpb_avx512vl(auVar23,ZEXT1632(auVar13),0);
    if (((uint)uVar2 & (uint)uVar1) != 0xffffffff) break;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  }
  uVar2 = vptestmb_avx512vl(auVar15,auVar15);
  uVar1 = vpcmpb_avx512vl(auVar19,ZEXT1632(auVar13),0);
  uVar6 = ((uint)uVar2 & (uint)uVar1) + 1;
  if (uVar6 != 0) {
    uVar7 = 0;
    for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    return (uint)(byte)(*param_1)[uVar7] - (uint)(byte)(*param_2)[uVar7];
  }
  uVar2 = vptestmb_avx512vl(auVar16,auVar16);
  auVar15 = ZEXT1632(auVar13);
  uVar1 = vpcmpb_avx512vl(auVar20,auVar15,0);
  uVar6 = ((uint)uVar2 & (uint)uVar1) + 1;
  if (uVar6 == 0) {
    uVar2 = vptestmb_avx512vl(auVar17,auVar17);
    uVar1 = vpcmpb_avx512vl(auVar21,auVar15,0);
    uVar6 = ((uint)uVar2 & (uint)uVar1) + 1;
    if (uVar6 == 0) {
      uVar2 = vptestmb_avx512vl(auVar18,auVar18);
      uVar1 = vpcmpb_avx512vl(auVar22,auVar15,0);
      uVar6 = 0;
      for (uVar7 = ((uint)uVar2 & (uint)uVar1) + 1; (uVar7 & 1) == 0;
          uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      return (uint)(byte)param_1[3][uVar6] - (uint)(byte)param_2[3][uVar6];
    }
    uVar7 = 0;
    for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    return (uint)(byte)param_1[2][uVar7] - (uint)(byte)param_2[2][uVar7];
  }
  uVar7 = 0;
  for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
    uVar7 = uVar7 + 1;
  }
  return (uint)(byte)param_1[1][uVar7] - (uint)(byte)param_2[1][uVar7];
}

