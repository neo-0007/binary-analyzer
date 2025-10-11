
undefined1 (*) [32]
FUN_007a8500(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulong param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [32];
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined4 uVar10;
  long lVar9;
  undefined1 (*pauVar11) [32];
  undefined1 (*pauVar12) [32];
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 in_ZMM16 [64];
  
  if (param_3 == 0) {
    return param_1;
  }
  auVar17 = vpxorq_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
  uVar6 = (uint)param_2;
  uVar10 = (undefined4)(param_3 >> 0x20);
  auVar26 = ZEXT1632(auVar17);
  if ((uVar6 & 0x7f) < 0x41) {
    auVar20 = vmovdqu64_avx512vl(*param_2);
    auVar21 = vmovdqu64_avx512vl(param_2[1]);
    uVar4 = vpcmpb_avx512vl(auVar26,auVar20,0);
    uVar8 = CONCAT44(uVar10,(int)uVar4);
    if (param_3 < 0x21) {
LAB_007a8a5c:
      if (uVar8 == 0) goto LAB_007a8f26;
      uVar6 = 0;
      if ((uint)uVar8 != 0) {
        for (; ((uint)uVar8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
      uVar8 = (ulong)uVar6;
      if ((uint)param_3 <= uVar6) goto LAB_007a8f26;
    }
    else {
      if ((int)uVar4 == 0) {
        auVar20 = vmovdqu64_avx512vl(auVar20);
        *param_1 = auVar20;
        uVar4 = vpcmpb_avx512vl(auVar26,auVar21,0);
        uVar8 = CONCAT44(uVar10,(int)uVar4);
        if (param_3 < 0x41) {
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          param_3 = param_3 - 0x20;
          goto LAB_007a8a5c;
        }
        if ((int)uVar4 == 0) {
          uVar13 = (ulong)(uVar6 & 0x1f);
          goto LAB_007a8590;
        }
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
        param_3 = param_3 - 0x20;
      }
LAB_007a8873:
      uVar6 = 0;
      if ((uint)uVar8 != 0) {
        for (; ((uint)uVar8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
      uVar8 = (ulong)uVar6;
    }
    goto LAB_007a8876;
  }
  pauVar11 = (undefined1 (*) [32])((ulong)param_2 & 0xffffffffffffffe0);
  uVar6 = uVar6 & 0x1f;
  uVar13 = (ulong)uVar6;
  uVar4 = vpcmpb_avx512vl(ZEXT1632(auVar17),*pauVar11,0);
  uVar8 = CONCAT44(uVar10,(int)uVar4) >> (sbyte)uVar6;
  uVar7 = (uint)uVar8;
  if (param_3 <= -uVar13 + 0x20) {
    if (uVar8 == 0) {
      param_2 = (undefined1 (*) [32])(*pauVar11 + uVar13);
      goto LAB_007a8f26;
    }
    uVar6 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
joined_r0x007a89f2:
    uVar8 = (ulong)uVar6;
    param_2 = (undefined1 (*) [32])(*pauVar11 + uVar13);
    if ((uint)param_3 <= uVar6) {
LAB_007a8f26:
      uVar6 = (uint)param_3;
      if (uVar6 == 0x41) {
        auVar26 = vmovdqu64_avx512vl(*param_2);
        auVar20 = vmovdqu64_avx512vl(param_2[1]);
        uVar1 = param_2[2][0];
        auVar26 = vmovdqu64_avx512vl(auVar26);
        *param_1 = auVar26;
        auVar26 = vmovdqu64_avx512vl(auVar20);
        param_1[1] = auVar26;
        param_1[2][0] = uVar1;
        return (undefined1 (*) [32])(param_1[2] + 1);
      }
      if (0x20 < uVar6) {
        auVar26 = vmovdqu64_avx512vl(*param_2);
        auVar20 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
        auVar26 = vmovdqu64_avx512vl(auVar26);
        *param_1 = auVar26;
        auVar26 = vmovdqu64_avx512vl(auVar20);
        *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar26;
        return (undefined1 (*) [32])(*param_1 + param_3);
      }
      if (0x10 < uVar6) {
        auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [16])*param_2);
        auVar19 = vmovdqu64_avx512vl(*(undefined1 (*) [16])(param_2[-1] + param_3 + 0x10));
        auVar17 = vmovdqu64_avx512vl(auVar17);
        *(undefined1 (*) [16])*param_1 = auVar17;
        auVar17 = vmovdqu64_avx512vl(auVar19);
        *(undefined1 (*) [16])(param_1[-1] + param_3 + 0x10) = auVar17;
        return (undefined1 (*) [32])(*param_1 + param_3);
      }
      if (8 < uVar6) {
        uVar4 = *(undefined8 *)(param_2[-1] + param_3 + 0x18);
        *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
        *(undefined8 *)(param_1[-1] + param_3 + 0x18) = uVar4;
        return (undefined1 (*) [32])(*param_1 + param_3);
      }
      if (4 < uVar6) {
        uVar10 = *(undefined4 *)(param_2[-1] + param_3 + 0x1c);
        *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
        *(undefined4 *)(param_1[-1] + param_3 + 0x1c) = uVar10;
        return (undefined1 (*) [32])(*param_1 + param_3);
      }
      if (2 < uVar6) {
        uVar2 = *(undefined2 *)(param_2[-1] + param_3 + 0x1e);
        *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
        *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar2;
        return (undefined1 (*) [32])(*param_1 + param_3);
      }
      if (1 < uVar6) {
        *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
        return (undefined1 (*) [32])(*param_1 + 2);
      }
      if (uVar6 != 1) {
        return param_1;
      }
      (*param_1)[0] = (*param_2)[0];
      return (undefined1 (*) [32])(*param_1 + 1);
    }
    goto LAB_007a8876;
  }
  if (uVar7 != 0) {
    param_2 = (undefined1 (*) [32])(*pauVar11 + uVar13);
    goto LAB_007a8873;
  }
  uVar4 = vpcmpb_avx512vl(ZEXT1632(auVar17),pauVar11[1],0);
  uVar7 = (uint)uVar4;
  uVar8 = CONCAT44((int)(uVar8 >> 0x20),uVar7);
  if (param_3 <= -uVar13 + 0x40) {
    if (uVar8 == 0) {
      param_2 = (undefined1 (*) [32])(*pauVar11 + uVar13);
      goto LAB_007a8f26;
    }
    iVar3 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
      }
    }
    uVar6 = (iVar3 + 0x20) - uVar6;
    goto joined_r0x007a89f2;
  }
  if (uVar7 == 0) {
    auVar20 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(*pauVar11 + uVar13));
    auVar20 = vmovdqu64_avx512vl(auVar20);
    *param_1 = auVar20;
LAB_007a8590:
    param_2 = (undefined1 (*) [32])((ulong)param_2 & 0xffffffffffffffe0);
    param_1 = (undefined1 (*) [32])((long)param_1 - uVar13);
    uVar13 = param_3 + uVar13 | -(ulong)CARRY8(param_3,uVar13);
    auVar20 = vmovdqa64_avx512vl(param_2[1]);
    auVar20 = vmovdqu64_avx512vl(auVar20);
    param_1[1] = auVar20;
    auVar20 = vmovdqa64_avx512vl(param_2[2]);
    uVar4 = vpcmpb_avx512vl(auVar26,auVar20,0);
    uVar10 = (undefined4)(uVar8 >> 0x20);
    lVar15 = CONCAT44(uVar10,(int)uVar4);
    uVar8 = 0x40;
    param_3 = uVar13 - 0x60;
    pauVar11 = param_2;
    if (uVar13 < 0x60 || param_3 == 0) {
LAB_007a8a10:
      if (lVar15 == 0) {
LAB_007a8a15:
        param_3 = param_3 + 0x20;
        param_1 = (undefined1 (*) [32])(*param_1 + uVar8);
        param_2 = (undefined1 (*) [32])(*pauVar11 + uVar8);
        goto LAB_007a8f26;
      }
      param_3 = param_3 + 0x20;
      param_1 = (undefined1 (*) [32])(*param_1 + uVar8);
      param_2 = (undefined1 (*) [32])(*pauVar11 + uVar8);
      uVar6 = 0;
      if ((uint)lVar15 != 0) {
        for (; ((uint)lVar15 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
      uVar8 = (ulong)uVar6;
      if ((uint)param_3 <= uVar6) goto LAB_007a8f26;
      goto LAB_007a8876;
    }
    if ((int)uVar4 != 0) goto LAB_007a8d20;
    auVar20 = vmovdqu64_avx512vl(auVar20);
    param_1[2] = auVar20;
    auVar21 = vmovdqa64_avx512vl(param_2[3]);
    uVar4 = vpcmpb_avx512vl(auVar26,auVar21,0);
    lVar15 = CONCAT44(uVar10,(int)uVar4);
    uVar8 = 0x60;
    bVar16 = param_3 < 0x20;
    param_3 = uVar13 - 0x80;
    if (bVar16 || param_3 == 0) goto LAB_007a8a10;
    if ((int)uVar4 != 0) {
LAB_007a89a0:
      auVar20 = vmovdqu64_avx512vl(auVar21);
      *(undefined1 (*) [32])(*param_1 + uVar8) = auVar20;
      goto LAB_007a8d30;
    }
    auVar20 = vmovdqu64_avx512vl(auVar21);
    param_1[3] = auVar20;
    auVar20 = vmovdqa64_avx512vl(param_2[4]);
    auVar27 = ZEXT1632(auVar17);
    uVar4 = vpcmpb_avx512vl(auVar27,auVar20,0);
    lVar15 = CONCAT44(uVar10,(int)uVar4);
    uVar8 = 0x80;
    bVar16 = param_3 < 0x20;
    param_3 = uVar13 - 0xa0;
    if (bVar16 || param_3 == 0) goto LAB_007a8a10;
    if ((int)uVar4 != 0) {
LAB_007a8990:
      auVar20 = vmovdqu64_avx512vl(auVar20);
      *(undefined1 (*) [32])(*param_1 + uVar8) = auVar20;
      goto LAB_007a8d30;
    }
    auVar20 = vmovdqu64_avx512vl(auVar20);
    param_1[4] = auVar20;
    auVar20 = vmovdqa64_avx512vl(param_2[5]);
    uVar4 = vpcmpb_avx512vl(auVar27,auVar20,0);
    lVar15 = CONCAT44(uVar10,(int)uVar4);
    uVar8 = 0xa0;
    bVar16 = param_3 < 0x20;
    param_3 = uVar13 - 0xc0;
    if (bVar16 || param_3 == 0) goto LAB_007a8a10;
    if ((int)uVar4 == 0) {
      auVar20 = vmovdqu64_avx512vl(auVar20);
      param_1[5] = auVar20;
      auVar20 = vmovdqa64_avx512vl(param_2[6]);
      uVar4 = vpcmpb_avx512vl(auVar27,auVar20,0);
      lVar15 = CONCAT44(uVar10,(int)uVar4);
      uVar8 = 0xc0;
      bVar16 = param_3 < 0x20;
      param_3 = uVar13 - 0xe0;
      if (bVar16 || param_3 == 0) goto LAB_007a8a10;
      if ((int)uVar4 != 0) goto LAB_007a8d20;
      auVar21 = vmovdqa64_avx512vl(param_2[7]);
      auVar20 = vmovdqu64_avx512vl(auVar20);
      param_1[6] = auVar20;
      uVar4 = vpcmpb_avx512vl(auVar27,auVar21,0);
      lVar15 = CONCAT44(uVar10,(int)uVar4);
      uVar8 = 0xe0;
      bVar16 = param_3 < 0x20;
      param_3 = uVar13 - 0x100;
      if (bVar16 || param_3 == 0) goto LAB_007a8a10;
      if ((int)uVar4 != 0) goto LAB_007a89a0;
      auVar20 = vmovdqu64_avx512vl(auVar21);
      param_1[7] = auVar20;
      pauVar11 = (undefined1 (*) [32])((ulong)(param_2 + 8) & 0xffffffffffffff80);
      lVar9 = (long)param_2 - (long)pauVar11;
      param_1 = (undefined1 (*) [32])((long)param_1 - lVar9);
      auVar20 = vmovdqa64_avx512vl(*pauVar11);
      auVar21 = vmovdqa64_avx512vl(pauVar11[1]);
      auVar22 = vmovdqa64_avx512vl(pauVar11[2]);
      auVar23 = vmovdqa64_avx512vl(pauVar11[3]);
      auVar24 = vpminub_avx512vl(auVar20,auVar21);
      auVar25 = vpminub_avx512vl(auVar22,auVar23);
      auVar24 = vpminub_avx512vl(auVar25,auVar24);
      uVar4 = vpcmpb_avx512vl(auVar27,auVar24,0);
      iVar3 = (int)uVar4;
      lVar15 = CONCAT44((int)((ulong)lVar9 >> 0x20),iVar3);
      uVar14 = (uVar13 + lVar9) - 0x80;
      pauVar5 = pauVar11;
      pauVar12 = param_1;
      if (0x7f < uVar13 + lVar9 && uVar14 != 0) {
joined_r0x007a8732:
        if (iVar3 == 0) goto LAB_007a8734;
        uVar4 = vpcmpb_avx512vl(auVar27,auVar20,0);
        uVar6 = (uint)uVar4;
        if (uVar6 == 0) {
          uVar4 = vpcmpb_avx512vl(auVar27,auVar21,0);
          uVar6 = (uint)uVar4;
          if (uVar6 == 0) {
            uVar4 = vpcmpb_avx512vl(auVar26,auVar22,0);
            uVar6 = (uint)uVar4;
            if (uVar6 == 0) {
              uVar4 = vpcmpb_avx512vl(auVar26,auVar23,0);
              uVar6 = 0;
              if ((uint)uVar4 != 0) {
                for (; ((uint)uVar4 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                }
              }
              uVar8 = (ulong)uVar6;
              auVar20 = vmovdqu64_avx512vl(auVar20);
              *pauVar12 = auVar20;
              auVar20 = vmovdqu64_avx512vl(auVar21);
              pauVar12[1] = auVar20;
              auVar20 = vmovdqu64_avx512vl(auVar22);
              pauVar12[2] = auVar20;
              auVar20 = vmovdqu64_avx512vl(auVar23);
              pauVar12[3] = auVar20;
              param_3 = (uVar14 + 0x1f) - uVar8;
              pauVar11 = (undefined1 (*) [32])(pauVar12[3] + uVar8 + 1);
              pauVar5 = (undefined1 (*) [32])(pauVar12[3] + uVar8);
            }
            else {
              uVar7 = 0;
              if (uVar6 != 0) {
                for (; (uVar6 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
                }
              }
              uVar8 = (ulong)uVar7;
              auVar20 = vmovdqu64_avx512vl(auVar20);
              *pauVar12 = auVar20;
              auVar20 = vmovdqu64_avx512vl(auVar21);
              pauVar12[1] = auVar20;
              auVar20 = vmovdqu64_avx512vl(auVar22);
              pauVar12[2] = auVar20;
              param_3 = (uVar14 + 0x3f) - uVar8;
              pauVar11 = (undefined1 (*) [32])(pauVar12[2] + uVar8 + 1);
              pauVar5 = (undefined1 (*) [32])(pauVar12[2] + uVar8);
            }
          }
          else {
            uVar7 = 0;
            if (uVar6 != 0) {
              for (; (uVar6 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
              }
            }
            uVar8 = (ulong)uVar7;
            auVar20 = vmovdqu64_avx512vl(auVar20);
            *pauVar12 = auVar20;
            auVar20 = vmovdqu64_avx512vl(auVar21);
            pauVar12[1] = auVar20;
            param_3 = (uVar14 + 0x5f) - uVar8;
            pauVar11 = (undefined1 (*) [32])(pauVar12[1] + uVar8 + 1);
            pauVar5 = (undefined1 (*) [32])(pauVar12[1] + uVar8);
          }
        }
        else {
          uVar7 = 0;
          if (uVar6 != 0) {
            for (; (uVar6 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
            }
          }
          uVar8 = (ulong)uVar7;
          auVar20 = vmovdqu64_avx512vl(auVar20);
          *pauVar12 = auVar20;
          param_3 = (uVar14 + 0x7f) - uVar8;
          pauVar11 = (undefined1 (*) [32])(*pauVar12 + uVar8 + 1);
          pauVar5 = (undefined1 (*) [32])(*pauVar12 + uVar8);
        }
        goto LAB_007a8d50;
      }
LAB_007a8e30:
      if (lVar15 != 0) {
        uVar8 = 0;
        uVar4 = vpcmpb_avx512vl(auVar26,auVar20,0);
        uVar10 = (undefined4)((ulong)lVar15 >> 0x20);
        lVar15 = CONCAT44(uVar10,(int)uVar4);
        param_3 = uVar14 + 0x60;
        if (param_3 == 0 || SCARRY8(uVar14,0x60) != (long)param_3 < 0) goto LAB_007a8a10;
        if ((int)uVar4 != 0) goto LAB_007a8990;
        uVar4 = vpcmpb_avx512vl(auVar26,auVar21,0);
        lVar15 = CONCAT44(uVar10,(int)uVar4);
        auVar20 = vmovdqu64_avx512vl(auVar20);
        *param_1 = auVar20;
        uVar8 = 0x20;
        bVar16 = param_3 < 0x20;
        param_3 = uVar14 + 0x40;
        if (bVar16 || param_3 == 0) goto LAB_007a8a10;
        if ((int)uVar4 == 0) {
          uVar4 = vpcmpb_avx512vl(auVar26,auVar22,0);
          lVar15 = CONCAT44(uVar10,(int)uVar4);
          auVar20 = vmovdqu64_avx512vl(auVar21);
          param_1[1] = auVar20;
          uVar8 = 0x40;
          bVar16 = param_3 < 0x20;
          param_3 = uVar14 + 0x20;
          if (bVar16 || param_3 == 0) goto LAB_007a8a10;
          if ((int)uVar4 == 0) {
            uVar4 = vpcmpb_avx512vl(auVar26,auVar23,0);
            auVar20 = vmovdqu64_avx512vl(auVar22);
            param_1[2] = auVar20;
            param_1 = param_1 + 3;
            param_2 = pauVar11 + 3;
            uVar6 = 0;
            if ((uint)uVar4 != 0) {
              for (; ((uint)uVar4 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
              }
            }
            uVar8 = (ulong)uVar6;
            if ((uint)param_3 <= uVar6) goto LAB_007a8f26;
            goto LAB_007a8876;
          }
          auVar20 = vmovdqu64_avx512vl(auVar22);
          param_1[2] = auVar20;
        }
        else {
          auVar20 = vmovdqu64_avx512vl(auVar21);
          param_1[1] = auVar20;
        }
        goto LAB_007a8d30;
      }
      uVar8 = uVar14 + 0x80 & 0xffffffffffffffe0;
      uVar13 = uVar14 + 0x60;
      param_3 = uVar13;
      if (SCARRY8(uVar14,0x60) == (long)uVar13 < 0) {
        auVar26 = vmovdqu64_avx512vl(auVar20);
        *param_1 = auVar26;
        param_3 = uVar14 + 0x40;
        if (0x1f < uVar13) {
          auVar26 = vmovdqu64_avx512vl(auVar21);
          param_1[1] = auVar26;
          param_3 = uVar14 + 0x20;
          if (0x1f < uVar14 + 0x40) {
            auVar26 = vmovdqu64_avx512vl(auVar22);
            param_1[2] = auVar26;
            param_3 = uVar14;
            if (0x1f < uVar14 + 0x20) {
              auVar26 = vmovdqu64_avx512vl(auVar23);
              param_1[3] = auVar26;
              return param_1 + 4;
            }
          }
        }
      }
      goto LAB_007a8a15;
    }
LAB_007a8d20:
    auVar20 = vmovdqu64_avx512vl(auVar20);
    *(undefined1 (*) [32])(*param_1 + uVar8) = auVar20;
LAB_007a8d30:
    uVar6 = 0;
    if ((uint)lVar15 != 0) {
      for (; ((uint)lVar15 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    uVar13 = (ulong)uVar6;
    pauVar5 = (undefined1 (*) [32])(*param_1 + uVar13 + uVar8);
    param_3 = (param_3 + 0x1f) - uVar13;
    pauVar11 = (undefined1 (*) [32])(*param_1 + uVar13 + uVar8 + 1);
  }
  else {
    iVar3 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
      }
    }
    param_2 = (undefined1 (*) [32])(*pauVar11 + uVar13);
    uVar8 = (ulong)((iVar3 + 0x20) - uVar6);
LAB_007a8876:
    uVar6 = (uint)uVar8;
    if (uVar6 < 0x20) {
      if (uVar6 < 0x10) {
        if (uVar6 < 8) {
          if (uVar6 < 4) {
            if (uVar6 == 3) {
              *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
              pauVar5 = (undefined1 (*) [32])(*param_1 + 3);
              param_3 = param_3 - 4;
              pauVar11 = (undefined1 (*) [32])(*param_1 + 4);
              if (param_3 == 0) {
                return pauVar5;
              }
            }
            else if (uVar6 < 2) {
              if (uVar6 == 1) {
                *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
                pauVar5 = (undefined1 (*) [32])(*param_1 + 1);
                param_3 = param_3 - 2;
                pauVar11 = (undefined1 (*) [32])(*param_1 + 2);
                if (param_3 == 0) {
                  return pauVar5;
                }
              }
              else {
                (*param_1)[0] = 0;
                param_3 = param_3 - 1;
                pauVar11 = (undefined1 (*) [32])(*param_1 + 1);
                pauVar5 = param_1;
                if (param_3 == 0) {
                  return param_1;
                }
              }
            }
            else {
              *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
              (*param_1)[2] = 0;
              pauVar5 = (undefined1 (*) [32])(*param_1 + 2);
              param_3 = param_3 - 3;
              pauVar11 = (undefined1 (*) [32])(*param_1 + 3);
              if (param_3 == 0) {
                return pauVar5;
              }
            }
          }
          else {
            *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
            *(undefined4 *)(param_1[-1] + uVar8 + 0x1d) =
                 *(undefined4 *)(param_2[-1] + uVar8 + 0x1d);
            pauVar5 = (undefined1 (*) [32])(*param_1 + uVar8);
            param_3 = (param_3 - uVar8) - 1;
            pauVar11 = (undefined1 (*) [32])(*param_1 + uVar8 + 1);
            if (param_3 == 0) {
              return pauVar5;
            }
          }
        }
        else {
          uVar4 = *(undefined8 *)(param_2[-1] + uVar8 + 0x19);
          *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
          *(undefined8 *)(param_1[-1] + uVar8 + 0x19) = uVar4;
          pauVar5 = (undefined1 (*) [32])(*param_1 + uVar8);
          param_3 = (param_3 - uVar8) - 1;
          pauVar11 = (undefined1 (*) [32])(*param_1 + uVar8 + 1);
          if (param_3 == 0) {
            return pauVar5;
          }
        }
      }
      else {
        auVar19 = vmovdqu64_avx512vl(*(undefined1 (*) [16])*param_2);
        auVar18 = vmovdqu64_avx512vl(*(undefined1 (*) [16])(param_2[-1] + uVar8 + 0x11));
        auVar19 = vmovdqu64_avx512vl(auVar19);
        *(undefined1 (*) [16])*param_1 = auVar19;
        auVar19 = vmovdqu64_avx512vl(auVar18);
        *(undefined1 (*) [16])(param_1[-1] + uVar8 + 0x11) = auVar19;
        pauVar5 = (undefined1 (*) [32])(*param_1 + uVar8);
        param_3 = (param_3 - uVar8) - 1;
        pauVar11 = (undefined1 (*) [32])(*param_1 + uVar8 + 1);
        if (param_3 == 0) {
          return pauVar5;
        }
      }
    }
    else {
      auVar20 = vmovdqu64_avx512vl(*param_2);
      auVar21 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + uVar8 + 1));
      auVar20 = vmovdqu64_avx512vl(auVar20);
      *param_1 = auVar20;
      auVar20 = vmovdqu64_avx512vl(auVar21);
      *(undefined1 (*) [32])(param_1[-1] + uVar8 + 1) = auVar20;
      pauVar5 = (undefined1 (*) [32])(*param_1 + uVar8);
      param_3 = (param_3 - uVar8) - 1;
      pauVar11 = (undefined1 (*) [32])(*param_1 + uVar8 + 1);
      if (param_3 == 0) {
        return pauVar5;
      }
    }
  }
LAB_007a8d50:
  lVar15 = param_3 - 0x20;
  if (0x1f < param_3 && lVar15 != 0) {
    auVar20 = vmovdqu64_avx512vl(auVar26);
    *pauVar11 = auVar20;
    uVar8 = (ulong)((uint)(pauVar11 + 1) & 0x1f);
    pauVar12 = (undefined1 (*) [32])((long)(pauVar11 + 1) - uVar8);
    uVar8 = lVar15 + uVar8;
    while (0x7f < uVar8) {
      auVar20 = vmovdqa64_avx512vl(auVar26);
      *pauVar12 = auVar20;
      auVar20 = vmovdqa64_avx512vl(auVar26);
      pauVar12[1] = auVar20;
      auVar20 = vmovdqa64_avx512vl(auVar26);
      pauVar12[2] = auVar20;
      auVar20 = vmovdqa64_avx512vl(auVar26);
      pauVar12[3] = auVar20;
      pauVar12 = pauVar12 + 4;
      uVar8 = uVar8 - 0x80;
    }
    lVar9 = uVar8 - 0x40;
    if (SCARRY8(uVar8 - 0x80,0x40) == lVar9 < 0) {
      auVar20 = vmovdqa64_avx512vl(auVar26);
      *pauVar12 = auVar20;
      auVar20 = vmovdqa64_avx512vl(auVar26);
      pauVar12[1] = auVar20;
      lVar15 = uVar8 - 0x60;
      pauVar11 = pauVar12 + 2;
      if (0x1f < lVar9) {
        auVar26 = vmovdqa64_avx512vl(auVar26);
        pauVar12[2] = auVar26;
        pauVar11 = pauVar12 + 3;
        goto LAB_007a8df4;
      }
    }
    else {
      lVar15 = uVar8 - 0x20;
      pauVar11 = pauVar12;
      if (SCARRY8(lVar9,0x20) == lVar15 < 0) {
        auVar26 = vmovdqa64_avx512vl(auVar26);
        *pauVar12 = auVar26;
        pauVar11 = pauVar12 + 1;
        goto LAB_007a8df4;
      }
    }
  }
  lVar15 = lVar15 + 0x20;
LAB_007a8df4:
  uVar6 = (uint)lVar15;
  if (0x10 < uVar6) {
    auVar19 = vmovdqu64_avx512vl(auVar17);
    *(undefined1 (*) [16])*pauVar11 = auVar19;
    auVar17 = vmovdqu64_avx512vl(auVar17);
    *(undefined1 (*) [16])(pauVar11[-1] + lVar15 + 0x10) = auVar17;
    return pauVar5;
  }
  if (8 < uVar6) {
    *(undefined8 *)*pauVar11 = 0;
    *(undefined8 *)(pauVar11[-1] + lVar15 + 0x18) = 0;
    return pauVar5;
  }
  if (4 < uVar6) {
    *(undefined4 *)*pauVar11 = 0;
    *(undefined4 *)(pauVar11[-1] + lVar15 + 0x1c) = 0;
    return pauVar5;
  }
  if (uVar6 < 3) {
    if (1 < uVar6) {
      *(undefined2 *)*pauVar11 = 0;
      return pauVar5;
    }
    if (uVar6 != 1) {
      return pauVar5;
    }
    (*pauVar11)[0] = 0;
    return pauVar5;
  }
  *(undefined2 *)*pauVar11 = 0;
  *(undefined2 *)(pauVar11[-1] + lVar15 + 0x1e) = 0;
  return pauVar5;
LAB_007a8734:
  param_1 = pauVar12 + 4;
  pauVar11 = pauVar5 + 4;
  auVar20 = vmovdqu64_avx512vl(auVar20);
  *pauVar12 = auVar20;
  auVar20 = vmovdqa64_avx512vl(*pauVar11);
  auVar21 = vmovdqu64_avx512vl(auVar21);
  pauVar12[1] = auVar21;
  auVar21 = vmovdqa64_avx512vl(pauVar5[5]);
  auVar24 = vpminub_avx512vl(auVar20,auVar21);
  auVar22 = vmovdqu64_avx512vl(auVar22);
  pauVar12[2] = auVar22;
  auVar22 = vmovdqa64_avx512vl(pauVar5[6]);
  auVar23 = vmovdqu64_avx512vl(auVar23);
  pauVar12[3] = auVar23;
  auVar23 = vmovdqa64_avx512vl(pauVar5[7]);
  auVar25 = vpminub_avx512vl(auVar22,auVar23);
  auVar24 = vpminub_avx512vl(auVar25,auVar24);
  uVar4 = vpcmpb_avx512vl(auVar27,auVar24,0);
  iVar3 = (int)uVar4;
  lVar15 = CONCAT44((int)((ulong)lVar15 >> 0x20),iVar3);
  bVar16 = uVar14 < 0x80;
  uVar14 = uVar14 - 0x80;
  pauVar5 = pauVar11;
  pauVar12 = param_1;
  if (bVar16 || uVar14 == 0) goto LAB_007a8e30;
  goto joined_r0x007a8732;
}

