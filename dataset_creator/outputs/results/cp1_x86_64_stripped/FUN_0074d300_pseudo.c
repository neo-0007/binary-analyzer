
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [64]
FUN_0074d300(undefined1 (*param_1) [64],undefined1 (*param_2) [64],ulong param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  undefined1 (*pauVar8) [64];
  uint uVar9;
  undefined1 (*pauVar10) [64];
  undefined1 *puVar11;
  undefined1 (*pauVar12) [64];
  undefined1 *puVar13;
  long lVar14;
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  
  if (param_3 < 0x40) {
    uVar9 = (uint)param_3;
    if (0x1f < uVar9) {
      auVar15 = vmovdqu64_avx512vl(*(undefined1 (*) [32])*param_2);
      auVar16 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3 + 0x20));
      auVar15 = vmovdqu64_avx512vl(auVar15);
      *(undefined1 (*) [32])*param_1 = auVar15;
      auVar15 = vmovdqu64_avx512vl(auVar16);
      *(undefined1 (*) [32])(param_1[-1] + param_3 + 0x20) = auVar15;
      return param_1;
    }
    if (0xf < uVar9) {
      uVar3 = *(undefined8 *)(*param_2 + 8);
      uVar4 = *(undefined8 *)(param_2[-1] + param_3 + 0x30);
      uVar5 = *(undefined8 *)((long)(param_2[-1] + param_3 + 0x30) + 8);
      *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
      *(undefined8 *)(*param_1 + 8) = uVar3;
      *(undefined8 *)(param_1[-1] + param_3 + 0x30) = uVar4;
      *(undefined8 *)((long)(param_1[-1] + param_3 + 0x30) + 8) = uVar5;
      return param_1;
    }
    if (7 < uVar9) {
      uVar3 = *(undefined8 *)(param_2[-1] + param_3 + 0x38);
      *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
      *(undefined8 *)(param_1[-1] + param_3 + 0x38) = uVar3;
      return param_1;
    }
    if (3 < param_3) {
      uVar2 = *(undefined4 *)(param_2[-1] + param_3 + 0x3c);
      *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
      *(undefined4 *)(param_1[-1] + param_3 + 0x3c) = uVar2;
      return param_1;
    }
    if (-4 < (int)(uVar9 - 4)) {
      uVar1 = (*param_2)[0];
      if (uVar9 - 4 != -3) {
        *(undefined2 *)(param_1[-1] + param_3 + 0x3e) =
             *(undefined2 *)(param_2[-1] + param_3 + 0x3e);
      }
      (*param_1)[0] = uVar1;
    }
    return param_1;
  }
  auVar17 = vmovdqu64_avx512f(*param_2);
  if (param_3 < 0x81) {
    auVar18 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
    auVar17 = vmovdqu64_avx512f(auVar17);
    *param_1 = auVar17;
    auVar17 = vmovdqu64_avx512f(auVar18);
    *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar17;
    return param_1;
  }
  if (DAT_0093d6f8 < param_3) {
    uVar7 = (long)param_1 - (long)param_2;
    if (uVar7 < param_3) goto LAB_0074d570;
    if (param_3 < DAT_00945828) {
      if ((_DAT_00945820 & 1) == 0) {
        if ((uVar7 & 0xe00) == 0) {
          puVar13 = (undefined1 *)((ulong)param_2 | 0x3f);
          puVar11 = puVar13 + uVar7 + 1;
          for (lVar14 = (long)param_2 + ((param_3 - 1) - (long)puVar13); puVar13 = puVar13 + 1,
              lVar14 != 0; lVar14 = lVar14 + -1) {
            *puVar11 = *puVar13;
            puVar11 = puVar11 + 1;
          }
          auVar17 = vmovdqu64_avx512f(auVar17);
          *param_1 = auVar17;
          return param_1;
        }
LAB_0074d680:
        puVar13 = (undefined1 *)((ulong)(*param_1 + 0x3f) & 0xffffffffffffffc0);
        lVar14 = (long)param_1 + (param_3 - (long)puVar13);
        puVar11 = puVar13 + ((long)param_2 - (long)param_1);
        for (; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        auVar17 = vmovdqu64_avx512f(auVar17);
        *param_1 = auVar17;
        return param_1;
      }
      if ((uint)uVar7 < 0xffffffc1) goto LAB_0074d680;
      goto LAB_0074d4c6;
    }
    if (DAT_0093d6f8 <= param_3) goto LAB_0074d6ad;
  }
  else {
    if (param_3 < 0x201) {
      auVar18 = vmovdqu64_avx512f(param_2[1]);
      if (param_3 < 0x101) {
        auVar19 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
        auVar20 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + param_3));
        auVar17 = vmovdqu64_avx512f(auVar17);
        *param_1 = auVar17;
        auVar17 = vmovdqu64_avx512f(auVar18);
        param_1[1] = auVar17;
        auVar17 = vmovdqu64_avx512f(auVar19);
        *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar17;
        auVar17 = vmovdqu64_avx512f(auVar20);
        *(undefined1 (*) [64])(param_1[-2] + param_3) = auVar17;
        return param_1;
      }
      auVar19 = vmovdqu64_avx512f(param_2[2]);
      auVar20 = vmovdqu64_avx512f(param_2[3]);
      auVar21 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
      auVar22 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + param_3));
      auVar23 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-3] + param_3));
      auVar24 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-4] + param_3));
      auVar17 = vmovdqu64_avx512f(auVar17);
      *param_1 = auVar17;
      auVar17 = vmovdqu64_avx512f(auVar18);
      param_1[1] = auVar17;
      auVar17 = vmovdqu64_avx512f(auVar19);
      param_1[2] = auVar17;
      auVar17 = vmovdqu64_avx512f(auVar20);
      param_1[3] = auVar17;
      auVar17 = vmovdqu64_avx512f(auVar21);
      *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar17;
      auVar17 = vmovdqu64_avx512f(auVar22);
      *(undefined1 (*) [64])(param_1[-2] + param_3) = auVar17;
      auVar17 = vmovdqu64_avx512f(auVar23);
      *(undefined1 (*) [64])(param_1[-3] + param_3) = auVar17;
      auVar17 = vmovdqu64_avx512f(auVar24);
      *(undefined1 (*) [64])(param_1[-4] + param_3) = auVar17;
      return param_1;
    }
    uVar7 = (long)param_1 - (long)param_2;
    if (uVar7 < param_3) {
LAB_0074d570:
      if (uVar7 == 0) {
        return param_1;
      }
      goto LAB_0074d575;
    }
    if (DAT_00945830 < param_3) {
LAB_0074d6ad:
      if (param_3 <= -uVar7) {
        auVar17 = vmovdqu64_avx512f(auVar17);
        *param_1 = auVar17;
        lVar14 = ((ulong)param_1 & 0x3f) - 0x40;
        param_2 = (undefined1 (*) [64])((long)param_2 - lVar14);
        pauVar8 = (undefined1 (*) [64])((long)param_1 - lVar14);
        param_3 = param_3 + lVar14;
        if (((~(uint)-uVar7 & 0xe00) != 0) && (param_3 >> 4 < DAT_00945830)) {
          uVar9 = (uint)param_3 & 0x1fff;
          param_3 = param_3 >> 0xd;
          do {
            iVar6 = 0x20;
            do {
              pauVar12 = pauVar8;
              pauVar10 = param_2;
              auVar17 = vmovdqu64_avx512f(*pauVar10);
              auVar18 = vmovdqu64_avx512f(pauVar10[1]);
              auVar19 = vmovdqu64_avx512f(pauVar10[0x40]);
              auVar20 = vmovdqu64_avx512f(pauVar10[0x41]);
              auVar17 = vmovntdq_avx512f(auVar17);
              *pauVar12 = auVar17;
              auVar17 = vmovntdq_avx512f(auVar18);
              pauVar12[1] = auVar17;
              auVar17 = vmovntdq_avx512f(auVar19);
              pauVar12[0x40] = auVar17;
              auVar17 = vmovntdq_avx512f(auVar20);
              pauVar12[0x41] = auVar17;
              iVar6 = iVar6 + -1;
              param_2 = pauVar10 + 2;
              pauVar8 = pauVar12 + 2;
            } while (iVar6 != 0);
            pauVar8 = pauVar12 + 0x42;
            param_2 = pauVar10 + 0x42;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
          while (0x100 < uVar9) {
            auVar17 = vmovdqu64_avx512f(*param_2);
            auVar18 = vmovdqu64_avx512f(param_2[1]);
            auVar19 = vmovdqu64_avx512f(param_2[2]);
            auVar20 = vmovdqu64_avx512f(param_2[3]);
            param_2 = param_2 + 4;
            uVar9 = uVar9 - 0x100;
            auVar17 = vmovdqa64_avx512f(auVar17);
            *pauVar8 = auVar17;
            auVar17 = vmovdqa64_avx512f(auVar18);
            pauVar8[1] = auVar17;
            auVar17 = vmovdqa64_avx512f(auVar19);
            pauVar8[2] = auVar17;
            auVar17 = vmovdqa64_avx512f(auVar20);
            pauVar8[3] = auVar17;
            pauVar8 = pauVar8 + 4;
          }
          auVar17 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-4] + uVar9));
          auVar18 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-3] + uVar9));
          auVar19 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + uVar9));
          auVar20 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + uVar9));
          auVar17 = vmovdqu64_avx512f(auVar17);
          *(undefined1 (*) [64])(pauVar8[-4] + uVar9) = auVar17;
          auVar17 = vmovdqu64_avx512f(auVar18);
          *(undefined1 (*) [64])(pauVar8[-3] + uVar9) = auVar17;
          auVar17 = vmovdqu64_avx512f(auVar19);
          *(undefined1 (*) [64])(pauVar8[-2] + uVar9) = auVar17;
          auVar17 = vmovdqu64_avx512f(auVar20);
          *(undefined1 (*) [64])(pauVar8[-1] + uVar9) = auVar17;
          return param_1;
        }
        uVar9 = (uint)param_3 & 0x3fff;
        param_3 = param_3 >> 0xe;
        do {
          iVar6 = 0x20;
          do {
            pauVar12 = pauVar8;
            pauVar10 = param_2;
            auVar17 = vmovdqu64_avx512f(*pauVar10);
            auVar18 = vmovdqu64_avx512f(pauVar10[1]);
            auVar19 = vmovdqu64_avx512f(pauVar10[0x40]);
            auVar20 = vmovdqu64_avx512f(pauVar10[0x41]);
            auVar21 = vmovdqu64_avx512f(pauVar10[0x80]);
            auVar22 = vmovdqu64_avx512f(pauVar10[0x81]);
            auVar23 = vmovdqu64_avx512f(pauVar10[0xc0]);
            auVar24 = vmovdqu64_avx512f(pauVar10[0xc1]);
            auVar17 = vmovntdq_avx512f(auVar17);
            *pauVar12 = auVar17;
            auVar17 = vmovntdq_avx512f(auVar18);
            pauVar12[1] = auVar17;
            auVar17 = vmovntdq_avx512f(auVar19);
            pauVar12[0x40] = auVar17;
            auVar17 = vmovntdq_avx512f(auVar20);
            pauVar12[0x41] = auVar17;
            auVar17 = vmovntdq_avx512f(auVar21);
            pauVar12[0x80] = auVar17;
            auVar17 = vmovntdq_avx512f(auVar22);
            pauVar12[0x81] = auVar17;
            auVar17 = vmovntdq_avx512f(auVar23);
            pauVar12[0xc0] = auVar17;
            auVar17 = vmovntdq_avx512f(auVar24);
            pauVar12[0xc1] = auVar17;
            iVar6 = iVar6 + -1;
            param_2 = pauVar10 + 2;
            pauVar8 = pauVar12 + 2;
          } while (iVar6 != 0);
          pauVar8 = pauVar12 + 0xc2;
          param_2 = pauVar10 + 0xc2;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        while (0x100 < uVar9) {
          auVar17 = vmovdqu64_avx512f(*param_2);
          auVar18 = vmovdqu64_avx512f(param_2[1]);
          auVar19 = vmovdqu64_avx512f(param_2[2]);
          auVar20 = vmovdqu64_avx512f(param_2[3]);
          param_2 = param_2 + 4;
          uVar9 = uVar9 - 0x100;
          auVar17 = vmovdqa64_avx512f(auVar17);
          *pauVar8 = auVar17;
          auVar17 = vmovdqa64_avx512f(auVar18);
          pauVar8[1] = auVar17;
          auVar17 = vmovdqa64_avx512f(auVar19);
          pauVar8[2] = auVar17;
          auVar17 = vmovdqa64_avx512f(auVar20);
          pauVar8[3] = auVar17;
          pauVar8 = pauVar8 + 4;
        }
        auVar17 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-4] + uVar9));
        auVar18 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-3] + uVar9));
        auVar19 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + uVar9));
        auVar20 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + uVar9));
        auVar17 = vmovdqu64_avx512f(auVar17);
        *(undefined1 (*) [64])(pauVar8[-4] + uVar9) = auVar17;
        auVar17 = vmovdqu64_avx512f(auVar18);
        *(undefined1 (*) [64])(pauVar8[-3] + uVar9) = auVar17;
        auVar17 = vmovdqu64_avx512f(auVar19);
        *(undefined1 (*) [64])(pauVar8[-2] + uVar9) = auVar17;
        auVar17 = vmovdqu64_avx512f(auVar20);
        *(undefined1 (*) [64])(pauVar8[-1] + uVar9) = auVar17;
        return param_1;
      }
      goto LAB_0074d4c6;
    }
  }
  if (((uint)uVar7 & 0xf00) !=
      (int)((uint)(uVar7 + param_3 >> 0x20) ^ (uint)(uVar7 >> 0x20)) >> 0x1f) {
LAB_0074d4c6:
    auVar18 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
    auVar19 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + param_3));
    auVar20 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-3] + param_3));
    auVar21 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-4] + param_3));
    pauVar12 = (undefined1 (*) [64])(((ulong)param_1 | 0x3f) + 1);
    pauVar10 = (undefined1 (*) [64])(((long)param_2 - (long)param_1) + (long)pauVar12);
    pauVar8 = (undefined1 (*) [64])(param_1[-4] + param_3);
    do {
      auVar22 = vmovdqu64_avx512f(*pauVar10);
      auVar23 = vmovdqu64_avx512f(pauVar10[1]);
      auVar24 = vmovdqu64_avx512f(pauVar10[2]);
      auVar25 = vmovdqu64_avx512f(pauVar10[3]);
      pauVar10 = pauVar10 + 4;
      auVar22 = vmovdqa64_avx512f(auVar22);
      *pauVar12 = auVar22;
      auVar22 = vmovdqa64_avx512f(auVar23);
      pauVar12[1] = auVar22;
      auVar22 = vmovdqa64_avx512f(auVar24);
      pauVar12[2] = auVar22;
      auVar22 = vmovdqa64_avx512f(auVar25);
      pauVar12[3] = auVar22;
      pauVar12 = pauVar12 + 4;
    } while (pauVar12 < pauVar8);
    auVar18 = vmovdqu64_avx512f(auVar18);
    pauVar8[3] = auVar18;
    auVar18 = vmovdqu64_avx512f(auVar19);
    pauVar8[2] = auVar18;
    auVar18 = vmovdqu64_avx512f(auVar20);
    pauVar8[1] = auVar18;
    auVar18 = vmovdqu64_avx512f(auVar21);
    *pauVar8 = auVar18;
    auVar17 = vmovdqu64_avx512f(auVar17);
    *param_1 = auVar17;
    return param_1;
  }
