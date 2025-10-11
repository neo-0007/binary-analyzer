
undefined1 (*) [32]
__memmove_evex_unaligned(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulong param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  undefined1 (*pauVar8) [32];
  uint uVar9;
  undefined1 (*pauVar10) [32];
  undefined1 (*pauVar11) [32];
  long lVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  
  if (param_3 < 0x20) {
    uVar9 = (uint)param_3;
    if (0xf < uVar9) {
      uVar3 = *(undefined8 *)(*param_2 + 8);
      uVar4 = *(undefined8 *)(param_2[-1] + param_3 + 0x10);
      uVar5 = *(undefined8 *)((long)(param_2[-1] + param_3 + 0x10) + 8);
      *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
      *(undefined8 *)(*param_1 + 8) = uVar3;
      *(undefined8 *)(param_1[-1] + param_3 + 0x10) = uVar4;
      *(undefined8 *)((long)(param_1[-1] + param_3 + 0x10) + 8) = uVar5;
      return param_1;
    }
    if (uVar9 < 8) {
      if (param_3 < 4) {
        if (-4 < (int)(uVar9 - 4)) {
          uVar1 = (*param_2)[0];
          if (uVar9 - 4 != -3) {
            *(undefined2 *)(param_1[-1] + param_3 + 0x1e) =
                 *(undefined2 *)(param_2[-1] + param_3 + 0x1e);
          }
          (*param_1)[0] = uVar1;
        }
        return param_1;
      }
      uVar2 = *(undefined4 *)(param_2[-1] + param_3 + 0x1c);
      *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
      *(undefined4 *)(param_1[-1] + param_3 + 0x1c) = uVar2;
      return param_1;
    }
    uVar3 = *(undefined8 *)(param_2[-1] + param_3 + 0x18);
    *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
    *(undefined8 *)(param_1[-1] + param_3 + 0x18) = uVar3;
    return param_1;
  }
  auVar13 = vmovdqu64_avx512vl(*param_2);
  if (param_3 < 0x41) {
    auVar14 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
    auVar13 = vmovdqu64_avx512vl(auVar13);
    *param_1 = auVar13;
    auVar13 = vmovdqu64_avx512vl(auVar14);
    *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar13;
    return param_1;
  }
  if (param_3 < 0x101) {
    auVar14 = vmovdqu64_avx512vl(param_2[1]);
    if (0x80 < param_3) {
      auVar15 = vmovdqu64_avx512vl(param_2[2]);
      auVar16 = vmovdqu64_avx512vl(param_2[3]);
      auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
      auVar18 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + param_3));
      auVar19 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-3] + param_3));
      auVar20 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-4] + param_3));
      auVar13 = vmovdqu64_avx512vl(auVar13);
      *param_1 = auVar13;
      auVar13 = vmovdqu64_avx512vl(auVar14);
      param_1[1] = auVar13;
      auVar13 = vmovdqu64_avx512vl(auVar15);
      param_1[2] = auVar13;
      auVar13 = vmovdqu64_avx512vl(auVar16);
      param_1[3] = auVar13;
      auVar13 = vmovdqu64_avx512vl(auVar17);
      *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar13;
      auVar13 = vmovdqu64_avx512vl(auVar18);
      *(undefined1 (*) [32])(param_1[-2] + param_3) = auVar13;
      auVar13 = vmovdqu64_avx512vl(auVar19);
      *(undefined1 (*) [32])(param_1[-3] + param_3) = auVar13;
      auVar13 = vmovdqu64_avx512vl(auVar20);
      *(undefined1 (*) [32])(param_1[-4] + param_3) = auVar13;
      return param_1;
    }
    auVar15 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
    auVar16 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + param_3));
    auVar13 = vmovdqu64_avx512vl(auVar13);
    *param_1 = auVar13;
    auVar13 = vmovdqu64_avx512vl(auVar14);
    param_1[1] = auVar13;
    auVar13 = vmovdqu64_avx512vl(auVar15);
    *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar13;
    auVar13 = vmovdqu64_avx512vl(auVar16);
    *(undefined1 (*) [32])(param_1[-2] + param_3) = auVar13;
    return param_1;
  }
  uVar7 = (long)param_1 - (long)param_2;
  if (uVar7 < param_3) {
    if (uVar7 != 0) {
LAB_00748caa:
      auVar14 = vmovdqu64_avx512vl(param_2[1]);
      auVar15 = vmovdqu64_avx512vl(param_2[2]);
      auVar16 = vmovdqu64_avx512vl(param_2[3]);
      auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
      pauVar8 = (undefined1 (*) [32])((ulong)(param_1[-5] + param_3 + 0x1f) & 0xffffffffffffffe0);
      pauVar10 = (undefined1 (*) [32])(((long)param_2 - (long)param_1) + (long)pauVar8);
      do {
        auVar18 = vmovdqu64_avx512vl(pauVar10[3]);
        auVar19 = vmovdqu64_avx512vl(pauVar10[2]);
        auVar20 = vmovdqu64_avx512vl(pauVar10[1]);
        auVar21 = vmovdqu64_avx512vl(*pauVar10);
        pauVar10 = pauVar10 + -4;
        auVar18 = vmovdqa64_avx512vl(auVar18);
        pauVar8[3] = auVar18;
        auVar18 = vmovdqa64_avx512vl(auVar19);
        pauVar8[2] = auVar18;
        auVar18 = vmovdqa64_avx512vl(auVar20);
        pauVar8[1] = auVar18;
        auVar18 = vmovdqa64_avx512vl(auVar21);
        *pauVar8 = auVar18;
        pauVar8 = pauVar8 + -4;
      } while (param_1 < pauVar8);
      auVar13 = vmovdqu64_avx512vl(auVar13);
      *param_1 = auVar13;
      auVar13 = vmovdqu64_avx512vl(auVar14);
      param_1[1] = auVar13;
      auVar13 = vmovdqu64_avx512vl(auVar15);
      param_1[2] = auVar13;
      auVar13 = vmovdqu64_avx512vl(auVar16);
      param_1[3] = auVar13;
      auVar13 = vmovdqu64_avx512vl(auVar17);
      *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar13;
      return param_1;
    }
  }
  else {
    if (__x86_shared_non_temporal_threshold < param_3) {
      if (param_3 <= -uVar7) {
        auVar14 = vmovdqu64_avx512vl(param_2[1]);
        auVar13 = vmovdqu64_avx512vl(auVar13);
        *param_1 = auVar13;
        auVar13 = vmovdqu64_avx512vl(auVar14);
        param_1[1] = auVar13;
        lVar12 = ((ulong)param_1 & 0x3f) - 0x40;
        param_2 = (undefined1 (*) [32])((long)param_2 - lVar12);
        pauVar8 = (undefined1 (*) [32])((long)param_1 - lVar12);
        param_3 = param_3 + lVar12;
        if (((~(uint)-uVar7 & 0xf00) != 0) && (param_3 >> 4 < __x86_shared_non_temporal_threshold))
        {
          uVar9 = (uint)param_3 & 0x1fff;
          param_3 = param_3 >> 0xd;
          do {
            iVar6 = 0x20;
            do {
              pauVar11 = pauVar8;
              pauVar10 = param_2;
              auVar13 = vmovdqu64_avx512vl(*pauVar10);
              auVar14 = vmovdqu64_avx512vl(pauVar10[1]);
              auVar15 = vmovdqu64_avx512vl(pauVar10[2]);
              auVar16 = vmovdqu64_avx512vl(pauVar10[3]);
              auVar17 = vmovdqu64_avx512vl(pauVar10[0x80]);
              auVar18 = vmovdqu64_avx512vl(pauVar10[0x81]);
              auVar19 = vmovdqu64_avx512vl(pauVar10[0x82]);
              auVar20 = vmovdqu64_avx512vl(pauVar10[0x83]);
              auVar13 = vmovntdq_avx512vl(auVar13);
              *pauVar11 = auVar13;
              auVar13 = vmovntdq_avx512vl(auVar14);
              pauVar11[1] = auVar13;
              auVar13 = vmovntdq_avx512vl(auVar15);
              pauVar11[2] = auVar13;
              auVar13 = vmovntdq_avx512vl(auVar16);
              pauVar11[3] = auVar13;
              auVar13 = vmovntdq_avx512vl(auVar17);
              pauVar11[0x80] = auVar13;
              auVar13 = vmovntdq_avx512vl(auVar18);
              pauVar11[0x81] = auVar13;
              auVar13 = vmovntdq_avx512vl(auVar19);
              pauVar11[0x82] = auVar13;
              auVar13 = vmovntdq_avx512vl(auVar20);
              pauVar11[0x83] = auVar13;
              iVar6 = iVar6 + -1;
              param_2 = pauVar10 + 4;
              pauVar8 = pauVar11 + 4;
            } while (iVar6 != 0);
            pauVar8 = pauVar11 + 0x84;
            param_2 = pauVar10 + 0x84;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
          while (0x80 < uVar9) {
            auVar13 = vmovdqu64_avx512vl(*param_2);
            auVar14 = vmovdqu64_avx512vl(param_2[1]);
            auVar15 = vmovdqu64_avx512vl(param_2[2]);
            auVar16 = vmovdqu64_avx512vl(param_2[3]);
            param_2 = param_2 + 4;
            uVar9 = uVar9 - 0x80;
            auVar13 = vmovdqa64_avx512vl(auVar13);
            *pauVar8 = auVar13;
            auVar13 = vmovdqa64_avx512vl(auVar14);
            pauVar8[1] = auVar13;
            auVar13 = vmovdqa64_avx512vl(auVar15);
            pauVar8[2] = auVar13;
            auVar13 = vmovdqa64_avx512vl(auVar16);
            pauVar8[3] = auVar13;
            pauVar8 = pauVar8 + 4;
          }
          auVar13 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-4] + uVar9));
          auVar14 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-3] + uVar9));
          auVar15 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + uVar9));
          auVar16 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + uVar9));
          auVar13 = vmovdqu64_avx512vl(auVar13);
          *(undefined1 (*) [32])(pauVar8[-4] + uVar9) = auVar13;
          auVar13 = vmovdqu64_avx512vl(auVar14);
          *(undefined1 (*) [32])(pauVar8[-3] + uVar9) = auVar13;
          auVar13 = vmovdqu64_avx512vl(auVar15);
          *(undefined1 (*) [32])(pauVar8[-2] + uVar9) = auVar13;
          auVar13 = vmovdqu64_avx512vl(auVar16);
          *(undefined1 (*) [32])(pauVar8[-1] + uVar9) = auVar13;
          return param_1;
        }
        uVar9 = (uint)param_3 & 0x3fff;
        param_3 = param_3 >> 0xe;
        do {
          iVar6 = 0x20;
          do {
            pauVar11 = pauVar8;
            pauVar10 = param_2;
            auVar13 = vmovdqu64_avx512vl(*pauVar10);
            auVar14 = vmovdqu64_avx512vl(pauVar10[1]);
            auVar15 = vmovdqu64_avx512vl(pauVar10[2]);
            auVar16 = vmovdqu64_avx512vl(pauVar10[3]);
            auVar17 = vmovdqu64_avx512vl(pauVar10[0x80]);
            auVar18 = vmovdqu64_avx512vl(pauVar10[0x81]);
            auVar19 = vmovdqu64_avx512vl(pauVar10[0x82]);
            auVar20 = vmovdqu64_avx512vl(pauVar10[0x83]);
            auVar21 = vmovdqu64_avx512vl(pauVar10[0x100]);
            auVar22 = vmovdqu64_avx512vl(pauVar10[0x101]);
            auVar23 = vmovdqu64_avx512vl(pauVar10[0x102]);
            auVar24 = vmovdqu64_avx512vl(pauVar10[0x103]);
            auVar25 = vmovdqu64_avx512vl(pauVar10[0x180]);
            auVar26 = vmovdqu64_avx512vl(pauVar10[0x181]);
            auVar27 = vmovdqu64_avx512vl(pauVar10[0x182]);
            auVar28 = vmovdqu64_avx512vl(pauVar10[0x183]);
            auVar13 = vmovntdq_avx512vl(auVar13);
            *pauVar11 = auVar13;
            auVar13 = vmovntdq_avx512vl(auVar14);
            pauVar11[1] = auVar13;
            auVar13 = vmovntdq_avx512vl(auVar15);
            pauVar11[2] = auVar13;
            auVar13 = vmovntdq_avx512vl(auVar16);
            pauVar11[3] = auVar13;
            auVar13 = vmovntdq_avx512vl(auVar17);
            pauVar11[0x80] = auVar13;
            auVar13 = vmovntdq_avx512vl(auVar18);
            pauVar11[0x81] = auVar13;
            auVar13 = vmovntdq_avx512vl(auVar19);
            pauVar11[0x82] = auVar13;
            auVar13 = vmovntdq_avx512vl(auVar20);
            pauVar11[0x83] = auVar13;
            auVar13 = vmovntdq_avx512vl(auVar21);
            pauVar11[0x100] = auVar13;
            auVar13 = vmovntdq_avx512vl(auVar22);
            pauVar11[0x101] = auVar13;
            auVar13 = vmovntdq_avx512vl(auVar23);
            pauVar11[0x102] = auVar13;
            auVar13 = vmovntdq_avx512vl(auVar24);
            pauVar11[0x103] = auVar13;
            auVar13 = vmovntdq_avx512vl(auVar25);
            pauVar11[0x180] = auVar13;
            auVar13 = vmovntdq_avx512vl(auVar26);
            pauVar11[0x181] = auVar13;
            auVar13 = vmovntdq_avx512vl(auVar27);
            pauVar11[0x182] = auVar13;
            auVar13 = vmovntdq_avx512vl(auVar28);
            pauVar11[0x183] = auVar13;
            iVar6 = iVar6 + -1;
            param_2 = pauVar10 + 4;
            pauVar8 = pauVar11 + 4;
          } while (iVar6 != 0);
          pauVar8 = pauVar11 + 0x184;
          param_2 = pauVar10 + 0x184;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        while (0x80 < uVar9) {
          auVar13 = vmovdqu64_avx512vl(*param_2);
          auVar14 = vmovdqu64_avx512vl(param_2[1]);
          auVar15 = vmovdqu64_avx512vl(param_2[2]);
          auVar16 = vmovdqu64_avx512vl(param_2[3]);
          param_2 = param_2 + 4;
          uVar9 = uVar9 - 0x80;
          auVar13 = vmovdqa64_avx512vl(auVar13);
          *pauVar8 = auVar13;
          auVar13 = vmovdqa64_avx512vl(auVar14);
          pauVar8[1] = auVar13;
          auVar13 = vmovdqa64_avx512vl(auVar15);
          pauVar8[2] = auVar13;
          auVar13 = vmovdqa64_avx512vl(auVar16);
          pauVar8[3] = auVar13;
          pauVar8 = pauVar8 + 4;
        }
        auVar13 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-4] + uVar9));
        auVar14 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-3] + uVar9));
        auVar15 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + uVar9));
        auVar16 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + uVar9));
        auVar13 = vmovdqu64_avx512vl(auVar13);
        *(undefined1 (*) [32])(pauVar8[-4] + uVar9) = auVar13;
        auVar13 = vmovdqu64_avx512vl(auVar14);
        *(undefined1 (*) [32])(pauVar8[-3] + uVar9) = auVar13;
        auVar13 = vmovdqu64_avx512vl(auVar15);
        *(undefined1 (*) [32])(pauVar8[-2] + uVar9) = auVar13;
        auVar13 = vmovdqu64_avx512vl(auVar16);
        *(undefined1 (*) [32])(pauVar8[-1] + uVar9) = auVar13;
        return param_1;
      }
    }
    else if (((uint)uVar7 & 0xf00) ==
             (int)((uint)(uVar7 + param_3 >> 0x20) ^ (uint)(uVar7 >> 0x20)) >> 0x1f)
    goto LAB_00748caa;
    auVar14 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
    auVar15 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + param_3));
    auVar16 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-3] + param_3));
    auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-4] + param_3));
    pauVar11 = (undefined1 (*) [32])(((ulong)param_1 | 0x1f) + 1);
    pauVar10 = (undefined1 (*) [32])(((long)param_2 - (long)param_1) + (long)pauVar11);
    pauVar8 = (undefined1 (*) [32])(param_1[-4] + param_3);
    do {
      auVar18 = vmovdqu64_avx512vl(*pauVar10);
      auVar19 = vmovdqu64_avx512vl(pauVar10[1]);
      auVar20 = vmovdqu64_avx512vl(pauVar10[2]);
      auVar21 = vmovdqu64_avx512vl(pauVar10[3]);
      pauVar10 = pauVar10 + 4;
      auVar18 = vmovdqa64_avx512vl(auVar18);
      *pauVar11 = auVar18;
      auVar18 = vmovdqa64_avx512vl(auVar19);
      pauVar11[1] = auVar18;
      auVar18 = vmovdqa64_avx512vl(auVar20);
      pauVar11[2] = auVar18;
      auVar18 = vmovdqa64_avx512vl(auVar21);
      pauVar11[3] = auVar18;
      pauVar11 = pauVar11 + 4;
    } while (pauVar11 < pauVar8);
    auVar14 = vmovdqu64_avx512vl(auVar14);
    pauVar8[3] = auVar14;
    auVar14 = vmovdqu64_avx512vl(auVar15);
    pauVar8[2] = auVar14;
    auVar14 = vmovdqu64_avx512vl(auVar16);
    pauVar8[1] = auVar14;
    auVar14 = vmovdqu64_avx512vl(auVar17);
    *pauVar8 = auVar14;
    auVar13 = vmovdqu64_avx512vl(auVar13);
    *param_1 = auVar13;
  }
  return param_1;
}

