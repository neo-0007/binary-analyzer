
undefined1 (*) [32]
FUN_00752fa0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar5;
  uint uVar6;
  undefined1 (*pauVar7) [32];
  ulong uVar8;
  undefined1 auVar9 [16];
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
  ulong uVar4;
  
  auVar9 = vpxorq_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
  uVar3 = (uint)param_2;
  auVar18 = ZEXT1632(auVar9);
  if ((uVar3 & 0x7f) < 0x41) {
    auVar11 = vmovdqu64_avx512vl(*param_2);
    auVar17 = vmovdqu64_avx512vl(param_2[1]);
    uVar2 = vpcmpb_avx512vl(auVar18,auVar11,0);
    uVar6 = (uint)uVar2;
    if (uVar6 == 0) {
      auVar11 = vmovdqu64_avx512vl(auVar11);
      *param_1 = auVar11;
      uVar2 = vpcmpb_avx512vl(auVar18,auVar17,0);
      uVar6 = (uint)uVar2;
      if (uVar6 == 0) {
        uVar4 = (ulong)(uVar3 & 0x1f);
        goto LAB_00753000;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  else {
    pauVar7 = (undefined1 (*) [32])((ulong)param_2 & 0xffffffffffffffe0);
    uVar3 = uVar3 & 0x1f;
    uVar4 = (ulong)uVar3;
    uVar2 = vpcmpb_avx512vl(ZEXT1632(auVar9),*pauVar7,0);
    uVar6 = (uint)(CONCAT44((int)((ulong)param_3 >> 0x20),(int)uVar2) >> (sbyte)uVar3);
    uVar5 = uVar4;
    if (uVar6 == 0) {
      uVar2 = vpcmpb_avx512vl(ZEXT1632(auVar9),pauVar7[1],0);
      uVar6 = (uint)uVar2;
      if (uVar6 != 0) {
        iVar1 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
          }
        }
        param_2 = (undefined1 (*) [32])(*pauVar7 + uVar4);
        uVar4 = (ulong)((iVar1 + 0x20) - uVar3);
        goto LAB_00753269;
      }
      auVar11 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(*pauVar7 + uVar4));
      auVar11 = vmovdqu64_avx512vl(auVar11);
      *param_1 = auVar11;
LAB_00753000:
      uVar8 = (ulong)param_2 & 0xffffffffffffffe0;
      auVar11 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0x20));
      auVar11 = vmovdqu64_avx512vl(auVar11);
      *(undefined1 (*) [32])((long)param_1 + (0x20 - uVar4)) = auVar11;
      auVar11 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0x40));
      uVar2 = vpcmpb_avx512vl(auVar18,auVar11,0);
      uVar6 = (uint)uVar2;
      uVar5 = 0x40;
      if (uVar6 == 0) {
        auVar11 = vmovdqu64_avx512vl(auVar11);
        *(undefined1 (*) [32])((long)param_1 + (0x40 - uVar4)) = auVar11;
        auVar11 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0x60));
        uVar2 = vpcmpb_avx512vl(auVar18,auVar11,0);
        uVar6 = (uint)uVar2;
        uVar5 = 0x60;
        if (uVar6 == 0) {
          auVar11 = vmovdqu64_avx512vl(auVar11);
          *(undefined1 (*) [32])((long)param_1 + (0x60 - uVar4)) = auVar11;
          auVar11 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0x80));
          auVar17 = ZEXT1632(auVar9);
          uVar2 = vpcmpb_avx512vl(auVar17,auVar11,0);
          uVar6 = (uint)uVar2;
          uVar5 = 0x80;
          if (uVar6 == 0) {
            auVar11 = vmovdqu64_avx512vl(auVar11);
            *(undefined1 (*) [32])((long)param_1 + (0x80 - uVar4)) = auVar11;
            auVar11 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0xa0));
            uVar2 = vpcmpb_avx512vl(auVar17,auVar11,0);
            uVar6 = (uint)uVar2;
            uVar5 = 0xa0;
            if (uVar6 == 0) {
              auVar11 = vmovdqu64_avx512vl(auVar11);
              *(undefined1 (*) [32])((long)param_1 + (0xa0 - uVar4)) = auVar11;
              auVar11 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0xc0));
              uVar2 = vpcmpb_avx512vl(auVar17,auVar11,0);
              uVar6 = (uint)uVar2;
              uVar5 = 0xc0;
              if (uVar6 == 0) {
                auVar12 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar8 + 0xe0));
                auVar11 = vmovdqu64_avx512vl(auVar11);
                *(undefined1 (*) [32])((long)param_1 + (0xc0 - uVar4)) = auVar11;
                uVar2 = vpcmpb_avx512vl(auVar17,auVar12,0);
                uVar6 = (uint)uVar2;
                uVar5 = 0xe0;
                if (uVar6 == 0) {
                  auVar11 = vmovdqu64_avx512vl(auVar12);
                  *(undefined1 (*) [32])((long)param_1 + (0xe0 - uVar4)) = auVar11;
                  param_2 = (undefined1 (*) [32])(uVar8 + 0x100 & 0xffffffffffffff80);
                  auVar11 = vmovdqa64_avx512vl(*param_2);
                  auVar12 = vmovdqa64_avx512vl(param_2[1]);
                  auVar13 = vmovdqa64_avx512vl(param_2[2]);
                  auVar14 = vmovdqa64_avx512vl(param_2[3]);
                  auVar15 = vpminub_avx512vl(auVar11,auVar12);
                  auVar16 = vpminub_avx512vl(auVar13,auVar14);
                  auVar15 = vpminub_avx512vl(auVar16,auVar15);
                  uVar2 = vpcmpb_avx512vl(auVar17,auVar15,0);
                  iVar1 = (int)uVar2;
                  param_1 = (undefined1 (*) [32])
                            ((long)param_1 + (-(uVar8 - (long)param_2) - uVar4));
                  while (iVar1 == 0) {
                    auVar11 = vmovdqu64_avx512vl(auVar11);
                    *param_1 = auVar11;
                    auVar11 = vmovdqa64_avx512vl(param_2[4]);
                    auVar12 = vmovdqu64_avx512vl(auVar12);
                    param_1[1] = auVar12;
                    auVar12 = vmovdqa64_avx512vl(param_2[5]);
                    auVar15 = vpminub_avx512vl(auVar11,auVar12);
                    auVar13 = vmovdqu64_avx512vl(auVar13);
                    param_1[2] = auVar13;
                    auVar13 = vmovdqa64_avx512vl(param_2[6]);
                    auVar14 = vmovdqu64_avx512vl(auVar14);
                    param_1[3] = auVar14;
                    auVar14 = vmovdqa64_avx512vl(param_2[7]);
                    auVar16 = vpminub_avx512vl(auVar13,auVar14);
                    auVar15 = vpminub_avx512vl(auVar16,auVar15);
                    uVar2 = vpcmpb_avx512vl(auVar17,auVar15,0);
                    param_2 = param_2 + 4;
                    param_1 = param_1 + 4;
                    iVar1 = (int)uVar2;
                  }
                  uVar2 = vpcmpb_avx512vl(auVar17,auVar11,0);
                  uVar3 = (uint)uVar2;
                  if (uVar3 == 0) {
                    uVar2 = vpcmpb_avx512vl(auVar17,auVar12,0);
                    uVar3 = (uint)uVar2;
                    if (uVar3 == 0) {
                      uVar2 = vpcmpb_avx512vl(auVar18,auVar13,0);
                      uVar3 = (uint)uVar2;
                      if (uVar3 == 0) {
                        uVar2 = vpcmpb_avx512vl(auVar18,auVar14,0);
                        uVar3 = 0;
                        if ((uint)uVar2 != 0) {
                          for (; ((uint)uVar2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
                          }
                        }
                        uVar4 = (ulong)uVar3;
                        auVar18 = vmovdqu64_avx512vl(auVar11);
                        *param_1 = auVar18;
                        auVar18 = vmovdqu64_avx512vl(auVar12);
                        param_1[1] = auVar18;
                        auVar18 = vmovdqu64_avx512vl(auVar13);
                        param_1[2] = auVar18;
                        param_2 = param_2 + 3;
                        param_1 = param_1 + 3;
                      }
                      else {
                        uVar6 = 0;
                        if (uVar3 != 0) {
                          for (; (uVar3 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                          }
                        }
                        uVar4 = (ulong)uVar6;
                        auVar18 = vmovdqu64_avx512vl(auVar11);
                        *param_1 = auVar18;
                        auVar18 = vmovdqu64_avx512vl(auVar12);
                        param_1[1] = auVar18;
                        param_2 = param_2 + 2;
                        param_1 = param_1 + 2;
                      }
                    }
                    else {
                      uVar6 = 0;
                      if (uVar3 != 0) {
                        for (; (uVar3 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                        }
                      }
                      uVar4 = (ulong)uVar6;
                      auVar18 = vmovdqu64_avx512vl(auVar11);
                      *param_1 = auVar18;
                      param_2 = param_2 + 1;
                      param_1 = param_1 + 1;
                    }
                  }
                  else {
                    uVar6 = 0;
                    if (uVar3 != 0) {
                      for (; (uVar3 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                      }
                    }
                    uVar4 = (ulong)uVar6;
                  }
                  goto LAB_00753269;
                }
              }
            }
          }
        }
      }
      param_1 = (undefined1 (*) [32])((long)param_1 + (uVar5 - uVar4));
    }
    param_2 = (undefined1 (*) [32])(((ulong)param_2 & 0xffffffffffffffe0) + uVar5);
  }
  uVar3 = 0;
  if (uVar6 != 0) {
    for (; (uVar6 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  uVar4 = (ulong)uVar3;
LAB_00753269:
  uVar3 = (uint)uVar4;
  if (0x1f < uVar3) {
    auVar18 = vmovdqu64_avx512vl(*param_2);
    auVar11 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + uVar4 + 1));
    auVar18 = vmovdqu64_avx512vl(auVar18);
    *param_1 = auVar18;
    auVar18 = vmovdqu64_avx512vl(auVar11);
    *(undefined1 (*) [32])(param_1[-1] + uVar4 + 1) = auVar18;
    return (undefined1 (*) [32])(*param_1 + uVar4);
  }
  if (0xf < uVar3) {
    auVar9 = vmovdqu64_avx512vl(*(undefined1 (*) [16])*param_2);
    auVar10 = vmovdqu64_avx512vl(*(undefined1 (*) [16])(param_2[-1] + uVar4 + 0x11));
    auVar9 = vmovdqu64_avx512vl(auVar9);
    *(undefined1 (*) [16])*param_1 = auVar9;
    auVar9 = vmovdqu64_avx512vl(auVar10);
    *(undefined1 (*) [16])(param_1[-1] + uVar4 + 0x11) = auVar9;
    return (undefined1 (*) [32])(*param_1 + uVar4);
  }
  if (7 < uVar3) {
    uVar2 = *(undefined8 *)(param_2[-1] + uVar4 + 0x19);
    *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
    *(undefined8 *)(param_1[-1] + uVar4 + 0x19) = uVar2;
    return (undefined1 (*) [32])(*param_1 + uVar4);
  }
  if (3 < uVar3) {
    *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
    *(undefined4 *)(param_1[-1] + uVar4 + 0x1d) = *(undefined4 *)(param_2[-1] + uVar4 + 0x1d);
    return (undefined1 (*) [32])(*param_1 + uVar4);
  }
  if (uVar3 == 3) {
    *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
    return (undefined1 (*) [32])(*param_1 + 3);
  }
  if (1 < uVar3) {
    *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
    (*param_1)[2] = 0;
    return (undefined1 (*) [32])(*param_1 + 2);
  }
  if (uVar3 == 1) {
    *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
    return (undefined1 (*) [32])(*param_1 + 1);
  }
  (*param_1)[0] = 0;
  return param_1;
}

