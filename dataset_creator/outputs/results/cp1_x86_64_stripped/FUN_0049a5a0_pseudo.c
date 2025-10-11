
/* WARNING: Type propagation algorithm not settling */

void FUN_0049a5a0(ulong *param_1,ulong *param_2,ulong param_3,undefined8 *param_4,ulong *param_5,
                 int param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined1 (*pauVar17) [16];
  int iVar18;
  uint uVar19;
  long lVar20;
  undefined4 extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint uVar21;
  undefined4 extraout_EDX_02;
  uint extraout_EDX_03;
  uint uVar22;
  undefined1 *puVar23;
  undefined8 *puVar24;
  uint *puVar25;
  ulong *puVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ulong *puVar30;
  byte bVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong extraout_XMM0_Qb;
  ulong extraout_XMM0_Qb_00;
  ulong extraout_XMM0_Qb_01;
  ulong extraout_XMM0_Qb_02;
  ulong extraout_XMM0_Qb_03;
  ulong extraout_XMM0_Qb_04;
  ulong extraout_XMM0_Qb_05;
  ulong extraout_XMM1_Qb;
  ulong extraout_XMM1_Qb_00;
  ulong extraout_XMM1_Qb_01;
  ulong extraout_XMM1_Qb_02;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM6_Qb;
  ulong uVar43;
  ulong in_XMM7_Qa;
  ulong in_XMM7_Qb;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  undefined1 auVar48 [16];
  long alStack_1c8 [3];
  undefined1 auStack_1b0 [8];
  long alStack_1a8 [5];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 auStack_170 [21];
  undefined8 uStack_c8;
  long alStack_c0 [2];
  undefined1 auStack_b0 [8];
  long alStack_a8 [5];
  undefined8 uStack_80;
  undefined8 local_78;
  ulong auStack_70 [4];
  ulong uStack_50;
  
  if ((param_6 == 0) && (0x7f < param_3)) {
    uVar22 = *(uint *)(param_4 + 0x1e);
    param_3 = param_3 >> 4;
    lVar29 = -((ulong)uVar22 * 0x80 + -0x60);
    pauVar17 = (undefined1 (*) [16])((long)&local_78 + lVar29);
    *(undefined8 *)((long)&uStack_80 + lVar29) = 0x49a604;
    puVar16 = (undefined8 *)FUN_0049a440(param_1,param_2,uVar22,param_4);
    uVar28 = *(ulong *)((long)&local_78 + lVar29);
    uVar27 = *(ulong *)((long)auStack_70 + lVar29);
    *puVar16 = in_XMM6_Qa;
    puVar16[1] = in_XMM6_Qb;
    *(ulong *)((long)&local_78 + lVar29) = in_XMM7_Qa ^ uVar28;
    *(ulong *)((long)auStack_70 + lVar29) = in_XMM7_Qb ^ uVar27;
    uVar28 = *param_5;
    uVar27 = param_5[1];
    do {
      puVar30 = param_2;
      puVar26 = param_1;
      param_3 = param_3 - 8;
      uVar44 = *puVar26;
      uVar46 = puVar26[1];
      uVar45 = puVar26[2];
      uVar47 = puVar26[4];
      uVar35 = puVar26[6];
      uVar36 = puVar26[7];
      uVar34 = puVar26[8];
      uVar37 = puVar26[9];
      uVar33 = puVar26[10];
      uVar38 = puVar26[0xb];
      uVar39 = puVar26[0xc];
      uVar41 = puVar26[0xd];
      uVar32 = puVar26[0xe];
      uVar43 = puVar26[0xf];
      auStack_70[3] = uVar28;
      uStack_50 = uVar27;
      *(undefined8 *)((long)&uStack_80 + lVar29) = 0x49a663;
      auVar48 = FUN_00499b40(uVar45,uVar47);
      uVar40 = *puVar26;
      uVar42 = puVar26[1];
      uVar39 = uVar39 ^ puVar26[2];
      uVar41 = uVar41 ^ puVar26[3];
      uVar9 = puVar26[6];
      uVar10 = puVar26[7];
      uVar34 = uVar34 ^ puVar26[4];
      uVar37 = uVar37 ^ puVar26[5];
      uVar45 = puVar26[10];
      uVar47 = puVar26[0xb];
      uVar32 = uVar32 ^ puVar26[8];
      uVar43 = uVar43 ^ puVar26[9];
      uVar7 = puVar26[0xc];
      uVar8 = puVar26[0xd];
      uVar28 = puVar26[0xe];
      uVar27 = puVar26[0xf];
      *puVar30 = uVar44 ^ auStack_70[3];
      puVar30[1] = uVar46 ^ uStack_50;
      param_1 = puVar26 + 0x10;
      puVar30[2] = auVar48._0_8_ ^ uVar40;
      puVar30[3] = extraout_XMM0_Qb ^ uVar42;
      puVar30[4] = uVar39;
      puVar30[5] = uVar41;
      puVar30[6] = uVar34;
      puVar30[7] = uVar37;
      puVar30[8] = auVar48._8_8_ ^ uVar9;
      puVar30[9] = extraout_XMM1_Qb ^ uVar10;
      puVar30[10] = uVar32;
      puVar30[0xb] = uVar43;
      puVar30[0xc] = uVar35 ^ uVar45;
      puVar30[0xd] = uVar36 ^ uVar47;
      puVar30[0xe] = uVar33 ^ uVar7;
      puVar30[0xf] = uVar38 ^ uVar8;
      param_2 = puVar30 + 0x10;
    } while (7 < param_3);
    if (param_3 != 0) {
      uVar45 = *param_1;
      uVar47 = puVar26[0x11];
      if (param_3 < 2) {
        *(undefined8 *)((long)&uStack_80 + lVar29) = 0x49a9f0;
        uVar35 = uVar28;
        uVar36 = uVar27;
        FUN_0048a530(param_1,auStack_70 + 3,param_4);
        uVar27 = uVar47;
        uVar28 = uVar45;
        *param_2 = uVar35 ^ auStack_70[3];
        puVar30[0x11] = uVar36 ^ uStack_50;
      }
      else {
        uVar35 = puVar26[0x12];
        auStack_70[3] = uVar28;
        uStack_50 = uVar27;
        if (param_3 == 2) {
          *(undefined8 *)((long)&uStack_80 + lVar29) = 0x49a9bb;
          uVar34 = FUN_00499b40(uVar35);
          uVar35 = *param_1;
          uVar36 = puVar26[0x11];
          uVar28 = puVar26[0x12];
          uVar27 = puVar26[0x13];
          *param_2 = uVar45 ^ auStack_70[3];
          puVar30[0x11] = uVar47 ^ uStack_50;
          puVar30[0x12] = uVar34 ^ uVar35;
          puVar30[0x13] = extraout_XMM0_Qb_05 ^ uVar36;
        }
        else {
          uVar28 = puVar26[0x14];
          if (param_3 < 4) {
            *(undefined8 *)((long)&uStack_80 + lVar29) = 0x49a96b;
            uVar33 = FUN_00499b40(uVar35,uVar28);
            uVar34 = *param_1;
            uVar37 = puVar26[0x11];
            uVar35 = puVar26[0x12];
            uVar36 = puVar26[0x13];
            uVar28 = puVar26[0x14];
            uVar27 = puVar26[0x15];
            *param_2 = uVar45 ^ auStack_70[3];
            puVar30[0x11] = uVar47 ^ uStack_50;
            puVar30[0x12] = uVar33 ^ uVar34;
            puVar30[0x13] = extraout_XMM0_Qb_04 ^ uVar37;
            puVar30[0x14] = uVar39 ^ uVar35;
            puVar30[0x15] = uVar41 ^ uVar36;
          }
          else {
            uVar36 = puVar26[0x16];
            uVar33 = puVar26[0x17];
            if (param_3 == 4) {
              *(undefined8 *)((long)&uStack_80 + lVar29) = 0x49a90b;
              uVar32 = FUN_00499b40(uVar35,uVar28);
              uVar7 = *param_1;
              uVar8 = puVar26[0x11];
              uVar33 = puVar26[0x12];
              uVar38 = puVar26[0x13];
              uVar35 = puVar26[0x14];
              uVar36 = puVar26[0x15];
              uVar28 = puVar26[0x16];
              uVar27 = puVar26[0x17];
              *param_2 = uVar45 ^ auStack_70[3];
              puVar30[0x11] = uVar47 ^ uStack_50;
              puVar30[0x12] = uVar32 ^ uVar7;
              puVar30[0x13] = extraout_XMM0_Qb_03 ^ uVar8;
              puVar30[0x14] = uVar39 ^ uVar33;
              puVar30[0x15] = uVar41 ^ uVar38;
              puVar30[0x16] = uVar34 ^ uVar35;
              puVar30[0x17] = uVar37 ^ uVar36;
            }
            else {
              uVar34 = puVar26[0x18];
              uVar37 = puVar26[0x19];
              if (param_3 < 6) {
                *(undefined8 *)((long)&uStack_80 + lVar29) = 0x49a89b;
                auVar48 = FUN_00499b40(uVar35,uVar28);
                uVar7 = *param_1;
                uVar8 = puVar26[0x11];
                uVar35 = puVar26[0x12];
                uVar36 = puVar26[0x13];
                uVar33 = puVar26[0x14];
                uVar38 = puVar26[0x15];
                uVar32 = puVar26[0x16];
                uVar43 = puVar26[0x17];
                uVar28 = puVar26[0x18];
                uVar27 = puVar26[0x19];
                *param_2 = uVar45 ^ auStack_70[3];
                puVar30[0x11] = uVar47 ^ uStack_50;
                puVar30[0x12] = auVar48._0_8_ ^ uVar7;
                puVar30[0x13] = extraout_XMM0_Qb_02 ^ uVar8;
                puVar30[0x14] = uVar39 ^ uVar35;
                puVar30[0x15] = uVar41 ^ uVar36;
                puVar30[0x16] = uVar34 ^ uVar33;
                puVar30[0x17] = uVar37 ^ uVar38;
                puVar30[0x18] = auVar48._8_8_ ^ uVar32;
                puVar30[0x19] = extraout_XMM1_Qb_02 ^ uVar43;
              }
              else {
                uVar27 = puVar26[0x1a];
                if (param_3 == 6) {
                  *(undefined8 *)((long)&uStack_80 + lVar29) = 0x49a81b;
                  auVar48 = FUN_00499b40(uVar35,uVar28,uVar36,uVar34,uVar27);
                  uVar40 = *param_1;
                  uVar42 = puVar26[0x11];
                  uVar35 = puVar26[0x12];
                  uVar36 = puVar26[0x13];
                  uVar7 = puVar26[0x14];
                  uVar8 = puVar26[0x15];
                  uVar9 = puVar26[0x16];
                  uVar10 = puVar26[0x17];
                  uVar33 = puVar26[0x18];
                  uVar38 = puVar26[0x19];
                  uVar28 = puVar26[0x1a];
                  uVar27 = puVar26[0x1b];
                  *param_2 = uVar45 ^ auStack_70[3];
                  puVar30[0x11] = uVar47 ^ uStack_50;
                  puVar30[0x12] = auVar48._0_8_ ^ uVar40;
                  puVar30[0x13] = extraout_XMM0_Qb_01 ^ uVar42;
                  puVar30[0x14] = uVar39 ^ uVar35;
                  puVar30[0x15] = uVar41 ^ uVar36;
                  puVar30[0x16] = uVar34 ^ uVar7;
                  puVar30[0x17] = uVar37 ^ uVar8;
                  puVar30[0x18] = auVar48._8_8_ ^ uVar9;
                  puVar30[0x19] = extraout_XMM1_Qb_01 ^ uVar10;
                  puVar30[0x1a] = uVar32 ^ uVar33;
                  puVar30[0x1b] = uVar43 ^ uVar38;
                }
                else {
                  uVar40 = puVar26[0x1c];
                  uVar42 = puVar26[0x1d];
                  *(undefined8 *)((long)&uStack_80 + lVar29) = 0x49a786;
                  auVar48 = FUN_00499b40(uVar35,uVar28,uVar36,uVar34,uVar27);
                  uVar44 = *param_1;
                  uVar46 = puVar26[0x11];
                  uVar9 = puVar26[0x12];
                  uVar10 = puVar26[0x13];
                  uVar39 = puVar26[0x14];
                  uVar41 = puVar26[0x15];
                  uVar11 = puVar26[0x16];
                  uVar12 = puVar26[0x17];
                  uVar35 = puVar26[0x18];
                  uVar38 = puVar26[0x19];
                  uVar7 = puVar26[0x1a];
                  uVar8 = puVar26[0x1b];
                  uVar28 = puVar26[0x1c];
                  uVar27 = puVar26[0x1d];
                  *param_2 = uVar45 ^ auStack_70[3];
                  puVar30[0x11] = uVar47 ^ uStack_50;
                  puVar30[0x12] = auVar48._0_8_ ^ uVar44;
                  puVar30[0x13] = extraout_XMM0_Qb_00 ^ uVar46;
                  puVar30[0x14] = uVar40 ^ uVar9;
                  puVar30[0x15] = uVar42 ^ uVar10;
                  puVar30[0x16] = uVar34 ^ uVar39;
                  puVar30[0x17] = uVar37 ^ uVar41;
                  puVar30[0x18] = auVar48._8_8_ ^ uVar11;
                  puVar30[0x19] = extraout_XMM1_Qb_00 ^ uVar12;
                  puVar30[0x1a] = uVar32 ^ uVar35;
                  puVar30[0x1b] = uVar43 ^ uVar38;
                  puVar30[0x1c] = uVar36 ^ uVar7;
                  puVar30[0x1d] = uVar33 ^ uVar8;
                }
              }
            }
          }
        }
      }
    }
    *param_5 = uVar28;
    param_5[1] = uVar27;
    do {
      *pauVar17 = (undefined1  [16])0x0;
      pauVar17[1] = (undefined1  [16])0x0;
      pauVar17 = pauVar17 + 2;
    } while (pauVar17 < (undefined1 (*) [16])&local_78);
    return;
  }
  if (param_3 != 0) {
    bVar31 = 0;
    puVar16 = (undefined8 *)&DAT_0048b080;
    if (param_6 == 0) {
      puVar16 = &DAT_0048bcc0;
    }
    if (((param_3 < 0x200) || ((param_3 & 0xf) != 0)) || ((DAT_0094b598 >> 0x1c & 1) != 0)) {
      lVar29 = -(-((long)param_4 + (-0x97 - (long)alStack_c0)) & 0x3c0U);
      *(undefined1 **)(auStack_b0 + lVar29) = &stack0xffffffffffffffc8;
      *(ulong **)((long)alStack_a8 + lVar29 + 0x20) = param_5;
      iVar18 = *(int *)(param_4 + 0x1e);
      *(undefined8 **)((long)alStack_c0 + lVar29) = param_4;
      *(ulong *)((long)alStack_c0 + lVar29 + 8U) = (long)param_4 + (ulong)(uint)(iVar18 << 4);
      if (param_6 == 0) {
        uVar28 = param_5[1];
        *(ulong *)((long)&uStack_80 + lVar29) = *param_5;
        *(ulong *)((long)&local_78 + lVar29) = uVar28;
        while( true ) {
          uVar22 = *(uint *)((long)param_1 + 4);
          uVar19 = (uint)param_1[1];
          *(ulong **)((long)alStack_a8 + lVar29) = param_1;
          *(ulong **)((long)alStack_a8 + lVar29 + 8) = param_2;
          *(ulong *)((long)alStack_a8 + lVar29 + 0x10) = param_3;
          *(undefined8 *)((long)&uStack_c8 + lVar29) = 0x48afa3;
          uVar15 = FUN_0048a240();
          puVar16 = *(undefined8 **)((long)alStack_a8 + lVar29);
          puVar25 = *(uint **)((long)alStack_a8 + lVar29 + 8);
          uVar28 = *(ulong *)((long)alStack_a8 + lVar29 + 0x10);
          uVar15 = uVar15 ^ *(uint *)((long)&uStack_80 + lVar29);
          uVar22 = uVar22 ^ *(uint *)((long)&uStack_80 + lVar29 + 4);
          uVar19 = uVar19 ^ *(uint *)((long)&local_78 + lVar29);
          uVar21 = extraout_EDX_03 ^ *(uint *)((long)auStack_70 + lVar29 + -4);
          uVar5 = *puVar16;
          uVar6 = puVar16[1];
          param_3 = uVar28 - 0x10;
          if (uVar28 < 0x10) break;
          if (param_3 == 0) {
            puVar16 = *(undefined8 **)((long)alStack_a8 + lVar29 + 0x20);
            *puVar16 = uVar5;
            puVar16[1] = uVar6;
            *puVar25 = uVar15;
            puVar25[1] = uVar22;
            puVar25[2] = uVar19;
            puVar25[3] = uVar21;
            return;
          }
          *(undefined8 *)((long)&uStack_80 + lVar29) = uVar5;
          *(undefined8 *)((long)&local_78 + lVar29) = uVar6;
          *puVar25 = uVar15;
          puVar25[1] = uVar22;
          puVar25[2] = uVar19;
          puVar25[3] = uVar21;
          param_1 = puVar16 + 2;
          param_2 = (ulong *)(puVar25 + 4);
        }
        puVar16 = *(undefined8 **)((long)alStack_a8 + lVar29 + 0x20);
        *puVar16 = uVar5;
        puVar16[1] = uVar6;
        *(uint *)((long)&uStack_80 + lVar29) = uVar15;
        *(uint *)((long)&uStack_80 + lVar29 + 4) = uVar22;
        *(uint *)((long)&local_78 + lVar29) = uVar19;
        *(uint *)((long)auStack_70 + lVar29 + -4) = uVar21;
        puVar23 = (undefined1 *)((long)&uStack_80 + lVar29);
        for (; uVar28 != 0; uVar28 = uVar28 - 1) {
          *(undefined1 *)puVar25 = *puVar23;
          puVar23 = puVar23 + (ulong)bVar31 * -2 + 1;
          puVar25 = (uint *)((long)puVar25 + (ulong)bVar31 * -2 + 1);
        }
      }
      else {
        uVar22 = *(uint *)((long)param_5 + 4);
        uVar27 = (ulong)(uint)param_5[1];
        puVar26 = param_1;
        uVar28 = param_3;
        puVar30 = param_2;
        if ((param_3 & 0xfffffffffffffff0) == 0) goto code_r0x0048af2f;
        while( true ) {
          do {
            uVar22 = uVar22 ^ *(uint *)((long)puVar26 + 4);
            uVar27 = (ulong)((uint)uVar27 ^ (uint)puVar26[1]);
            *(ulong **)((long)alStack_a8 + lVar29) = puVar26;
            *(ulong **)((long)alStack_a8 + lVar29 + 8) = param_2;
            *(ulong *)((long)alStack_a8 + lVar29 + 0x10) = param_3;
            *(undefined8 *)((long)&uStack_c8 + lVar29) = 0x48aecb;
            uVar13 = FUN_00489d30();
            lVar20 = *(long *)((long)alStack_a8 + lVar29);
            puVar4 = *(undefined4 **)((long)alStack_a8 + lVar29 + 8);
            lVar3 = *(long *)((long)alStack_a8 + lVar29 + 0x10);
            *puVar4 = uVar13;
            puVar4[1] = uVar22;
            puVar4[2] = (int)uVar27;
            puVar4[3] = extraout_EDX_02;
            param_1 = (ulong *)(lVar20 + 0x10);
            param_2 = (ulong *)(puVar4 + 4);
            param_3 = lVar3 - 0x10;
            puVar26 = param_1;
          } while ((param_3 & 0xfffffffffffffff0) != 0);
          uVar28 = param_3;
          puVar30 = param_2;
          if ((param_3 & 0xf) == 0) break;
code_r0x0048af2f:
          for (; puVar26 = puVar30, param_3 != 0; param_3 = param_3 - 1) {
            *(char *)param_2 = (char)*param_1;
            param_1 = (ulong *)((long)param_1 + (ulong)bVar31 * -2 + 1);
            param_2 = (ulong *)((long)param_2 + (ulong)bVar31 * -2 + 1);
            puVar30 = puVar26;
          }
          for (lVar20 = 0x10 - uVar28; lVar20 != 0; lVar20 = lVar20 + -1) {
            *(undefined1 *)param_2 = 0;
            param_2 = (ulong *)((long)param_2 + (ulong)bVar31 * -2 + 1);
          }
          param_3 = 0x10;
          param_2 = puVar26;
        }
        puVar4 = *(undefined4 **)((long)alStack_a8 + lVar29 + 0x20);
        *puVar4 = uVar13;
        puVar4[1] = uVar22;
        puVar4[2] = (int)uVar27;
        puVar4[3] = extraout_EDX_02;
      }
    }
    else {
      uVar28 = (ulong)(alStack_1a8 + 4) & 0xfc0;
      if (uVar28 < ((ulong)(puVar16 + 0x120) & 0xfff)) {
        lVar29 = (uVar28 - ((ulong)puVar16 & 0xfff) & 0xfff) + 0x140;
      }
      else {
        lVar29 = uVar28 - ((ulong)(puVar16 + 0x120) & 0xfff);
      }
      lVar29 = -lVar29;
      *(undefined1 **)(auStack_1b0 + lVar29) = &stack0xffffffffffffffc8;
      *(ulong **)((long)alStack_1a8 + lVar29) = param_1;
      *(ulong **)((long)alStack_1a8 + lVar29 + 8) = param_2;
      *(ulong *)((long)alStack_1a8 + lVar29 + 0x10) = param_3;
      *(undefined8 **)((long)alStack_1a8 + lVar29 + 0x18) = param_4;
      *(ulong **)((long)alStack_1a8 + lVar29 + 0x20) = param_5;
      *(undefined4 *)((long)&uStack_80 + lVar29) = 0;
      uVar13 = *(undefined4 *)(param_4 + 0x1e);
      uVar28 = (long)param_4 - (long)puVar16 & 0xfff;
      if ((uVar28 < 0x900) || (puVar16 = param_4, 0xf07 < uVar28)) {
        puVar16 = (undefined8 *)((long)auStack_170 + lVar29);
        puVar24 = (undefined8 *)((long)auStack_170 + lVar29);
        for (lVar20 = 0x1e; lVar20 != 0; lVar20 = lVar20 + -1) {
          *puVar24 = *param_4;
          param_4 = param_4 + 1;
          puVar24 = puVar24 + 1;
        }
        *(undefined4 *)puVar24 = uVar13;
      }
      *(undefined8 **)((long)alStack_1c8 + lVar29 + 8) = puVar16;
      iVar18 = 0x12;
      do {
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
      if (param_6 == 0) {
        if (param_2 == param_1) {
          uVar28 = param_5[1];
          *(ulong *)((long)&uStack_180 + lVar29) = *param_5;
          *(ulong *)((long)&uStack_178 + lVar29) = uVar28;
          while( true ) {
            uVar22 = *(uint *)((long)param_1 + 4);
            uVar19 = (uint)param_1[1];
            *(ulong **)((long)alStack_1a8 + lVar29) = param_1;
            *(undefined8 *)((long)alStack_1c8 + lVar29) = 0x48ad81;
            uVar15 = FUN_0048a060();
            puVar16 = *(undefined8 **)((long)alStack_1a8 + lVar29);
            uVar15 = uVar15 ^ *(uint *)((long)&uStack_180 + lVar29);
            uVar22 = uVar22 ^ *(uint *)((long)&uStack_180 + lVar29 + 4);
            uVar19 = uVar19 ^ *(uint *)((long)&uStack_178 + lVar29);
            uVar21 = extraout_EDX_01 ^ *(uint *)((long)auStack_170 + lVar29 + -4);
            uVar5 = puVar16[1];
            lVar20 = *(long *)((long)alStack_1a8 + lVar29 + 0x10) + -0x10;
            if (lVar20 == 0) break;
            *(undefined8 *)((long)&uStack_180 + lVar29) = *puVar16;
            *(undefined8 *)((long)&uStack_178 + lVar29) = uVar5;
            *(uint *)param_2 = uVar15;
            *(uint *)((long)param_2 + 4) = uVar22;
            *(uint *)(param_2 + 1) = uVar19;
            *(uint *)((long)param_2 + 0xc) = uVar21;
            param_1 = puVar16 + 2;
            param_2 = param_2 + 2;
            *(long *)((long)alStack_1a8 + lVar29 + 0x10) = lVar20;
          }
          puVar24 = *(undefined8 **)((long)alStack_1a8 + lVar29 + 0x20);
          *puVar24 = *puVar16;
          puVar24[1] = uVar5;
          *(uint *)param_2 = uVar15;
          *(uint *)((long)param_2 + 4) = uVar22;
          *(uint *)(param_2 + 1) = uVar19;
          *(uint *)((long)param_2 + 0xc) = uVar21;
        }
        else {
          *(ulong **)((long)&uStack_180 + lVar29) = param_5;
          do {
            uVar22 = *(uint *)((long)param_1 + 4);
            uVar19 = (uint)param_1[1];
            *(ulong **)((long)alStack_1a8 + lVar29) = param_1;
            *(undefined8 *)((long)alStack_1c8 + lVar29) = 0x48aced;
            uVar14 = FUN_0048a060();
            puVar25 = *(uint **)((long)&uStack_180 + lVar29);
            puVar16 = *(undefined8 **)((long)alStack_1a8 + lVar29);
            uVar15 = *puVar25;
            uVar21 = puVar25[1];
            uVar1 = puVar25[2];
            uVar2 = puVar25[3];
            lVar20 = *(long *)((long)alStack_1a8 + lVar29 + 0x10) + -0x10;
            *(long *)((long)alStack_1a8 + lVar29 + 0x10) = lVar20;
            *(undefined8 **)((long)&uStack_180 + lVar29) = puVar16;
            *(uint *)param_2 = uVar14 ^ uVar15;
            *(uint *)((long)param_2 + 4) = uVar22 ^ uVar21;
            *(uint *)(param_2 + 1) = uVar19 ^ uVar1;
            *(uint *)((long)param_2 + 0xc) = extraout_EDX_00 ^ uVar2;
            param_1 = puVar16 + 2;
            param_2 = param_2 + 2;
          } while (lVar20 != 0);
          puVar24 = *(undefined8 **)((long)alStack_1a8 + lVar29 + 0x20);
          uVar5 = puVar16[1];
          *puVar24 = *puVar16;
          puVar24[1] = uVar5;
        }
      }
      else {
        uVar22 = *(uint *)((long)param_5 + 4);
        uVar28 = (ulong)(uint)param_5[1];
        do {
          uVar22 = uVar22 ^ *(uint *)((long)param_1 + 4);
          uVar28 = (ulong)((uint)uVar28 ^ (uint)param_1[1]);
          *(ulong **)((long)alStack_1a8 + lVar29) = param_1;
          *(undefined8 *)((long)alStack_1c8 + lVar29) = 0x48ac6d;
          uVar13 = FUN_00489b40();
          lVar20 = *(long *)((long)alStack_1a8 + lVar29);
          lVar3 = *(long *)((long)alStack_1a8 + lVar29 + 0x10);
          *(undefined4 *)param_2 = uVar13;
          *(uint *)((long)param_2 + 4) = uVar22;
          *(int *)(param_2 + 1) = (int)uVar28;
          *(undefined4 *)((long)param_2 + 0xc) = extraout_EDX;
          param_1 = (ulong *)(lVar20 + 0x10);
          param_2 = param_2 + 2;
          uVar27 = lVar3 - 0x10;
          *(ulong *)((long)alStack_1a8 + lVar29 + 0x10) = uVar27;
        } while ((uVar27 & 0xfffffffffffffff0) != 0);
        puVar4 = *(undefined4 **)((long)alStack_1a8 + lVar29 + 0x20);
        *puVar4 = uVar13;
        puVar4[1] = uVar22;
        puVar4[2] = (int)uVar28;
        puVar4[3] = extraout_EDX;
      }
      if (*(int *)((long)&uStack_80 + lVar29) != 0) {
        puVar16 = (undefined8 *)((long)auStack_170 + lVar29);
        for (lVar20 = 0x1e; lVar20 != 0; lVar20 = lVar20 + -1) {
          *puVar16 = 0;
          puVar16 = puVar16 + (ulong)bVar31 * -2 + 1;
        }
      }
    }
  }
  return;
}

