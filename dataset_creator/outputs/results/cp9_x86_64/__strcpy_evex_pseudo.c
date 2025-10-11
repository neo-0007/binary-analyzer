
undefined1 (*) [32]
__strcpy_evex(undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 (*pauVar3) [32];
  uint uVar4;
  ulong uVar6;
  uint uVar7;
  undefined1 (*pauVar8) [32];
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 in_ZMM16 [64];
  ulong uVar5;
  
  pauVar3 = param_1;
  auVar10 = vpxorq_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
  uVar4 = (uint)param_2;
  auVar19 = ZEXT1632(auVar10);
  if ((uVar4 & 0x7f) < 0x41) {
    auVar12 = vmovdqu64_avx512vl(*param_2);
    auVar18 = vmovdqu64_avx512vl(param_2[1]);
    uVar2 = vpcmpb_avx512vl(auVar19,auVar12,0);
    uVar7 = (uint)uVar2;
    if (uVar7 == 0) {
      auVar12 = vmovdqu64_avx512vl(auVar12);
      *param_1 = auVar12;
      uVar2 = vpcmpb_avx512vl(auVar19,auVar18,0);
      uVar7 = (uint)uVar2;
      if (uVar7 == 0) {
        uVar5 = (ulong)(uVar4 & 0x1f);
        goto LAB_0074ab30;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  else {
    pauVar8 = (undefined1 (*) [32])((ulong)param_2 & 0xffffffffffffffe0);
    uVar4 = uVar4 & 0x1f;
    uVar5 = (ulong)uVar4;
    uVar2 = vpcmpb_avx512vl(ZEXT1632(auVar10),*pauVar8,0);
    uVar7 = (uint)(CONCAT44((int)((ulong)param_3 >> 0x20),(int)uVar2) >> (sbyte)uVar4);
    uVar6 = uVar5;
    if (uVar7 == 0) {
      uVar2 = vpcmpb_avx512vl(ZEXT1632(auVar10),pauVar8[1],0);
      uVar7 = (uint)uVar2;
      if (uVar7 != 0) {
        iVar1 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
          }
        }
        param_2 = (undefined1 (*) [32])(*pauVar8 + uVar5);
        uVar5 = (ulong)((iVar1 + 0x20) - uVar4);
        goto LAB_0074ad99;
      }
      auVar12 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(*pauVar8 + uVar5));
      auVar12 = vmovdqu64_avx512vl(auVar12);
      *param_1 = auVar12;
LAB_0074ab30:
      uVar9 = (ulong)param_2 & 0xffffffffffffffe0;
      auVar12 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar9 + 0x20));
      auVar12 = vmovdqu64_avx512vl(auVar12);
      *(undefined1 (*) [32])((long)param_1 + (0x20 - uVar5)) = auVar12;
      auVar12 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar9 + 0x40));
      uVar2 = vpcmpb_avx512vl(auVar19,auVar12,0);
      uVar7 = (uint)uVar2;
      uVar6 = 0x40;
      if (uVar7 == 0) {
        auVar12 = vmovdqu64_avx512vl(auVar12);
        *(undefined1 (*) [32])((long)param_1 + (0x40 - uVar5)) = auVar12;
        auVar12 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar9 + 0x60));
        uVar2 = vpcmpb_avx512vl(auVar19,auVar12,0);
        uVar7 = (uint)uVar2;
        uVar6 = 0x60;
        if (uVar7 == 0) {
          auVar12 = vmovdqu64_avx512vl(auVar12);
          *(undefined1 (*) [32])((long)param_1 + (0x60 - uVar5)) = auVar12;
          auVar12 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar9 + 0x80));
          auVar18 = ZEXT1632(auVar10);
          uVar2 = vpcmpb_avx512vl(auVar18,auVar12,0);
          uVar7 = (uint)uVar2;
          uVar6 = 0x80;
          if (uVar7 == 0) {
            auVar12 = vmovdqu64_avx512vl(auVar12);
            *(undefined1 (*) [32])((long)param_1 + (0x80 - uVar5)) = auVar12;
            auVar12 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar9 + 0xa0));
            uVar2 = vpcmpb_avx512vl(auVar18,auVar12,0);
            uVar7 = (uint)uVar2;
            uVar6 = 0xa0;
            if (uVar7 == 0) {
              auVar12 = vmovdqu64_avx512vl(auVar12);
              *(undefined1 (*) [32])((long)param_1 + (0xa0 - uVar5)) = auVar12;
              auVar12 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar9 + 0xc0));
              uVar2 = vpcmpb_avx512vl(auVar18,auVar12,0);
              uVar7 = (uint)uVar2;
              uVar6 = 0xc0;
              if (uVar7 == 0) {
                auVar13 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar9 + 0xe0));
                auVar12 = vmovdqu64_avx512vl(auVar12);
                *(undefined1 (*) [32])((long)param_1 + (0xc0 - uVar5)) = auVar12;
                uVar2 = vpcmpb_avx512vl(auVar18,auVar13,0);
                uVar7 = (uint)uVar2;
                uVar6 = 0xe0;
                if (uVar7 == 0) {
                  auVar12 = vmovdqu64_avx512vl(auVar13);
                  *(undefined1 (*) [32])((long)param_1 + (0xe0 - uVar5)) = auVar12;
                  param_2 = (undefined1 (*) [32])(uVar9 + 0x100 & 0xffffffffffffff80);
                  auVar12 = vmovdqa64_avx512vl(*param_2);
                  auVar13 = vmovdqa64_avx512vl(param_2[1]);
                  auVar14 = vmovdqa64_avx512vl(param_2[2]);
                  auVar15 = vmovdqa64_avx512vl(param_2[3]);
                  auVar16 = vpminub_avx512vl(auVar12,auVar13);
                  auVar17 = vpminub_avx512vl(auVar14,auVar15);
                  auVar16 = vpminub_avx512vl(auVar17,auVar16);
                  uVar2 = vpcmpb_avx512vl(auVar18,auVar16,0);
                  iVar1 = (int)uVar2;
                  param_1 = (undefined1 (*) [32])
                            ((long)param_1 + (-(uVar9 - (long)param_2) - uVar5));
                  while (iVar1 == 0) {
                    auVar12 = vmovdqu64_avx512vl(auVar12);
                    *param_1 = auVar12;
                    auVar12 = vmovdqa64_avx512vl(param_2[4]);
                    auVar13 = vmovdqu64_avx512vl(auVar13);
                    param_1[1] = auVar13;
                    auVar13 = vmovdqa64_avx512vl(param_2[5]);
                    auVar16 = vpminub_avx512vl(auVar12,auVar13);
                    auVar14 = vmovdqu64_avx512vl(auVar14);
                    param_1[2] = auVar14;
                    auVar14 = vmovdqa64_avx512vl(param_2[6]);
                    auVar15 = vmovdqu64_avx512vl(auVar15);
                    param_1[3] = auVar15;
                    auVar15 = vmovdqa64_avx512vl(param_2[7]);
                    auVar17 = vpminub_avx512vl(auVar14,auVar15);
                    auVar16 = vpminub_avx512vl(auVar17,auVar16);
                    uVar2 = vpcmpb_avx512vl(auVar18,auVar16,0);
                    param_2 = param_2 + 4;
                    param_1 = param_1 + 4;
                    iVar1 = (int)uVar2;
                  }
                  uVar2 = vpcmpb_avx512vl(auVar18,auVar12,0);
                  uVar4 = (uint)uVar2;
                  if (uVar4 == 0) {
                    uVar2 = vpcmpb_avx512vl(auVar18,auVar13,0);
                    uVar4 = (uint)uVar2;
                    if (uVar4 == 0) {
                      uVar2 = vpcmpb_avx512vl(auVar19,auVar14,0);
                      uVar4 = (uint)uVar2;
                      if (uVar4 == 0) {
                        uVar2 = vpcmpb_avx512vl(auVar19,auVar15,0);
                        uVar4 = 0;
                        if ((uint)uVar2 != 0) {
                          for (; ((uint)uVar2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
                          }
                        }
                        uVar5 = (ulong)uVar4;
                        auVar19 = vmovdqu64_avx512vl(auVar12);
                        *param_1 = auVar19;
                        auVar19 = vmovdqu64_avx512vl(auVar13);
                        param_1[1] = auVar19;
                        auVar19 = vmovdqu64_avx512vl(auVar14);
                        param_1[2] = auVar19;
                        param_2 = param_2 + 3;
                        param_1 = param_1 + 3;
                      }
                      else {
                        uVar7 = 0;
                        if (uVar4 != 0) {
                          for (; (uVar4 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
                          }
                        }
                        uVar5 = (ulong)uVar7;
                        auVar19 = vmovdqu64_avx512vl(auVar12);
                        *param_1 = auVar19;
                        auVar19 = vmovdqu64_avx512vl(auVar13);
                        param_1[1] = auVar19;
                        param_2 = param_2 + 2;
                        param_1 = param_1 + 2;
                      }
                    }
                    else {
                      uVar7 = 0;
                      if (uVar4 != 0) {
                        for (; (uVar4 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
                        }
                      }
                      uVar5 = (ulong)uVar7;
                      auVar19 = vmovdqu64_avx512vl(auVar12);
                      *param_1 = auVar19;
                      param_2 = param_2 + 1;
                      param_1 = param_1 + 1;
                    }
                  }
                  else {
                    uVar7 = 0;
                    if (uVar4 != 0) {
                      for (; (uVar4 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
                      }
                    }
                    uVar5 = (ulong)uVar7;
                  }
                  goto LAB_0074ad99;
                }
              }
            }
          }
        }
      }
      param_1 = (undefined1 (*) [32])((long)param_1 + (uVar6 - uVar5));
    }
    param_2 = (undefined1 (*) [32])(((ulong)param_2 & 0xffffffffffffffe0) + uVar6);
  }
  uVar4 = 0;
  if (uVar7 != 0) {
    for (; (uVar7 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  uVar5 = (ulong)uVar4;
LAB_0074ad99:
  uVar4 = (uint)uVar5;
  if (0x1f < uVar4) {
    auVar19 = vmovdqu64_avx512vl(*param_2);
    auVar12 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + uVar5 + 1));
    auVar19 = vmovdqu64_avx512vl(auVar19);
    *param_1 = auVar19;
    auVar19 = vmovdqu64_avx512vl(auVar12);
    *(undefined1 (*) [32])(param_1[-1] + uVar5 + 1) = auVar19;
    return pauVar3;
  }
  if (0xf < uVar4) {
    auVar10 = vmovdqu64_avx512vl(*(undefined1 (*) [16])*param_2);
    auVar11 = vmovdqu64_avx512vl(*(undefined1 (*) [16])(param_2[-1] + uVar5 + 0x11));
    auVar10 = vmovdqu64_avx512vl(auVar10);
    *(undefined1 (*) [16])*param_1 = auVar10;
    auVar10 = vmovdqu64_avx512vl(auVar11);
    *(undefined1 (*) [16])(param_1[-1] + uVar5 + 0x11) = auVar10;
    return pauVar3;
  }
  if (7 < uVar4) {
    uVar2 = *(undefined8 *)(param_2[-1] + uVar5 + 0x19);
    *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
    *(undefined8 *)(param_1[-1] + uVar5 + 0x19) = uVar2;
    return pauVar3;
  }
  if (3 < uVar4) {
    *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
    *(undefined4 *)(param_1[-1] + uVar5 + 0x1d) = *(undefined4 *)(param_2[-1] + uVar5 + 0x1d);
    return pauVar3;
  }
  if (uVar4 == 3) {
    *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
    return pauVar3;
  }
  if (1 < uVar4) {
    *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
    (*param_1)[2] = 0;
    return pauVar3;
  }
  if (uVar4 == 1) {
    *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
    return pauVar3;
  }
  (*param_1)[0] = 0;
  return pauVar3;
}

