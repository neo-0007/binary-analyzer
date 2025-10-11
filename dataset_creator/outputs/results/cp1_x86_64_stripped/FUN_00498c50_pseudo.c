
/* WARNING: Removing unreachable block (ram,0x00499086) */
/* WARNING: Removing unreachable block (ram,0x0049907d) */
/* WARNING: Removing unreachable block (ram,0x0049908f) */
/* WARNING: Removing unreachable block (ram,0x00499050) */
/* WARNING: Removing unreachable block (ram,0x0049903e) */
/* WARNING: Removing unreachable block (ram,0x00498f01) */
/* WARNING: Removing unreachable block (ram,0x00498f13) */
/* WARNING: Removing unreachable block (ram,0x00498ef8) */
/* WARNING: Removing unreachable block (ram,0x00498eef) */
/* WARNING: Removing unreachable block (ram,0x00498dfd) */
/* WARNING: Removing unreachable block (ram,0x00498df4) */
/* WARNING: Removing unreachable block (ram,0x00498dd1) */
/* WARNING: Removing unreachable block (ram,0x00498dbf) */
/* WARNING: Removing unreachable block (ram,0x00498d77) */
/* WARNING: Removing unreachable block (ram,0x00498d80) */
/* WARNING: Removing unreachable block (ram,0x00498d89) */
/* WARNING: Removing unreachable block (ram,0x00498e06) */
/* WARNING: Removing unreachable block (ram,0x00499047) */
/* WARNING: Removing unreachable block (ram,0x00498dc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00498c50(undefined1 (*param_1) [16],int param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  uint uVar13;
  int iVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 extraout_XMM0_Qb_08;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 extraout_XMM0_Qb_09;
  undefined1 auVar28 [16];
  undefined4 uVar34;
  undefined8 extraout_XMM0_Qb_10;
  undefined8 extraout_XMM0_Qb_11;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 extraout_XMM0_Qb_16;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulong uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  ulong uVar15;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_12;
  undefined8 extraout_XMM0_Qb_13;
  undefined8 extraout_XMM0_Qb_14;
  undefined8 extraout_XMM0_Qb_15;
  
  auVar37 = _DAT_00499230;
  auVar25 = _DAT_00499220;
  auVar35 = _DAT_00499210;
  uVar9 = 0xffffffffffffffff;
  if ((param_1 != (undefined1 (*) [16])0x0) && (param_3 != (undefined1 (*) [16])0x0)) {
    auVar27 = *param_1;
    uVar13 = DAT_0094b59c & 0x10000800;
    if (param_2 == 0x100) {
      auVar25 = param_1[1];
      uVar34 = 0xd;
      pauVar12 = param_3 + 2;
      if (uVar13 == 0x10000000) {
        iVar14 = 7;
        *param_3 = auVar27;
        param_3[1] = auVar25;
        while( true ) {
          auVar26 = pshufb(auVar25,auVar35);
          auVar44 = aesenclast(auVar26,auVar37);
          uVar15 = auVar27._0_8_;
          auVar33._0_8_ = uVar15 << 0x20;
          auVar33._8_8_ = auVar27._8_8_ << 0x20 | uVar15 >> 0x20;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = (uVar15 >> 0x20) << 0x20 | uVar15 & 0xffffffff;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (uVar15 & 0xffffffff) << 0x20;
          auVar50._0_4_ = auVar37._0_4_ << 1;
          auVar50._4_4_ = auVar37._4_4_ << 1;
          auVar50._8_4_ = auVar37._8_4_ << 1;
          auVar50._12_4_ = auVar37._12_4_ << 1;
          auVar27 = auVar7 << 0x40 ^ auVar27 ^ auVar33 ^ auVar26 << 0x40 ^ auVar44;
          *pauVar12 = auVar27;
          iVar14 = iVar14 + -1;
          if (iVar14 == 0) break;
          uVar34 = auVar27._12_4_;
          auVar45._4_4_ = uVar34;
          auVar45._0_4_ = uVar34;
          auVar45._8_4_ = uVar34;
          auVar45._12_4_ = uVar34;
          auVar26 = aesenclast(auVar45,(undefined1  [16])0x0);
          uVar15 = auVar25._0_8_;
          auVar38._0_8_ = uVar15 << 0x20;
          auVar38._8_8_ = auVar25._8_8_ << 0x20 | uVar15 >> 0x20;
          auVar37._8_8_ = 0;
          auVar37._0_8_ = (uVar15 >> 0x20) << 0x20 | uVar15 & 0xffffffff;
          auVar44._8_8_ = 0;
          auVar44._0_8_ = (uVar15 & 0xffffffff) << 0x20;
          auVar25 = auVar26 ^ auVar44 << 0x40 ^ auVar25 ^ auVar38 ^ auVar37 << 0x40;
          pauVar12[1] = auVar25;
          pauVar12 = pauVar12 + 2;
          auVar37 = auVar50;
        }
        *(undefined4 *)pauVar12[1] = 0xd;
        uVar9 = 0;
      }
      else {
        *param_3 = auVar27;
        param_3[1] = auVar25;
        aeskeygenassist(auVar25,1);
        auVar35._0_8_ = FUN_00499177();
        auVar35._8_8_ = extraout_XMM0_Qb_10;
        auVar37 = aeskeygenassist(auVar35,1);
        uVar9 = FUN_00499190(auVar35._0_8_,auVar37._0_8_);
        auVar35 = aeskeygenassist(auVar25,2);
        auVar27._0_8_ = FUN_00499170(uVar9,auVar35._0_8_);
        auVar27._8_8_ = extraout_XMM0_Qb_11;
        auVar35 = aeskeygenassist(auVar27,2);
        uVar9 = FUN_00499190(auVar27._0_8_,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar25,4);
        auVar29._0_8_ = FUN_00499170(uVar9,auVar35._0_8_);
        auVar29._8_8_ = extraout_XMM0_Qb_12;
        auVar35 = aeskeygenassist(auVar29,4);
        uVar9 = FUN_00499190(auVar29._0_8_,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar25,8);
        auVar30._0_8_ = FUN_00499170(uVar9,auVar35._0_8_);
        auVar30._8_8_ = extraout_XMM0_Qb_13;
        auVar35 = aeskeygenassist(auVar30,8);
        uVar9 = FUN_00499190(auVar30._0_8_,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar25,0x10);
        auVar31._0_8_ = FUN_00499170(uVar9,auVar35._0_8_);
        auVar31._8_8_ = extraout_XMM0_Qb_14;
        auVar35 = aeskeygenassist(auVar31,0x10);
        uVar9 = FUN_00499190(auVar31._0_8_,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar25,0x20);
        auVar32._0_8_ = FUN_00499170(uVar9,auVar35._0_8_);
        auVar32._8_8_ = extraout_XMM0_Qb_15;
        auVar35 = aeskeygenassist(auVar32,0x20);
        uVar9 = FUN_00499190(auVar32._0_8_,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar25,0x40);
        puVar10 = (undefined8 *)FUN_00499170(uVar9,auVar35._0_8_);
        *puVar10 = extraout_XMM0_Qa_01;
        puVar10[1] = extraout_XMM0_Qb_16;
        *(undefined4 *)(puVar10 + 2) = uVar34;
        uVar9 = 0;
      }
    }
    else if (param_2 == 0xc0) {
      auVar43._8_8_ = 0;
      auVar43._0_8_ = *(ulong *)param_1[1];
      uVar34 = 0xb;
      if (uVar13 == 0x10000000) {
        iVar14 = 8;
        *param_3 = auVar27;
        pauVar12 = param_3 + 1;
        do {
          pauVar11 = pauVar12;
          uVar39 = auVar43._0_8_;
          *(ulong *)*pauVar11 = uVar39;
          auVar35 = pshufb(auVar43,auVar25);
          auVar35 = aesenclast(auVar35,auVar37);
          auVar49._0_4_ = auVar37._0_4_ << 1;
          auVar49._4_4_ = auVar37._4_4_ << 1;
          auVar49._8_4_ = auVar37._8_4_ << 1;
          auVar49._12_4_ = auVar37._12_4_ << 1;
          uVar15 = auVar27._0_8_;
          auVar28._0_8_ = uVar15 << 0x20;
          auVar28._8_8_ = auVar27._8_8_ << 0x20 | uVar15 >> 0x20;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (uVar15 >> 0x20) << 0x20 | uVar15 & 0xffffffff;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar15 & 0xffffffff) << 0x20;
          auVar27 = auVar6 << 0x40 ^ auVar27 ^ auVar28 ^ auVar3 << 0x40;
          uVar34 = auVar27._12_4_;
          auVar46._4_4_ = uVar34;
          auVar46._0_4_ = uVar34;
          auVar46._8_4_ = uVar34;
          auVar46._12_4_ = uVar34;
          auVar36._0_8_ = uVar39 << 0x20;
          auVar36._8_8_ = auVar43._8_8_ << 0x20 | uVar39 >> 0x20;
          auVar27 = auVar27 ^ auVar35;
          auVar43 = auVar35 ^ auVar46 ^ auVar43 ^ auVar36;
          *(undefined1 (*) [16])(*pauVar11 + 8) = auVar27;
          iVar14 = iVar14 + -1;
          pauVar12 = (undefined1 (*) [16])(pauVar11[1] + 8);
          auVar37 = auVar49;
        } while (iVar14 != 0);
        *(undefined4 *)(pauVar11[3] + 8) = 0xb;
        uVar9 = 0;
      }
      else {
        *param_3 = auVar27;
        aeskeygenassist(auVar43,1);
        uVar9 = FUN_00499117();
        auVar35 = aeskeygenassist(auVar43,2);
        uVar9 = FUN_00499150(uVar9,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar43,4);
        uVar9 = FUN_00499110(uVar9,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar43,8);
        uVar9 = FUN_00499150(uVar9,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar43,0x10);
        uVar9 = FUN_00499110(uVar9,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar43,0x20);
        uVar9 = FUN_00499150(uVar9,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar43,0x40);
        uVar9 = FUN_00499110(uVar9,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar43,0x80);
        puVar10 = (undefined8 *)FUN_00499150(uVar9,auVar35._0_8_);
        *puVar10 = extraout_XMM0_Qa_00;
        puVar10[1] = extraout_XMM0_Qb_09;
        *(undefined4 *)(puVar10 + 6) = uVar34;
        uVar9 = 0;
      }
    }
    else if (param_2 == 0x80) {
      uVar34 = 9;
      if (uVar13 == 0x10000000) {
        iVar14 = 8;
        *param_3 = auVar27;
        pauVar12 = param_3 + 1;
        do {
          pauVar11 = pauVar12;
          auVar25 = pshufb(auVar27,auVar35);
          auVar26 = aesenclast(auVar25,auVar37);
          auVar47._0_4_ = auVar37._0_4_ << 1;
          auVar47._4_4_ = auVar37._4_4_ << 1;
          auVar47._8_4_ = auVar37._8_4_ << 1;
          auVar47._12_4_ = auVar37._12_4_ << 1;
          uVar15 = auVar27._0_8_;
          auVar40._0_8_ = uVar15 << 0x20;
          auVar40._8_8_ = auVar27._8_8_ << 0x20 | uVar15 >> 0x20;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = (uVar15 >> 0x20) << 0x20 | uVar15 & 0xffffffff;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (uVar15 & 0xffffffff) << 0x20;
          auVar27 = auVar26 ^ auVar4 << 0x40 ^ auVar27 ^ auVar40 ^ auVar25 << 0x40;
          *pauVar11 = auVar27;
          iVar14 = iVar14 + -1;
          pauVar12 = pauVar11 + 1;
          auVar37 = auVar47;
        } while (iVar14 != 0);
        auVar25 = pshufb(auVar27,auVar35);
        auVar25 = aesenclast(auVar25,_DAT_00499240);
        auVar48._0_4_ = (int)DAT_00499240 << 1;
        auVar48._4_4_ = DAT_00499240._4_4_ << 1;
        auVar48._8_4_ = DAT_00499240._8_4_ << 1;
        auVar48._12_4_ = DAT_00499240._12_4_ << 1;
        uVar15 = auVar27._0_8_;
        auVar41._0_8_ = uVar15 << 0x20;
        auVar41._8_8_ = auVar27._8_8_ << 0x20 | uVar15 >> 0x20;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = (uVar15 >> 0x20) << 0x20 | uVar15 & 0xffffffff;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (uVar15 & 0xffffffff) << 0x20;
        auVar25 = auVar25 ^ auVar8 << 0x40 ^ auVar27 ^ auVar41 ^ auVar1 << 0x40;
        pauVar11[1] = auVar25;
        auVar35 = pshufb(auVar25,auVar35);
        auVar35 = aesenclast(auVar35,auVar48);
        uVar15 = auVar25._0_8_;
        auVar42._0_8_ = uVar15 << 0x20;
        auVar42._8_8_ = auVar25._8_8_ << 0x20 | uVar15 >> 0x20;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (uVar15 >> 0x20) << 0x20 | uVar15 & 0xffffffff;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (uVar15 & 0xffffffff) << 0x20;
        pauVar11[2] = auVar35 ^ auVar5 << 0x40 ^ auVar25 ^ auVar42 ^ auVar2 << 0x40;
        *(undefined4 *)pauVar11[7] = 9;
        uVar9 = 0;
      }
      else {
        *param_3 = auVar27;
        aeskeygenassist(auVar27,1);
        auVar16._0_8_ = FUN_004990f7();
        auVar16._8_8_ = extraout_XMM0_Qb;
        auVar35 = aeskeygenassist(auVar16,2);
        auVar17._0_8_ = FUN_004990f0(auVar16._0_8_,auVar35._0_8_);
        auVar17._8_8_ = extraout_XMM0_Qb_00;
        auVar35 = aeskeygenassist(auVar17,4);
        auVar18._0_8_ = FUN_004990f0(auVar17._0_8_,auVar35._0_8_);
        auVar18._8_8_ = extraout_XMM0_Qb_01;
        auVar35 = aeskeygenassist(auVar18,8);
        auVar19._0_8_ = FUN_004990f0(auVar18._0_8_,auVar35._0_8_);
        auVar19._8_8_ = extraout_XMM0_Qb_02;
        auVar35 = aeskeygenassist(auVar19,0x10);
        auVar20._0_8_ = FUN_004990f0(auVar19._0_8_,auVar35._0_8_);
        auVar20._8_8_ = extraout_XMM0_Qb_03;
        auVar35 = aeskeygenassist(auVar20,0x20);
        auVar21._0_8_ = FUN_004990f0(auVar20._0_8_,auVar35._0_8_);
        auVar21._8_8_ = extraout_XMM0_Qb_04;
        auVar35 = aeskeygenassist(auVar21,0x40);
        auVar22._0_8_ = FUN_004990f0(auVar21._0_8_,auVar35._0_8_);
        auVar22._8_8_ = extraout_XMM0_Qb_05;
        auVar35 = aeskeygenassist(auVar22,0x80);
        auVar23._0_8_ = FUN_004990f0(auVar22._0_8_,auVar35._0_8_);
        auVar23._8_8_ = extraout_XMM0_Qb_06;
        auVar35 = aeskeygenassist(auVar23,0x1b);
        auVar24._0_8_ = FUN_004990f0(auVar23._0_8_,auVar35._0_8_);
        auVar24._8_8_ = extraout_XMM0_Qb_07;
        auVar35 = aeskeygenassist(auVar24,0x36);
        puVar10 = (undefined8 *)FUN_004990f0(auVar24._0_8_,auVar35._0_8_);
        *puVar10 = extraout_XMM0_Qa;
        puVar10[1] = extraout_XMM0_Qb_08;
        *(undefined4 *)(puVar10 + 10) = uVar34;
        uVar9 = 0;
      }
    }
    else {
      uVar9 = 0xfffffffffffffffe;
    }
  }
  return uVar9;
}

