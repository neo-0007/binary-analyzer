
undefined1 (*) [32]
FUN_00755010(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulong param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [32];
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 uVar11;
  long lVar10;
  undefined1 (*pauVar12) [32];
  undefined1 (*pauVar13) [32];
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 in_ZMM16 [64];
  
  if (param_3 == 0) {
    return param_1;
  }
  pauVar6 = param_1;
  auVar18 = vpxorq_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
  uVar7 = (uint)param_2;
  uVar11 = (undefined4)(param_3 >> 0x20);
  auVar27 = ZEXT1632(auVar18);
  if ((uVar7 & 0x7f) < 0x41) {
    auVar21 = vmovdqu64_avx512vl(*param_2);
    auVar22 = vmovdqu64_avx512vl(param_2[1]);
    uVar4 = vpcmpb_avx512vl(auVar27,auVar21,0);
    uVar9 = CONCAT44(uVar11,(int)uVar4);
    if (param_3 < 0x22) {
LAB_0075555c:
      if (uVar9 == 0) goto LAB_007559e6;
      uVar7 = 0;
      if ((uint)uVar9 != 0) {
        for (; ((uint)uVar9 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      uVar9 = (ulong)uVar7;
      if ((uint)param_3 <= uVar7) goto LAB_007559e6;
    }
    else {
      if ((int)uVar4 == 0) {
        auVar21 = vmovdqu64_avx512vl(auVar21);
        *param_1 = auVar21;
        uVar4 = vpcmpb_avx512vl(auVar27,auVar22,0);
        uVar9 = CONCAT44(uVar11,(int)uVar4);
        if (param_3 < 0x42) {
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          param_3 = param_3 - 0x20;
          goto LAB_0075555c;
        }
        if ((int)uVar4 == 0) {
          uVar14 = (ulong)(uVar7 & 0x1f);
          goto LAB_007550a0;
        }
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
        param_3 = param_3 - 0x20;
      }
LAB_0075537e:
      uVar7 = 0;
      if ((uint)uVar9 != 0) {
        for (; ((uint)uVar9 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      uVar9 = (ulong)uVar7;
    }
    goto LAB_00755381;
  }
  pauVar12 = (undefined1 (*) [32])((ulong)param_2 & 0xffffffffffffffe0);
  uVar7 = uVar7 & 0x1f;
  uVar14 = (ulong)uVar7;
  uVar4 = vpcmpb_avx512vl(ZEXT1632(auVar18),*pauVar12,0);
  uVar9 = CONCAT44(uVar11,(int)uVar4) >> (sbyte)uVar7;
  uVar8 = (uint)uVar9;
  if (param_3 <= -uVar14 + 0x21) {
    if (uVar9 == 0) {
      param_2 = (undefined1 (*) [32])(*pauVar12 + uVar14);
      goto LAB_007559e6;
    }
    uVar7 = 0;
    if (uVar8 != 0) {
      for (; (uVar8 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
joined_r0x007554f2:
    uVar9 = (ulong)uVar7;
    param_2 = (undefined1 (*) [32])(*pauVar12 + uVar14);
    if ((uint)param_3 <= uVar7) {
LAB_007559e6:
      uVar7 = (uint)param_3;
      if (uVar7 == 0x41) {
        auVar27 = vmovdqu64_avx512vl(*param_2);
        auVar21 = vmovdqu64_avx512vl(param_2[1]);
        uVar1 = param_2[2][0];
        auVar27 = vmovdqu64_avx512vl(auVar27);
        *param_1 = auVar27;
        auVar27 = vmovdqu64_avx512vl(auVar21);
        param_1[1] = auVar27;
        param_1[2][0] = uVar1;
        return pauVar6;
      }
      if (0x20 < uVar7) {
        auVar27 = vmovdqu64_avx512vl(*param_2);
        auVar21 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
        auVar27 = vmovdqu64_avx512vl(auVar27);
        *param_1 = auVar27;
        auVar27 = vmovdqu64_avx512vl(auVar21);
        *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar27;
        return pauVar6;
      }
      if (0x10 < uVar7) {
        auVar18 = vmovdqu64_avx512vl(*(undefined1 (*) [16])*param_2);
        auVar20 = vmovdqu64_avx512vl(*(undefined1 (*) [16])(param_2[-1] + param_3 + 0x10));
        auVar18 = vmovdqu64_avx512vl(auVar18);
        *(undefined1 (*) [16])*param_1 = auVar18;
        auVar18 = vmovdqu64_avx512vl(auVar20);
        *(undefined1 (*) [16])(param_1[-1] + param_3 + 0x10) = auVar18;
        return pauVar6;
      }
      if (8 < uVar7) {
        uVar4 = *(undefined8 *)(param_2[-1] + param_3 + 0x18);
        *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
        *(undefined8 *)(param_1[-1] + param_3 + 0x18) = uVar4;
        return pauVar6;
      }
      if (4 < uVar7) {
        uVar11 = *(undefined4 *)(param_2[-1] + param_3 + 0x1c);
        *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
        *(undefined4 *)(param_1[-1] + param_3 + 0x1c) = uVar11;
        return pauVar6;
      }
      if (2 < uVar7) {
        uVar2 = *(undefined2 *)(param_2[-1] + param_3 + 0x1e);
        *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
        *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar2;
        return pauVar6;
      }
      if (1 < uVar7) {
        *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
        return pauVar6;
      }
      if (uVar7 != 1) {
        return pauVar6;
      }
      (*param_1)[0] = (*param_2)[0];
      return pauVar6;
    }
    goto LAB_00755381;
  }
  if (uVar8 != 0) {
    param_2 = (undefined1 (*) [32])(*pauVar12 + uVar14);
    goto LAB_0075537e;
  }
  uVar4 = vpcmpb_avx512vl(ZEXT1632(auVar18),pauVar12[1],0);
  uVar8 = (uint)uVar4;
  uVar9 = CONCAT44((int)(uVar9 >> 0x20),uVar8);
  if (param_3 <= -uVar14 + 0x41) {
    if (uVar9 == 0) {
      param_2 = (undefined1 (*) [32])(*pauVar12 + uVar14);
      goto LAB_007559e6;
    }
    iVar3 = 0;
    if (uVar8 != 0) {
      for (; (uVar8 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
      }
    }
    uVar7 = (iVar3 + 0x20) - uVar7;
    goto joined_r0x007554f2;
  }
  if (uVar8 == 0) {
    auVar21 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(*pauVar12 + uVar14));
    auVar21 = vmovdqu64_avx512vl(auVar21);
    *param_1 = auVar21;
LAB_007550a0:
    param_2 = (undefined1 (*) [32])((ulong)param_2 & 0xffffffffffffffe0);
    param_1 = (undefined1 (*) [32])((long)param_1 - uVar14);
    uVar14 = param_3 + uVar14 | -(ulong)CARRY8(param_3,uVar14);
    auVar21 = vmovdqa64_avx512vl(param_2[1]);
    auVar21 = vmovdqu64_avx512vl(auVar21);
    param_1[1] = auVar21;
    auVar21 = vmovdqa64_avx512vl(param_2[2]);
    uVar4 = vpcmpb_avx512vl(auVar27,auVar21,0);
    uVar11 = (undefined4)(uVar9 >> 0x20);
    lVar16 = CONCAT44(uVar11,(int)uVar4);
    uVar9 = 0x40;
    param_3 = uVar14 - 0x60;
    pauVar12 = param_2;
    if (uVar14 < 0x60 || param_3 == 0) {
LAB_00755510:
      if (lVar16 == 0) {
LAB_00755515:
        param_3 = param_3 + 0x20;
        param_1 = (undefined1 (*) [32])(*param_1 + uVar9);
        param_2 = (undefined1 (*) [32])(*pauVar12 + uVar9);
        goto LAB_007559e6;
      }
      param_3 = param_3 + 0x20;
      param_1 = (undefined1 (*) [32])(*param_1 + uVar9);
      param_2 = (undefined1 (*) [32])(*pauVar12 + uVar9);
      uVar7 = 0;
      if ((uint)lVar16 != 0) {
        for (; ((uint)lVar16 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      uVar9 = (ulong)uVar7;
      if ((uint)param_3 <= uVar7) goto LAB_007559e6;
      goto LAB_00755381;
    }
    if ((int)uVar4 != 0) goto LAB_007557e0;
    auVar21 = vmovdqu64_avx512vl(auVar21);
    param_1[2] = auVar21;
    auVar22 = vmovdqa64_avx512vl(param_2[3]);
    uVar4 = vpcmpb_avx512vl(auVar27,auVar22,0);
    lVar16 = CONCAT44(uVar11,(int)uVar4);
    uVar9 = 0x60;
    bVar17 = param_3 < 0x20;
    param_3 = uVar14 - 0x80;
    if (bVar17 || param_3 == 0) goto LAB_00755510;
    if ((int)uVar4 != 0) {
LAB_007554a0:
      auVar21 = vmovdqu64_avx512vl(auVar22);
      *(undefined1 (*) [32])(*param_1 + uVar9) = auVar21;
      goto LAB_007557f0;
    }
    auVar21 = vmovdqu64_avx512vl(auVar22);
    param_1[3] = auVar21;
    auVar21 = vmovdqa64_avx512vl(param_2[4]);
    auVar28 = ZEXT1632(auVar18);
    uVar4 = vpcmpb_avx512vl(auVar28,auVar21,0);
    lVar16 = CONCAT44(uVar11,(int)uVar4);
    uVar9 = 0x80;
    bVar17 = param_3 < 0x20;
    param_3 = uVar14 - 0xa0;
    if (bVar17 || param_3 == 0) goto LAB_00755510;
    if ((int)uVar4 != 0) {
LAB_00755490:
      auVar21 = vmovdqu64_avx512vl(auVar21);
      *(undefined1 (*) [32])(*param_1 + uVar9) = auVar21;
      goto LAB_007557f0;
    }
    auVar21 = vmovdqu64_avx512vl(auVar21);
    param_1[4] = auVar21;
    auVar21 = vmovdqa64_avx512vl(param_2[5]);
    uVar4 = vpcmpb_avx512vl(auVar28,auVar21,0);
    lVar16 = CONCAT44(uVar11,(int)uVar4);
    uVar9 = 0xa0;
    bVar17 = param_3 < 0x20;
    param_3 = uVar14 - 0xc0;
    if (bVar17 || param_3 == 0) goto LAB_00755510;
    if ((int)uVar4 == 0) {
      auVar21 = vmovdqu64_avx512vl(auVar21);
      param_1[5] = auVar21;
      auVar21 = vmovdqa64_avx512vl(param_2[6]);
      uVar4 = vpcmpb_avx512vl(auVar28,auVar21,0);
      lVar16 = CONCAT44(uVar11,(int)uVar4);
      uVar9 = 0xc0;
      bVar17 = param_3 < 0x20;
      param_3 = uVar14 - 0xe0;
      if (bVar17 || param_3 == 0) goto LAB_00755510;
      if ((int)uVar4 != 0) goto LAB_007557e0;
      auVar22 = vmovdqa64_avx512vl(param_2[7]);
      auVar21 = vmovdqu64_avx512vl(auVar21);
      param_1[6] = auVar21;
      uVar4 = vpcmpb_avx512vl(auVar28,auVar22,0);
      lVar16 = CONCAT44(uVar11,(int)uVar4);
      uVar9 = 0xe0;
      bVar17 = param_3 < 0x20;
      param_3 = uVar14 - 0x100;
      if (bVar17 || param_3 == 0) goto LAB_00755510;
      if ((int)uVar4 != 0) goto LAB_007554a0;
      auVar21 = vmovdqu64_avx512vl(auVar22);
      param_1[7] = auVar21;
      pauVar12 = (undefined1 (*) [32])((ulong)(param_2 + 8) & 0xffffffffffffff80);
      lVar10 = (long)param_2 - (long)pauVar12;
      param_1 = (undefined1 (*) [32])((long)param_1 - lVar10);
      auVar21 = vmovdqa64_avx512vl(*pauVar12);
      auVar22 = vmovdqa64_avx512vl(pauVar12[1]);
      auVar23 = vmovdqa64_avx512vl(pauVar12[2]);
      auVar24 = vmovdqa64_avx512vl(pauVar12[3]);
      auVar25 = vpminub_avx512vl(auVar21,auVar22);
      auVar26 = vpminub_avx512vl(auVar23,auVar24);
      auVar25 = vpminub_avx512vl(auVar26,auVar25);
      uVar4 = vpcmpb_avx512vl(auVar28,auVar25,0);
      iVar3 = (int)uVar4;
      lVar16 = CONCAT44((int)((ulong)lVar10 >> 0x20),iVar3);
      uVar15 = (uVar14 + lVar10) - 0x80;
      pauVar13 = pauVar12;
      pauVar5 = param_1;
      if (0x7f < uVar14 + lVar10 && uVar15 != 0) {
joined_r0x00755242:
        if (iVar3 == 0) goto LAB_00755244;
        uVar4 = vpcmpb_avx512vl(auVar28,auVar21,0);
        uVar7 = (uint)uVar4;
        if (uVar7 == 0) {
          uVar4 = vpcmpb_avx512vl(auVar28,auVar22,0);
          uVar7 = (uint)uVar4;
          if (uVar7 == 0) {
            uVar4 = vpcmpb_avx512vl(auVar27,auVar23,0);
            uVar7 = (uint)uVar4;
            if (uVar7 == 0) {
              uVar4 = vpcmpb_avx512vl(auVar27,auVar24,0);
              uVar7 = 0;
              if ((uint)uVar4 != 0) {
                for (; ((uint)uVar4 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
                }
              }
              auVar21 = vmovdqu64_avx512vl(auVar21);
              *pauVar5 = auVar21;
              auVar21 = vmovdqu64_avx512vl(auVar22);
              pauVar5[1] = auVar21;
              auVar21 = vmovdqu64_avx512vl(auVar23);
              pauVar5[2] = auVar21;
              auVar21 = vmovdqu64_avx512vl(auVar24);
              pauVar5[3] = auVar21;
              param_3 = (uVar15 + 0x1f) - (ulong)uVar7;
              pauVar12 = (undefined1 (*) [32])(pauVar5[3] + (ulong)uVar7 + 1);
            }
            else {
              uVar8 = 0;
              if (uVar7 != 0) {
                for (; (uVar7 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
                }
              }
              auVar21 = vmovdqu64_avx512vl(auVar21);
              *pauVar5 = auVar21;
              auVar21 = vmovdqu64_avx512vl(auVar22);
              pauVar5[1] = auVar21;
              auVar21 = vmovdqu64_avx512vl(auVar23);
              pauVar5[2] = auVar21;
              param_3 = (uVar15 + 0x3f) - (ulong)uVar8;
              pauVar12 = (undefined1 (*) [32])(pauVar5[2] + (ulong)uVar8 + 1);
            }
          }
          else {
            uVar8 = 0;
            if (uVar7 != 0) {
              for (; (uVar7 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
              }
            }
            auVar21 = vmovdqu64_avx512vl(auVar21);
            *pauVar5 = auVar21;
            auVar21 = vmovdqu64_avx512vl(auVar22);
            pauVar5[1] = auVar21;
            param_3 = (uVar15 + 0x5f) - (ulong)uVar8;
            pauVar12 = (undefined1 (*) [32])(pauVar5[1] + (ulong)uVar8 + 1);
          }
        }
        else {
          uVar8 = 0;
          if (uVar7 != 0) {
            for (; (uVar7 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
            }
          }
          auVar21 = vmovdqu64_avx512vl(auVar21);
          *pauVar5 = auVar21;
          param_3 = (uVar15 + 0x7f) - (ulong)uVar8;
          pauVar12 = (undefined1 (*) [32])(*pauVar5 + (ulong)uVar8 + 1);
        }
        goto LAB_00755810;
      }
LAB_007558f0:
      if (lVar16 != 0) {
        uVar9 = 0;
        uVar4 = vpcmpb_avx512vl(auVar27,auVar21,0);
        uVar11 = (undefined4)((ulong)lVar16 >> 0x20);
        lVar16 = CONCAT44(uVar11,(int)uVar4);
        param_3 = uVar15 + 0x60;
        if (param_3 == 0 || SCARRY8(uVar15,0x60) != (long)param_3 < 0) goto LAB_00755510;
        if ((int)uVar4 != 0) goto LAB_00755490;
        uVar4 = vpcmpb_avx512vl(auVar27,auVar22,0);
        lVar16 = CONCAT44(uVar11,(int)uVar4);
        auVar21 = vmovdqu64_avx512vl(auVar21);
        *param_1 = auVar21;
        uVar9 = 0x20;
        bVar17 = param_3 < 0x20;
        param_3 = uVar15 + 0x40;
        if (bVar17 || param_3 == 0) goto LAB_00755510;
        if ((int)uVar4 == 0) {
          uVar4 = vpcmpb_avx512vl(auVar27,auVar23,0);
          lVar16 = CONCAT44(uVar11,(int)uVar4);
          auVar21 = vmovdqu64_avx512vl(auVar22);
          param_1[1] = auVar21;
          uVar9 = 0x40;
          bVar17 = param_3 < 0x20;
          param_3 = uVar15 + 0x20;
          if (bVar17 || param_3 == 0) goto LAB_00755510;
          if ((int)uVar4 == 0) {
            uVar4 = vpcmpb_avx512vl(auVar27,auVar24,0);
            auVar21 = vmovdqu64_avx512vl(auVar23);
            param_1[2] = auVar21;
            param_1 = param_1 + 3;
            param_2 = pauVar12 + 3;
            uVar7 = 0;
            if ((uint)uVar4 != 0) {
              for (; ((uint)uVar4 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
              }
            }
            uVar9 = (ulong)uVar7;
            if ((uint)param_3 <= uVar7) goto LAB_007559e6;
            goto LAB_00755381;
          }
          auVar21 = vmovdqu64_avx512vl(auVar23);
          param_1[2] = auVar21;
        }
        else {
          auVar21 = vmovdqu64_avx512vl(auVar22);
          param_1[1] = auVar21;
        }
        goto LAB_007557f0;
      }
      uVar9 = uVar15 + 0x80 & 0xffffffffffffffe0;
      uVar14 = uVar15 + 0x60;
      param_3 = uVar14;
      if (SCARRY8(uVar15,0x60) == (long)uVar14 < 0) {
        auVar27 = vmovdqu64_avx512vl(auVar21);
        *param_1 = auVar27;
        param_3 = uVar15 + 0x40;
        if (0x1f < uVar14) {
          auVar27 = vmovdqu64_avx512vl(auVar22);
          param_1[1] = auVar27;
          param_3 = uVar15 + 0x20;
          if (0x1f < uVar15 + 0x40) {
            auVar27 = vmovdqu64_avx512vl(auVar23);
            param_1[2] = auVar27;
            param_3 = uVar15;
            if (0x1f < uVar15 + 0x20) {
              auVar27 = vmovdqu64_avx512vl(auVar24);
              param_1[3] = auVar27;
              return pauVar6;
            }
          }
        }
      }
      goto LAB_00755515;
    }
LAB_007557e0:
    auVar21 = vmovdqu64_avx512vl(auVar21);
    *(undefined1 (*) [32])(*param_1 + uVar9) = auVar21;
LAB_007557f0:
    uVar7 = 0;
    if ((uint)lVar16 != 0) {
      for (; ((uint)lVar16 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    param_3 = (param_3 + 0x1f) - (ulong)uVar7;
    pauVar12 = (undefined1 (*) [32])(*param_1 + (ulong)uVar7 + uVar9 + 1);
  }
  else {
    iVar3 = 0;
    if (uVar8 != 0) {
      for (; (uVar8 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
      }
    }
    param_2 = (undefined1 (*) [32])(*pauVar12 + uVar14);
    uVar9 = (ulong)((iVar3 + 0x20) - uVar7);
LAB_00755381:
    uVar7 = (uint)uVar9;
    if (uVar7 < 0x20) {
      if (uVar7 < 0x10) {
        if (uVar7 < 8) {
          if (uVar7 < 4) {
            if (uVar7 == 3) {
              *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
              param_3 = param_3 - 4;
              pauVar12 = (undefined1 (*) [32])(*param_1 + 4);
              if (param_3 == 0) {
                return pauVar6;
              }
            }
            else if (uVar7 < 2) {
              if (uVar7 == 1) {
                *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
                param_3 = param_3 - 2;
                pauVar12 = (undefined1 (*) [32])(*param_1 + 2);
                if (param_3 == 0) {
                  return pauVar6;
                }
              }
              else {
                (*param_1)[0] = 0;
                param_3 = param_3 - 1;
                pauVar12 = (undefined1 (*) [32])(*param_1 + 1);
                if (param_3 == 0) {
                  return pauVar6;
                }
              }
            }
            else {
              *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
              (*param_1)[2] = 0;
              param_3 = param_3 - 3;
              pauVar12 = (undefined1 (*) [32])(*param_1 + 3);
              if (param_3 == 0) {
                return pauVar6;
              }
            }
          }
          else {
            *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
            *(undefined4 *)(param_1[-1] + uVar9 + 0x1d) =
                 *(undefined4 *)(param_2[-1] + uVar9 + 0x1d);
            param_3 = (param_3 - uVar9) - 1;
            pauVar12 = (undefined1 (*) [32])(*param_1 + uVar9 + 1);
            if (param_3 == 0) {
              return pauVar6;
            }
          }
        }
        else {
          uVar4 = *(undefined8 *)(param_2[-1] + uVar9 + 0x19);
          *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
          *(undefined8 *)(param_1[-1] + uVar9 + 0x19) = uVar4;
          param_3 = (param_3 - uVar9) - 1;
          pauVar12 = (undefined1 (*) [32])(*param_1 + uVar9 + 1);
          if (param_3 == 0) {
            return pauVar6;
          }
        }
      }
      else {
        auVar20 = vmovdqu64_avx512vl(*(undefined1 (*) [16])*param_2);
        auVar19 = vmovdqu64_avx512vl(*(undefined1 (*) [16])(param_2[-1] + uVar9 + 0x11));
        auVar20 = vmovdqu64_avx512vl(auVar20);
        *(undefined1 (*) [16])*param_1 = auVar20;
        auVar20 = vmovdqu64_avx512vl(auVar19);
        *(undefined1 (*) [16])(param_1[-1] + uVar9 + 0x11) = auVar20;
        param_3 = (param_3 - uVar9) - 1;
        pauVar12 = (undefined1 (*) [32])(*param_1 + uVar9 + 1);
        if (param_3 == 0) {
          return pauVar6;
        }
      }
    }
    else {
      auVar21 = vmovdqu64_avx512vl(*param_2);
      auVar22 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + uVar9 + 1));
      auVar21 = vmovdqu64_avx512vl(auVar21);
      *param_1 = auVar21;
      auVar21 = vmovdqu64_avx512vl(auVar22);
      *(undefined1 (*) [32])(param_1[-1] + uVar9 + 1) = auVar21;
      param_3 = (param_3 - uVar9) - 1;
      pauVar12 = (undefined1 (*) [32])(*param_1 + uVar9 + 1);
      if (param_3 == 0) {
        return pauVar6;
      }
    }
  }
LAB_00755810:
  lVar16 = param_3 - 0x20;
  if (0x1f < param_3 && lVar16 != 0) {
    auVar21 = vmovdqu64_avx512vl(auVar27);
    *pauVar12 = auVar21;
    uVar9 = (ulong)((uint)(pauVar12 + 1) & 0x1f);
    pauVar13 = (undefined1 (*) [32])((long)(pauVar12 + 1) - uVar9);
    uVar9 = lVar16 + uVar9;
    while (0x7f < uVar9) {
      auVar21 = vmovdqa64_avx512vl(auVar27);
      *pauVar13 = auVar21;
      auVar21 = vmovdqa64_avx512vl(auVar27);
      pauVar13[1] = auVar21;
      auVar21 = vmovdqa64_avx512vl(auVar27);
      pauVar13[2] = auVar21;
      auVar21 = vmovdqa64_avx512vl(auVar27);
      pauVar13[3] = auVar21;
      pauVar13 = pauVar13 + 4;
      uVar9 = uVar9 - 0x80;
    }
    lVar10 = uVar9 - 0x40;
    if (SCARRY8(uVar9 - 0x80,0x40) == lVar10 < 0) {
      auVar21 = vmovdqa64_avx512vl(auVar27);
      *pauVar13 = auVar21;
      auVar21 = vmovdqa64_avx512vl(auVar27);
      pauVar13[1] = auVar21;
      lVar16 = uVar9 - 0x60;
      pauVar12 = pauVar13 + 2;
      if (0x1f < lVar10) {
        auVar27 = vmovdqa64_avx512vl(auVar27);
        pauVar13[2] = auVar27;
        pauVar12 = pauVar13 + 3;
        goto LAB_007558b4;
      }
    }
    else {
      lVar16 = uVar9 - 0x20;
      pauVar12 = pauVar13;
      if (SCARRY8(lVar10,0x20) == lVar16 < 0) {
        auVar27 = vmovdqa64_avx512vl(auVar27);
        *pauVar13 = auVar27;
        pauVar12 = pauVar13 + 1;
        goto LAB_007558b4;
      }
    }
  }
  lVar16 = lVar16 + 0x20;
LAB_007558b4:
  uVar7 = (uint)lVar16;
  if (0x10 < uVar7) {
    auVar20 = vmovdqu64_avx512vl(auVar18);
    *(undefined1 (*) [16])*pauVar12 = auVar20;
    auVar18 = vmovdqu64_avx512vl(auVar18);
    *(undefined1 (*) [16])(pauVar12[-1] + lVar16 + 0x10) = auVar18;
    return pauVar6;
  }
  if (8 < uVar7) {
    *(undefined8 *)*pauVar12 = 0;
    *(undefined8 *)(pauVar12[-1] + lVar16 + 0x18) = 0;
    return pauVar6;
  }
  if (4 < uVar7) {
    *(undefined4 *)*pauVar12 = 0;
    *(undefined4 *)(pauVar12[-1] + lVar16 + 0x1c) = 0;
    return pauVar6;
  }
  if (uVar7 < 3) {
    if (1 < uVar7) {
      *(undefined2 *)*pauVar12 = 0;
      return pauVar6;
    }
    if (uVar7 != 1) {
      return pauVar6;
    }
    (*pauVar12)[0] = 0;
    return pauVar6;
  }
  *(undefined2 *)*pauVar12 = 0;
  *(undefined2 *)(pauVar12[-1] + lVar16 + 0x1e) = 0;
  return pauVar6;
LAB_00755244:
  param_1 = pauVar5 + 4;
  pauVar12 = pauVar13 + 4;
  auVar21 = vmovdqu64_avx512vl(auVar21);
  *pauVar5 = auVar21;
  auVar21 = vmovdqa64_avx512vl(*pauVar12);
  auVar22 = vmovdqu64_avx512vl(auVar22);
  pauVar5[1] = auVar22;
  auVar22 = vmovdqa64_avx512vl(pauVar13[5]);
  auVar25 = vpminub_avx512vl(auVar21,auVar22);
  auVar23 = vmovdqu64_avx512vl(auVar23);
  pauVar5[2] = auVar23;
  auVar23 = vmovdqa64_avx512vl(pauVar13[6]);
  auVar24 = vmovdqu64_avx512vl(auVar24);
  pauVar5[3] = auVar24;
  auVar24 = vmovdqa64_avx512vl(pauVar13[7]);
  auVar26 = vpminub_avx512vl(auVar23,auVar24);
  auVar25 = vpminub_avx512vl(auVar26,auVar25);
  uVar4 = vpcmpb_avx512vl(auVar28,auVar25,0);
  iVar3 = (int)uVar4;
  lVar16 = CONCAT44((int)((ulong)lVar16 >> 0x20),iVar3);
  bVar17 = uVar15 < 0x80;
  uVar15 = uVar15 - 0x80;
  pauVar13 = pauVar12;
  pauVar5 = param_1;
  if (bVar17 || uVar15 == 0) goto LAB_007558f0;
  goto joined_r0x00755242;
}

