
undefined1 (*) [64]
FUN_0074d290(undefined1 (*param_1) [64],undefined1 (*param_2) [64],ulong param_3)

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
  undefined1 (*pauVar11) [64];
  long lVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  
  if (param_3 < 0x40) {
    uVar9 = (uint)param_3;
    if (0x1f < uVar9) {
      auVar13 = vmovdqu64_avx512vl(*(undefined1 (*) [32])*param_2);
      auVar14 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3 + 0x20));
      auVar13 = vmovdqu64_avx512vl(auVar13);
      *(undefined1 (*) [32])*param_1 = auVar13;
      auVar13 = vmovdqu64_avx512vl(auVar14);
      *(undefined1 (*) [32])(param_1[-1] + param_3 + 0x20) = auVar13;
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
    if (param_3 < 4) {
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
    uVar2 = *(undefined4 *)(param_2[-1] + param_3 + 0x3c);
    *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
    *(undefined4 *)(param_1[-1] + param_3 + 0x3c) = uVar2;
    return param_1;
  }
  auVar15 = vmovdqu64_avx512f(*param_2);
  if (param_3 < 0x81) {
    auVar16 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
    auVar15 = vmovdqu64_avx512f(auVar15);
    *param_1 = auVar15;
    auVar15 = vmovdqu64_avx512f(auVar16);
    *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar15;
    return param_1;
  }
  if (param_3 < 0x201) {
    auVar16 = vmovdqu64_avx512f(param_2[1]);
    if (0x100 < param_3) {
      auVar17 = vmovdqu64_avx512f(param_2[2]);
      auVar18 = vmovdqu64_avx512f(param_2[3]);
      auVar19 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
      auVar20 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + param_3));
      auVar21 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-3] + param_3));
      auVar22 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-4] + param_3));
      auVar15 = vmovdqu64_avx512f(auVar15);
      *param_1 = auVar15;
      auVar15 = vmovdqu64_avx512f(auVar16);
      param_1[1] = auVar15;
      auVar15 = vmovdqu64_avx512f(auVar17);
      param_1[2] = auVar15;
      auVar15 = vmovdqu64_avx512f(auVar18);
      param_1[3] = auVar15;
      auVar15 = vmovdqu64_avx512f(auVar19);
      *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar15;
      auVar15 = vmovdqu64_avx512f(auVar20);
      *(undefined1 (*) [64])(param_1[-2] + param_3) = auVar15;
      auVar15 = vmovdqu64_avx512f(auVar21);
      *(undefined1 (*) [64])(param_1[-3] + param_3) = auVar15;
      auVar15 = vmovdqu64_avx512f(auVar22);
      *(undefined1 (*) [64])(param_1[-4] + param_3) = auVar15;
      return param_1;
    }
    auVar17 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
    auVar18 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + param_3));
    auVar15 = vmovdqu64_avx512f(auVar15);
    *param_1 = auVar15;
    auVar15 = vmovdqu64_avx512f(auVar16);
    param_1[1] = auVar15;
    auVar15 = vmovdqu64_avx512f(auVar17);
    *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar15;
    auVar15 = vmovdqu64_avx512f(auVar18);
    *(undefined1 (*) [64])(param_1[-2] + param_3) = auVar15;
    return param_1;
  }
  uVar7 = (long)param_1 - (long)param_2;
  if (uVar7 < param_3) {
    if (uVar7 != 0) {
LAB_0074d575:
      auVar16 = vmovdqu64_avx512f(param_2[1]);
      auVar17 = vmovdqu64_avx512f(param_2[2]);
      auVar18 = vmovdqu64_avx512f(param_2[3]);
      auVar19 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
      pauVar8 = (undefined1 (*) [64])((ulong)(param_1[-5] + param_3 + 0x3f) & 0xffffffffffffffc0);
      pauVar10 = (undefined1 (*) [64])(((long)param_2 - (long)param_1) + (long)pauVar8);
      do {
        auVar20 = vmovdqu64_avx512f(pauVar10[3]);
        auVar21 = vmovdqu64_avx512f(pauVar10[2]);
        auVar22 = vmovdqu64_avx512f(pauVar10[1]);
        auVar23 = vmovdqu64_avx512f(*pauVar10);
        pauVar10 = pauVar10 + -4;
        auVar20 = vmovdqa64_avx512f(auVar20);
        pauVar8[3] = auVar20;
        auVar20 = vmovdqa64_avx512f(auVar21);
        pauVar8[2] = auVar20;
        auVar20 = vmovdqa64_avx512f(auVar22);
        pauVar8[1] = auVar20;
        auVar20 = vmovdqa64_avx512f(auVar23);
        *pauVar8 = auVar20;
        pauVar8 = pauVar8 + -4;
      } while (param_1 < pauVar8);
      auVar15 = vmovdqu64_avx512f(auVar15);
      *param_1 = auVar15;
      auVar15 = vmovdqu64_avx512f(auVar16);
      param_1[1] = auVar15;
      auVar15 = vmovdqu64_avx512f(auVar17);
      param_1[2] = auVar15;
      auVar15 = vmovdqu64_avx512f(auVar18);
      param_1[3] = auVar15;
      auVar15 = vmovdqu64_avx512f(auVar19);
      *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar15;
      return param_1;
    }
  }
  else {
    if (DAT_00945830 < param_3) {
      if (param_3 <= -uVar7) {
        auVar15 = vmovdqu64_avx512f(auVar15);
        *param_1 = auVar15;
        lVar12 = ((ulong)param_1 & 0x3f) - 0x40;
        param_2 = (undefined1 (*) [64])((long)param_2 - lVar12);
        pauVar8 = (undefined1 (*) [64])((long)param_1 - lVar12);
        param_3 = param_3 + lVar12;
        if (((~(uint)-uVar7 & 0xe00) != 0) && (param_3 >> 4 < DAT_00945830)) {
          uVar9 = (uint)param_3 & 0x1fff;
          param_3 = param_3 >> 0xd;
          do {
            iVar6 = 0x20;
            do {
              pauVar11 = pauVar8;
              pauVar10 = param_2;
              auVar15 = vmovdqu64_avx512f(*pauVar10);
              auVar16 = vmovdqu64_avx512f(pauVar10[1]);
              auVar17 = vmovdqu64_avx512f(pauVar10[0x40]);
              auVar18 = vmovdqu64_avx512f(pauVar10[0x41]);
              auVar15 = vmovntdq_avx512f(auVar15);
              *pauVar11 = auVar15;
              auVar15 = vmovntdq_avx512f(auVar16);
              pauVar11[1] = auVar15;
              auVar15 = vmovntdq_avx512f(auVar17);
              pauVar11[0x40] = auVar15;
              auVar15 = vmovntdq_avx512f(auVar18);
              pauVar11[0x41] = auVar15;
              iVar6 = iVar6 + -1;
              param_2 = pauVar10 + 2;
              pauVar8 = pauVar11 + 2;
            } while (iVar6 != 0);
            pauVar8 = pauVar11 + 0x42;
            param_2 = pauVar10 + 0x42;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
          while (0x100 < uVar9) {
            auVar15 = vmovdqu64_avx512f(*param_2);
            auVar16 = vmovdqu64_avx512f(param_2[1]);
            auVar17 = vmovdqu64_avx512f(param_2[2]);
            auVar18 = vmovdqu64_avx512f(param_2[3]);
            param_2 = param_2 + 4;
            uVar9 = uVar9 - 0x100;
            auVar15 = vmovdqa64_avx512f(auVar15);
            *pauVar8 = auVar15;
            auVar15 = vmovdqa64_avx512f(auVar16);
            pauVar8[1] = auVar15;
            auVar15 = vmovdqa64_avx512f(auVar17);
            pauVar8[2] = auVar15;
            auVar15 = vmovdqa64_avx512f(auVar18);
            pauVar8[3] = auVar15;
            pauVar8 = pauVar8 + 4;
          }
          auVar15 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-4] + uVar9));
          auVar16 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-3] + uVar9));
          auVar17 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + uVar9));
          auVar18 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + uVar9));
          auVar15 = vmovdqu64_avx512f(auVar15);
          *(undefined1 (*) [64])(pauVar8[-4] + uVar9) = auVar15;
          auVar15 = vmovdqu64_avx512f(auVar16);
          *(undefined1 (*) [64])(pauVar8[-3] + uVar9) = auVar15;
          auVar15 = vmovdqu64_avx512f(auVar17);
          *(undefined1 (*) [64])(pauVar8[-2] + uVar9) = auVar15;
          auVar15 = vmovdqu64_avx512f(auVar18);
          *(undefined1 (*) [64])(pauVar8[-1] + uVar9) = auVar15;
          return param_1;
        }
        uVar9 = (uint)param_3 & 0x3fff;
        param_3 = param_3 >> 0xe;
        do {
          iVar6 = 0x20;
          do {
            pauVar11 = pauVar8;
            pauVar10 = param_2;
            auVar15 = vmovdqu64_avx512f(*pauVar10);
            auVar16 = vmovdqu64_avx512f(pauVar10[1]);
            auVar17 = vmovdqu64_avx512f(pauVar10[0x40]);
            auVar18 = vmovdqu64_avx512f(pauVar10[0x41]);
            auVar19 = vmovdqu64_avx512f(pauVar10[0x80]);
            auVar20 = vmovdqu64_avx512f(pauVar10[0x81]);
            auVar21 = vmovdqu64_avx512f(pauVar10[0xc0]);
            auVar22 = vmovdqu64_avx512f(pauVar10[0xc1]);
            auVar15 = vmovntdq_avx512f(auVar15);
            *pauVar11 = auVar15;
            auVar15 = vmovntdq_avx512f(auVar16);
            pauVar11[1] = auVar15;
            auVar15 = vmovntdq_avx512f(auVar17);
            pauVar11[0x40] = auVar15;
            auVar15 = vmovntdq_avx512f(auVar18);
            pauVar11[0x41] = auVar15;
            auVar15 = vmovntdq_avx512f(auVar19);
            pauVar11[0x80] = auVar15;
            auVar15 = vmovntdq_avx512f(auVar20);
            pauVar11[0x81] = auVar15;
            auVar15 = vmovntdq_avx512f(auVar21);
            pauVar11[0xc0] = auVar15;
            auVar15 = vmovntdq_avx512f(auVar22);
            pauVar11[0xc1] = auVar15;
            iVar6 = iVar6 + -1;
            param_2 = pauVar10 + 2;
            pauVar8 = pauVar11 + 2;
          } while (iVar6 != 0);
          pauVar8 = pauVar11 + 0xc2;
          param_2 = pauVar10 + 0xc2;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        while (0x100 < uVar9) {
          auVar15 = vmovdqu64_avx512f(*param_2);
          auVar16 = vmovdqu64_avx512f(param_2[1]);
          auVar17 = vmovdqu64_avx512f(param_2[2]);
          auVar18 = vmovdqu64_avx512f(param_2[3]);
          param_2 = param_2 + 4;
          uVar9 = uVar9 - 0x100;
          auVar15 = vmovdqa64_avx512f(auVar15);
          *pauVar8 = auVar15;
          auVar15 = vmovdqa64_avx512f(auVar16);
          pauVar8[1] = auVar15;
          auVar15 = vmovdqa64_avx512f(auVar17);
          pauVar8[2] = auVar15;
          auVar15 = vmovdqa64_avx512f(auVar18);
          pauVar8[3] = auVar15;
          pauVar8 = pauVar8 + 4;
        }
        auVar15 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-4] + uVar9));
        auVar16 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-3] + uVar9));
        auVar17 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + uVar9));
        auVar18 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + uVar9));
        auVar15 = vmovdqu64_avx512f(auVar15);
        *(undefined1 (*) [64])(pauVar8[-4] + uVar9) = auVar15;
        auVar15 = vmovdqu64_avx512f(auVar16);
        *(undefined1 (*) [64])(pauVar8[-3] + uVar9) = auVar15;
        auVar15 = vmovdqu64_avx512f(auVar17);
        *(undefined1 (*) [64])(pauVar8[-2] + uVar9) = auVar15;
        auVar15 = vmovdqu64_avx512f(auVar18);
        *(undefined1 (*) [64])(pauVar8[-1] + uVar9) = auVar15;
        return param_1;
      }
    }
    else if (((uint)uVar7 & 0xf00) ==
             (int)((uint)(uVar7 + param_3 >> 0x20) ^ (uint)(uVar7 >> 0x20)) >> 0x1f)
    goto LAB_0074d575;
    auVar16 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
    auVar17 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + param_3));
    auVar18 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-3] + param_3));
    auVar19 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-4] + param_3));
    pauVar11 = (undefined1 (*) [64])(((ulong)param_1 | 0x3f) + 1);
    pauVar10 = (undefined1 (*) [64])(((long)param_2 - (long)param_1) + (long)pauVar11);
    pauVar8 = (undefined1 (*) [64])(param_1[-4] + param_3);
    do {
      auVar20 = vmovdqu64_avx512f(*pauVar10);
      auVar21 = vmovdqu64_avx512f(pauVar10[1]);
      auVar22 = vmovdqu64_avx512f(pauVar10[2]);
      auVar23 = vmovdqu64_avx512f(pauVar10[3]);
      pauVar10 = pauVar10 + 4;
      auVar20 = vmovdqa64_avx512f(auVar20);
      *pauVar11 = auVar20;
      auVar20 = vmovdqa64_avx512f(auVar21);
      pauVar11[1] = auVar20;
      auVar20 = vmovdqa64_avx512f(auVar22);
      pauVar11[2] = auVar20;
      auVar20 = vmovdqa64_avx512f(auVar23);
      pauVar11[3] = auVar20;
      pauVar11 = pauVar11 + 4;
    } while (pauVar11 < pauVar8);
    auVar16 = vmovdqu64_avx512f(auVar16);
    pauVar8[3] = auVar16;
    auVar16 = vmovdqu64_avx512f(auVar17);
    pauVar8[2] = auVar16;
    auVar16 = vmovdqu64_avx512f(auVar18);
    pauVar8[1] = auVar16;
    auVar16 = vmovdqu64_avx512f(auVar19);
    *pauVar8 = auVar16;
    auVar15 = vmovdqu64_avx512f(auVar15);
    *param_1 = auVar15;
  }
  return param_1;
}

