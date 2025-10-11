
undefined1 (*) [32]
__memmove_evex_unaligned_erms(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulong param_3)

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
  undefined1 *puVar11;
  undefined1 (*pauVar12) [32];
  undefined1 *puVar13;
  long lVar14;
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
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  
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
    if (7 < uVar9) {
      uVar3 = *(undefined8 *)(param_2[-1] + param_3 + 0x18);
      *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
      *(undefined8 *)(param_1[-1] + param_3 + 0x18) = uVar3;
      return param_1;
    }
    if (3 < param_3) {
      uVar2 = *(undefined4 *)(param_2[-1] + param_3 + 0x1c);
      *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
      *(undefined4 *)(param_1[-1] + param_3 + 0x1c) = uVar2;
      return param_1;
    }
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
  auVar15 = vmovdqu64_avx512vl(*param_2);
  if (param_3 < 0x41) {
    auVar16 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
    auVar15 = vmovdqu64_avx512vl(auVar15);
    *param_1 = auVar15;
    auVar15 = vmovdqu64_avx512vl(auVar16);
    *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar15;
    return param_1;
  }
  if (__x86_rep_movsb_threshold < param_3) {
    uVar7 = (long)param_1 - (long)param_2;
    if (uVar7 < param_3) goto LAB_00748ca5;
    if (param_3 < __x86_rep_movsb_stop_threshold) {
      if ((__x86_string_control & 1) == 0) {
        auVar16 = vmovdqu64_avx512vl(param_2[1]);
        if ((uVar7 & 0xe00) == 0) {
          puVar13 = (undefined1 *)((ulong)param_2 | 0x3f);
          puVar11 = puVar13 + uVar7 + 1;
          for (lVar14 = (long)param_2 + ((param_3 - 1) - (long)puVar13); puVar13 = puVar13 + 1,
              lVar14 != 0; lVar14 = lVar14 + -1) {
            *puVar11 = *puVar13;
            puVar11 = puVar11 + 1;
          }
          auVar15 = vmovdqu64_avx512vl(auVar15);
          *param_1 = auVar15;
          auVar15 = vmovdqu64_avx512vl(auVar16);
          param_1[1] = auVar15;
          return param_1;
        }
LAB_00748db7:
        puVar13 = (undefined1 *)((ulong)(param_1[1] + 0x1f) & 0xffffffffffffffc0);
        lVar14 = (long)param_1 + (param_3 - (long)puVar13);
        puVar11 = puVar13 + ((long)param_2 - (long)param_1);
        for (; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        auVar15 = vmovdqu64_avx512vl(auVar15);
        *param_1 = auVar15;
        auVar15 = vmovdqu64_avx512vl(auVar16);
        param_1[1] = auVar15;
        return param_1;
      }
      if ((uint)uVar7 < 0xffffffc1) {
        auVar16 = vmovdqu64_avx512vl(param_2[1]);
        goto LAB_00748db7;
      }
      goto LAB_00748c06;
    }
    if (__x86_rep_movsb_threshold <= param_3) goto LAB_00748ded;
  }
  else {
    if (param_3 < 0x101) {
      auVar16 = vmovdqu64_avx512vl(param_2[1]);
      if (param_3 < 0x81) {
        auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
        auVar18 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + param_3));
        auVar15 = vmovdqu64_avx512vl(auVar15);
        *param_1 = auVar15;
        auVar15 = vmovdqu64_avx512vl(auVar16);
        param_1[1] = auVar15;
        auVar15 = vmovdqu64_avx512vl(auVar17);
        *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar15;
        auVar15 = vmovdqu64_avx512vl(auVar18);
        *(undefined1 (*) [32])(param_1[-2] + param_3) = auVar15;
        return param_1;
      }
      auVar17 = vmovdqu64_avx512vl(param_2[2]);
      auVar18 = vmovdqu64_avx512vl(param_2[3]);
      auVar19 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
      auVar20 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + param_3));
      auVar21 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-3] + param_3));
      auVar22 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-4] + param_3));
      auVar15 = vmovdqu64_avx512vl(auVar15);
      *param_1 = auVar15;
      auVar15 = vmovdqu64_avx512vl(auVar16);
      param_1[1] = auVar15;
      auVar15 = vmovdqu64_avx512vl(auVar17);
      param_1[2] = auVar15;
      auVar15 = vmovdqu64_avx512vl(auVar18);
      param_1[3] = auVar15;
      auVar15 = vmovdqu64_avx512vl(auVar19);
      *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar15;
      auVar15 = vmovdqu64_avx512vl(auVar20);
      *(undefined1 (*) [32])(param_1[-2] + param_3) = auVar15;
      auVar15 = vmovdqu64_avx512vl(auVar21);
      *(undefined1 (*) [32])(param_1[-3] + param_3) = auVar15;
      auVar15 = vmovdqu64_avx512vl(auVar22);
      *(undefined1 (*) [32])(param_1[-4] + param_3) = auVar15;
      return param_1;
    }
    uVar7 = (long)param_1 - (long)param_2;
    if (uVar7 < param_3) {
LAB_00748ca5:
      if (uVar7 == 0) {
        return param_1;
      }
      goto LAB_00748caa;
    }
    if (__x86_shared_non_temporal_threshold < param_3) {
LAB_00748ded:
      if (param_3 <= -uVar7) {
        auVar16 = vmovdqu64_avx512vl(param_2[1]);
        auVar15 = vmovdqu64_avx512vl(auVar15);
        *param_1 = auVar15;
        auVar15 = vmovdqu64_avx512vl(auVar16);
        param_1[1] = auVar15;
        lVar14 = ((ulong)param_1 & 0x3f) - 0x40;
        param_2 = (undefined1 (*) [32])((long)param_2 - lVar14);
        pauVar8 = (undefined1 (*) [32])((long)param_1 - lVar14);
        param_3 = param_3 + lVar14;
        if (((~(uint)-uVar7 & 0xf00) != 0) && (param_3 >> 4 < __x86_shared_non_temporal_threshold))
        {
          uVar9 = (uint)param_3 & 0x1fff;
          param_3 = param_3 >> 0xd;
          do {
            iVar6 = 0x20;
            do {
              pauVar12 = pauVar8;
              pauVar10 = param_2;
              auVar15 = vmovdqu64_avx512vl(*pauVar10);
              auVar16 = vmovdqu64_avx512vl(pauVar10[1]);
              auVar17 = vmovdqu64_avx512vl(pauVar10[2]);
              auVar18 = vmovdqu64_avx512vl(pauVar10[3]);
              auVar19 = vmovdqu64_avx512vl(pauVar10[0x80]);
              auVar20 = vmovdqu64_avx512vl(pauVar10[0x81]);
              auVar21 = vmovdqu64_avx512vl(pauVar10[0x82]);
              auVar22 = vmovdqu64_avx512vl(pauVar10[0x83]);
              auVar15 = vmovntdq_avx512vl(auVar15);
              *pauVar12 = auVar15;
              auVar15 = vmovntdq_avx512vl(auVar16);
              pauVar12[1] = auVar15;
              auVar15 = vmovntdq_avx512vl(auVar17);
              pauVar12[2] = auVar15;
              auVar15 = vmovntdq_avx512vl(auVar18);
              pauVar12[3] = auVar15;
              auVar15 = vmovntdq_avx512vl(auVar19);
              pauVar12[0x80] = auVar15;
              auVar15 = vmovntdq_avx512vl(auVar20);
              pauVar12[0x81] = auVar15;
              auVar15 = vmovntdq_avx512vl(auVar21);
              pauVar12[0x82] = auVar15;
              auVar15 = vmovntdq_avx512vl(auVar22);
              pauVar12[0x83] = auVar15;
              iVar6 = iVar6 + -1;
              param_2 = pauVar10 + 4;
              pauVar8 = pauVar12 + 4;
            } while (iVar6 != 0);
            pauVar8 = pauVar12 + 0x84;
            param_2 = pauVar10 + 0x84;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
          while (0x80 < uVar9) {
            auVar15 = vmovdqu64_avx512vl(*param_2);
            auVar16 = vmovdqu64_avx512vl(param_2[1]);
            auVar17 = vmovdqu64_avx512vl(param_2[2]);
            auVar18 = vmovdqu64_avx512vl(param_2[3]);
            param_2 = param_2 + 4;
            uVar9 = uVar9 - 0x80;
            auVar15 = vmovdqa64_avx512vl(auVar15);
            *pauVar8 = auVar15;
            auVar15 = vmovdqa64_avx512vl(auVar16);
            pauVar8[1] = auVar15;
            auVar15 = vmovdqa64_avx512vl(auVar17);
            pauVar8[2] = auVar15;
            auVar15 = vmovdqa64_avx512vl(auVar18);
            pauVar8[3] = auVar15;
            pauVar8 = pauVar8 + 4;
          }
          auVar15 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-4] + uVar9));
          auVar16 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-3] + uVar9));
          auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + uVar9));
          auVar18 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + uVar9));
          auVar15 = vmovdqu64_avx512vl(auVar15);
          *(undefined1 (*) [32])(pauVar8[-4] + uVar9) = auVar15;
          auVar15 = vmovdqu64_avx512vl(auVar16);
          *(undefined1 (*) [32])(pauVar8[-3] + uVar9) = auVar15;
          auVar15 = vmovdqu64_avx512vl(auVar17);
          *(undefined1 (*) [32])(pauVar8[-2] + uVar9) = auVar15;
          auVar15 = vmovdqu64_avx512vl(auVar18);
          *(undefined1 (*) [32])(pauVar8[-1] + uVar9) = auVar15;
          return param_1;
        }
        uVar9 = (uint)param_3 & 0x3fff;
        param_3 = param_3 >> 0xe;
        do {
          iVar6 = 0x20;
          do {
            pauVar12 = pauVar8;
            pauVar10 = param_2;
            auVar15 = vmovdqu64_avx512vl(*pauVar10);
            auVar16 = vmovdqu64_avx512vl(pauVar10[1]);
            auVar17 = vmovdqu64_avx512vl(pauVar10[2]);
            auVar18 = vmovdqu64_avx512vl(pauVar10[3]);
            auVar19 = vmovdqu64_avx512vl(pauVar10[0x80]);
            auVar20 = vmovdqu64_avx512vl(pauVar10[0x81]);
            auVar21 = vmovdqu64_avx512vl(pauVar10[0x82]);
            auVar22 = vmovdqu64_avx512vl(pauVar10[0x83]);
            auVar23 = vmovdqu64_avx512vl(pauVar10[0x100]);
            auVar24 = vmovdqu64_avx512vl(pauVar10[0x101]);
            auVar25 = vmovdqu64_avx512vl(pauVar10[0x102]);
            auVar26 = vmovdqu64_avx512vl(pauVar10[0x103]);
            auVar27 = vmovdqu64_avx512vl(pauVar10[0x180]);
            auVar28 = vmovdqu64_avx512vl(pauVar10[0x181]);
            auVar29 = vmovdqu64_avx512vl(pauVar10[0x182]);
            auVar30 = vmovdqu64_avx512vl(pauVar10[0x183]);
            auVar15 = vmovntdq_avx512vl(auVar15);
            *pauVar12 = auVar15;
            auVar15 = vmovntdq_avx512vl(auVar16);
            pauVar12[1] = auVar15;
            auVar15 = vmovntdq_avx512vl(auVar17);
            pauVar12[2] = auVar15;
            auVar15 = vmovntdq_avx512vl(auVar18);
            pauVar12[3] = auVar15;
            auVar15 = vmovntdq_avx512vl(auVar19);
            pauVar12[0x80] = auVar15;
            auVar15 = vmovntdq_avx512vl(auVar20);
            pauVar12[0x81] = auVar15;
            auVar15 = vmovntdq_avx512vl(auVar21);
            pauVar12[0x82] = auVar15;
            auVar15 = vmovntdq_avx512vl(auVar22);
            pauVar12[0x83] = auVar15;
            auVar15 = vmovntdq_avx512vl(auVar23);
            pauVar12[0x100] = auVar15;
            auVar15 = vmovntdq_avx512vl(auVar24);
            pauVar12[0x101] = auVar15;
            auVar15 = vmovntdq_avx512vl(auVar25);
            pauVar12[0x102] = auVar15;
            auVar15 = vmovntdq_avx512vl(auVar26);
            pauVar12[0x103] = auVar15;
            auVar15 = vmovntdq_avx512vl(auVar27);
            pauVar12[0x180] = auVar15;
            auVar15 = vmovntdq_avx512vl(auVar28);
            pauVar12[0x181] = auVar15;
            auVar15 = vmovntdq_avx512vl(auVar29);
            pauVar12[0x182] = auVar15;
            auVar15 = vmovntdq_avx512vl(auVar30);
            pauVar12[0x183] = auVar15;
            iVar6 = iVar6 + -1;
            param_2 = pauVar10 + 4;
            pauVar8 = pauVar12 + 4;
          } while (iVar6 != 0);
          pauVar8 = pauVar12 + 0x184;
          param_2 = pauVar10 + 0x184;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        while (0x80 < uVar9) {
          auVar15 = vmovdqu64_avx512vl(*param_2);
          auVar16 = vmovdqu64_avx512vl(param_2[1]);
          auVar17 = vmovdqu64_avx512vl(param_2[2]);
          auVar18 = vmovdqu64_avx512vl(param_2[3]);
          param_2 = param_2 + 4;
          uVar9 = uVar9 - 0x80;
          auVar15 = vmovdqa64_avx512vl(auVar15);
          *pauVar8 = auVar15;
          auVar15 = vmovdqa64_avx512vl(auVar16);
          pauVar8[1] = auVar15;
          auVar15 = vmovdqa64_avx512vl(auVar17);
          pauVar8[2] = auVar15;
          auVar15 = vmovdqa64_avx512vl(auVar18);
          pauVar8[3] = auVar15;
          pauVar8 = pauVar8 + 4;
        }
        auVar15 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-4] + uVar9));
        auVar16 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-3] + uVar9));
        auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + uVar9));
        auVar18 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + uVar9));
        auVar15 = vmovdqu64_avx512vl(auVar15);
        *(undefined1 (*) [32])(pauVar8[-4] + uVar9) = auVar15;
        auVar15 = vmovdqu64_avx512vl(auVar16);
        *(undefined1 (*) [32])(pauVar8[-3] + uVar9) = auVar15;
        auVar15 = vmovdqu64_avx512vl(auVar17);
        *(undefined1 (*) [32])(pauVar8[-2] + uVar9) = auVar15;
        auVar15 = vmovdqu64_avx512vl(auVar18);
        *(undefined1 (*) [32])(pauVar8[-1] + uVar9) = auVar15;
        return param_1;
      }
      goto LAB_00748c06;
    }
  }
  if (((uint)uVar7 & 0xf00) !=
      (int)((uint)(uVar7 + param_3 >> 0x20) ^ (uint)(uVar7 >> 0x20)) >> 0x1f) {
LAB_00748c06:
    auVar16 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
    auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + param_3));
    auVar18 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-3] + param_3));
    auVar19 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-4] + param_3));
    pauVar12 = (undefined1 (*) [32])(((ulong)param_1 | 0x1f) + 1);
    pauVar10 = (undefined1 (*) [32])(((long)param_2 - (long)param_1) + (long)pauVar12);
    pauVar8 = (undefined1 (*) [32])(param_1[-4] + param_3);
    do {
      auVar20 = vmovdqu64_avx512vl(*pauVar10);
      auVar21 = vmovdqu64_avx512vl(pauVar10[1]);
      auVar22 = vmovdqu64_avx512vl(pauVar10[2]);
      auVar23 = vmovdqu64_avx512vl(pauVar10[3]);
      pauVar10 = pauVar10 + 4;
      auVar20 = vmovdqa64_avx512vl(auVar20);
      *pauVar12 = auVar20;
      auVar20 = vmovdqa64_avx512vl(auVar21);
      pauVar12[1] = auVar20;
      auVar20 = vmovdqa64_avx512vl(auVar22);
      pauVar12[2] = auVar20;
      auVar20 = vmovdqa64_avx512vl(auVar23);
      pauVar12[3] = auVar20;
      pauVar12 = pauVar12 + 4;
    } while (pauVar12 < pauVar8);
    auVar16 = vmovdqu64_avx512vl(auVar16);
    pauVar8[3] = auVar16;
    auVar16 = vmovdqu64_avx512vl(auVar17);
    pauVar8[2] = auVar16;
    auVar16 = vmovdqu64_avx512vl(auVar18);
    pauVar8[1] = auVar16;
    auVar16 = vmovdqu64_avx512vl(auVar19);
    *pauVar8 = auVar16;
    auVar15 = vmovdqu64_avx512vl(auVar15);
    *param_1 = auVar15;
    return param_1;
  }
