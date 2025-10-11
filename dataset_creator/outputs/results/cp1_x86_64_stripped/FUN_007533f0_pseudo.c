
undefined1 (*) [32]
FUN_007533f0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 uVar9;
  long lVar8;
  undefined1 (*pauVar10) [32];
  ulong uVar11;
  undefined1 (*pauVar12) [32];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 in_ZMM16 [64];
  
  lVar3 = 0;
  uVar4 = (uint)param_1 & 0x7f;
  auVar13 = vpxorq_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
  auVar21 = ZEXT1632(auVar13);
  if (0x60 < uVar4) {
    pauVar12 = (undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0);
    uVar2 = vpcmpb_avx512vl(auVar21,*pauVar12,0);
    uVar4 = (uint)uVar2 & -1 << ((byte)uVar4 & 0x1f);
    uVar5 = (ulong)uVar4;
    if (uVar4 == 0) goto LAB_0075344c;
    goto LAB_007536c0;
  }
  uVar2 = vpcmpb_avx512vl(auVar21,*param_1,0);
  uVar5 = CONCAT44((int)((ulong)param_3 >> 0x20),(int)uVar2);
  if ((int)uVar2 == 0) {
LAB_0075344c:
    pauVar10 = (undefined1 (*) [32])((ulong)param_1 & 0xffffffffffffffe0);
    auVar15 = ZEXT1632(auVar13);
    uVar2 = vpcmpb_avx512vl(auVar15,pauVar10[1],0);
    uVar9 = (undefined4)(uVar5 >> 0x20);
    uVar5 = CONCAT44(uVar9,(int)uVar2);
    pauVar12 = pauVar10;
    if ((int)uVar2 == 0) {
      uVar2 = vpcmpb_avx512vl(auVar15,pauVar10[2],0);
      uVar5 = CONCAT44(uVar9,(int)uVar2);
      if ((int)uVar2 == 0) {
        uVar2 = vpcmpb_avx512vl(auVar15,pauVar10[3],0);
        uVar5 = CONCAT44(uVar9,(int)uVar2);
        if ((int)uVar2 == 0) {
          uVar2 = vpcmpb_avx512vl(auVar15,pauVar10[4],0);
          uVar5 = CONCAT44(uVar9,(int)uVar2);
          if ((int)uVar2 == 0) {
            auVar15 = ZEXT1632(auVar13);
            uVar2 = vpcmpb_avx512vl(auVar15,pauVar10[5],0);
            pauVar12 = pauVar10 + 4;
            uVar5 = CONCAT44(uVar9,(int)uVar2);
            if ((int)uVar2 != 0) goto LAB_007536d0;
            uVar2 = vpcmpb_avx512vl(auVar15,pauVar10[6],0);
            uVar5 = CONCAT44(uVar9,(int)uVar2);
            if ((int)uVar2 != 0) goto LAB_007536e0;
            uVar2 = vpcmpb_avx512vl(auVar15,pauVar10[7],0);
            uVar5 = CONCAT44(uVar9,(int)uVar2);
            if ((int)uVar2 != 0) goto LAB_007536f0;
            uVar2 = vpcmpb_avx512vl(auVar15,pauVar10[8],0);
            uVar5 = CONCAT44(uVar9,(int)uVar2);
            if ((int)uVar2 != 0) goto LAB_00753700;
            uVar2 = vpcmpb_avx512vl(auVar15,pauVar10[9],0);
            uVar5 = CONCAT44(uVar9,(int)uVar2);
            pauVar12 = pauVar10 + 8;
            if ((int)uVar2 != 0) goto LAB_007536d0;
            uVar2 = vpcmpb_avx512vl(auVar15,pauVar10[10],0);
            uVar5 = CONCAT44(uVar9,(int)uVar2);
            if ((int)uVar2 != 0) goto LAB_007536e0;
            uVar2 = vpcmpb_avx512vl(auVar15,pauVar10[0xb],0);
            uVar5 = CONCAT44(uVar9,(int)uVar2);
            if ((int)uVar2 != 0) goto LAB_007536f0;
            uVar2 = vpcmpb_avx512vl(auVar15,pauVar10[0xc],0);
            uVar5 = CONCAT44(uVar9,(int)uVar2);
            if ((int)uVar2 != 0) goto LAB_00753700;
            uVar2 = vpcmpb_avx512vl(auVar21,pauVar10[0xd],0);
            pauVar12 = pauVar10 + 0xc;
            uVar5 = CONCAT44(uVar9,(int)uVar2);
            if ((int)uVar2 != 0) goto LAB_007536d0;
            uVar2 = vpcmpb_avx512vl(auVar21,pauVar10[0xe],0);
            uVar5 = CONCAT44(uVar9,(int)uVar2);
            if ((int)uVar2 != 0) goto LAB_007536e0;
            uVar2 = vpcmpb_avx512vl(auVar21,pauVar10[0xf],0);
            uVar5 = CONCAT44(uVar9,(int)uVar2);
            if ((int)uVar2 != 0) goto LAB_007536f0;
            uVar2 = vpcmpb_avx512vl(auVar21,pauVar10[0x10],0);
            uVar5 = CONCAT44(uVar9,(int)uVar2);
            if ((int)uVar2 != 0) goto LAB_00753700;
            if (((ulong)pauVar12 & 0x7f) != 0) {
              uVar2 = vpcmpb_avx512vl(auVar21,pauVar10[0x11],0);
              pauVar12 = pauVar10 + 0x11;
              uVar5 = CONCAT44(uVar9,(int)uVar2);
              if ((int)uVar2 != 0) {
LAB_007536c0:
                lVar3 = (long)pauVar12 - (long)param_1;
                goto LAB_007536c3;
              }
              if (((ulong)pauVar12 & 0x7f) != 0) {
                uVar2 = vpcmpb_avx512vl(auVar21,pauVar10[0x12],0);
                pauVar12 = pauVar10 + 0x12;
                uVar5 = CONCAT44(uVar9,(int)uVar2);
                if ((int)uVar2 != 0) goto LAB_007536c0;
                if (((ulong)pauVar12 & 0x7f) != 0) {
                  uVar2 = vpcmpb_avx512vl(auVar21,pauVar10[0x13],0);
                  pauVar12 = pauVar10 + 0x13;
                  uVar5 = CONCAT44(uVar9,(int)uVar2);
                  if ((int)uVar2 != 0) goto LAB_007536c0;
                  if (((ulong)pauVar12 & 0x7f) != 0) {
                    uVar2 = vpcmpb_avx512vl(auVar21,pauVar10[0x14],0);
                    pauVar12 = pauVar10 + 0x14;
                    uVar5 = CONCAT44(uVar9,(int)uVar2);
                    if ((int)uVar2 != 0) goto LAB_007536c0;
                    pauVar12 = pauVar10 + 0x15;
                  }
                }
              }
            }
            do {
              pauVar10 = pauVar12;
              auVar15 = vmovdqa64_avx512vl(*pauVar10);
              auVar16 = vmovdqa64_avx512vl(pauVar10[2]);
              auVar15 = vpminub_avx512vl(auVar15,pauVar10[1]);
              auVar16 = vpminub_avx512vl(auVar16,pauVar10[3]);
              auVar15 = vpminub_avx512vl(auVar16,auVar15);
              uVar2 = vpcmpb_avx512vl(auVar21,auVar15,0);
              pauVar12 = pauVar10 + 4;
            } while ((int)uVar2 == 0);
            uVar2 = vpcmpb_avx512vl(auVar21,*pauVar10,0);
            pauVar12 = pauVar10 + -1;
            uVar9 = (undefined4)(uVar5 >> 0x20);
            uVar5 = CONCAT44(uVar9,(int)uVar2);
            if ((int)uVar2 != 0) goto LAB_007536d0;
            uVar2 = vpcmpb_avx512vl(auVar21,pauVar10[1],0);
            uVar5 = CONCAT44(uVar9,(int)uVar2);
            if ((int)uVar2 != 0) goto LAB_007536e0;
            uVar2 = vpcmpb_avx512vl(auVar21,pauVar10[2],0);
            uVar5 = CONCAT44(uVar9,(int)uVar2);
            if ((int)uVar2 != 0) goto LAB_007536f0;
            uVar2 = vpcmpb_avx512vl(auVar21,pauVar10[3],0);
            uVar5 = CONCAT44(uVar9,(int)uVar2);
            lVar8 = 0;
            if (uVar5 != 0) {
              for (; (uVar5 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
              }
            }
            lVar3 = (long)pauVar12 + (lVar8 - (long)param_1) + 0x80;
          }
          else {
LAB_00753700:
            lVar8 = 0;
            if (uVar5 != 0) {
              for (; (uVar5 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
              }
            }
            lVar3 = (long)pauVar12 + (lVar8 - (long)param_1) + 0x80;
          }
        }
        else {
LAB_007536f0:
          lVar8 = 0;
          if (uVar5 != 0) {
            for (; (uVar5 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
            }
          }
          lVar3 = (long)pauVar12 + (lVar8 - (long)param_1) + 0x60;
        }
      }
      else {
LAB_007536e0:
        lVar8 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
          }
        }
        lVar3 = (long)pauVar12 + (lVar8 - (long)param_1) + 0x40;
      }
    }
    else {
LAB_007536d0:
      lVar8 = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
        }
      }
      lVar3 = (long)pauVar12 + (lVar8 - (long)param_1) + 0x20;
    }
  }
  else {
LAB_007536c3:
    lVar8 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
      }
    }
    lVar3 = lVar3 + lVar8;
  }
  pauVar12 = (undefined1 (*) [32])(*param_1 + lVar3);
  uVar4 = (uint)param_2;
  if ((uVar4 & 0x7f) < 0x41) {
    auVar15 = vmovdqu64_avx512vl(*param_2);
    auVar16 = vmovdqu64_avx512vl(param_2[1]);
    uVar2 = vpcmpb_avx512vl(auVar21,auVar15,0);
    uVar7 = (uint)uVar2;
    if (uVar7 == 0) {
      auVar15 = vmovdqu64_avx512vl(auVar15);
      *pauVar12 = auVar15;
      uVar2 = vpcmpb_avx512vl(auVar21,auVar16,0);
      uVar7 = (uint)uVar2;
      if (uVar7 == 0) {
        uVar5 = (ulong)(uVar4 & 0x1f);
        goto LAB_00753770;
      }
      param_2 = param_2 + 1;
      pauVar12 = pauVar12 + 1;
    }
  }
  else {
    pauVar10 = (undefined1 (*) [32])((ulong)param_2 & 0xffffffffffffffe0);
    uVar4 = uVar4 & 0x1f;
    uVar5 = (ulong)uVar4;
    uVar2 = vpcmpb_avx512vl(auVar21,*pauVar10,0);
    uVar7 = (uint)(CONCAT44((int)((ulong)lVar8 >> 0x20),(int)uVar2) >> (sbyte)uVar4);
    uVar6 = uVar5;
    if (uVar7 == 0) {
      uVar2 = vpcmpb_avx512vl(auVar21,pauVar10[1],0);
      uVar7 = (uint)uVar2;
      if (uVar7 != 0) {
        iVar1 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
          }
        }
        param_2 = (undefined1 (*) [32])(*pauVar10 + uVar5);
        uVar5 = (ulong)((iVar1 + 0x20) - uVar4);
        goto LAB_007539d9;
      }
      auVar15 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(*pauVar10 + uVar5));
      auVar15 = vmovdqu64_avx512vl(auVar15);
      *pauVar12 = auVar15;
