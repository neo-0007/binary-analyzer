
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0074d2d0(undefined1 (*param_1) [64],undefined1 (*param_2) [64],ulong param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  int iVar7;
  ulong uVar8;
  undefined1 (*pauVar9) [64];
  uint uVar10;
  undefined1 (*pauVar11) [64];
  undefined1 *puVar12;
  undefined1 (*pauVar13) [64];
  undefined1 *puVar14;
  long lVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  
  puVar6 = *param_1 + param_3;
  if (param_3 < 0x40) {
    uVar10 = (uint)param_3;
    if (0x1f < uVar10) {
      auVar16 = vmovdqu64_avx512vl(*(undefined1 (*) [32])*param_2);
      auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3 + 0x20));
      auVar16 = vmovdqu64_avx512vl(auVar16);
      *(undefined1 (*) [32])*param_1 = auVar16;
      auVar16 = vmovdqu64_avx512vl(auVar17);
      *(undefined1 (*) [32])(param_1[-1] + param_3 + 0x20) = auVar16;
      return puVar6;
    }
    if (0xf < uVar10) {
      uVar3 = *(undefined8 *)(*param_2 + 8);
      uVar4 = *(undefined8 *)(param_2[-1] + param_3 + 0x30);
      uVar5 = *(undefined8 *)((long)(param_2[-1] + param_3 + 0x30) + 8);
      *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
      *(undefined8 *)(*param_1 + 8) = uVar3;
      *(undefined8 *)(param_1[-1] + param_3 + 0x30) = uVar4;
      *(undefined8 *)((long)(param_1[-1] + param_3 + 0x30) + 8) = uVar5;
      return puVar6;
    }
    if (7 < uVar10) {
      uVar3 = *(undefined8 *)(param_2[-1] + param_3 + 0x38);
      *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
      *(undefined8 *)(param_1[-1] + param_3 + 0x38) = uVar3;
      return puVar6;
    }
    if (3 < param_3) {
      uVar2 = *(undefined4 *)(param_2[-1] + param_3 + 0x3c);
      *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
      *(undefined4 *)(param_1[-1] + param_3 + 0x3c) = uVar2;
      return puVar6;
    }
    if (-4 < (int)(uVar10 - 4)) {
      uVar1 = (*param_2)[0];
      if (uVar10 - 4 != -3) {
        *(undefined2 *)(param_1[-1] + param_3 + 0x3e) =
             *(undefined2 *)(param_2[-1] + param_3 + 0x3e);
      }
      (*param_1)[0] = uVar1;
    }
    return puVar6;
  }
  auVar18 = vmovdqu64_avx512f(*param_2);
  if (param_3 < 0x81) {
    auVar19 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
    auVar18 = vmovdqu64_avx512f(auVar18);
    *param_1 = auVar18;
    auVar18 = vmovdqu64_avx512f(auVar19);
    *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar18;
    return puVar6;
  }
  if (DAT_0093d6f8 < param_3) {
    uVar8 = (long)param_1 - (long)param_2;
    if (uVar8 < param_3) goto LAB_0074d570;
    if (param_3 < DAT_00945828) {
      if ((_DAT_00945820 & 1) == 0) {
        if ((uVar8 & 0xe00) == 0) {
          puVar14 = (undefined1 *)((ulong)param_2 | 0x3f);
          puVar12 = puVar14 + uVar8 + 1;
          for (lVar15 = (long)param_2 + ((param_3 - 1) - (long)puVar14); puVar14 = puVar14 + 1,
              lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar12 = *puVar14;
            puVar12 = puVar12 + 1;
          }
          auVar18 = vmovdqu64_avx512f(auVar18);
          *param_1 = auVar18;
          return puVar6;
        }
LAB_0074d680:
        puVar14 = (undefined1 *)((ulong)(*param_1 + 0x3f) & 0xffffffffffffffc0);
        lVar15 = (long)param_1 + (param_3 - (long)puVar14);
        puVar12 = puVar14 + ((long)param_2 - (long)param_1);
        for (; lVar15 != 0; lVar15 = lVar15 + -1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        auVar18 = vmovdqu64_avx512f(auVar18);
        *param_1 = auVar18;
        return puVar6;
      }
      if ((uint)uVar8 < 0xffffffc1) goto LAB_0074d680;
      goto LAB_0074d4c6;
    }
    if (DAT_0093d6f8 <= param_3) goto LAB_0074d6ad;
  }
  else {
    if (param_3 < 0x201) {
      auVar19 = vmovdqu64_avx512f(param_2[1]);
      if (param_3 < 0x101) {
        auVar20 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
        auVar21 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + param_3));
        auVar18 = vmovdqu64_avx512f(auVar18);
        *param_1 = auVar18;
        auVar18 = vmovdqu64_avx512f(auVar19);
        param_1[1] = auVar18;
        auVar18 = vmovdqu64_avx512f(auVar20);
        *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar18;
        auVar18 = vmovdqu64_avx512f(auVar21);
        *(undefined1 (*) [64])(param_1[-2] + param_3) = auVar18;
        return puVar6;
      }
      auVar20 = vmovdqu64_avx512f(param_2[2]);
      auVar21 = vmovdqu64_avx512f(param_2[3]);
      auVar22 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
      auVar23 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + param_3));
      auVar24 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-3] + param_3));
      auVar25 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-4] + param_3));
      auVar18 = vmovdqu64_avx512f(auVar18);
      *param_1 = auVar18;
      auVar18 = vmovdqu64_avx512f(auVar19);
      param_1[1] = auVar18;
      auVar18 = vmovdqu64_avx512f(auVar20);
      param_1[2] = auVar18;
      auVar18 = vmovdqu64_avx512f(auVar21);
      param_1[3] = auVar18;
      auVar18 = vmovdqu64_avx512f(auVar22);
      *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar18;
      auVar18 = vmovdqu64_avx512f(auVar23);
      *(undefined1 (*) [64])(param_1[-2] + param_3) = auVar18;
      auVar18 = vmovdqu64_avx512f(auVar24);
      *(undefined1 (*) [64])(param_1[-3] + param_3) = auVar18;
      auVar18 = vmovdqu64_avx512f(auVar25);
      *(undefined1 (*) [64])(param_1[-4] + param_3) = auVar18;
      return puVar6;
    }
    uVar8 = (long)param_1 - (long)param_2;
    if (uVar8 < param_3) {
LAB_0074d570:
      if (uVar8 == 0) {
        return puVar6;
      }
      goto LAB_0074d575;
    }
    if (DAT_00945830 < param_3) {
LAB_0074d6ad:
      if (param_3 <= -uVar8) {
        auVar18 = vmovdqu64_avx512f(auVar18);
        *param_1 = auVar18;
        lVar15 = ((ulong)param_1 & 0x3f) - 0x40;
        param_2 = (undefined1 (*) [64])((long)param_2 - lVar15);
        param_1 = (undefined1 (*) [64])((long)param_1 - lVar15);
        param_3 = param_3 + lVar15;
        if (((~(uint)-uVar8 & 0xe00) != 0) && (param_3 >> 4 < DAT_00945830)) {
          uVar10 = (uint)param_3 & 0x1fff;
          param_3 = param_3 >> 0xd;
          do {
            iVar7 = 0x20;
            do {
              pauVar11 = param_1;
              pauVar9 = param_2;
              auVar18 = vmovdqu64_avx512f(*pauVar9);
              auVar19 = vmovdqu64_avx512f(pauVar9[1]);
              auVar20 = vmovdqu64_avx512f(pauVar9[0x40]);
              auVar21 = vmovdqu64_avx512f(pauVar9[0x41]);
              auVar18 = vmovntdq_avx512f(auVar18);
              *pauVar11 = auVar18;
              auVar18 = vmovntdq_avx512f(auVar19);
              pauVar11[1] = auVar18;
              auVar18 = vmovntdq_avx512f(auVar20);
              pauVar11[0x40] = auVar18;
              auVar18 = vmovntdq_avx512f(auVar21);
              pauVar11[0x41] = auVar18;
              iVar7 = iVar7 + -1;
              param_2 = pauVar9 + 2;
              param_1 = pauVar11 + 2;
            } while (iVar7 != 0);
            param_1 = pauVar11 + 0x42;
            param_2 = pauVar9 + 0x42;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
          while (0x100 < uVar10) {
            auVar18 = vmovdqu64_avx512f(*param_2);
            auVar19 = vmovdqu64_avx512f(param_2[1]);
            auVar20 = vmovdqu64_avx512f(param_2[2]);
            auVar21 = vmovdqu64_avx512f(param_2[3]);
            param_2 = param_2 + 4;
            uVar10 = uVar10 - 0x100;
            auVar18 = vmovdqa64_avx512f(auVar18);
            *param_1 = auVar18;
            auVar18 = vmovdqa64_avx512f(auVar19);
            param_1[1] = auVar18;
            auVar18 = vmovdqa64_avx512f(auVar20);
            param_1[2] = auVar18;
            auVar18 = vmovdqa64_avx512f(auVar21);
            param_1[3] = auVar18;
            param_1 = param_1 + 4;
          }
          auVar18 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-4] + uVar10));
          auVar19 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-3] + uVar10));
          auVar20 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + uVar10));
          auVar21 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + uVar10));
          auVar18 = vmovdqu64_avx512f(auVar18);
          *(undefined1 (*) [64])(param_1[-4] + uVar10) = auVar18;
          auVar18 = vmovdqu64_avx512f(auVar19);
          *(undefined1 (*) [64])(param_1[-3] + uVar10) = auVar18;
          auVar18 = vmovdqu64_avx512f(auVar20);
          *(undefined1 (*) [64])(param_1[-2] + uVar10) = auVar18;
          auVar18 = vmovdqu64_avx512f(auVar21);
          *(undefined1 (*) [64])(param_1[-1] + uVar10) = auVar18;
          return puVar6;
        }
        uVar10 = (uint)param_3 & 0x3fff;
        param_3 = param_3 >> 0xe;
        do {
          iVar7 = 0x20;
          do {
            pauVar11 = param_1;
            pauVar9 = param_2;
            auVar18 = vmovdqu64_avx512f(*pauVar9);
            auVar19 = vmovdqu64_avx512f(pauVar9[1]);
            auVar20 = vmovdqu64_avx512f(pauVar9[0x40]);
            auVar21 = vmovdqu64_avx512f(pauVar9[0x41]);
            auVar22 = vmovdqu64_avx512f(pauVar9[0x80]);
            auVar23 = vmovdqu64_avx512f(pauVar9[0x81]);
            auVar24 = vmovdqu64_avx512f(pauVar9[0xc0]);
            auVar25 = vmovdqu64_avx512f(pauVar9[0xc1]);
            auVar18 = vmovntdq_avx512f(auVar18);
            *pauVar11 = auVar18;
            auVar18 = vmovntdq_avx512f(auVar19);
            pauVar11[1] = auVar18;
            auVar18 = vmovntdq_avx512f(auVar20);
            pauVar11[0x40] = auVar18;
            auVar18 = vmovntdq_avx512f(auVar21);
            pauVar11[0x41] = auVar18;
            auVar18 = vmovntdq_avx512f(auVar22);
            pauVar11[0x80] = auVar18;
            auVar18 = vmovntdq_avx512f(auVar23);
            pauVar11[0x81] = auVar18;
            auVar18 = vmovntdq_avx512f(auVar24);
            pauVar11[0xc0] = auVar18;
            auVar18 = vmovntdq_avx512f(auVar25);
            pauVar11[0xc1] = auVar18;
            iVar7 = iVar7 + -1;
            param_2 = pauVar9 + 2;
            param_1 = pauVar11 + 2;
          } while (iVar7 != 0);
          param_1 = pauVar11 + 0xc2;
          param_2 = pauVar9 + 0xc2;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        while (0x100 < uVar10) {
          auVar18 = vmovdqu64_avx512f(*param_2);
          auVar19 = vmovdqu64_avx512f(param_2[1]);
          auVar20 = vmovdqu64_avx512f(param_2[2]);
          auVar21 = vmovdqu64_avx512f(param_2[3]);
          param_2 = param_2 + 4;
          uVar10 = uVar10 - 0x100;
          auVar18 = vmovdqa64_avx512f(auVar18);
          *param_1 = auVar18;
          auVar18 = vmovdqa64_avx512f(auVar19);
          param_1[1] = auVar18;
          auVar18 = vmovdqa64_avx512f(auVar20);
          param_1[2] = auVar18;
          auVar18 = vmovdqa64_avx512f(auVar21);
          param_1[3] = auVar18;
          param_1 = param_1 + 4;
        }
        auVar18 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-4] + uVar10));
        auVar19 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-3] + uVar10));
        auVar20 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + uVar10));
        auVar21 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + uVar10));
        auVar18 = vmovdqu64_avx512f(auVar18);
        *(undefined1 (*) [64])(param_1[-4] + uVar10) = auVar18;
        auVar18 = vmovdqu64_avx512f(auVar19);
        *(undefined1 (*) [64])(param_1[-3] + uVar10) = auVar18;
        auVar18 = vmovdqu64_avx512f(auVar20);
        *(undefined1 (*) [64])(param_1[-2] + uVar10) = auVar18;
        auVar18 = vmovdqu64_avx512f(auVar21);
        *(undefined1 (*) [64])(param_1[-1] + uVar10) = auVar18;
        return puVar6;
      }
      goto LAB_0074d4c6;
    }
  }
  if (((uint)uVar8 & 0xf00) !=
      (int)((uint)(uVar8 + param_3 >> 0x20) ^ (uint)(uVar8 >> 0x20)) >> 0x1f) {
LAB_0074d4c6:
    auVar19 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
    auVar20 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + param_3));
    auVar21 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-3] + param_3));
    auVar22 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-4] + param_3));
    pauVar13 = (undefined1 (*) [64])(((ulong)param_1 | 0x3f) + 1);
    pauVar11 = (undefined1 (*) [64])(((long)param_2 - (long)param_1) + (long)pauVar13);
    pauVar9 = (undefined1 (*) [64])(param_1[-4] + param_3);
    do {
      auVar23 = vmovdqu64_avx512f(*pauVar11);
      auVar24 = vmovdqu64_avx512f(pauVar11[1]);
      auVar25 = vmovdqu64_avx512f(pauVar11[2]);
      auVar26 = vmovdqu64_avx512f(pauVar11[3]);
      pauVar11 = pauVar11 + 4;
      auVar23 = vmovdqa64_avx512f(auVar23);
      *pauVar13 = auVar23;
      auVar23 = vmovdqa64_avx512f(auVar24);
      pauVar13[1] = auVar23;
      auVar23 = vmovdqa64_avx512f(auVar25);
      pauVar13[2] = auVar23;
      auVar23 = vmovdqa64_avx512f(auVar26);
      pauVar13[3] = auVar23;
      pauVar13 = pauVar13 + 4;
    } while (pauVar13 < pauVar9);
    auVar19 = vmovdqu64_avx512f(auVar19);
    pauVar9[3] = auVar19;
    auVar19 = vmovdqu64_avx512f(auVar20);
    pauVar9[2] = auVar19;
    auVar19 = vmovdqu64_avx512f(auVar21);
    pauVar9[1] = auVar19;
    auVar19 = vmovdqu64_avx512f(auVar22);
    *pauVar9 = auVar19;
    auVar18 = vmovdqu64_avx512f(auVar18);
    *param_1 = auVar18;
    return puVar6;
  }
