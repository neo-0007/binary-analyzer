
undefined1 *
__mempcpy_evex_unaligned(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulong param_3)

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
  undefined1 (*pauVar12) [32];
  long lVar13;
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
  undefined1 auVar29 [32];
  
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
    if (uVar10 < 8) {
      if (param_3 < 4) {
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
      uVar2 = *(undefined4 *)(param_2[-1] + param_3 + 0x1c);
      *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
      *(undefined4 *)(param_1[-1] + param_3 + 0x1c) = uVar2;
      return puVar6;
    }
    uVar3 = *(undefined8 *)(param_2[-1] + param_3 + 0x18);
    *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
    *(undefined8 *)(param_1[-1] + param_3 + 0x18) = uVar3;
    return puVar6;
  }
  auVar14 = vmovdqu64_avx512vl(*param_2);
  if (param_3 < 0x41) {
    auVar15 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
    auVar14 = vmovdqu64_avx512vl(auVar14);
    *param_1 = auVar14;
    auVar14 = vmovdqu64_avx512vl(auVar15);
    *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar14;
    return puVar6;
  }
  if (param_3 < 0x101) {
    auVar15 = vmovdqu64_avx512vl(param_2[1]);
    if (0x80 < param_3) {
      auVar16 = vmovdqu64_avx512vl(param_2[2]);
      auVar17 = vmovdqu64_avx512vl(param_2[3]);
      auVar18 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
      auVar19 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + param_3));
      auVar20 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-3] + param_3));
      auVar21 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-4] + param_3));
      auVar14 = vmovdqu64_avx512vl(auVar14);
      *param_1 = auVar14;
      auVar14 = vmovdqu64_avx512vl(auVar15);
      param_1[1] = auVar14;
      auVar14 = vmovdqu64_avx512vl(auVar16);
      param_1[2] = auVar14;
      auVar14 = vmovdqu64_avx512vl(auVar17);
      param_1[3] = auVar14;
      auVar14 = vmovdqu64_avx512vl(auVar18);
      *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar14;
      auVar14 = vmovdqu64_avx512vl(auVar19);
      *(undefined1 (*) [32])(param_1[-2] + param_3) = auVar14;
      auVar14 = vmovdqu64_avx512vl(auVar20);
      *(undefined1 (*) [32])(param_1[-3] + param_3) = auVar14;
      auVar14 = vmovdqu64_avx512vl(auVar21);
      *(undefined1 (*) [32])(param_1[-4] + param_3) = auVar14;
      return puVar6;
    }
    auVar16 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
    auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + param_3));
    auVar14 = vmovdqu64_avx512vl(auVar14);
    *param_1 = auVar14;
    auVar14 = vmovdqu64_avx512vl(auVar15);
    param_1[1] = auVar14;
    auVar14 = vmovdqu64_avx512vl(auVar16);
    *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar14;
    auVar14 = vmovdqu64_avx512vl(auVar17);
    *(undefined1 (*) [32])(param_1[-2] + param_3) = auVar14;
    return puVar6;
  }
  uVar8 = (long)param_1 - (long)param_2;
  if (uVar8 < param_3) {
    if (uVar8 != 0) {
LAB_00748caa:
      auVar15 = vmovdqu64_avx512vl(param_2[1]);
      auVar16 = vmovdqu64_avx512vl(param_2[2]);
      auVar17 = vmovdqu64_avx512vl(param_2[3]);
      auVar18 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
      pauVar9 = (undefined1 (*) [32])((ulong)(param_1[-5] + param_3 + 0x1f) & 0xffffffffffffffe0);
      pauVar11 = (undefined1 (*) [32])(((long)param_2 - (long)param_1) + (long)pauVar9);
      do {
        auVar19 = vmovdqu64_avx512vl(pauVar11[3]);
        auVar20 = vmovdqu64_avx512vl(pauVar11[2]);
        auVar21 = vmovdqu64_avx512vl(pauVar11[1]);
        auVar22 = vmovdqu64_avx512vl(*pauVar11);
        pauVar11 = pauVar11 + -4;
        auVar19 = vmovdqa64_avx512vl(auVar19);
        pauVar9[3] = auVar19;
        auVar19 = vmovdqa64_avx512vl(auVar20);
        pauVar9[2] = auVar19;
        auVar19 = vmovdqa64_avx512vl(auVar21);
        pauVar9[1] = auVar19;
        auVar19 = vmovdqa64_avx512vl(auVar22);
        *pauVar9 = auVar19;
        pauVar9 = pauVar9 + -4;
      } while (param_1 < pauVar9);
      auVar14 = vmovdqu64_avx512vl(auVar14);
      *param_1 = auVar14;
      auVar14 = vmovdqu64_avx512vl(auVar15);
      param_1[1] = auVar14;
      auVar14 = vmovdqu64_avx512vl(auVar16);
      param_1[2] = auVar14;
      auVar14 = vmovdqu64_avx512vl(auVar17);
      param_1[3] = auVar14;
      auVar14 = vmovdqu64_avx512vl(auVar18);
      *(undefined1 (*) [32])(param_1[-1] + param_3) = auVar14;
      return puVar6;
    }
  }
  else {
    if (__x86_shared_non_temporal_threshold < param_3) {
      if (param_3 <= -uVar8) {
        auVar15 = vmovdqu64_avx512vl(param_2[1]);
        auVar14 = vmovdqu64_avx512vl(auVar14);
        *param_1 = auVar14;
        auVar14 = vmovdqu64_avx512vl(auVar15);
        param_1[1] = auVar14;
        lVar13 = ((ulong)param_1 & 0x3f) - 0x40;
        param_2 = (undefined1 (*) [32])((long)param_2 - lVar13);
        param_1 = (undefined1 (*) [32])((long)param_1 - lVar13);
        param_3 = param_3 + lVar13;
        if (((~(uint)-uVar8 & 0xf00) != 0) && (param_3 >> 4 < __x86_shared_non_temporal_threshold))
        {
          uVar10 = (uint)param_3 & 0x1fff;
          param_3 = param_3 >> 0xd;
          do {
            iVar7 = 0x20;
            do {
              pauVar11 = param_1;
              pauVar9 = param_2;
              auVar14 = vmovdqu64_avx512vl(*pauVar9);
              auVar15 = vmovdqu64_avx512vl(pauVar9[1]);
              auVar16 = vmovdqu64_avx512vl(pauVar9[2]);
              auVar17 = vmovdqu64_avx512vl(pauVar9[3]);
              auVar18 = vmovdqu64_avx512vl(pauVar9[0x80]);
              auVar19 = vmovdqu64_avx512vl(pauVar9[0x81]);
              auVar20 = vmovdqu64_avx512vl(pauVar9[0x82]);
              auVar21 = vmovdqu64_avx512vl(pauVar9[0x83]);
              auVar14 = vmovntdq_avx512vl(auVar14);
              *pauVar11 = auVar14;
              auVar14 = vmovntdq_avx512vl(auVar15);
              pauVar11[1] = auVar14;
              auVar14 = vmovntdq_avx512vl(auVar16);
              pauVar11[2] = auVar14;
              auVar14 = vmovntdq_avx512vl(auVar17);
              pauVar11[3] = auVar14;
              auVar14 = vmovntdq_avx512vl(auVar18);
              pauVar11[0x80] = auVar14;
              auVar14 = vmovntdq_avx512vl(auVar19);
              pauVar11[0x81] = auVar14;
              auVar14 = vmovntdq_avx512vl(auVar20);
              pauVar11[0x82] = auVar14;
              auVar14 = vmovntdq_avx512vl(auVar21);
              pauVar11[0x83] = auVar14;
              iVar7 = iVar7 + -1;
              param_2 = pauVar9 + 4;
              param_1 = pauVar11 + 4;
            } while (iVar7 != 0);
            param_1 = pauVar11 + 0x84;
            param_2 = pauVar9 + 0x84;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
          while (0x80 < uVar10) {
            auVar14 = vmovdqu64_avx512vl(*param_2);
            auVar15 = vmovdqu64_avx512vl(param_2[1]);
            auVar16 = vmovdqu64_avx512vl(param_2[2]);
            auVar17 = vmovdqu64_avx512vl(param_2[3]);
            param_2 = param_2 + 4;
            uVar10 = uVar10 - 0x80;
            auVar14 = vmovdqa64_avx512vl(auVar14);
            *param_1 = auVar14;
            auVar14 = vmovdqa64_avx512vl(auVar15);
            param_1[1] = auVar14;
            auVar14 = vmovdqa64_avx512vl(auVar16);
            param_1[2] = auVar14;
            auVar14 = vmovdqa64_avx512vl(auVar17);
            param_1[3] = auVar14;
            param_1 = param_1 + 4;
          }
          auVar14 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-4] + uVar10));
          auVar15 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-3] + uVar10));
          auVar16 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + uVar10));
          auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + uVar10));
          auVar14 = vmovdqu64_avx512vl(auVar14);
          *(undefined1 (*) [32])(param_1[-4] + uVar10) = auVar14;
          auVar14 = vmovdqu64_avx512vl(auVar15);
          *(undefined1 (*) [32])(param_1[-3] + uVar10) = auVar14;
          auVar14 = vmovdqu64_avx512vl(auVar16);
          *(undefined1 (*) [32])(param_1[-2] + uVar10) = auVar14;
          auVar14 = vmovdqu64_avx512vl(auVar17);
          *(undefined1 (*) [32])(param_1[-1] + uVar10) = auVar14;
          return puVar6;
        }
        uVar10 = (uint)param_3 & 0x3fff;
        param_3 = param_3 >> 0xe;
        do {
          iVar7 = 0x20;
          do {
            pauVar11 = param_1;
            pauVar9 = param_2;
            auVar14 = vmovdqu64_avx512vl(*pauVar9);
            auVar15 = vmovdqu64_avx512vl(pauVar9[1]);
            auVar16 = vmovdqu64_avx512vl(pauVar9[2]);
            auVar17 = vmovdqu64_avx512vl(pauVar9[3]);
            auVar18 = vmovdqu64_avx512vl(pauVar9[0x80]);
            auVar19 = vmovdqu64_avx512vl(pauVar9[0x81]);
            auVar20 = vmovdqu64_avx512vl(pauVar9[0x82]);
            auVar21 = vmovdqu64_avx512vl(pauVar9[0x83]);
            auVar22 = vmovdqu64_avx512vl(pauVar9[0x100]);
            auVar23 = vmovdqu64_avx512vl(pauVar9[0x101]);
            auVar24 = vmovdqu64_avx512vl(pauVar9[0x102]);
            auVar25 = vmovdqu64_avx512vl(pauVar9[0x103]);
            auVar26 = vmovdqu64_avx512vl(pauVar9[0x180]);
            auVar27 = vmovdqu64_avx512vl(pauVar9[0x181]);
            auVar28 = vmovdqu64_avx512vl(pauVar9[0x182]);
            auVar29 = vmovdqu64_avx512vl(pauVar9[0x183]);
            auVar14 = vmovntdq_avx512vl(auVar14);
            *pauVar11 = auVar14;
            auVar14 = vmovntdq_avx512vl(auVar15);
            pauVar11[1] = auVar14;
            auVar14 = vmovntdq_avx512vl(auVar16);
            pauVar11[2] = auVar14;
            auVar14 = vmovntdq_avx512vl(auVar17);
            pauVar11[3] = auVar14;
            auVar14 = vmovntdq_avx512vl(auVar18);
            pauVar11[0x80] = auVar14;
            auVar14 = vmovntdq_avx512vl(auVar19);
            pauVar11[0x81] = auVar14;
            auVar14 = vmovntdq_avx512vl(auVar20);
            pauVar11[0x82] = auVar14;
            auVar14 = vmovntdq_avx512vl(auVar21);
            pauVar11[0x83] = auVar14;
            auVar14 = vmovntdq_avx512vl(auVar22);
            pauVar11[0x100] = auVar14;
            auVar14 = vmovntdq_avx512vl(auVar23);
            pauVar11[0x101] = auVar14;
            auVar14 = vmovntdq_avx512vl(auVar24);
            pauVar11[0x102] = auVar14;
            auVar14 = vmovntdq_avx512vl(auVar25);
            pauVar11[0x103] = auVar14;
            auVar14 = vmovntdq_avx512vl(auVar26);
            pauVar11[0x180] = auVar14;
            auVar14 = vmovntdq_avx512vl(auVar27);
            pauVar11[0x181] = auVar14;
            auVar14 = vmovntdq_avx512vl(auVar28);
            pauVar11[0x182] = auVar14;
            auVar14 = vmovntdq_avx512vl(auVar29);
            pauVar11[0x183] = auVar14;
            iVar7 = iVar7 + -1;
            param_2 = pauVar9 + 4;
            param_1 = pauVar11 + 4;
          } while (iVar7 != 0);
          param_1 = pauVar11 + 0x184;
          param_2 = pauVar9 + 0x184;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        while (0x80 < uVar10) {
          auVar14 = vmovdqu64_avx512vl(*param_2);
          auVar15 = vmovdqu64_avx512vl(param_2[1]);
          auVar16 = vmovdqu64_avx512vl(param_2[2]);
          auVar17 = vmovdqu64_avx512vl(param_2[3]);
          param_2 = param_2 + 4;
          uVar10 = uVar10 - 0x80;
          auVar14 = vmovdqa64_avx512vl(auVar14);
          *param_1 = auVar14;
          auVar14 = vmovdqa64_avx512vl(auVar15);
          param_1[1] = auVar14;
          auVar14 = vmovdqa64_avx512vl(auVar16);
          param_1[2] = auVar14;
          auVar14 = vmovdqa64_avx512vl(auVar17);
          param_1[3] = auVar14;
          param_1 = param_1 + 4;
        }
        auVar14 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-4] + uVar10));
        auVar15 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-3] + uVar10));
        auVar16 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + uVar10));
        auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + uVar10));
        auVar14 = vmovdqu64_avx512vl(auVar14);
        *(undefined1 (*) [32])(param_1[-4] + uVar10) = auVar14;
        auVar14 = vmovdqu64_avx512vl(auVar15);
        *(undefined1 (*) [32])(param_1[-3] + uVar10) = auVar14;
        auVar14 = vmovdqu64_avx512vl(auVar16);
        *(undefined1 (*) [32])(param_1[-2] + uVar10) = auVar14;
        auVar14 = vmovdqu64_avx512vl(auVar17);
        *(undefined1 (*) [32])(param_1[-1] + uVar10) = auVar14;
        return puVar6;
      }
    }
    else if (((uint)uVar8 & 0xf00) ==
             (int)((uint)(uVar8 + param_3 >> 0x20) ^ (uint)(uVar8 >> 0x20)) >> 0x1f)
    goto LAB_00748caa;
    auVar15 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-1] + param_3));
    auVar16 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-2] + param_3));
    auVar17 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-3] + param_3));
    auVar18 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2[-4] + param_3));
    pauVar12 = (undefined1 (*) [32])(((ulong)param_1 | 0x1f) + 1);
    pauVar11 = (undefined1 (*) [32])(((long)param_2 - (long)param_1) + (long)pauVar12);
    pauVar9 = (undefined1 (*) [32])(param_1[-4] + param_3);
    do {
      auVar19 = vmovdqu64_avx512vl(*pauVar11);
      auVar20 = vmovdqu64_avx512vl(pauVar11[1]);
      auVar21 = vmovdqu64_avx512vl(pauVar11[2]);
      auVar22 = vmovdqu64_avx512vl(pauVar11[3]);
      pauVar11 = pauVar11 + 4;
      auVar19 = vmovdqa64_avx512vl(auVar19);
      *pauVar12 = auVar19;
      auVar19 = vmovdqa64_avx512vl(auVar20);
      pauVar12[1] = auVar19;
      auVar19 = vmovdqa64_avx512vl(auVar21);
      pauVar12[2] = auVar19;
      auVar19 = vmovdqa64_avx512vl(auVar22);
      pauVar12[3] = auVar19;
      pauVar12 = pauVar12 + 4;
    } while (pauVar12 < pauVar9);
    auVar15 = vmovdqu64_avx512vl(auVar15);
    pauVar9[3] = auVar15;
    auVar15 = vmovdqu64_avx512vl(auVar16);
    pauVar9[2] = auVar15;
    auVar15 = vmovdqu64_avx512vl(auVar17);
    pauVar9[1] = auVar15;
    auVar15 = vmovdqu64_avx512vl(auVar18);
    *pauVar9 = auVar15;
    auVar14 = vmovdqu64_avx512vl(auVar14);
    *param_1 = auVar14;
  }
  return puVar6;
}