LAB_00753770:
      uVar11 = (ulong)param_2 & 0xffffffffffffffe0;
      auVar15 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar11 + 0x20));
      auVar15 = vmovdqu64_avx512vl(auVar15);
      *(undefined1 (*) [32])((long)pauVar12 + (0x20 - uVar5)) = auVar15;
      auVar15 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar11 + 0x40));
      uVar2 = vpcmpb_avx512vl(auVar21,auVar15,0);
      uVar7 = (uint)uVar2;
      uVar6 = 0x40;
      if (uVar7 == 0) {
        auVar15 = vmovdqu64_avx512vl(auVar15);
        *(undefined1 (*) [32])((long)pauVar12 + (0x40 - uVar5)) = auVar15;
        auVar15 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar11 + 0x60));
        uVar2 = vpcmpb_avx512vl(auVar21,auVar15,0);
        uVar7 = (uint)uVar2;
        uVar6 = 0x60;
        if (uVar7 == 0) {
          auVar15 = vmovdqu64_avx512vl(auVar15);
          *(undefined1 (*) [32])((long)pauVar12 + (0x60 - uVar5)) = auVar15;
          auVar15 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar11 + 0x80));
          uVar2 = vpcmpb_avx512vl(auVar21,auVar15,0);
          uVar7 = (uint)uVar2;
          uVar6 = 0x80;
          if (uVar7 == 0) {
            auVar15 = vmovdqu64_avx512vl(auVar15);
            *(undefined1 (*) [32])((long)pauVar12 + (0x80 - uVar5)) = auVar15;
            auVar15 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar11 + 0xa0));
            uVar2 = vpcmpb_avx512vl(auVar21,auVar15,0);
            uVar7 = (uint)uVar2;
            uVar6 = 0xa0;
            if (uVar7 == 0) {
              auVar15 = vmovdqu64_avx512vl(auVar15);
              *(undefined1 (*) [32])((long)pauVar12 + (0xa0 - uVar5)) = auVar15;
              auVar15 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar11 + 0xc0));
              uVar2 = vpcmpb_avx512vl(auVar21,auVar15,0);
              uVar7 = (uint)uVar2;
              uVar6 = 0xc0;
              if (uVar7 == 0) {
                auVar16 = vmovdqa64_avx512vl(*(undefined1 (*) [32])(uVar11 + 0xe0));
                auVar15 = vmovdqu64_avx512vl(auVar15);
                *(undefined1 (*) [32])((long)pauVar12 + (0xc0 - uVar5)) = auVar15;
                uVar2 = vpcmpb_avx512vl(auVar21,auVar16,0);
                uVar7 = (uint)uVar2;
                uVar6 = 0xe0;
                if (uVar7 == 0) {
                  auVar15 = vmovdqu64_avx512vl(auVar16);
                  *(undefined1 (*) [32])((long)pauVar12 + (0xe0 - uVar5)) = auVar15;
                  param_2 = (undefined1 (*) [32])(uVar11 + 0x100 & 0xffffffffffffff80);
                  auVar15 = vmovdqa64_avx512vl(*param_2);
                  auVar16 = vmovdqa64_avx512vl(param_2[1]);
                  auVar17 = vmovdqa64_avx512vl(param_2[2]);
                  auVar18 = vmovdqa64_avx512vl(param_2[3]);
                  auVar19 = vpminub_avx512vl(auVar15,auVar16);
                  auVar20 = vpminub_avx512vl(auVar17,auVar18);
                  auVar19 = vpminub_avx512vl(auVar20,auVar19);
                  uVar2 = vpcmpb_avx512vl(auVar21,auVar19,0);
                  iVar1 = (int)uVar2;
                  pauVar12 = (undefined1 (*) [32])
                             ((long)pauVar12 + (-(uVar11 - (long)param_2) - uVar5));
                  while (iVar1 == 0) {
                    auVar15 = vmovdqu64_avx512vl(auVar15);
                    *pauVar12 = auVar15;
                    auVar15 = vmovdqa64_avx512vl(param_2[4]);
                    auVar16 = vmovdqu64_avx512vl(auVar16);
                    pauVar12[1] = auVar16;
                    auVar16 = vmovdqa64_avx512vl(param_2[5]);
                    auVar19 = vpminub_avx512vl(auVar15,auVar16);
                    auVar17 = vmovdqu64_avx512vl(auVar17);
                    pauVar12[2] = auVar17;
                    auVar17 = vmovdqa64_avx512vl(param_2[6]);
                    auVar18 = vmovdqu64_avx512vl(auVar18);
                    pauVar12[3] = auVar18;
                    auVar18 = vmovdqa64_avx512vl(param_2[7]);
                    auVar20 = vpminub_avx512vl(auVar17,auVar18);
                    auVar19 = vpminub_avx512vl(auVar20,auVar19);
                    uVar2 = vpcmpb_avx512vl(auVar21,auVar19,0);
                    param_2 = param_2 + 4;
                    pauVar12 = pauVar12 + 4;
                    iVar1 = (int)uVar2;
                  }
                  uVar2 = vpcmpb_avx512vl(auVar21,auVar15,0);
                  uVar4 = (uint)uVar2;
                  if (uVar4 == 0) {
                    uVar2 = vpcmpb_avx512vl(auVar21,auVar16,0);
                    uVar4 = (uint)uVar2;
                    if (uVar4 == 0) {
                      uVar2 = vpcmpb_avx512vl(auVar21,auVar17,0);
                      uVar4 = (uint)uVar2;
                      if (uVar4 == 0) {
                        uVar2 = vpcmpb_avx512vl(auVar21,auVar18,0);
                        uVar4 = 0;
                        if ((uint)uVar2 != 0) {
                          for (; ((uint)uVar2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
                          }
                        }
                        uVar5 = (ulong)uVar4;
                        auVar21 = vmovdqu64_avx512vl(auVar15);
                        *pauVar12 = auVar21;
                        auVar21 = vmovdqu64_avx512vl(auVar16);
                        pauVar12[1] = auVar21;
                        auVar21 = vmovdqu64_avx512vl(auVar17);
                        pauVar12[2] = auVar21;
                        param_2 = param_2 + 3;
                        pauVar12 = pauVar12 + 3;
                      }
                      else {
                        uVar7 = 0;
                        if (uVar4 != 0) {
                          for (; (uVar4 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
                          }
                        }
                        uVar5 = (ulong)uVar7;
                        auVar21 = vmovdqu64_avx512vl(auVar15);
                        *pauVar12 = auVar21;
                        auVar21 = vmovdqu64_avx512vl(auVar16);
                        pauVar12[1] = auVar21;
                        param_2 = param_2 + 2;
                        pauVar12 = pauVar12 + 2;
                      }
                    }
                    else {
                      uVar7 = 0;
                      if (uVar4 != 0) {
                        for (; (uVar4 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
                        }
                      }
                      uVar5 = (ulong)uVar7;
                      auVar21 = vmovdqu64_avx512vl(auVar15);
                      *pauVar12 = auVar21;
                      param_2 = param_2 + 1;
                      pauVar12 = pauVar12 + 1;
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
                  goto LAB_007539d9;
                }
              }
            }
          }
        }
      }
      pauVar12 = (undefined1 (*) [32])((long)pauVar12 + (uVar6 - uVar5));
    }
    param_2 = (undefined1 (*) [32])(((ulong)param_2 & 0xffffffffffffffe0) + uVar6);
  }
  uVar4 = 0;
  if (uVar7 != 0) {
    for (; (uVar7 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  uVar5 = (ulong)uVar4;
LAB_007539d9:
  uVar4 = (uint)uVar5;
  if (0x1f < uVar4) {
    auVar21 = vmovdqu64_avx512vl(*param_2);
    auVar15 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + uVar5 + 1));
    auVar21 = vmovdqu64_avx512vl(auVar21);
    *pauVar12 = auVar21;
    auVar21 = vmovdqu64_avx512vl(auVar15);
    *(undefined1 (*) [32])(pauVar12[-1] + uVar5 + 1) = auVar21;
    return param_1;
  }
  if (0xf < uVar4) {
    auVar13 = vmovdqu64_avx512vl(*(undefined1 (*) [16])*param_2);
    auVar14 = vmovdqu64_avx512vl(*(undefined1 (*) [16])(param_2[-1] + uVar5 + 0x11));
    auVar13 = vmovdqu64_avx512vl(auVar13);
    *(undefined1 (*) [16])*pauVar12 = auVar13;
    auVar13 = vmovdqu64_avx512vl(auVar14);
    *(undefined1 (*) [16])(pauVar12[-1] + uVar5 + 0x11) = auVar13;
    return param_1;
  }
  if (7 < uVar4) {
    uVar2 = *(undefined8 *)(param_2[-1] + uVar5 + 0x19);
    *(undefined8 *)*pauVar12 = *(undefined8 *)*param_2;
    *(undefined8 *)(pauVar12[-1] + uVar5 + 0x19) = uVar2;
    return param_1;
  }
  if (uVar4 < 4) {
    if (uVar4 == 3) {
      *(undefined4 *)*pauVar12 = *(undefined4 *)*param_2;
      return param_1;
    }
    if (uVar4 < 2) {
      if (uVar4 != 1) {
        (*pauVar12)[0] = 0;
        return param_1;
      }
      *(undefined2 *)*pauVar12 = *(undefined2 *)*param_2;
      return param_1;
    }
    *(undefined2 *)*pauVar12 = *(undefined2 *)*param_2;
    (*pauVar12)[2] = 0;
    return param_1;
  }
  *(undefined4 *)*pauVar12 = *(undefined4 *)*param_2;
  *(undefined4 *)(pauVar12[-1] + uVar5 + 0x1d) = *(undefined4 *)(param_2[-1] + uVar5 + 0x1d);
  return param_1;
}

