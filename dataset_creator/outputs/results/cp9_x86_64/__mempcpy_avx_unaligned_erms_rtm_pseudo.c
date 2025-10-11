
undefined1 * __mempcpy_avx_unaligned_erms_rtm(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined1 *puVar55;
  int iVar56;
  ulong uVar57;
  undefined8 *puVar58;
  undefined1 *puVar59;
  uint uVar60;
  undefined8 *puVar61;
  undefined1 *puVar62;
  undefined1 (*pauVar63) [32];
  undefined1 (*pauVar64) [32];
  undefined8 *puVar65;
  undefined1 *puVar66;
  undefined1 (*pauVar67) [32];
  undefined1 (*pauVar68) [32];
  long lVar69;
  bool bVar70;
  
  puVar55 = (undefined1 *)((long)param_1 + param_3);
  if (param_3 < 0x20) {
    uVar60 = (uint)param_3;
    if (0xf < uVar60) {
      uVar19 = param_2[1];
      puVar58 = (undefined8 *)((long)param_2 + (param_3 - 0x10));
      uVar20 = *puVar58;
      uVar21 = puVar58[1];
      *param_1 = *param_2;
      param_1[1] = uVar19;
      param_1 = (undefined8 *)((long)param_1 + (param_3 - 0x10));
      *param_1 = uVar20;
      param_1[1] = uVar21;
      return puVar55;
    }
    if (uVar60 < 8) {
      if (uVar60 < 4) {
        if (0 < (int)uVar60) {
          uVar17 = *(undefined1 *)param_2;
          if (uVar60 != 1) {
            *(undefined2 *)((long)param_1 + (param_3 - 2)) =
                 *(undefined2 *)((long)param_2 + (param_3 - 2));
          }
          *(undefined1 *)param_1 = uVar17;
        }
        return puVar55;
      }
      uVar18 = *(undefined4 *)param_2;
      *(undefined4 *)((long)param_1 + (param_3 - 4)) =
           *(undefined4 *)((long)param_2 + (param_3 - 4));
      *(undefined4 *)param_1 = uVar18;
      return puVar55;
    }
    uVar19 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    *param_1 = *param_2;
    *(undefined8 *)((long)param_1 + (param_3 - 8)) = uVar19;
    return puVar55;
  }
  uVar19 = *param_2;
  uVar20 = param_2[1];
  uVar21 = param_2[2];
  uVar22 = param_2[3];
  if (param_3 < 0x41) {
    param_2 = (undefined8 *)((long)param_2 + (param_3 - 0x20));
    uVar23 = *param_2;
    uVar24 = param_2[1];
    uVar25 = param_2[2];
    uVar26 = param_2[3];
    *param_1 = uVar19;
    param_1[1] = uVar20;
    param_1[2] = uVar21;
    param_1[3] = uVar22;
    param_1 = (undefined8 *)((long)param_1 + (param_3 - 0x20));
    *param_1 = uVar23;
    param_1[1] = uVar24;
    param_1[2] = uVar25;
    param_1[3] = uVar26;
    goto LAB_00744deb;
  }
  if (__x86_rep_movsb_threshold < param_3) {
    uVar57 = (long)param_1 - (long)param_2;
    if (uVar57 < param_3) goto LAB_00744fc0;
    if (param_3 < __x86_rep_movsb_stop_threshold) {
      if ((__x86_string_control & 1) == 0) {
        uVar23 = param_2[4];
        uVar24 = param_2[5];
        uVar25 = param_2[6];
        uVar26 = param_2[7];
        if ((uVar57 & 0xe00) == 0) {
          puVar59 = (undefined1 *)((ulong)param_2 | 0x3f);
          puVar62 = puVar59 + uVar57 + 1;
          for (puVar66 = (undefined1 *)((long)param_2 + ((param_3 - 1) - (long)puVar59));
              puVar59 = puVar59 + 1, puVar66 != (undefined1 *)0x0; puVar66 = puVar66 + -1) {
            *puVar62 = *puVar59;
            puVar62 = puVar62 + 1;
          }
          *param_1 = uVar19;
          param_1[1] = uVar20;
          param_1[2] = uVar21;
          param_1[3] = uVar22;
          param_1[4] = uVar23;
          param_1[5] = uVar24;
          param_1[6] = uVar25;
          param_1[7] = uVar26;
          goto LAB_00744deb;
        }
      }
      else {
        if (0xffffffc0 < (uint)uVar57) goto LAB_00744f3c;
        uVar23 = param_2[4];
        uVar24 = param_2[5];
        uVar25 = param_2[6];
        uVar26 = param_2[7];
      }
      puVar66 = (undefined1 *)((ulong)((long)param_1 + 0x3f) & 0xffffffffffffffc0);
      puVar59 = (undefined1 *)((long)param_1 + (param_3 - (long)puVar66));
      puVar62 = puVar66 + ((long)param_2 - (long)param_1);
      for (; puVar59 != (undefined1 *)0x0; puVar59 = puVar59 + -1) {
        *puVar66 = *puVar62;
        puVar62 = puVar62 + 1;
        puVar66 = puVar66 + 1;
      }
      *param_1 = uVar19;
      param_1[1] = uVar20;
      param_1[2] = uVar21;
      param_1[3] = uVar22;
      param_1[4] = uVar23;
      param_1[5] = uVar24;
      param_1[6] = uVar25;
      param_1[7] = uVar26;
      goto LAB_00744deb;
    }
    if (__x86_rep_movsb_threshold <= param_3) goto LAB_007450ed;
LAB_00744f22:
    if (((uint)uVar57 & 0xf00) !=
        (int)((uint)(uVar57 + param_3 >> 0x20) ^ (uint)(uVar57 >> 0x20)) >> 0x1f) {
LAB_00744f3c:
      puVar58 = (undefined8 *)((long)param_2 + (param_3 - 0x20));
      uVar23 = *puVar58;
      uVar24 = puVar58[1];
      uVar25 = puVar58[2];
      uVar26 = puVar58[3];
      puVar58 = (undefined8 *)((long)param_2 + (param_3 - 0x40));
      uVar27 = *puVar58;
      uVar28 = puVar58[1];
      uVar29 = puVar58[2];
      uVar30 = puVar58[3];
      puVar58 = (undefined8 *)((long)param_2 + (param_3 - 0x60));
      uVar31 = *puVar58;
      uVar32 = puVar58[1];
      uVar33 = puVar58[2];
      uVar34 = puVar58[3];
      puVar58 = (undefined8 *)((long)param_2 + (param_3 - 0x80));
      uVar35 = *puVar58;
      uVar36 = puVar58[1];
      uVar37 = puVar58[2];
      uVar38 = puVar58[3];
      puVar65 = (undefined8 *)(((ulong)param_1 | 0x1f) + 1);
      puVar61 = (undefined8 *)(((long)param_2 - (long)param_1) + (long)puVar65);
      puVar58 = (undefined8 *)((long)param_1 + (param_3 - 0x80));
      do {
        uVar39 = *puVar61;
        uVar40 = puVar61[1];
        uVar41 = puVar61[2];
        uVar42 = puVar61[3];
        uVar43 = puVar61[4];
        uVar44 = puVar61[5];
        uVar45 = puVar61[6];
        uVar46 = puVar61[7];
        uVar47 = puVar61[8];
        uVar48 = puVar61[9];
        uVar49 = puVar61[10];
        uVar50 = puVar61[0xb];
        uVar51 = puVar61[0xc];
        uVar52 = puVar61[0xd];
        uVar53 = puVar61[0xe];
        uVar54 = puVar61[0xf];
        puVar61 = puVar61 + 0x10;
        *puVar65 = uVar39;
        puVar65[1] = uVar40;
        puVar65[2] = uVar41;
        puVar65[3] = uVar42;
        puVar65[4] = uVar43;
        puVar65[5] = uVar44;
        puVar65[6] = uVar45;
        puVar65[7] = uVar46;
        puVar65[8] = uVar47;
        puVar65[9] = uVar48;
        puVar65[10] = uVar49;
        puVar65[0xb] = uVar50;
        puVar65[0xc] = uVar51;
        puVar65[0xd] = uVar52;
        puVar65[0xe] = uVar53;
        puVar65[0xf] = uVar54;
        puVar65 = puVar65 + 0x10;
      } while (puVar65 < puVar58);
      puVar58[0xc] = uVar23;
      puVar58[0xd] = uVar24;
      puVar58[0xe] = uVar25;
      puVar58[0xf] = uVar26;
      puVar58[8] = uVar27;
      puVar58[9] = uVar28;
      puVar58[10] = uVar29;
      puVar58[0xb] = uVar30;
      puVar58[4] = uVar31;
      puVar58[5] = uVar32;
      puVar58[6] = uVar33;
      puVar58[7] = uVar34;
      *puVar58 = uVar35;
      puVar58[1] = uVar36;
      puVar58[2] = uVar37;
      puVar58[3] = uVar38;
      *param_1 = uVar19;
      param_1[1] = uVar20;
      param_1[2] = uVar21;
      param_1[3] = uVar22;
      goto LAB_00744deb;
    }
  }
  else {
    if (param_3 < 0x101) {
      uVar23 = param_2[4];
      uVar24 = param_2[5];
      uVar25 = param_2[6];
      uVar26 = param_2[7];
      if (param_3 < 0x81) {
        puVar58 = (undefined8 *)((long)param_2 + (param_3 - 0x20));
        uVar27 = *puVar58;
        uVar28 = puVar58[1];
        uVar29 = puVar58[2];
        uVar30 = puVar58[3];
        param_2 = (undefined8 *)((long)param_2 + (param_3 - 0x40));
        uVar31 = *param_2;
        uVar32 = param_2[1];
        uVar33 = param_2[2];
        uVar34 = param_2[3];
        *param_1 = uVar19;
        param_1[1] = uVar20;
        param_1[2] = uVar21;
        param_1[3] = uVar22;
        param_1[4] = uVar23;
        param_1[5] = uVar24;
        param_1[6] = uVar25;
        param_1[7] = uVar26;
        puVar58 = (undefined8 *)((long)param_1 + (param_3 - 0x20));
        *puVar58 = uVar27;
        puVar58[1] = uVar28;
        puVar58[2] = uVar29;
        puVar58[3] = uVar30;
        param_1 = (undefined8 *)((long)param_1 + (param_3 - 0x40));
        *param_1 = uVar31;
        param_1[1] = uVar32;
        param_1[2] = uVar33;
        param_1[3] = uVar34;
      }
      else {
        uVar27 = param_2[8];
        uVar28 = param_2[9];
        uVar29 = param_2[10];
        uVar30 = param_2[0xb];
        uVar31 = param_2[0xc];
        uVar32 = param_2[0xd];
        uVar33 = param_2[0xe];
        uVar34 = param_2[0xf];
        puVar58 = (undefined8 *)((long)param_2 + (param_3 - 0x20));
        uVar35 = *puVar58;
        uVar36 = puVar58[1];
        uVar37 = puVar58[2];
        uVar38 = puVar58[3];
        puVar58 = (undefined8 *)((long)param_2 + (param_3 - 0x40));
        uVar39 = *puVar58;
        uVar40 = puVar58[1];
        uVar41 = puVar58[2];
        uVar42 = puVar58[3];
        puVar58 = (undefined8 *)((long)param_2 + (param_3 - 0x60));
        uVar43 = *puVar58;
        uVar44 = puVar58[1];
        uVar45 = puVar58[2];
        uVar46 = puVar58[3];
        param_2 = (undefined8 *)((long)param_2 + (param_3 - 0x80));
        uVar47 = *param_2;
        uVar48 = param_2[1];
        uVar49 = param_2[2];
        uVar50 = param_2[3];
        *param_1 = uVar19;
        param_1[1] = uVar20;
        param_1[2] = uVar21;
        param_1[3] = uVar22;
        param_1[4] = uVar23;
        param_1[5] = uVar24;
        param_1[6] = uVar25;
        param_1[7] = uVar26;
        param_1[8] = uVar27;
        param_1[9] = uVar28;
        param_1[10] = uVar29;
        param_1[0xb] = uVar30;
        param_1[0xc] = uVar31;
        param_1[0xd] = uVar32;
        param_1[0xe] = uVar33;
        param_1[0xf] = uVar34;
        puVar58 = (undefined8 *)((long)param_1 + (param_3 - 0x20));
        *puVar58 = uVar35;
        puVar58[1] = uVar36;
        puVar58[2] = uVar37;
        puVar58[3] = uVar38;
        puVar58 = (undefined8 *)((long)param_1 + (param_3 - 0x40));
        *puVar58 = uVar39;
        puVar58[1] = uVar40;
        puVar58[2] = uVar41;
        puVar58[3] = uVar42;
        puVar58 = (undefined8 *)((long)param_1 + (param_3 - 0x60));
        *puVar58 = uVar43;
        puVar58[1] = uVar44;
        puVar58[2] = uVar45;
        puVar58[3] = uVar46;
        param_1 = (undefined8 *)((long)param_1 + (param_3 - 0x80));
        *param_1 = uVar47;
        param_1[1] = uVar48;
        param_1[2] = uVar49;
        param_1[3] = uVar50;
      }
      goto LAB_00744deb;
    }
    uVar57 = (long)param_1 - (long)param_2;
    if (param_3 <= uVar57) {
      if (param_3 <= __x86_shared_non_temporal_threshold) goto LAB_00744f22;
LAB_007450ed:
      if (param_3 <= -uVar57) {
        uVar23 = param_2[4];
        uVar24 = param_2[5];
        uVar25 = param_2[6];
        uVar26 = param_2[7];
        *param_1 = uVar19;
        param_1[1] = uVar20;
        param_1[2] = uVar21;
        param_1[3] = uVar22;
        param_1[4] = uVar23;
        param_1[5] = uVar24;
        param_1[6] = uVar25;
        param_1[7] = uVar26;
        lVar69 = ((ulong)param_1 & 0x3f) - 0x40;
        pauVar63 = (undefined1 (*) [32])((long)param_2 - lVar69);
        pauVar67 = (undefined1 (*) [32])((long)param_1 - lVar69);
        param_3 = param_3 + lVar69;
        if (((~(uint)-uVar57 & 0xf00) == 0) || (__x86_shared_non_temporal_threshold <= param_3 >> 4)
           ) {
          uVar60 = (uint)param_3 & 0x3fff;
          param_3 = param_3 >> 0xe;
          do {
            iVar56 = 0x20;
            do {
              pauVar68 = pauVar67;
              pauVar64 = pauVar63;
              auVar1 = pauVar64[1];
              auVar2 = pauVar64[2];
              auVar3 = pauVar64[3];
              auVar4 = pauVar64[0x80];
              auVar5 = pauVar64[0x81];
              auVar6 = pauVar64[0x82];
              auVar7 = pauVar64[0x83];
              auVar8 = pauVar64[0x100];
              auVar9 = pauVar64[0x101];
              auVar10 = pauVar64[0x102];
              auVar11 = pauVar64[0x103];
              auVar12 = pauVar64[0x180];
              auVar13 = pauVar64[0x181];
              auVar14 = pauVar64[0x182];
              auVar15 = pauVar64[0x183];
              auVar16 = vmovntdq_avx(*pauVar64);
              *pauVar68 = auVar16;
              auVar1 = vmovntdq_avx(auVar1);
              pauVar68[1] = auVar1;
              auVar1 = vmovntdq_avx(auVar2);
              pauVar68[2] = auVar1;
              auVar1 = vmovntdq_avx(auVar3);
              pauVar68[3] = auVar1;
              auVar1 = vmovntdq_avx(auVar4);
              pauVar68[0x80] = auVar1;
              auVar1 = vmovntdq_avx(auVar5);
              pauVar68[0x81] = auVar1;
              auVar1 = vmovntdq_avx(auVar6);
              pauVar68[0x82] = auVar1;
              auVar1 = vmovntdq_avx(auVar7);
              pauVar68[0x83] = auVar1;
              auVar1 = vmovntdq_avx(auVar8);
              pauVar68[0x100] = auVar1;
              auVar1 = vmovntdq_avx(auVar9);
              pauVar68[0x101] = auVar1;
              auVar1 = vmovntdq_avx(auVar10);
              pauVar68[0x102] = auVar1;
              auVar1 = vmovntdq_avx(auVar11);
              pauVar68[0x103] = auVar1;
              auVar1 = vmovntdq_avx(auVar12);
              pauVar68[0x180] = auVar1;
              auVar1 = vmovntdq_avx(auVar13);
              pauVar68[0x181] = auVar1;
              auVar1 = vmovntdq_avx(auVar14);
              pauVar68[0x182] = auVar1;
              auVar1 = vmovntdq_avx(auVar15);
              pauVar68[0x183] = auVar1;
              iVar56 = iVar56 + -1;
              pauVar63 = pauVar64 + 4;
              pauVar67 = pauVar68 + 4;
            } while (iVar56 != 0);
            pauVar67 = pauVar68 + 0x184;
            pauVar63 = pauVar64 + 0x184;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
          for (; 0x80 < uVar60; uVar60 = uVar60 - 0x80) {
            puVar62 = *pauVar63;
            uVar19 = *(undefined8 *)(*pauVar63 + 8);
            uVar20 = *(undefined8 *)(*pauVar63 + 0x10);
            uVar21 = *(undefined8 *)(*pauVar63 + 0x18);
            uVar22 = *(undefined8 *)pauVar63[1];
            uVar23 = *(undefined8 *)(pauVar63[1] + 8);
            uVar24 = *(undefined8 *)(pauVar63[1] + 0x10);
            uVar25 = *(undefined8 *)(pauVar63[1] + 0x18);
            uVar26 = *(undefined8 *)pauVar63[2];
            uVar27 = *(undefined8 *)(pauVar63[2] + 8);
            uVar28 = *(undefined8 *)(pauVar63[2] + 0x10);
            uVar29 = *(undefined8 *)(pauVar63[2] + 0x18);
            uVar30 = *(undefined8 *)pauVar63[3];
            uVar31 = *(undefined8 *)(pauVar63[3] + 8);
            uVar32 = *(undefined8 *)(pauVar63[3] + 0x10);
            uVar33 = *(undefined8 *)(pauVar63[3] + 0x18);
            pauVar63 = pauVar63 + 4;
            *(undefined8 *)*pauVar67 = *(undefined8 *)puVar62;
            *(undefined8 *)(*pauVar67 + 8) = uVar19;
            *(undefined8 *)(*pauVar67 + 0x10) = uVar20;
            *(undefined8 *)(*pauVar67 + 0x18) = uVar21;
            *(undefined8 *)pauVar67[1] = uVar22;
            *(undefined8 *)(pauVar67[1] + 8) = uVar23;
            *(undefined8 *)(pauVar67[1] + 0x10) = uVar24;
            *(undefined8 *)(pauVar67[1] + 0x18) = uVar25;
            *(undefined8 *)pauVar67[2] = uVar26;
            *(undefined8 *)(pauVar67[2] + 8) = uVar27;
            *(undefined8 *)(pauVar67[2] + 0x10) = uVar28;
            *(undefined8 *)(pauVar67[2] + 0x18) = uVar29;
            *(undefined8 *)pauVar67[3] = uVar30;
            *(undefined8 *)(pauVar67[3] + 8) = uVar31;
            *(undefined8 *)(pauVar67[3] + 0x10) = uVar32;
            *(undefined8 *)(pauVar67[3] + 0x18) = uVar33;
            pauVar67 = pauVar67 + 4;
          }
          puVar58 = (undefined8 *)(pauVar63[-4] + uVar60);
          uVar19 = puVar58[1];
          uVar20 = puVar58[2];
          uVar21 = puVar58[3];
          puVar61 = (undefined8 *)(pauVar63[-3] + uVar60);
          uVar22 = *puVar61;
          uVar23 = puVar61[1];
          uVar24 = puVar61[2];
          uVar25 = puVar61[3];
          puVar61 = (undefined8 *)(pauVar63[-2] + uVar60);
          uVar26 = *puVar61;
          uVar27 = puVar61[1];
          uVar28 = puVar61[2];
          uVar29 = puVar61[3];
          puVar61 = (undefined8 *)(pauVar63[-1] + uVar60);
          uVar30 = *puVar61;
          uVar31 = puVar61[1];
          uVar32 = puVar61[2];
          uVar33 = puVar61[3];
          puVar61 = (undefined8 *)(pauVar67[-4] + uVar60);
          *puVar61 = *puVar58;
          puVar61[1] = uVar19;
          puVar61[2] = uVar20;
          puVar61[3] = uVar21;
          puVar58 = (undefined8 *)(pauVar67[-3] + uVar60);
          *puVar58 = uVar22;
          puVar58[1] = uVar23;
          puVar58[2] = uVar24;
          puVar58[3] = uVar25;
          puVar58 = (undefined8 *)(pauVar67[-2] + uVar60);
          *puVar58 = uVar26;
          puVar58[1] = uVar27;
          puVar58[2] = uVar28;
          puVar58[3] = uVar29;
          puVar58 = (undefined8 *)(pauVar67[-1] + uVar60);
          *puVar58 = uVar30;
          puVar58[1] = uVar31;
          puVar58[2] = uVar32;
          puVar58[3] = uVar33;
        }
        else {
          uVar60 = (uint)param_3 & 0x1fff;
          param_3 = param_3 >> 0xd;
          do {
            iVar56 = 0x20;
            do {
              pauVar68 = pauVar67;
              pauVar64 = pauVar63;
              auVar1 = pauVar64[1];
              auVar2 = pauVar64[2];
              auVar3 = pauVar64[3];
              auVar4 = pauVar64[0x80];
              auVar5 = pauVar64[0x81];
              auVar6 = pauVar64[0x82];
              auVar7 = pauVar64[0x83];
              auVar8 = vmovntdq_avx(*pauVar64);
              *pauVar68 = auVar8;
              auVar1 = vmovntdq_avx(auVar1);
              pauVar68[1] = auVar1;
              auVar1 = vmovntdq_avx(auVar2);
              pauVar68[2] = auVar1;
              auVar1 = vmovntdq_avx(auVar3);
              pauVar68[3] = auVar1;
              auVar1 = vmovntdq_avx(auVar4);
              pauVar68[0x80] = auVar1;
              auVar1 = vmovntdq_avx(auVar5);
              pauVar68[0x81] = auVar1;
              auVar1 = vmovntdq_avx(auVar6);
              pauVar68[0x82] = auVar1;
              auVar1 = vmovntdq_avx(auVar7);
              pauVar68[0x83] = auVar1;
              iVar56 = iVar56 + -1;
              pauVar63 = pauVar64 + 4;
              pauVar67 = pauVar68 + 4;
            } while (iVar56 != 0);
            pauVar67 = pauVar68 + 0x84;
            pauVar63 = pauVar64 + 0x84;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
          for (; 0x80 < uVar60; uVar60 = uVar60 - 0x80) {
            puVar62 = *pauVar63;
            uVar19 = *(undefined8 *)(*pauVar63 + 8);
            uVar20 = *(undefined8 *)(*pauVar63 + 0x10);
            uVar21 = *(undefined8 *)(*pauVar63 + 0x18);
            uVar22 = *(undefined8 *)pauVar63[1];
            uVar23 = *(undefined8 *)(pauVar63[1] + 8);
            uVar24 = *(undefined8 *)(pauVar63[1] + 0x10);
            uVar25 = *(undefined8 *)(pauVar63[1] + 0x18);
            uVar26 = *(undefined8 *)pauVar63[2];
            uVar27 = *(undefined8 *)(pauVar63[2] + 8);
            uVar28 = *(undefined8 *)(pauVar63[2] + 0x10);
            uVar29 = *(undefined8 *)(pauVar63[2] + 0x18);
            uVar30 = *(undefined8 *)pauVar63[3];
            uVar31 = *(undefined8 *)(pauVar63[3] + 8);
            uVar32 = *(undefined8 *)(pauVar63[3] + 0x10);
            uVar33 = *(undefined8 *)(pauVar63[3] + 0x18);
            pauVar63 = pauVar63 + 4;
            *(undefined8 *)*pauVar67 = *(undefined8 *)puVar62;
            *(undefined8 *)(*pauVar67 + 8) = uVar19;
            *(undefined8 *)(*pauVar67 + 0x10) = uVar20;
            *(undefined8 *)(*pauVar67 + 0x18) = uVar21;
            *(undefined8 *)pauVar67[1] = uVar22;
            *(undefined8 *)(pauVar67[1] + 8) = uVar23;
            *(undefined8 *)(pauVar67[1] + 0x10) = uVar24;
            *(undefined8 *)(pauVar67[1] + 0x18) = uVar25;
            *(undefined8 *)pauVar67[2] = uVar26;
            *(undefined8 *)(pauVar67[2] + 8) = uVar27;
            *(undefined8 *)(pauVar67[2] + 0x10) = uVar28;
            *(undefined8 *)(pauVar67[2] + 0x18) = uVar29;
            *(undefined8 *)pauVar67[3] = uVar30;
            *(undefined8 *)(pauVar67[3] + 8) = uVar31;
            *(undefined8 *)(pauVar67[3] + 0x10) = uVar32;
            *(undefined8 *)(pauVar67[3] + 0x18) = uVar33;
            pauVar67 = pauVar67 + 4;
          }
          puVar58 = (undefined8 *)(pauVar63[-4] + uVar60);
          uVar19 = puVar58[1];
          uVar20 = puVar58[2];
          uVar21 = puVar58[3];
          puVar61 = (undefined8 *)(pauVar63[-3] + uVar60);
          uVar22 = *puVar61;
          uVar23 = puVar61[1];
          uVar24 = puVar61[2];
          uVar25 = puVar61[3];
          puVar61 = (undefined8 *)(pauVar63[-2] + uVar60);
          uVar26 = *puVar61;
          uVar27 = puVar61[1];
          uVar28 = puVar61[2];
          uVar29 = puVar61[3];
          puVar61 = (undefined8 *)(pauVar63[-1] + uVar60);
          uVar30 = *puVar61;
          uVar31 = puVar61[1];
          uVar32 = puVar61[2];
          uVar33 = puVar61[3];
          puVar61 = (undefined8 *)(pauVar67[-4] + uVar60);
          *puVar61 = *puVar58;
          puVar61[1] = uVar19;
          puVar61[2] = uVar20;
          puVar61[3] = uVar21;
          puVar58 = (undefined8 *)(pauVar67[-3] + uVar60);
          *puVar58 = uVar22;
          puVar58[1] = uVar23;
          puVar58[2] = uVar24;
          puVar58[3] = uVar25;
          puVar58 = (undefined8 *)(pauVar67[-2] + uVar60);
          *puVar58 = uVar26;
          puVar58[1] = uVar27;
          puVar58[2] = uVar28;
          puVar58[3] = uVar29;
          puVar58 = (undefined8 *)(pauVar67[-1] + uVar60);
          *puVar58 = uVar30;
          puVar58[1] = uVar31;
          puVar58[2] = uVar32;
          puVar58[3] = uVar33;
        }
        goto LAB_00744deb;
      }
      goto LAB_00744f3c;
    }
LAB_00744fc0:
    if (uVar57 == 0) goto LAB_00744deb;
  }
  uVar23 = param_2[4];
  uVar24 = param_2[5];
  uVar25 = param_2[6];
  uVar26 = param_2[7];
  uVar27 = param_2[8];
  uVar28 = param_2[9];
  uVar29 = param_2[10];
  uVar30 = param_2[0xb];
  uVar31 = param_2[0xc];
  uVar32 = param_2[0xd];
  uVar33 = param_2[0xe];
  uVar34 = param_2[0xf];
  puVar58 = (undefined8 *)((long)param_2 + (param_3 - 0x20));
  uVar35 = *puVar58;
  uVar36 = puVar58[1];
  uVar37 = puVar58[2];
  uVar38 = puVar58[3];
  puVar58 = (undefined8 *)((ulong)((long)param_1 + (param_3 - 0x81)) & 0xffffffffffffffe0);
  puVar61 = (undefined8 *)(((long)param_2 - (long)param_1) + (long)puVar58);
  do {
    puVar65 = puVar61 + 0xc;
    uVar39 = puVar61[0xd];
    uVar40 = puVar61[0xe];
    uVar41 = puVar61[0xf];
    uVar42 = puVar61[8];
    uVar43 = puVar61[9];
    uVar44 = puVar61[10];
    uVar45 = puVar61[0xb];
    uVar46 = puVar61[4];
    uVar47 = puVar61[5];
    uVar48 = puVar61[6];
    uVar49 = puVar61[7];
    uVar50 = *puVar61;
    uVar51 = puVar61[1];
    uVar52 = puVar61[2];
    uVar53 = puVar61[3];
    puVar61 = puVar61 + -0x10;
    puVar58[0xc] = *puVar65;
    puVar58[0xd] = uVar39;
    puVar58[0xe] = uVar40;
    puVar58[0xf] = uVar41;
    puVar58[8] = uVar42;
    puVar58[9] = uVar43;
    puVar58[10] = uVar44;
    puVar58[0xb] = uVar45;
    puVar58[4] = uVar46;
    puVar58[5] = uVar47;
    puVar58[6] = uVar48;
    puVar58[7] = uVar49;
    *puVar58 = uVar50;
    puVar58[1] = uVar51;
    puVar58[2] = uVar52;
    puVar58[3] = uVar53;
    puVar58 = puVar58 + -0x10;
  } while (param_1 < puVar58);
  *param_1 = uVar19;
  param_1[1] = uVar20;
  param_1[2] = uVar21;
  param_1[3] = uVar22;
  param_1[4] = uVar23;
  param_1[5] = uVar24;
  param_1[6] = uVar25;
  param_1[7] = uVar26;
  param_1[8] = uVar27;
  param_1[9] = uVar28;
  param_1[10] = uVar29;
  param_1[0xb] = uVar30;
  param_1[0xc] = uVar31;
  param_1[0xd] = uVar32;
  param_1[0xe] = uVar33;
  param_1[0xf] = uVar34;
  param_1 = (undefined8 *)((param_3 - 0x20) + (long)param_1);
  *param_1 = uVar35;
  param_1[1] = uVar36;
  param_1[2] = uVar37;
  param_1[3] = uVar38;
LAB_00744deb:
  bVar70 = (bool)xtest();
  if (!bVar70) {
    return puVar55;
  }
  return puVar55;
}

