
undefined1 *
__mempcpy_evex_unaligned_erms(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulong param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  int iVar7;
  ulong uVar8;
  undefined1 (*pauVar9) [32];
  uint uVar10;
  undefined1 (*pauVar11) [32];
  undefined1 *puVar12;
  undefined1 (*pauVar13) [32];
  undefined1 *puVar14;
  long lVar15;
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
  undefined1 auVar31 [32];
  
  puVar6 = *param_1 + param_3;
  if (param_3 < 0x20) {
    uVar10 = (uint)param_3;
    if (0xf < uVar10) {
      uVar3 = *(undefined8 *)(*param_2 + 8);
      uVar4 = *(undefined8 *)(param_2[-1] + param_3 + 0x10);
      uVar5 = *(undefined8 *)((long)(param_2[-1] + param_3 + 0x10) + 8);
      *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
      *(undefined8 *)(*param_1 + 8) = uVar3;
      *(undefined8 *)(param_1[-1] + param_3 + 0x10) = uVar4;
      *(undefined8 *)((long)(param_1[-1] + param_3 + 0x10) + 8) = uVar5;
      return puVar6;
    }
    if (7 < uVar10) {
      uVar3 = *(undefined8 *)(param_2[-1] + param_3 + 0x18);
      *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
      *(undefined8 *)(param_1[-1] + param_3 + 0x18) = uVar3;
      return puVar6;
    }
    if (3 < param_3) {
      uVar2 = *(undefined4 *)(param_2[-1] + param_3 + 0x1c);
      *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
      *(undefined4 *)(param_1[-1] + param_3 + 0x1c) = uVar2;
      return puVar6;
    }
    if (-4 < (int)(uVar10 - 4)) {
      uVar1 = (*param_2)[0];
      if (uVar10 - 4 != -3) {
        *(undefined2 *)(param_1[-1] + param_3 + 0x1e) =
             *(undefined2 *)(param_2[-1] + param_3 + 0x1e);
      }
      (*param_1)[0] = uVar1;
    }
    return puVar6;
  }
  auVar16 = vmovdqu64_avx512vl(*param_2);
  if (param_3 < 0x41) {
    auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
    auVar16 = vmovdqu64_avx512vl(auVar16);
    *param_1 = auVar16;
    auVar16 = vmovdqu64_avx512vl(auVar17);
    *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar16;
    return puVar6;
  }
  if (__x86_rep_movsb_threshold < param_3) {
    uVar8 = (long)param_1 - (long)param_2;
    if (uVar8 < param_3) goto LAB_00748ca5;
    if (param_3 < __x86_rep_movsb_stop_threshold) {
      if ((__x86_string_control & 1) == 0) {
        auVar17 = vmovdqu64_avx512vl(param_2[1]);
        if ((uVar8 & 0xe00) == 0) {
          puVar14 = (undefined1 *)((ulong)param_2 | 0x3f);
          puVar12 = puVar14 + uVar8 + 1;
          for (lVar15 = (long)param_2 + ((param_3 - 1) - (long)puVar14); puVar14 = puVar14 + 1,
              lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar12 = *puVar14;
            puVar12 = puVar12 + 1;
          }
          auVar16 = vmovdqu64_avx512vl(auVar16);
          *param_1 = auVar16;
          auVar16 = vmovdqu64_avx512vl(auVar17);
          param_1[1] = auVar16;
          return puVar6;
        }
LAB_00748db7:
        puVar14 = (undefined1 *)((ulong)(param_1[1] + 0x1f) & 0xffffffffffffffc0);
        lVar15 = (long)param_1 + (param_3 - (long)puVar14);
        puVar12 = puVar14 + ((long)param_2 - (long)param_1);
        for (; lVar15 != 0; lVar15 = lVar15 + -1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        auVar16 = vmovdqu64_avx512vl(auVar16);
        *param_1 = auVar16;
        auVar16 = vmovdqu64_avx512vl(auVar17);
        param_1[1] = auVar16;
        return puVar6;
      }
      if ((uint)uVar8 < 0xffffffc1) {
        auVar17 = vmovdqu64_avx512vl(param_2[1]);
        goto LAB_00748db7;
      }
      goto LAB_00748c06;
    }
    if (__x86_rep_movsb_threshold <= param_3) goto LAB_00748ded;
  }
  else {
    if (param_3 < 0x101) {
      auVar17 = vmovdqu64_avx512vl(param_2[1]);
      if (param_3 < 0x81) {
        auVar18 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
        auVar19 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + param_3));
        auVar16 = vmovdqu64_avx512vl(auVar16);
        *param_1 = auVar16;
        auVar16 = vmovdqu64_avx512vl(auVar17);
        param_1[1] = auVar16;
        auVar16 = vmovdqu64_avx512vl(auVar18);
        *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar16;
        auVar16 = vmovdqu64_avx512vl(auVar19);
        *(undefined1 (*) [32])(param_1[-2] + param_3) = auVar16;
        return puVar6;
      }
      auVar18 = vmovdqu64_avx512vl(param_2[2]);
      auVar19 = vmovdqu64_avx512vl(param_2[3]);
      auVar20 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
      auVar21 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + param_3));
      auVar22 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-3] + param_3));
      auVar23 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-4] + param_3));
      auVar16 = vmovdqu64_avx512vl(auVar16);
      *param_1 = auVar16;
      auVar16 = vmovdqu64_avx512vl(auVar17);
      param_1[1] = auVar16;
      auVar16 = vmovdqu64_avx512vl(auVar18);
      param_1[2] = auVar16;
      auVar16 = vmovdqu64_avx512vl(auVar19);
      param_1[3] = auVar16;
      auVar16 = vmovdqu64_avx512vl(auVar20);
      *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar16;
      auVar16 = vmovdqu64_avx512vl(auVar21);
      *(undefined1 (*) [32])(param_1[-2] + param_3) = auVar16;
      auVar16 = vmovdqu64_avx512vl(auVar22);
      *(undefined1 (*) [32])(param_1[-3] + param_3) = auVar16;
      auVar16 = vmovdqu64_avx512vl(auVar23);
      *(undefined1 (*) [32])(param_1[-4] + param_3) = auVar16;
      return puVar6;
    }
    uVar8 = (long)param_1 - (long)param_2;
    if (uVar8 < param_3) {
LAB_00748ca5:
      if (uVar8 == 0) {
        return puVar6;
      }
      goto LAB_00748caa;
    }
    if (__x86_shared_non_temporal_threshold < param_3) {
LAB_00748ded:
      if (param_3 <= -uVar8) {
        auVar17 = vmovdqu64_avx512vl(param_2[1]);
        auVar16 = vmovdqu64_avx512vl(auVar16);
        *param_1 = auVar16;
        auVar16 = vmovdqu64_avx512vl(auVar17);
        param_1[1] = auVar16;
        lVar15 = ((ulong)param_1 & 0x3f) - 0x40;
        param_2 = (undefined1 (*) [32])((long)param_2 - lVar15);
        param_1 = (undefined1 (*) [32])((long)param_1 - lVar15);
        param_3 = param_3 + lVar15;
        if (((~(uint)-uVar8 & 0xf00) != 0) && (param_3 >> 4 < __x86_shared_non_temporal_threshold))
        {
          uVar10 = (uint)param_3 & 0x1fff;
          param_3 = param_3 >> 0xd;
          do {
            iVar7 = 0x20;
            do {
              pauVar11 = param_1;
              pauVar9 = param_2;
              auVar16 = vmovdqu64_avx512vl(*pauVar9);
              auVar17 = vmovdqu64_avx512vl(pauVar9[1]);
              auVar18 = vmovdqu64_avx512vl(pauVar9[2]);
              auVar19 = vmovdqu64_avx512vl(pauVar9[3]);
              auVar20 = vmovdqu64_avx512vl(pauVar9[0x80]);
              auVar21 = vmovdqu64_avx512vl(pauVar9[0x81]);
              auVar22 = vmovdqu64_avx512vl(pauVar9[0x82]);
              auVar23 = vmovdqu64_avx512vl(pauVar9[0x83]);
              auVar16 = vmovntdq_avx512vl(auVar16);
              *pauVar11 = auVar16;
              auVar16 = vmovntdq_avx512vl(auVar17);
              pauVar11[1] = auVar16;
              auVar16 = vmovntdq_avx512vl(auVar18);
              pauVar11[2] = auVar16;
              auVar16 = vmovntdq_avx512vl(auVar19);
              pauVar11[3] = auVar16;
              auVar16 = vmovntdq_avx512vl(auVar20);
              pauVar11[0x80] = auVar16;
              auVar16 = vmovntdq_avx512vl(auVar21);
              pauVar11[0x81] = auVar16;
              auVar16 = vmovntdq_avx512vl(auVar22);
              pauVar11[0x82] = auVar16;
              auVar16 = vmovntdq_avx512vl(auVar23);
              pauVar11[0x83] = auVar16;
              iVar7 = iVar7 + -1;
              param_2 = pauVar9 + 4;
              param_1 = pauVar11 + 4;
            } while (iVar7 != 0);
            param_1 = pauVar11 + 0x84;
            param_2 = pauVar9 + 0x84;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
          while (0x80 < uVar10) {
            auVar16 = vmovdqu64_avx512vl(*param_2);
            auVar17 = vmovdqu64_avx512vl(param_2[1]);
            auVar18 = vmovdqu64_avx512vl(param_2[2]);
            auVar19 = vmovdqu64_avx512vl(param_2[3]);
            param_2 = param_2 + 4;
            uVar10 = uVar10 - 0x80;
            auVar16 = vmovdqa64_avx512vl(auVar16);
            *param_1 = auVar16;
            auVar16 = vmovdqa64_avx512vl(auVar17);
            param_1[1] = auVar16;
            auVar16 = vmovdqa64_avx512vl(auVar18);
            param_1[2] = auVar16;
            auVar16 = vmovdqa64_avx512vl(auVar19);
            param_1[3] = auVar16;
            param_1 = param_1 + 4;
          }
          auVar16 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-4] + uVar10));
          auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-3] + uVar10));
          auVar18 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + uVar10));
          auVar19 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + uVar10));
          auVar16 = vmovdqu64_avx512vl(auVar16);
          *(undefined1 (*) [32])(param_1[-4] + uVar10) = auVar16;
          auVar16 = vmovdqu64_avx512vl(auVar17);
          *(undefined1 (*) [32])(param_1[-3] + uVar10) = auVar16;
          auVar16 = vmovdqu64_avx512vl(auVar18);
          *(undefined1 (*) [32])(param_1[-2] + uVar10) = auVar16;
          auVar16 = vmovdqu64_avx512vl(auVar19);
          *(undefined1 (*) [32])(param_1[-1] + uVar10) = auVar16;
          return puVar6;
        }
        uVar10 = (uint)param_3 & 0x3fff;
        param_3 = param_3 >> 0xe;
        do {
          iVar7 = 0x20;
          do {
            pauVar11 = param_1;
            pauVar9 = param_2;
            auVar16 = vmovdqu64_avx512vl(*pauVar9);
            auVar17 = vmovdqu64_avx512vl(pauVar9[1]);
            auVar18 = vmovdqu64_avx512vl(pauVar9[2]);
            auVar19 = vmovdqu64_avx512vl(pauVar9[3]);
            auVar20 = vmovdqu64_avx512vl(pauVar9[0x80]);
            auVar21 = vmovdqu64_avx512vl(pauVar9[0x81]);
            auVar22 = vmovdqu64_avx512vl(pauVar9[0x82]);
            auVar23 = vmovdqu64_avx512vl(pauVar9[0x83]);
            auVar24 = vmovdqu64_avx512vl(pauVar9[0x100]);
            auVar25 = vmovdqu64_avx512vl(pauVar9[0x101]);
            auVar26 = vmovdqu64_avx512vl(pauVar9[0x102]);
            auVar27 = vmovdqu64_avx512vl(pauVar9[0x103]);
            auVar28 = vmovdqu64_avx512vl(pauVar9[0x180]);
            auVar29 = vmovdqu64_avx512vl(pauVar9[0x181]);
            auVar30 = vmovdqu64_avx512vl(pauVar9[0x182]);
            auVar31 = vmovdqu64_avx512vl(pauVar9[0x183]);
            auVar16 = vmovntdq_avx512vl(auVar16);
            *pauVar11 = auVar16;
            auVar16 = vmovntdq_avx512vl(auVar17);
            pauVar11[1] = auVar16;
            auVar16 = vmovntdq_avx512vl(auVar18);
            pauVar11[2] = auVar16;
            auVar16 = vmovntdq_avx512vl(auVar19);
            pauVar11[3] = auVar16;
            auVar16 = vmovntdq_avx512vl(auVar20);
            pauVar11[0x80] = auVar16;
            auVar16 = vmovntdq_avx512vl(auVar21);
            pauVar11[0x81] = auVar16;
            auVar16 = vmovntdq_avx512vl(auVar22);
            pauVar11[0x82] = auVar16;
            auVar16 = vmovntdq_avx512vl(auVar23);
            pauVar11[0x83] = auVar16;
            auVar16 = vmovntdq_avx512vl(auVar24);
            pauVar11[0x100] = auVar16;
            auVar16 = vmovntdq_avx512vl(auVar25);
            pauVar11[0x101] = auVar16;
            auVar16 = vmovntdq_avx512vl(auVar26);
            pauVar11[0x102] = auVar16;
            auVar16 = vmovntdq_avx512vl(auVar27);
            pauVar11[0x103] = auVar16;
            auVar16 = vmovntdq_avx512vl(auVar28);
            pauVar11[0x180] = auVar16;
            auVar16 = vmovntdq_avx512vl(auVar29);
            pauVar11[0x181] = auVar16;
            auVar16 = vmovntdq_avx512vl(auVar30);
            pauVar11[0x182] = auVar16;
            auVar16 = vmovntdq_avx512vl(auVar31);
            pauVar11[0x183] = auVar16;
            iVar7 = iVar7 + -1;
            param_2 = pauVar9 + 4;
            param_1 = pauVar11 + 4;
          } while (iVar7 != 0);
          param_1 = pauVar11 + 0x184;
          param_2 = pauVar9 + 0x184;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        while (0x80 < uVar10) {
          auVar16 = vmovdqu64_avx512vl(*param_2);
          auVar17 = vmovdqu64_avx512vl(param_2[1]);
          auVar18 = vmovdqu64_avx512vl(param_2[2]);
          auVar19 = vmovdqu64_avx512vl(param_2[3]);
          param_2 = param_2 + 4;
          uVar10 = uVar10 - 0x80;
          auVar16 = vmovdqa64_avx512vl(auVar16);
          *param_1 = auVar16;
          auVar16 = vmovdqa64_avx512vl(auVar17);
          param_1[1] = auVar16;
          auVar16 = vmovdqa64_avx512vl(auVar18);
          param_1[2] = auVar16;
          auVar16 = vmovdqa64_avx512vl(auVar19);
          param_1[3] = auVar16;
          param_1 = param_1 + 4;
        }
        auVar16 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-4] + uVar10));
        auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-3] + uVar10));
        auVar18 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + uVar10));
        auVar19 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + uVar10));
        auVar16 = vmovdqu64_avx512vl(auVar16);
        *(undefined1 (*) [32])(param_1[-4] + uVar10) = auVar16;
        auVar16 = vmovdqu64_avx512vl(auVar17);
        *(undefined1 (*) [32])(param_1[-3] + uVar10) = auVar16;
        auVar16 = vmovdqu64_avx512vl(auVar18);
        *(undefined1 (*) [32])(param_1[-2] + uVar10) = auVar16;
        auVar16 = vmovdqu64_avx512vl(auVar19);
        *(undefined1 (*) [32])(param_1[-1] + uVar10) = auVar16;
        return puVar6;
      }
      goto LAB_00748c06;
    }
  }
  if (((uint)uVar8 & 0xf00) !=
      (int)((uint)(uVar8 + param_3 >> 0x20) ^ (uint)(uVar8 >> 0x20)) >> 0x1f) {
LAB_00748c06:
    auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
    auVar18 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + param_3));
    auVar19 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-3] + param_3));
    auVar20 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-4] + param_3));
    pauVar13 = (undefined1 (*) [32])(((ulong)param_1 | 0x1f) + 1);
    pauVar11 = (undefined1 (*) [32])(((long)param_2 - (long)param_1) + (long)pauVar13);
    pauVar9 = (undefined1 (*) [32])(param_1[-4] + param_3);
    do {
      auVar21 = vmovdqu64_avx512vl(*pauVar11);
      auVar22 = vmovdqu64_avx512vl(pauVar11[1]);
      auVar23 = vmovdqu64_avx512vl(pauVar11[2]);
      auVar24 = vmovdqu64_avx512vl(pauVar11[3]);
      pauVar11 = pauVar11 + 4;
      auVar21 = vmovdqa64_avx512vl(auVar21);
      *pauVar13 = auVar21;
      auVar21 = vmovdqa64_avx512vl(auVar22);
      pauVar13[1] = auVar21;
      auVar21 = vmovdqa64_avx512vl(auVar23);
      pauVar13[2] = auVar21;
      auVar21 = vmovdqa64_avx512vl(auVar24);
      pauVar13[3] = auVar21;
      pauVar13 = pauVar13 + 4;
    } while (pauVar13 < pauVar9);
    auVar17 = vmovdqu64_avx512vl(auVar17);
    pauVar9[3] = auVar17;
    auVar17 = vmovdqu64_avx512vl(auVar18);
    pauVar9[2] = auVar17;
    auVar17 = vmovdqu64_avx512vl(auVar19);
    pauVar9[1] = auVar17;
    auVar17 = vmovdqu64_avx512vl(auVar20);
    *pauVar9 = auVar17;
    auVar16 = vmovdqu64_avx512vl(auVar16);
    *param_1 = auVar16;
    return puVar6;
  }
