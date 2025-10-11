
undefined1 * __rawmemchr_evex(undefined1 (*param_1) [32])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  undefined1 (*pauVar6) [32];
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 (*pauVar10) [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  
  auVar11 = vpbroadcastb_avx512vl();
  if (((uint)param_1 & 0xfff) < 0xfe1) {
    uVar3 = vpcmpb_avx512vl(auVar11,*param_1,0);
    uVar7 = (uint)uVar3;
    if (uVar7 != 0) {
      uVar4 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      return *param_1 + uVar4;
    }
  }
  else {
    uVar3 = vpcmpb_avx512vl(auVar11,*(undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0),0);
    uVar7 = (int)uVar3 >> ((uint)param_1 & 0x1f);
    if (uVar7 != 0) {
      uVar4 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      return *param_1 + uVar4;
    }
  }
  uVar8 = (ulong)param_1 & 0xffffffffffffffe0;
  uVar3 = vpcmpb_avx512vl(auVar11,*(undefined1 (*) [32])(uVar8 + 0x20),0);
  uVar7 = (uint)uVar3;
  if (uVar7 != 0) {
    uVar4 = 0;
    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    return (undefined1 *)(uVar8 + 0x20 + (ulong)uVar4);
  }
  uVar3 = vpcmpb_avx512vl(auVar11,*(undefined1 (*) [32])(uVar8 + 0x40),0);
  uVar7 = (uint)uVar3;
  if (uVar7 != 0) {
    uVar4 = 0;
    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    return (undefined1 *)(uVar8 + 0x40 + (ulong)uVar4);
  }
  uVar3 = vpcmpb_avx512vl(auVar11,*(undefined1 (*) [32])(uVar8 + 0x60),0);
  uVar7 = (uint)uVar3;
  if (uVar7 != 0) {
    uVar4 = 0;
    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    return (undefined1 *)(uVar8 + 0x60 + (ulong)uVar4);
  }
  uVar3 = vpcmpb_avx512vl(auVar11,*(undefined1 (*) [32])(uVar8 + 0x80),0);
  uVar7 = (uint)uVar3;
  if (uVar7 != 0) {
    uVar4 = 0;
    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    return (undefined1 *)(uVar8 + 0x80 + (ulong)uVar4);
  }
  auVar12 = vmovdqa64_avx512vl(auVar11);
  pauVar6 = (undefined1 (*) [32])(uVar8 + 0xa0 & 0xffffffffffffff80);
  do {
    pauVar10 = pauVar6;
    uVar8 = vpcmpb_avx512vl(auVar11,*pauVar10,0);
    uVar7 = (uint)uVar8;
    auVar1 = vpcmpeqb_avx2(auVar12,pauVar10[1]);
    auVar2 = vpcmpeqb_avx2(auVar12,pauVar10[2]);
    auVar13 = vpcmpeqb_avx2(auVar12,pauVar10[3]);
    auVar13 = vpternlogd_avx512vl(auVar13,auVar2,auVar1,0xfe);
    lVar9 = (ulong)((uint)(SUB321(auVar13 >> 7,0) & 1) | (uint)(SUB321(auVar13 >> 0xf,0) & 1) << 1 |
                    (uint)(SUB321(auVar13 >> 0x17,0) & 1) << 2 |
                    (uint)(SUB321(auVar13 >> 0x1f,0) & 1) << 3 |
                    (uint)(SUB321(auVar13 >> 0x27,0) & 1) << 4 |
                    (uint)(SUB321(auVar13 >> 0x2f,0) & 1) << 5 |
                    (uint)(SUB321(auVar13 >> 0x37,0) & 1) << 6 |
                    (uint)(SUB321(auVar13 >> 0x3f,0) & 1) << 7 |
                    (uint)(SUB321(auVar13 >> 0x47,0) & 1) << 8 |
                    (uint)(SUB321(auVar13 >> 0x4f,0) & 1) << 9 |
                    (uint)(SUB321(auVar13 >> 0x57,0) & 1) << 10 |
                    (uint)(SUB321(auVar13 >> 0x5f,0) & 1) << 0xb |
                    (uint)(SUB321(auVar13 >> 0x67,0) & 1) << 0xc |
                    (uint)(SUB321(auVar13 >> 0x6f,0) & 1) << 0xd |
                    (uint)(SUB321(auVar13 >> 0x77,0) & 1) << 0xe |
                    (uint)SUB321(auVar13 >> 0x7f,0) << 0xf |
                    (uint)(SUB321(auVar13 >> 0x87,0) & 1) << 0x10 |
                    (uint)(SUB321(auVar13 >> 0x8f,0) & 1) << 0x11 |
                    (uint)(SUB321(auVar13 >> 0x97,0) & 1) << 0x12 |
                    (uint)(SUB321(auVar13 >> 0x9f,0) & 1) << 0x13 |
                    (uint)(SUB321(auVar13 >> 0xa7,0) & 1) << 0x14 |
                    (uint)(SUB321(auVar13 >> 0xaf,0) & 1) << 0x15 |
                    (uint)(SUB321(auVar13 >> 0xb7,0) & 1) << 0x16 |
                    (uint)SUB321(auVar13 >> 0xbf,0) << 0x17 |
                    (uint)(SUB321(auVar13 >> 199,0) & 1) << 0x18 |
                    (uint)(SUB321(auVar13 >> 0xcf,0) & 1) << 0x19 |
                    (uint)(SUB321(auVar13 >> 0xd7,0) & 1) << 0x1a |
                    (uint)(SUB321(auVar13 >> 0xdf,0) & 1) << 0x1b |
                    (uint)(SUB321(auVar13 >> 0xe7,0) & 1) << 0x1c |
                    (uint)(SUB321(auVar13 >> 0xef,0) & 1) << 0x1d |
                    (uint)(SUB321(auVar13 >> 0xf7,0) & 1) << 0x1e |
                   (uint)(byte)(auVar13[0x1f] >> 7) << 0x1f) + (uVar8 & 0xffffffff);
    pauVar6 = pauVar10 + 4;
  } while (lVar9 == 0);
  if (uVar7 != 0) {
    uVar4 = 0;
    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    return *pauVar10 + uVar4;
  }
  uVar7 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar1 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar1 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar1 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar1 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar1 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19
          | (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f;
  if (uVar7 != 0) {
    uVar4 = 0;
    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    return pauVar10[1] + uVar4;
  }
  lVar5 = 0;
  for (uVar8 = (ulong)((uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1
                       | (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 |
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
                      (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f) | lVar9 << 0x20; (uVar8 & 1) == 0;
      uVar8 = uVar8 >> 1 | 0x8000000000000000) {
    lVar5 = lVar5 + 1;
  }
  return pauVar10[2] + lVar5;
}