LAB_0074d575:
  auVar19 = vmovdqu64_avx512f(param_2[1]);
  auVar20 = vmovdqu64_avx512f(param_2[2]);
  auVar21 = vmovdqu64_avx512f(param_2[3]);
  auVar22 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
  pauVar9 = (undefined1 (*) [64])((ulong)(param_1[-5] + param_3 + 0x3f) & 0xffffffffffffffc0);
  pauVar11 = (undefined1 (*) [64])(((long)param_2 - (long)param_1) + (long)pauVar9);
  do {
    auVar23 = vmovdqu64_avx512f(pauVar11[3]);
    auVar24 = vmovdqu64_avx512f(pauVar11[2]);
    auVar25 = vmovdqu64_avx512f(pauVar11[1]);
    auVar26 = vmovdqu64_avx512f(*pauVar11);
    pauVar11 = pauVar11 + -4;
    auVar23 = vmovdqa64_avx512f(auVar23);
    pauVar9[3] = auVar23;
    auVar23 = vmovdqa64_avx512f(auVar24);
    pauVar9[2] = auVar23;
    auVar23 = vmovdqa64_avx512f(auVar25);
    pauVar9[1] = auVar23;
    auVar23 = vmovdqa64_avx512f(auVar26);
    *pauVar9 = auVar23;
    pauVar9 = pauVar9 + -4;
  } while (param_1 < pauVar9);
  auVar18 = vmovdqu64_avx512f(auVar18);
  *param_1 = auVar18;
  auVar18 = vmovdqu64_avx512f(auVar19);
  param_1[1] = auVar18;
  auVar18 = vmovdqu64_avx512f(auVar20);
  param_1[2] = auVar18;
  auVar18 = vmovdqu64_avx512f(auVar21);
  param_1[3] = auVar18;
  auVar18 = vmovdqu64_avx512f(auVar22);
  *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar18;
  return puVar6;
}