LAB_00748caa:
  auVar17 = vmovdqu64_avx512vl(param_2[1]);
  auVar18 = vmovdqu64_avx512vl(param_2[2]);
  auVar19 = vmovdqu64_avx512vl(param_2[3]);
  auVar20 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
  pauVar9 = (undefined1 (*) [32])((ulong)(param_1[-5] + param_3 + 0x1f) & 0xffffffffffffffe0);
  pauVar11 = (undefined1 (*) [32])(((long)param_2 - (long)param_1) + (long)pauVar9);
  do {
    auVar21 = vmovdqu64_avx512vl(pauVar11[3]);
    auVar22 = vmovdqu64_avx512vl(pauVar11[2]);
    auVar23 = vmovdqu64_avx512vl(pauVar11[1]);
    auVar24 = vmovdqu64_avx512vl(*pauVar11);
    pauVar11 = pauVar11 + -4;
    auVar21 = vmovdqa64_avx512vl(auVar21);
    pauVar9[3] = auVar21;
    auVar21 = vmovdqa64_avx512vl(auVar22);
    pauVar9[2] = auVar21;
    auVar21 = vmovdqa64_avx512vl(auVar23);
    pauVar9[1] = auVar21;
    auVar21 = vmovdqa64_avx512vl(auVar24);
    *pauVar9 = auVar21;
    pauVar9 = pauVar9 + -4;
  } while (param_1 < pauVar9);
  auVar16 = vmovdqu64_avx512vl(auVar16);
  *param_1 = auVar16;
  auVar16 = vmovdqu64_avx512vl(auVar17);
  param_1[1] = auVar16;
  auVar16 = vmovdqu64_avx512vl(auVar18);
  param_1[2] = auVar16;
  auVar16 = vmovdqu64_avx512vl(auVar19);
  param_1[3] = auVar16;
  auVar16 = vmovdqu64_avx512vl(auVar20);
  *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar16;
  return puVar6;
}