LAB_0074d575:
  auVar18 = vmovdqu64_avx512f(param_2[1]);
  auVar19 = vmovdqu64_avx512f(param_2[2]);
  auVar20 = vmovdqu64_avx512f(param_2[3]);
  auVar21 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
  pauVar8 = (undefined1 (*) [64])((ulong)(param_1[-5] + param_3 + 0x3f) & 0xffffffffffffffc0);
  pauVar10 = (undefined1 (*) [64])(((long)param_2 - (long)param_1) + (long)pauVar8);
  do {
    auVar22 = vmovdqu64_avx512f(pauVar10[3]);
    auVar23 = vmovdqu64_avx512f(pauVar10[2]);
    auVar24 = vmovdqu64_avx512f(pauVar10[1]);
    auVar25 = vmovdqu64_avx512f(*pauVar10);
    pauVar10 = pauVar10 + -4;
    auVar22 = vmovdqa64_avx512f(auVar22);
    pauVar8[3] = auVar22;
    auVar22 = vmovdqa64_avx512f(auVar23);
    pauVar8[2] = auVar22;
    auVar22 = vmovdqa64_avx512f(auVar24);
    pauVar8[1] = auVar22;
    auVar22 = vmovdqa64_avx512f(auVar25);
    *pauVar8 = auVar22;
    pauVar8 = pauVar8 + -4;
  } while (param_1 < pauVar8);
  auVar17 = vmovdqu64_avx512f(auVar17);
  *param_1 = auVar17;
  auVar17 = vmovdqu64_avx512f(auVar18);
  param_1[1] = auVar17;
  auVar17 = vmovdqu64_avx512f(auVar19);
  param_1[2] = auVar17;
  auVar17 = vmovdqu64_avx512f(auVar20);
  param_1[3] = auVar17;
  auVar17 = vmovdqu64_avx512f(auVar21);
  *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar17;
  return param_1;
}

