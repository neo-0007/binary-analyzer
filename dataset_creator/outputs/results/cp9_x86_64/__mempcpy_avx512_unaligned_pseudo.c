
undefined1 *
__mempcpy_avx512_unaligned(undefined1 (*param_1) [64],undefined1 (*param_2) [64],ulong param_3)

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
  undefined1 (*pauVar12) [64];
  long lVar13;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  
  puVar6 = *param_1 + param_3;
  if (param_3 < 0x40) {
    uVar10 = (uint)param_3;
    if (0x1f < uVar10) {
      auVar14 = vmovdqu64_avx512vl(*(undefined1 (*) [32])*param_2);
      auVar15 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3 + 0x20));
      auVar14 = vmovdqu64_avx512vl(auVar14);
      *(undefined1 (*) [32])*param_1 = auVar14;
      auVar14 = vmovdqu64_avx512vl(auVar15);
      *(undefined1 (*) [32])(param_1[-1] + param_3 + 0x20) = auVar14;
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
    if (param_3 < 4) {
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
    uVar2 = *(undefined4 *)(param_2[-1] + param_3 + 0x3c);
    *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
    *(undefined4 *)(param_1[-1] + param_3 + 0x3c) = uVar2;
    return puVar6;
  }
  auVar16 = vmovdqu64_avx512f(*param_2);
  if (param_3 < 0x81) {
    auVar17 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
    auVar16 = vmovdqu64_avx512f(auVar16);
    *param_1 = auVar16;
    auVar16 = vmovdqu64_avx512f(auVar17);
    *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar16;
    return puVar6;
  }
  if (param_3 < 0x201) {
    auVar17 = vmovdqu64_avx512f(param_2[1]);
    if (0x100 < param_3) {
      auVar18 = vmovdqu64_avx512f(param_2[2]);
      auVar19 = vmovdqu64_avx512f(param_2[3]);
      auVar20 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
      auVar21 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + param_3));
      auVar22 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-3] + param_3));
      auVar23 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-4] + param_3));
      auVar16 = vmovdqu64_avx512f(auVar16);
      *param_1 = auVar16;
      auVar16 = vmovdqu64_avx512f(auVar17);
      param_1[1] = auVar16;
      auVar16 = vmovdqu64_avx512f(auVar18);
      param_1[2] = auVar16;
      auVar16 = vmovdqu64_avx512f(auVar19);
      param_1[3] = auVar16;
      auVar16 = vmovdqu64_avx512f(auVar20);
      *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar16;
      auVar16 = vmovdqu64_avx512f(auVar21);
      *(undefined1 (*) [64])(param_1[-2] + param_3) = auVar16;
      auVar16 = vmovdqu64_avx512f(auVar22);
      *(undefined1 (*) [64])(param_1[-3] + param_3) = auVar16;
      auVar16 = vmovdqu64_avx512f(auVar23);
      *(undefined1 (*) [64])(param_1[-4] + param_3) = auVar16;
      return puVar6;
    }
    auVar18 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
    auVar19 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + param_3));
    auVar16 = vmovdqu64_avx512f(auVar16);
    *param_1 = auVar16;
    auVar16 = vmovdqu64_avx512f(auVar17);
    param_1[1] = auVar16;
    auVar16 = vmovdqu64_avx512f(auVar18);
    *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar16;
    auVar16 = vmovdqu64_avx512f(auVar19);
    *(undefined1 (*) [64])(param_1[-2] + param_3) = auVar16;
    return puVar6;
  }
  uVar8 = (long)param_1 - (long)param_2;
  if (uVar8 < param_3) {
    if (uVar8 != 0) {
LAB_00743b75:
      auVar17 = vmovdqu64_avx512f(param_2[1]);
      auVar18 = vmovdqu64_avx512f(param_2[2]);
      auVar19 = vmovdqu64_avx512f(param_2[3]);
      auVar20 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
      pauVar9 = (undefined1 (*) [64])((ulong)(param_1[-5] + param_3 + 0x3f) & 0xffffffffffffffc0);
      pauVar11 = (undefined1 (*) [64])(((long)param_2 - (long)param_1) + (long)pauVar9);
      do {
        auVar21 = vmovdqu64_avx512f(pauVar11[3]);
        auVar22 = vmovdqu64_avx512f(pauVar11[2]);
        auVar23 = vmovdqu64_avx512f(pauVar11[1]);
        auVar24 = vmovdqu64_avx512f(*pauVar11);
        pauVar11 = pauVar11 + -4;
        auVar21 = vmovdqa64_avx512f(auVar21);
        pauVar9[3] = auVar21;
        auVar21 = vmovdqa64_avx512f(auVar22);
        pauVar9[2] = auVar21;
        auVar21 = vmovdqa64_avx512f(auVar23);
        pauVar9[1] = auVar21;
        auVar21 = vmovdqa64_avx512f(auVar24);
        *pauVar9 = auVar21;
        pauVar9 = pauVar9 + -4;
      } while (param_1 < pauVar9);
      auVar16 = vmovdqu64_avx512f(auVar16);
      *param_1 = auVar16;
      auVar16 = vmovdqu64_avx512f(auVar17);
      param_1[1] = auVar16;
      auVar16 = vmovdqu64_avx512f(auVar18);
      param_1[2] = auVar16;
      auVar16 = vmovdqu64_avx512f(auVar19);
      param_1[3] = auVar16;
      auVar16 = vmovdqu64_avx512f(auVar20);
      *(undefined1 (*) [64])(param_1[-1] + param_3) = auVar16;
      return puVar6;
    }
  }
  else {
    if (__x86_shared_non_temporal_threshold < param_3) {
      if (param_3 <= -uVar8) {
        auVar16 = vmovdqu64_avx512f(auVar16);
        *param_1 = auVar16;
        lVar13 = ((ulong)param_1 & 0x3f) - 0x40;
        param_2 = (undefined1 (*) [64])((long)param_2 - lVar13);
        param_1 = (undefined1 (*) [64])((long)param_1 - lVar13);
        param_3 = param_3 + lVar13;
        if (((~(uint)-uVar8 & 0xe00) != 0) && (param_3 >> 4 < __x86_shared_non_temporal_threshold))
        {
          uVar10 = (uint)param_3 & 0x1fff;
          param_3 = param_3 >> 0xd;
          do {
            iVar7 = 0x20;
            do {
              pauVar11 = param_1;
              pauVar9 = param_2;
              auVar16 = vmovdqu64_avx512f(*pauVar9);
              auVar17 = vmovdqu64_avx512f(pauVar9[1]);
              auVar18 = vmovdqu64_avx512f(pauVar9[0x40]);
              auVar19 = vmovdqu64_avx512f(pauVar9[0x41]);
              auVar16 = vmovntdq_avx512f(auVar16);
              *pauVar11 = auVar16;
              auVar16 = vmovntdq_avx512f(auVar17);
              pauVar11[1] = auVar16;
              auVar16 = vmovntdq_avx512f(auVar18);
              pauVar11[0x40] = auVar16;
              auVar16 = vmovntdq_avx512f(auVar19);
              pauVar11[0x41] = auVar16;
              iVar7 = iVar7 + -1;
              param_2 = pauVar9 + 2;
              param_1 = pauVar11 + 2;
            } while (iVar7 != 0);
            param_1 = pauVar11 + 0x42;
            param_2 = pauVar9 + 0x42;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
          while (0x100 < uVar10) {
            auVar16 = vmovdqu64_avx512f(*param_2);
            auVar17 = vmovdqu64_avx512f(param_2[1]);
            auVar18 = vmovdqu64_avx512f(param_2[2]);
            auVar19 = vmovdqu64_avx512f(param_2[3]);
            param_2 = param_2 + 4;
            uVar10 = uVar10 - 0x100;
            auVar16 = vmovdqa64_avx512f(auVar16);
            *param_1 = auVar16;
            auVar16 = vmovdqa64_avx512f(auVar17);
            param_1[1] = auVar16;
            auVar16 = vmovdqa64_avx512f(auVar18);
            param_1[2] = auVar16;
            auVar16 = vmovdqa64_avx512f(auVar19);
            param_1[3] = auVar16;
            param_1 = param_1 + 4;
          }
          auVar16 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-4] + uVar10));
          auVar17 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-3] + uVar10));
          auVar18 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + uVar10));
          auVar19 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + uVar10));
          auVar16 = vmovdqu64_avx512f(auVar16);
          *(undefined1 (*) [64])(param_1[-4] + uVar10) = auVar16;
          auVar16 = vmovdqu64_avx512f(auVar17);
          *(undefined1 (*) [64])(param_1[-3] + uVar10) = auVar16;
          auVar16 = vmovdqu64_avx512f(auVar18);
          *(undefined1 (*) [64])(param_1[-2] + uVar10) = auVar16;
          auVar16 = vmovdqu64_avx512f(auVar19);
          *(undefined1 (*) [64])(param_1[-1] + uVar10) = auVar16;
          return puVar6;
        }
        uVar10 = (uint)param_3 & 0x3fff;
        param_3 = param_3 >> 0xe;
        do {
          iVar7 = 0x20;
          do {
            pauVar11 = param_1;
            pauVar9 = param_2;
            auVar16 = vmovdqu64_avx512f(*pauVar9);
            auVar17 = vmovdqu64_avx512f(pauVar9[1]);
            auVar18 = vmovdqu64_avx512f(pauVar9[0x40]);
            auVar19 = vmovdqu64_avx512f(pauVar9[0x41]);
            auVar20 = vmovdqu64_avx512f(pauVar9[0x80]);
            auVar21 = vmovdqu64_avx512f(pauVar9[0x81]);
            auVar22 = vmovdqu64_avx512f(pauVar9[0xc0]);
            auVar23 = vmovdqu64_avx512f(pauVar9[0xc1]);
            auVar16 = vmovntdq_avx512f(auVar16);
            *pauVar11 = auVar16;
            auVar16 = vmovntdq_avx512f(auVar17);
            pauVar11[1] = auVar16;
            auVar16 = vmovntdq_avx512f(auVar18);
            pauVar11[0x40] = auVar16;
            auVar16 = vmovntdq_avx512f(auVar19);
            pauVar11[0x41] = auVar16;
            auVar16 = vmovntdq_avx512f(auVar20);
            pauVar11[0x80] = auVar16;
            auVar16 = vmovntdq_avx512f(auVar21);
            pauVar11[0x81] = auVar16;
            auVar16 = vmovntdq_avx512f(auVar22);
            pauVar11[0xc0] = auVar16;
            auVar16 = vmovntdq_avx512f(auVar23);
            pauVar11[0xc1] = auVar16;
            iVar7 = iVar7 + -1;
            param_2 = pauVar9 + 2;
            param_1 = pauVar11 + 2;
          } while (iVar7 != 0);
          param_1 = pauVar11 + 0xc2;
          param_2 = pauVar9 + 0xc2;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        while (0x100 < uVar10) {
          auVar16 = vmovdqu64_avx512f(*param_2);
          auVar17 = vmovdqu64_avx512f(param_2[1]);
          auVar18 = vmovdqu64_avx512f(param_2[2]);
          auVar19 = vmovdqu64_avx512f(param_2[3]);
          param_2 = param_2 + 4;
          uVar10 = uVar10 - 0x100;
          auVar16 = vmovdqa64_avx512f(auVar16);
          *param_1 = auVar16;
          auVar16 = vmovdqa64_avx512f(auVar17);
          param_1[1] = auVar16;
          auVar16 = vmovdqa64_avx512f(auVar18);
          param_1[2] = auVar16;
          auVar16 = vmovdqa64_avx512f(auVar19);
          param_1[3] = auVar16;
          param_1 = param_1 + 4;
        }
        auVar16 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-4] + uVar10));
        auVar17 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-3] + uVar10));
        auVar18 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + uVar10));
        auVar19 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + uVar10));
        auVar16 = vmovdqu64_avx512f(auVar16);
        *(undefined1 (*) [64])(param_1[-4] + uVar10) = auVar16;
        auVar16 = vmovdqu64_avx512f(auVar17);
        *(undefined1 (*) [64])(param_1[-3] + uVar10) = auVar16;
        auVar16 = vmovdqu64_avx512f(auVar18);
        *(undefined1 (*) [64])(param_1[-2] + uVar10) = auVar16;
        auVar16 = vmovdqu64_avx512f(auVar19);
        *(undefined1 (*) [64])(param_1[-1] + uVar10) = auVar16;
        return puVar6;
      }
    }
    else if (((uint)uVar8 & 0xf00) ==
             (int)((uint)(uVar8 + param_3 >> 0x20) ^ (uint)(uVar8 >> 0x20)) >> 0x1f)
    goto LAB_00743b75;
    auVar17 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-1] + param_3));
    auVar18 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-2] + param_3));
    auVar19 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-3] + param_3));
    auVar20 = vmovdqu64_avx512f(*(undefined1 (*) [64])(param_2[-4] + param_3));
    pauVar12 = (undefined1 (*) [64])(((ulong)param_1 | 0x3f) + 1);
    pauVar11 = (undefined1 (*) [64])(((long)param_2 - (long)param_1) + (long)pauVar12);
    pauVar9 = (undefined1 (*) [64])(param_1[-4] + param_3);
    do {
      auVar21 = vmovdqu64_avx512f(*pauVar11);
      auVar22 = vmovdqu64_avx512f(pauVar11[1]);
      auVar23 = vmovdqu64_avx512f(pauVar11[2]);
      auVar24 = vmovdqu64_avx512f(pauVar11[3]);
      pauVar11 = pauVar11 + 4;
      auVar21 = vmovdqa64_avx512f(auVar21);
      *pauVar12 = auVar21;
      auVar21 = vmovdqa64_avx512f(auVar22);
      pauVar12[1] = auVar21;
      auVar21 = vmovdqa64_avx512f(auVar23);
      pauVar12[2] = auVar21;
      auVar21 = vmovdqa64_avx512f(auVar24);
      pauVar12[3] = auVar21;
      pauVar12 = pauVar12 + 4;
    } while (pauVar12 < pauVar9);
    auVar17 = vmovdqu64_avx512f(auVar17);
    pauVar9[3] = auVar17;
    auVar17 = vmovdqu64_avx512f(auVar18);
    pauVar9[2] = auVar17;
    auVar17 = vmovdqu64_avx512f(auVar19);
    pauVar9[1] = auVar17;
    auVar17 = vmovdqu64_avx512f(auVar20);
    *pauVar9 = auVar17;
    auVar16 = vmovdqu64_avx512f(auVar16);
    *param_1 = auVar16;
  }
  return puVar6;
}