LAB_00748caa:
  auVar16 = vmovdqu64_avx512vl(param_2[1]);
  auVar17 = vmovdqu64_avx512vl(param_2[2]);
  auVar18 = vmovdqu64_avx512vl(param_2[3]);
  auVar19 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
  pauVar8 = (undefined1 (*) [32])((ulong)(param_1[-5] + param_3 + 0x1f) & 0xffffffffffffffe0);
  pauVar10 = (undefined1 (*) [32])(((long)param_2 - (long)param_1) + (long)pauVar8);
  do {
    auVar20 = vmovdqu64_avx512vl(pauVar10[3]);
    auVar21 = vmovdqu64_avx512vl(pauVar10[2]);
    auVar22 = vmovdqu64_avx512vl(pauVar10[1]);
    auVar23 = vmovdqu64_avx512vl(*pauVar10);
    pauVar10 = pauVar10 + -4;
    auVar20 = vmovdqa64_avx512vl(auVar20);
    pauVar8[3] = auVar20;
    auVar20 = vmovdqa64_avx512vl(auVar21);
    pauVar8[2] = auVar20;
    auVar20 = vmovdqa64_avx512vl(auVar22);
    pauVar8[1] = auVar20;
    auVar20 = vmovdqa64_avx512vl(auVar23);
    *pauVar8 = auVar20;
    pauVar8 = pauVar8 + -4;
  } while (param_1 < pauVar8);
  auVar15 = vmovdqu64_avx512vl(auVar15);
  *param_1 = auVar15;
  auVar15 = vmovdqu64_avx512vl(auVar16);
  param_1[1] = auVar15;
  auVar15 = vmovdqu64_avx512vl(auVar17);
  param_1[2] = auVar15;
  auVar15 = vmovdqu64_avx512vl(auVar18);
  param_1[3] = auVar15;
  auVar15 = vmovdqu64_avx512vl(auVar19);
  *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar15;
  return param_1;
}

