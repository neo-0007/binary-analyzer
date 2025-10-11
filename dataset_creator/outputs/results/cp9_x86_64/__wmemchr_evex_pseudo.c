
undefined1 * __wmemchr_evex(undefined1 (*param_1) [32],undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined8 uVar3;
  long lVar4;
  sbyte sVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 (*pauVar13) [32];
  undefined1 (*pauVar14) [32];
  bool bVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar19 [32];
  undefined1 auVar18 [32];
  
  if (param_3 == 0) {
    return (undefined1 *)0x0;
  }
  auVar16 = vpbroadcastd_avx512vl();
  uVar6 = (uint)param_1 & 0xfff;
  if (uVar6 < 0xfe1) {
    uVar3 = vpcmpd_avx512vl(auVar16,*param_1,0);
    uVar7 = (uint)uVar3;
    if (param_3 < 9) {
LAB_00756400:
      uVar6 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      puVar8 = *param_1 + (ulong)uVar6 * 4;
      if ((int)param_3 <= (int)uVar6) {
        puVar8 = (undefined1 *)0x0;
      }
      return puVar8;
    }
    if (uVar7 != 0) {
      uVar6 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      return *param_1 + (ulong)uVar6 * 4;
    }
  }
  else {
    uVar3 = vpcmpd_avx512vl(auVar16,*(undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0),0);
    uVar6 = (int)uVar6 >> 2;
    uVar7 = (int)uVar3 >> (uVar6 & 7);
    if (param_3 <= 0x400 - uVar6) goto LAB_00756400;
    if (uVar7 != 0) {
      uVar6 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      return *param_1 + (ulong)uVar6 * 4;
    }
  }
  pauVar13 = (undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0);
  uVar12 = (ulong)(uint)((int)(((int)pauVar13 + 0xa0) - (uint)param_1) >> 2);
  uVar3 = vpcmpd_avx512vl(auVar16,pauVar13[1],0);
  uVar6 = (uint)uVar3;
  uVar11 = param_3 - uVar12;
  if (uVar12 <= param_3 && uVar11 != 0) {
    if (uVar6 != 0) {
      uVar7 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      return pauVar13[1] + (ulong)uVar7 * 4;
    }
    uVar3 = vpcmpd_avx512vl(auVar16,pauVar13[2],0);
    uVar6 = (uint)uVar3;
    if (uVar6 != 0) {
      uVar7 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      return pauVar13[2] + (ulong)uVar7 * 4;
    }
    uVar3 = vpcmpd_avx512vl(auVar16,pauVar13[3],0);
    uVar6 = (uint)uVar3;
    if (uVar6 != 0) {
      uVar7 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      return pauVar13[3] + (ulong)uVar7 * 4;
    }
    uVar3 = vpcmpd_avx512vl(auVar16,pauVar13[4],0);
    uVar6 = (uint)uVar3;
    if (uVar6 != 0) {
      uVar7 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      return pauVar13[4] + (ulong)uVar7 * 4;
    }
    bVar15 = uVar11 < 0x20;
    uVar11 = uVar11 - 0x20;
    if (bVar15 || uVar11 == 0) {
      uVar3 = vpcmpd_avx512vl(auVar16,pauVar13[5],0);
      uVar6 = (uint)uVar3;
      pauVar13 = pauVar13 + 4;
      if (uVar6 != 0) goto LAB_00756590;
      uVar6 = (int)uVar11 + 0x10;
      if (uVar6 != 0 && SCARRY4((int)uVar11,0x10) == (int)uVar6 < 0) goto LAB_00756620;
      goto LAB_0075656e;
    }
    pauVar14 = (undefined1 (*) [32])((ulong)(pauVar13 + 5) & 0xffffffffffffff80);
    uVar11 = uVar11 + (uint)((int)(pauVar13 + 5) - (int)pauVar14 >> 2);
    auVar17 = vmovdqa64_avx512vl(auVar16);
    do {
      pauVar13 = pauVar14;
      uVar12 = vpcmpd_avx512vl(auVar16,*pauVar13,4);
      auVar1 = vpcmpeqd_avx2(auVar17,pauVar13[1]);
      auVar2 = vpcmpeqd_avx2(auVar17,pauVar13[2]);
      auVar18 = vpcmpeqd_avx2(auVar17,pauVar13[3]);
      auVar18 = vpternlogd_avx512vl(auVar18,auVar2,auVar1,1);
      auVar19._4_4_ = (uint)((byte)(uVar12 >> 1) & 1) * auVar18._4_4_;
      auVar19._0_4_ = (uint)((byte)uVar12 & 1) * auVar18._0_4_;
      auVar19._8_4_ = (uint)((byte)(uVar12 >> 2) & 1) * auVar18._8_4_;
      auVar19._12_4_ = (uint)((byte)(uVar12 >> 3) & 1) * auVar18._12_4_;
      auVar19._16_4_ = (uint)((byte)(uVar12 >> 4) & 1) * auVar18._16_4_;
      auVar19._20_4_ = (uint)((byte)(uVar12 >> 5) & 1) * auVar18._20_4_;
      auVar19._24_4_ = (uint)((byte)(uVar12 >> 6) & 1) * auVar18._24_4_;
      uVar6 = (uint)(byte)(uVar12 >> 7) * auVar18._28_4_;
      auVar19._28_4_ = uVar6;
      iVar9 = ((uint)(SUB321(auVar19 >> 7,0) & 1) | (uint)(SUB321(auVar19 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar19 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar19 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar19 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar19 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar19 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar19 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar19 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar19 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar19 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar19 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar19 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar19 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar19 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar19 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar19 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar19 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar19 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar19 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar19 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar19 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar19 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar19 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar19 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar19 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar19 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar19 >> 0xdf,0) & 1) << 0x1b |
               (uint)((byte)(uVar6 >> 7) & 1) << 0x1c | (uint)((byte)(uVar6 >> 0xf) & 1) << 0x1d |
               (uint)((byte)(uVar6 >> 0x17) & 1) << 0x1e | uVar6 & 0x80000000) + 1;
      if (iVar9 != 0) {
        uVar6 = (int)uVar12 - 0xff;
        if (uVar6 != 0) {
          uVar7 = 0;
          for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          return *pauVar13 + (ulong)uVar7 * 4;
        }
        uVar6 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf
                | (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auVar1 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auVar1 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auVar1 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auVar1 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auVar1 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e |
                (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f;
        if (uVar6 != 0) {
          uVar7 = 0;
          for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          return pauVar13[1] + uVar7;
        }
        lVar4 = 0;
        for (uVar11 = CONCAT44(iVar9,(uint)(SUB321(auVar2 >> 7,0) & 1) |
                                     (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
                                     (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 |
                                     (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3 |
                                     (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
                                     (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 |
                                     (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6 |
                                     (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
                                     (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 |
                                     (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9 |
                                     (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
                                     (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
                                     (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
                                     (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
                                     (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe |
                                     (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
                                     (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
                                     (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
                                     (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
                                     (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
                                     (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
                                     (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
                                     (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 |
                                     (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 |
                                     (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
                                     (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
                                     (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
                                     (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
                                     (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
                                     (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
                                     (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
                                     (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f); (uVar11 & 1) == 0;
            uVar11 = uVar11 >> 1 | 0x8000000000000000) {
          lVar4 = lVar4 + 1;
        }
        return pauVar13[2] + lVar4;
      }
      bVar15 = 0x1f < uVar11;
      uVar11 = uVar11 - 0x20;
      pauVar14 = pauVar13 + 4;
    } while (bVar15 && uVar11 != 0);
    uVar3 = vpcmpd_avx512vl(auVar16,pauVar13[4],0);
    uVar6 = (uint)uVar3;
    pauVar13 = pauVar13 + 3;
  }
  if (uVar6 != 0) {
LAB_00756590:
    uVar7 = 0;
    for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    if ((int)uVar11 + 0x20U <= uVar7) {
      return (undefined1 *)0x0;
    }
    return pauVar13[1] + (ulong)uVar7 * 4;
  }
  uVar6 = (int)uVar11 + 0x10;
  if (uVar6 != 0 && SCARRY4((int)uVar11,0x10) == (int)uVar6 < 0) {
LAB_00756620:
    uVar3 = vpcmpd_avx512vl(auVar16,pauVar13[2],0);
    uVar7 = (uint)uVar3;
    if (uVar7 != 0) {
      uVar6 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      return pauVar13[2] + (ulong)uVar6 * 4;
    }
    uVar3 = vpcmpd_avx512vl(auVar16,pauVar13[3],0);
    sVar5 = ((byte)uVar6 < 0x21) * (' ' - (byte)uVar6);
    uVar10 = (uint)(0xffff << sVar5) >> sVar5;
    uVar7 = (uint)uVar3 & uVar10;
    puVar8 = (undefined1 *)(ulong)uVar7;
    if (uVar7 != 0) {
      uVar6 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      return pauVar13[3] + (ulong)uVar6 * 4;
    }
    if (8 < uVar6) {
      uVar3 = vpcmpd_avx512vl(auVar16,pauVar13[4],0);
      uVar6 = (uint)uVar3 & uVar10 >> 8;
      puVar8 = (undefined1 *)(ulong)uVar6;
      if (uVar6 != 0) {
        uVar7 = 0;
        for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        puVar8 = pauVar13[4] + (ulong)uVar7 * 4;
      }
    }
    return puVar8;
  }
LAB_0075656e:
  puVar8 = (undefined1 *)0x0;
  if (uVar6 != 0xfffffff8 && SCARRY4(uVar6,8) == (int)(uVar6 + 8) < 0) {
    uVar3 = vpcmpd_avx512vl(auVar16,pauVar13[2],0);
    uVar7 = 0;
    for (uVar10 = (uint)uVar3; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    if (uVar6 + 8 <= uVar7) {
      return (undefined1 *)0x0;
    }
    puVar8 = pauVar13[2] + (ulong)uVar7 * 4;
  }
  return puVar8;
}

