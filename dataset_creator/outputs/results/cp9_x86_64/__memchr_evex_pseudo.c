
undefined1 * __memchr_evex(undefined1 (*param_1) [32],undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  sbyte sVar6;
  uint uVar7;
  undefined1 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 (*pauVar13) [32];
  bool bVar14;
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  
  if (param_3 == 0) {
    return (undefined1 *)0x0;
  }
  auVar15 = vpbroadcastb_avx512vl();
  uVar10 = (uint)param_1;
  if ((uVar10 & 0xfff) < 0xfe1) {
    uVar3 = vpcmpb_avx512vl(auVar15,*param_1,0);
    uVar7 = (uint)uVar3;
    if (param_3 < 0x21) {
LAB_00748480:
      uVar10 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar10 = uVar10 + 1;
      }
      puVar8 = *param_1 + uVar10;
      if ((int)param_3 <= (int)uVar10) {
        puVar8 = (undefined1 *)0x0;
      }
      return puVar8;
    }
    if (uVar7 != 0) {
      uVar10 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar10 = uVar10 + 1;
      }
      return *param_1 + uVar10;
    }
  }
  else {
    uVar3 = vpcmpb_avx512vl(auVar15,*(undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0),0);
    uVar7 = (int)uVar3 >> (uVar10 & 0x1f);
    if (param_3 <= 0x1000 - (uVar10 & 0xfff)) goto LAB_00748480;
    if (uVar7 != 0) {
      uVar10 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar10 = uVar10 + 1;
      }
      return *param_1 + uVar10;
    }
  }
  param_1 = (undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0);
  uVar12 = (ulong)(((int)param_1 + 0xa0) - uVar10);
  uVar3 = vpcmpb_avx512vl(auVar15,param_1[1],0);
  uVar10 = (uint)uVar3;
  uVar11 = param_3 - uVar12;
  if (uVar12 <= param_3 && uVar11 != 0) {
    if (uVar10 != 0) {
      uVar7 = 0;
      for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      return param_1[1] + uVar7;
    }
    uVar3 = vpcmpb_avx512vl(auVar15,param_1[2],0);
    uVar10 = (uint)uVar3;
    if (uVar10 != 0) {
      uVar7 = 0;
      for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      return param_1[2] + uVar7;
    }
    uVar3 = vpcmpb_avx512vl(auVar15,param_1[3],0);
    uVar10 = (uint)uVar3;
    if (uVar10 != 0) {
      uVar7 = 0;
      for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      return param_1[3] + uVar7;
    }
    uVar3 = vpcmpb_avx512vl(auVar15,param_1[4],0);
    uVar10 = (uint)uVar3;
    if (uVar10 != 0) {
      uVar7 = 0;
      for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      return param_1[4] + uVar7;
    }
    bVar14 = uVar11 < 0x80;
    uVar11 = uVar11 - 0x80;
    if (bVar14 || uVar11 == 0) {
      uVar12 = vpcmpb_avx512vl(auVar15,param_1[5],0);
      uVar10 = (uint)uVar12;
      puVar8 = (undefined1 *)(uVar12 & 0xffffffff);
      param_1 = param_1 + 4;
      if (uVar10 != 0) goto LAB_00748600;
      uVar10 = (int)uVar11 + 0x40;
      if (uVar10 != 0 && SCARRY4((int)uVar11,0x40) == (int)uVar10 < 0) goto LAB_00748690;
      goto LAB_007485d6;
    }
    pauVar13 = (undefined1 (*) [32])((ulong)(param_1 + 5) & 0xffffffffffffff80);
    uVar11 = (long)(param_1 + 5) + (uVar11 - (long)pauVar13);
    auVar16 = vmovdqa64_avx512vl(auVar15);
    do {
      param_1 = pauVar13;
      uVar12 = vpcmpb_avx512vl(auVar15,*param_1,0);
      uVar10 = (uint)uVar12;
      auVar1 = vpcmpeqb_avx2(auVar16,param_1[1]);
      auVar2 = vpcmpeqb_avx2(auVar16,param_1[2]);
      auVar17 = vpcmpeqb_avx2(auVar16,param_1[3]);
      auVar17 = vpternlogd_avx512vl(auVar17,auVar2,auVar1,0xfe);
      lVar9 = (ulong)((uint)(SUB321(auVar17 >> 7,0) & 1) | (uint)(SUB321(auVar17 >> 0xf,0) & 1) << 1
                      | (uint)(SUB321(auVar17 >> 0x17,0) & 1) << 2 |
                      (uint)(SUB321(auVar17 >> 0x1f,0) & 1) << 3 |
                      (uint)(SUB321(auVar17 >> 0x27,0) & 1) << 4 |
                      (uint)(SUB321(auVar17 >> 0x2f,0) & 1) << 5 |
                      (uint)(SUB321(auVar17 >> 0x37,0) & 1) << 6 |
                      (uint)(SUB321(auVar17 >> 0x3f,0) & 1) << 7 |
                      (uint)(SUB321(auVar17 >> 0x47,0) & 1) << 8 |
                      (uint)(SUB321(auVar17 >> 0x4f,0) & 1) << 9 |
                      (uint)(SUB321(auVar17 >> 0x57,0) & 1) << 10 |
                      (uint)(SUB321(auVar17 >> 0x5f,0) & 1) << 0xb |
                      (uint)(SUB321(auVar17 >> 0x67,0) & 1) << 0xc |
                      (uint)(SUB321(auVar17 >> 0x6f,0) & 1) << 0xd |
                      (uint)(SUB321(auVar17 >> 0x77,0) & 1) << 0xe |
                      (uint)SUB321(auVar17 >> 0x7f,0) << 0xf |
                      (uint)(SUB321(auVar17 >> 0x87,0) & 1) << 0x10 |
                      (uint)(SUB321(auVar17 >> 0x8f,0) & 1) << 0x11 |
                      (uint)(SUB321(auVar17 >> 0x97,0) & 1) << 0x12 |
                      (uint)(SUB321(auVar17 >> 0x9f,0) & 1) << 0x13 |
                      (uint)(SUB321(auVar17 >> 0xa7,0) & 1) << 0x14 |
                      (uint)(SUB321(auVar17 >> 0xaf,0) & 1) << 0x15 |
                      (uint)(SUB321(auVar17 >> 0xb7,0) & 1) << 0x16 |
                      (uint)SUB321(auVar17 >> 0xbf,0) << 0x17 |
                      (uint)(SUB321(auVar17 >> 199,0) & 1) << 0x18 |
                      (uint)(SUB321(auVar17 >> 0xcf,0) & 1) << 0x19 |
                      (uint)(SUB321(auVar17 >> 0xd7,0) & 1) << 0x1a |
                      (uint)(SUB321(auVar17 >> 0xdf,0) & 1) << 0x1b |
                      (uint)(SUB321(auVar17 >> 0xe7,0) & 1) << 0x1c |
                      (uint)(SUB321(auVar17 >> 0xef,0) & 1) << 0x1d |
                      (uint)(SUB321(auVar17 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar17[0x1f] >> 7) << 0x1f) + (uVar12 & 0xffffffff);
      if (lVar9 != 0) {
        if (uVar10 != 0) {
          uVar7 = 0;
          for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          return *param_1 + uVar7;
        }
        uVar10 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
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
                 (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 |
                 (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 |
                 (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19 |
                 (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
                 (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
                 (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
                 (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
                 (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f;
        if (uVar10 != 0) {
          uVar7 = 0;
          for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          return param_1[1] + uVar7;
        }
        lVar5 = 0;
        for (uVar11 = (ulong)((uint)(SUB321(auVar2 >> 7,0) & 1) |
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
                             (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f) | lVar9 << 0x20;
            (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x8000000000000000) {
          lVar5 = lVar5 + 1;
        }
        return param_1[2] + lVar5;
      }
      bVar14 = 0x7f < uVar11;
      uVar11 = uVar11 - 0x80;
      pauVar13 = param_1 + 4;
    } while (bVar14 && uVar11 != 0);
    uVar3 = vpcmpb_avx512vl(auVar15,param_1[4],0);
    uVar10 = (uint)uVar3;
    param_1 = param_1 + 3;
  }
  puVar8 = (undefined1 *)(ulong)uVar10;
  if (uVar10 != 0) {
LAB_00748600:
    uVar7 = 0;
    for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    if ((int)uVar11 + 0x80U <= uVar7) {
      return (undefined1 *)0x0;
    }
    return param_1[1] + uVar7;
  }
  uVar10 = (int)uVar11 + 0x40;
  if (uVar10 != 0 && SCARRY4((int)uVar11,0x40) == (int)uVar10 < 0) {
LAB_00748690:
    uVar3 = vpcmpb_avx512vl(auVar15,param_1[2],0);
    uVar7 = (uint)uVar3;
    if (uVar7 != 0) {
      uVar10 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar10 = uVar10 + 1;
      }
      return param_1[2] + uVar10;
    }
    uVar3 = vpcmpb_avx512vl(auVar15,param_1[3],0);
    sVar6 = ((byte)uVar10 < 0x41) * ('@' - (byte)uVar10);
    uVar11 = (ulong)(-1L << sVar6) >> sVar6;
    uVar7 = (uint)uVar3 & (uint)uVar11;
    puVar8 = (undefined1 *)(ulong)uVar7;
    if (uVar7 != 0) {
      uVar10 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar10 = uVar10 + 1;
      }
      return param_1[3] + uVar10;
    }
    if (0x20 < uVar10) {
      uVar3 = vpcmpb_avx512vl(auVar15,param_1[4],0);
      uVar10 = (uint)uVar3 & (uint)(uVar11 >> 0x20);
      puVar8 = (undefined1 *)(ulong)uVar10;
      if (uVar10 != 0) {
        uVar7 = 0;
        for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        puVar8 = param_1[4] + uVar7;
      }
    }
    return puVar8;
  }
LAB_007485d6:
  if (uVar10 != 0xffffffe0 && SCARRY4(uVar10,0x20) == (int)(uVar10 + 0x20) < 0) {
    uVar3 = vpcmpb_avx512vl(auVar15,param_1[2],0);
    uVar7 = 0;
    for (uVar4 = (uint)uVar3; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    if (uVar10 + 0x20 <= uVar7) {
      return (undefined1 *)0x0;
    }
    puVar8 = param_1[2] + uVar7;
  }
  return puVar8;
}

