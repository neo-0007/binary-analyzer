
int FUN_00754aa0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 in_ZMM16 [64];
  undefined1 in_ZMM17 [64];
  undefined1 auVar29 [48];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar30 [16];
  
  auVar29 = in_ZMM17._16_48_;
  if (param_3 == 1) {
    return (uint)(byte)(*param_1)[0] - (uint)(byte)(*param_2)[0];
  }
  if (param_3 == 0) {
    return 0;
  }
  uVar9 = 0;
  auVar15 = vpxorq_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
  uVar7 = ((uint)param_1 | (uint)param_2) & 0xfff;
  if (uVar7 < 0xf81) {
    auVar17 = vmovdqu64_avx512vl(*param_1);
    uVar2 = vptestmb_avx512vl(auVar17,auVar17);
    uVar1 = vpcmpb_avx512vl(auVar17,*param_2,0);
    uVar7 = ((uint)uVar2 & (uint)uVar1) + 1;
    if (uVar7 != 0) {
      uVar8 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar9 = (ulong)uVar8;
      if (param_3 <= uVar9) {
        return 0;
      }
      return (uint)(byte)(*param_1)[uVar9] - (uint)(byte)(*param_2)[uVar9];
    }
    auVar17 = vmovdqu64_avx512vl(param_1[1]);
    uVar2 = vptestmb_avx512vl(auVar17,auVar17);
    uVar1 = vpcmpb_avx512vl(auVar17,param_2[1],0);
    uVar7 = ((uint)uVar2 & (uint)uVar1) + 1;
    if (uVar7 != 0) {
      uVar8 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar9 = (ulong)uVar8;
      if (param_3 <= uVar9 + 0x20) {
        return 0;
      }
      return (uint)(byte)param_1[1][uVar9] - (uint)(byte)param_2[1][uVar9];
    }
    auVar17 = vmovdqu64_avx512vl(param_1[2]);
    uVar2 = vptestmb_avx512vl(auVar17,auVar17);
    uVar1 = vpcmpb_avx512vl(auVar17,param_2[2],0);
    uVar7 = ((uint)uVar2 & (uint)uVar1) + 1;
    if (uVar7 != 0) {
      uVar8 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar9 = (ulong)uVar8;
      if (param_3 <= uVar9 + 0x40) {
        return 0;
      }
      return (uint)(byte)param_1[2][uVar9] - (uint)(byte)param_2[2][uVar9];
    }
    auVar17 = vmovdqu64_avx512vl(param_1[3]);
    uVar2 = vptestmb_avx512vl(auVar17,auVar17);
    uVar1 = vpcmpb_avx512vl(auVar17,param_2[3],0);
    uVar7 = ((uint)uVar2 & (uint)uVar1) + 1;
    if (uVar7 != 0) {
      uVar8 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar9 = (ulong)uVar8;
      if (param_3 <= uVar9 + 0x60) {
        return 0;
      }
      return (uint)(byte)param_1[3][uVar9] - (uint)(byte)param_2[3][uVar9];
    }
    goto LAB_00754bb7;
  }
  if (uVar7 < 0xfe1) {
    do {
      auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(*param_1 + uVar9));
      auVar29 = ZEXT1648(auVar17._16_16_);
      uVar2 = vptestmb_avx512vl(auVar17,auVar17);
      uVar1 = vpcmpb_avx512vl(auVar17,*(undefined1 (*) [32])(*param_2 + uVar9),0);
      uVar8 = ((uint)uVar2 & (uint)uVar1) + 1;
      if (uVar8 != 0) goto LAB_00754ee0;
      uVar9 = (ulong)((int)uVar9 + 0x20);
      uVar7 = uVar7 + 0x20;
      if (param_3 <= uVar9) {
        return 0;
      }
    } while ((int)uVar7 < 0xfe1);
  }
  if ((int)uVar7 < 0xff1) {
    auVar16 = vmovdqu64_avx512vl(*(undefined1 (*) [16])(*param_1 + uVar9));
    auVar29 = (undefined1  [48])0x0;
    uVar2 = vptestmb_avx512vl(ZEXT1632(auVar16),ZEXT1632(auVar16));
    uVar1 = vpcmpb_avx512vl(auVar16,*(undefined1 (*) [16])(*param_2 + uVar9),0);
    uVar8 = ((uint)uVar2 & 0xffff & (uint)uVar1) - 0xffff;
    if (uVar8 == 0) {
      uVar9 = (ulong)((int)uVar9 + 0x10);
      uVar7 = uVar7 + 0x10;
      if (param_3 <= uVar9) {
        return 0;
      }
      goto LAB_00754f6d;
    }
LAB_00754ee0:
    uVar7 = 0;
    for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar13 = (ulong)uVar7;
    if (uVar13 < param_3 - uVar9) {
      return (uint)(byte)(*param_1)[uVar13 + uVar9] - (uint)(byte)(*param_2)[uVar13 + uVar9];
    }
  }
  else {
LAB_00754f6d:
    if ((int)uVar7 < 0xff9) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = *(ulong *)(*param_1 + uVar9);
      auVar27._16_48_ = auVar29;
      auVar27._0_16_ = auVar16;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = *(ulong *)(*param_2 + uVar9);
      uVar2 = vptestmb_avx512vl(auVar27._0_32_,auVar27._0_32_);
      uVar1 = vpcmpb_avx512vl(auVar16,auVar30,0);
      uVar8 = ((uint)uVar2 & 0xffff & (uint)uVar1 & 0xff) - 0xff;
      if (uVar8 != 0) goto LAB_00754ee0;
      uVar9 = (ulong)((int)uVar9 + 8);
      uVar7 = uVar7 + 8;
      if (param_3 <= uVar9) {
        return 0;
      }
    }
    if ((int)uVar7 < 0xffd) {
      auVar28._0_16_ = ZEXT416(*(uint *)(*param_1 + uVar9));
      auVar28._16_48_ = auVar29;
      uVar2 = vptestmb_avx512vl(auVar28._0_32_,auVar28._0_32_);
      uVar1 = vpcmpb_avx512vl(auVar28._0_16_,ZEXT416(*(uint *)(*param_2 + uVar9)),0);
      uVar8 = ((uint)uVar2 & 0xffff & (uint)uVar1) - 0xf;
      if (uVar8 != 0) goto LAB_00754ee0;
      uVar9 = (ulong)((int)uVar9 + 4);
      if (param_3 <= uVar9) {
        return 0;
      }
    }
    if (uVar9 < param_3) {
      uVar7 = (uint)(byte)(*param_1)[uVar9];
      uVar8 = (uint)(byte)(*param_2)[uVar9];
      if ((*param_1)[uVar9] == 0) {
        return uVar7 - uVar8;
      }
      while( true ) {
        if (uVar7 - uVar8 != 0) {
          return uVar7 - uVar8;
        }
        uVar7 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar7;
        if (uVar7 == 0x80) break;
        if (param_3 <= uVar9) {
          return 0;
        }
        uVar7 = (uint)(byte)(*param_1)[uVar9];
        uVar8 = (uint)(byte)(*param_2)[uVar9];
        if ((*param_1)[uVar9] == 0) {
          return uVar7 - uVar8;
        }
      }
LAB_00754bb7:
      uVar9 = ((ulong)(param_1 + 4) & 0xffffffffffffff80) - (long)param_1;
      param_1 = (undefined1 (*) [32])((long)param_1 + uVar9);
      uVar13 = param_3 - uVar9;
      if (param_3 < uVar9 || uVar13 == 0) {
        return 0;
      }
      param_2 = (undefined1 (*) [32])(uVar9 + (long)param_2);
      uVar9 = 0x1000 - (ulong)((uint)param_2 & 0xfff) >> 7 & 0xffffffff;
      while( true ) {
        iVar10 = (int)uVar9;
        uVar9 = (ulong)(iVar10 - 1);
        if (iVar10 == 0) {
          uVar7 = (uint)param_2 & 0x7f;
          lVar6 = -(ulong)uVar7;
          if (uVar7 < 0x40) {
            auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [32])((long)param_1 + lVar6));
            auVar18 = vmovdqu64_avx512vl(*(undefined1 (*) [32])((long)param_1 + lVar6 + 0x20));
            uVar3 = vptestmb_avx512vl(auVar17,auVar17);
            uVar1 = vpcmpb_avx512vl(auVar17,*(undefined1 (*) [32])((long)param_2 + lVar6),0);
            uVar4 = vptestmb_avx512vl(auVar18,auVar18);
            uVar2 = vpcmpb_avx512vl(auVar18,*(undefined1 (*) [32])((long)param_2 + lVar6 + 0x20),0);
            uVar9 = CONCAT44(~((uint)uVar4 & (uint)uVar2),~((uint)uVar3 & (uint)uVar1)) >>
                    ((ulong)uVar7 & 0x3f);
            if (uVar9 != 0) {
              uVar11 = 0;
              for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
                uVar11 = uVar11 + 1;
              }
              if (uVar13 <= uVar11) {
                return 0;
              }
              return (uint)(byte)(*param_1)[uVar11] - (uint)(byte)(*param_2)[uVar11];
            }
          }
          auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [32])((long)param_1 + lVar6 + 0x40));
          auVar18 = vmovdqu64_avx512vl(*(undefined1 (*) [32])((long)param_1 + lVar6 + 0x60));
          uVar3 = vptestmb_avx512vl(auVar17,auVar17);
          uVar1 = vpcmpb_avx512vl(auVar17,*(undefined1 (*) [32])((long)param_2 + lVar6 + 0x40),0);
          uVar4 = vptestmb_avx512vl(auVar18,auVar18);
          uVar2 = vpcmpb_avx512vl(auVar18,*(undefined1 (*) [32])((long)param_2 + lVar6 + 0x60),0);
          uVar11 = CONCAT44(~((uint)uVar4 & (uint)uVar2),~((uint)uVar3 & (uint)uVar1));
          uVar12 = 0;
          uVar8 = uVar7 - 0x40;
          if (uVar8 != 0 && 0x3f < uVar7) {
            uVar12 = (ulong)uVar8;
            uVar11 = uVar11 >> ((byte)uVar8 & 0x3f);
          }
          uVar9 = 0x1f;
          if (uVar11 != 0) {
            lVar5 = 0;
            for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x8000000000000000) {
              lVar5 = lVar5 + 1;
            }
            uVar9 = lVar5 + lVar6 + uVar12 + 0x40;
            if (uVar13 <= uVar9) {
              return 0;
            }
            return (uint)*(byte *)((long)param_1 + uVar9) - (uint)*(byte *)((long)param_2 + uVar9);
          }
          if (uVar13 <= lVar6 + 0x80U) {
            return 0;
          }
        }
        auVar17 = vmovdqa64_avx512vl(*param_1);
        auVar18 = vmovdqa64_avx512vl(param_1[1]);
        auVar19 = vmovdqa64_avx512vl(param_1[2]);
        auVar20 = vmovdqa64_avx512vl(param_1[3]);
        auVar21 = vpminub_avx512vl(auVar18,auVar17);
        auVar22 = vpminub_avx512vl(auVar20,auVar19);
        auVar21 = vpminub_avx512vl(auVar22,auVar21);
        uVar2 = vptestmb_avx512vl(auVar21,auVar21);
        auVar21 = vpxorq_avx512vl(auVar17,*param_2);
        auVar22 = vpxorq_avx512vl(auVar18,param_2[1]);
        auVar23 = vpxorq_avx512vl(auVar19,param_2[2]);
        auVar24 = vpxorq_avx512vl(auVar20,param_2[3]);
        auVar25 = vporq_avx512vl(auVar22,auVar21);
        auVar26 = vporq_avx512vl(auVar24,auVar23);
        auVar25 = vporq_avx512vl(auVar26,auVar25);
        uVar1 = vpcmpb_avx512vl(auVar25,ZEXT1632(auVar15),0);
        if (((uint)uVar2 & (uint)uVar1) != 0xffffffff) break;
        bVar14 = uVar13 < 0x80;
        uVar13 = uVar13 - 0x80;
        if (bVar14 || uVar13 == 0) {
          return 0;
        }
        param_1 = param_1 + 4;
        param_2 = param_2 + 4;
      }
      uVar2 = vptestmb_avx512vl(auVar17,auVar17);
      uVar1 = vpcmpb_avx512vl(auVar21,ZEXT1632(auVar15),0);
      uVar7 = ((uint)uVar2 & (uint)uVar1) + 1;
      if (uVar7 != 0) {
        uVar8 = 0;
        for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar9 = (ulong)uVar8;
        if (uVar13 <= uVar9) {
          return 0;
        }
        return (uint)(byte)(*param_1)[uVar9] - (uint)(byte)(*param_2)[uVar9];
      }
      if (uVar13 < 0x21) {
        return 0;
      }
      uVar2 = vptestmb_avx512vl(auVar18,auVar18);
      auVar17 = ZEXT1632(auVar15);
      uVar1 = vpcmpb_avx512vl(auVar22,auVar17,0);
      uVar7 = ((uint)uVar2 & (uint)uVar1) + 1;
      if (uVar7 != 0) {
        uVar8 = 0;
        for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar9 = (ulong)uVar8;
        if (uVar13 <= uVar9 + 0x20) {
          return 0;
        }
        return (uint)(byte)param_1[1][uVar9] - (uint)(byte)param_2[1][uVar9];
      }
      if (uVar13 < 0x41) {
        return 0;
      }
      uVar2 = vptestmb_avx512vl(auVar19,auVar19);
      uVar1 = vpcmpb_avx512vl(auVar23,auVar17,0);
      uVar7 = ((uint)uVar2 & (uint)uVar1) + 1;
      if (uVar7 != 0) {
        uVar8 = 0;
        for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar9 = (ulong)uVar8;
        if (uVar13 <= uVar9 + 0x40) {
          return 0;
        }
        return (uint)(byte)param_1[2][uVar9] - (uint)(byte)param_2[2][uVar9];
      }
      if (uVar13 < 0x61) {
        return 0;
      }
      uVar2 = vptestmb_avx512vl(auVar20,auVar20);
      uVar1 = vpcmpb_avx512vl(auVar24,auVar17,0);
      uVar7 = 0;
      for (uVar8 = ((uint)uVar2 & (uint)uVar1) + 1; (uVar8 & 1) == 0;
          uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      uVar9 = (ulong)uVar7;
      if (uVar13 <= uVar9 + 0x60) {
        return 0;
      }
      return (uint)(byte)param_1[3][uVar9] - (uint)(byte)param_2[3][uVar9];
    }
  }
  return 0;
}

