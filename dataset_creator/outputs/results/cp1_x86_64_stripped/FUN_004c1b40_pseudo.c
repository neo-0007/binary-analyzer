
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_004c1b40(long param_1,ulong *param_2,undefined1 (*param_3) [16],ulong *param_4,long *param_5,
            uint param_6,int param_7)

{
  ulong uVar1;
  ulong *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  bool bVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  undefined1 *puVar42;
  ulong *puVar43;
  ulong uVar44;
  long lVar45;
  ulong uVar46;
  bool bVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  int iVar50;
  int iVar52;
  int iVar53;
  int iVar54;
  undefined1 auVar51 [16];
  int iVar55;
  int iVar57;
  int iVar58;
  int iVar59;
  undefined1 auVar56 [16];
  int iVar60;
  int iVar61;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  undefined1 auVar62 [16];
  undefined1 auStack_170 [40];
  undefined1 auStack_148 [280];
  
  uVar46 = (ulong)param_6;
  if ((param_6 & 7) != 0) {
    puVar43 = (ulong *)((ulong)(auStack_148 + uVar46 * -8) & 0xfffffffffffffc00);
    for (puVar2 = (ulong *)((long)puVar43 +
                           ((ulong)(&stack0xffffffffffffffd0 + -(long)puVar43) & 0xfffffffffffff000)
                           ); puVar43 < puVar2; puVar2 = puVar2 + -0x200) {
    }
    puVar2[uVar46 + 1] = (ulong)register0x00000020;
    iVar34 = _UNK_004c4e9c;
    iVar33 = _UNK_004c4e98;
    iVar32 = _UNK_004c4e94;
    iVar31 = _DAT_004c4e90;
    uVar44 = (ulong)(puVar2 + (uVar46 - 0xb)) & 0xfffffffffffffff0;
    iVar50 = _DAT_004c4e90 + _DAT_004c4e80;
    iVar52 = _UNK_004c4e94 + _UNK_004c4e84;
    iVar53 = _UNK_004c4e98 + _UNK_004c4e88;
    iVar54 = _UNK_004c4e9c + _UNK_004c4e8c;
    bVar47 = _UNK_004c4e84 == param_7;
    bVar18 = _UNK_004c4e88 == param_7;
    bVar19 = _UNK_004c4e8c == param_7;
    iVar55 = _DAT_004c4e90 + iVar50;
    iVar57 = _UNK_004c4e94 + iVar52;
    iVar58 = _UNK_004c4e98 + iVar53;
    iVar59 = _UNK_004c4e9c + iVar54;
    *(uint *)(uVar44 + 0x70) = -(uint)(_DAT_004c4e80 == param_7);
    *(uint *)(uVar44 + 0x74) = -(uint)bVar47;
    *(uint *)(uVar44 + 0x78) = -(uint)bVar18;
    *(uint *)(uVar44 + 0x7c) = -(uint)bVar19;
    iVar60 = iVar31 + iVar55;
    iVar63 = iVar32 + iVar57;
    iVar65 = iVar33 + iVar58;
    iVar67 = iVar34 + iVar59;
    *(uint *)(uVar44 + 0x80) = -(uint)(iVar50 == param_7);
    *(uint *)(uVar44 + 0x84) = -(uint)(iVar52 == param_7);
    *(uint *)(uVar44 + 0x88) = -(uint)(iVar53 == param_7);
    *(uint *)(uVar44 + 0x8c) = -(uint)(iVar54 == param_7);
    iVar50 = iVar31 + iVar60;
    iVar52 = iVar32 + iVar63;
    iVar53 = iVar33 + iVar65;
    iVar54 = iVar34 + iVar67;
    *(uint *)(uVar44 + 0x90) = -(uint)(iVar55 == param_7);
    *(uint *)(uVar44 + 0x94) = -(uint)(iVar57 == param_7);
    *(uint *)(uVar44 + 0x98) = -(uint)(iVar58 == param_7);
    *(uint *)(uVar44 + 0x9c) = -(uint)(iVar59 == param_7);
    iVar55 = iVar31 + iVar50;
    iVar57 = iVar32 + iVar52;
    iVar58 = iVar33 + iVar53;
    iVar59 = iVar34 + iVar54;
    *(uint *)(uVar44 + 0xa0) = -(uint)(iVar60 == param_7);
    *(uint *)(uVar44 + 0xa4) = -(uint)(iVar63 == param_7);
    *(uint *)(uVar44 + 0xa8) = -(uint)(iVar65 == param_7);
    *(uint *)(uVar44 + 0xac) = -(uint)(iVar67 == param_7);
    iVar60 = iVar31 + iVar55;
    iVar63 = iVar32 + iVar57;
    iVar65 = iVar33 + iVar58;
    iVar67 = iVar34 + iVar59;
    *(uint *)(uVar44 + 0xb0) = -(uint)(iVar50 == param_7);
    *(uint *)(uVar44 + 0xb4) = -(uint)(iVar52 == param_7);
    *(uint *)(uVar44 + 0xb8) = -(uint)(iVar53 == param_7);
    *(uint *)(uVar44 + 0xbc) = -(uint)(iVar54 == param_7);
    iVar61 = iVar31 + iVar60;
    iVar64 = iVar32 + iVar63;
    iVar66 = iVar33 + iVar65;
    iVar68 = iVar34 + iVar67;
    *(uint *)(uVar44 + 0xc0) = -(uint)(iVar55 == param_7);
    *(uint *)(uVar44 + 0xc4) = -(uint)(iVar57 == param_7);
    *(uint *)(uVar44 + 200) = -(uint)(iVar58 == param_7);
    *(uint *)(uVar44 + 0xcc) = -(uint)(iVar59 == param_7);
    iVar50 = iVar31 + iVar61;
    iVar52 = iVar32 + iVar64;
    iVar53 = iVar33 + iVar66;
    iVar54 = iVar34 + iVar68;
    *(uint *)(uVar44 + 0xd0) = -(uint)(iVar60 == param_7);
    *(uint *)(uVar44 + 0xd4) = -(uint)(iVar63 == param_7);
    *(uint *)(uVar44 + 0xd8) = -(uint)(iVar65 == param_7);
    *(uint *)(uVar44 + 0xdc) = -(uint)(iVar67 == param_7);
    iVar55 = iVar31 + iVar50;
    iVar57 = iVar32 + iVar52;
    iVar58 = iVar33 + iVar53;
    iVar59 = iVar34 + iVar54;
    *(uint *)(uVar44 + 0xe0) = -(uint)(iVar61 == param_7);
    *(uint *)(uVar44 + 0xe4) = -(uint)(iVar64 == param_7);
    *(uint *)(uVar44 + 0xe8) = -(uint)(iVar66 == param_7);
    *(uint *)(uVar44 + 0xec) = -(uint)(iVar68 == param_7);
    iVar60 = iVar31 + iVar55;
    iVar63 = iVar32 + iVar57;
    iVar65 = iVar33 + iVar58;
    iVar67 = iVar34 + iVar59;
    *(uint *)(uVar44 + 0xf0) = -(uint)(iVar50 == param_7);
    *(uint *)(uVar44 + 0xf4) = -(uint)(iVar52 == param_7);
    *(uint *)(uVar44 + 0xf8) = -(uint)(iVar53 == param_7);
    *(uint *)(uVar44 + 0xfc) = -(uint)(iVar54 == param_7);
    iVar61 = iVar31 + iVar60;
    iVar64 = iVar32 + iVar63;
    iVar66 = iVar33 + iVar65;
    iVar68 = iVar34 + iVar67;
    *(uint *)(uVar44 + 0x100) = -(uint)(iVar55 == param_7);
    *(uint *)(uVar44 + 0x104) = -(uint)(iVar57 == param_7);
    *(uint *)(uVar44 + 0x108) = -(uint)(iVar58 == param_7);
    *(uint *)(uVar44 + 0x10c) = -(uint)(iVar59 == param_7);
    iVar50 = iVar31 + iVar61;
    iVar52 = iVar32 + iVar64;
    iVar53 = iVar33 + iVar66;
    iVar54 = iVar34 + iVar68;
    *(uint *)(uVar44 + 0x110) = -(uint)(iVar60 == param_7);
    *(uint *)(uVar44 + 0x114) = -(uint)(iVar63 == param_7);
    *(uint *)(uVar44 + 0x118) = -(uint)(iVar65 == param_7);
    *(uint *)(uVar44 + 0x11c) = -(uint)(iVar67 == param_7);
    iVar55 = iVar31 + iVar50;
    iVar57 = iVar32 + iVar52;
    iVar58 = iVar33 + iVar53;
    iVar59 = iVar34 + iVar54;
    auVar48._0_4_ = -(uint)(iVar50 == param_7);
    auVar48._4_4_ = -(uint)(iVar52 == param_7);
    auVar48._8_4_ = -(uint)(iVar53 == param_7);
    auVar48._12_4_ = -(uint)(iVar54 == param_7);
    *(uint *)(uVar44 + 0x120) = -(uint)(iVar61 == param_7);
    *(uint *)(uVar44 + 0x124) = -(uint)(iVar64 == param_7);
    *(uint *)(uVar44 + 0x128) = -(uint)(iVar66 == param_7);
    *(uint *)(uVar44 + 300) = -(uint)(iVar68 == param_7);
    iVar50 = iVar31 + iVar55;
    iVar52 = iVar32 + iVar57;
    iVar53 = iVar33 + iVar58;
    iVar54 = iVar34 + iVar59;
    auVar51._0_4_ = -(uint)(iVar55 == param_7);
    auVar51._4_4_ = -(uint)(iVar57 == param_7);
    auVar51._8_4_ = -(uint)(iVar58 == param_7);
    auVar51._12_4_ = -(uint)(iVar59 == param_7);
    *(undefined1 (*) [16])(uVar44 + 0x130) = auVar48;
    auVar56._0_4_ = -(uint)(iVar50 == param_7);
    auVar56._4_4_ = -(uint)(iVar52 == param_7);
    auVar56._8_4_ = -(uint)(iVar53 == param_7);
    auVar56._12_4_ = -(uint)(iVar54 == param_7);
    *(undefined1 (*) [16])(uVar44 + 0x140) = auVar51;
    auVar62._0_4_ = -(uint)(iVar31 + iVar50 == param_7);
    auVar62._4_4_ = -(uint)(iVar32 + iVar52 == param_7);
    auVar62._8_4_ = -(uint)(iVar33 + iVar53 == param_7);
    auVar62._12_4_ = -(uint)(iVar34 + iVar54 == param_7);
    *(undefined1 (*) [16])(uVar44 + 0x150) = auVar56;
    auVar49 = param_3[0xc];
    auVar3 = param_3[0xd];
    auVar4 = param_3[0xe];
    *(undefined1 (*) [16])(uVar44 + 0x160) = auVar62;
    auVar49 = auVar48 & auVar49 | auVar56 & auVar4 |
              *param_3 & *(undefined1 (*) [16])(uVar44 + 0x70) |
              param_3[2] & *(undefined1 (*) [16])(uVar44 + 0x90) |
              param_3[4] & *(undefined1 (*) [16])(uVar44 + 0xb0) |
              param_3[6] & *(undefined1 (*) [16])(uVar44 + 0xd0) |
              param_3[8] & *(undefined1 (*) [16])(uVar44 + 0xf0) |
              param_3[10] & *(undefined1 (*) [16])(uVar44 + 0x110) |
              auVar51 & auVar3 | auVar62 & param_3[0xf] |
              param_3[1] & *(undefined1 (*) [16])(uVar44 + 0x80) |
              param_3[3] & *(undefined1 (*) [16])(uVar44 + 0xa0) |
              param_3[5] & *(undefined1 (*) [16])(uVar44 + 0xc0) |
              param_3[7] & *(undefined1 (*) [16])(uVar44 + 0xe0) |
              param_3[9] & *(undefined1 (*) [16])(uVar44 + 0x100) |
              param_3[0xb] & *(undefined1 (*) [16])(uVar44 + 0x120);
    uVar38 = auVar49._0_8_ | auVar49._8_8_;
    param_3 = param_3 + 0x18;
    lVar45 = *param_5;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = *param_2;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar38;
    uVar36 = SUB168(auVar49 * auVar4,8);
    uVar35 = SUB168(auVar49 * auVar4,0);
    uVar40 = lVar45 * uVar35;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *param_4;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar40;
    uVar44 = param_2[1];
    uVar37 = SUB168(auVar3 * auVar11,8) + (ulong)CARRY8(uVar35,SUB168(auVar3 * auVar11,0));
    uVar35 = 1;
    while( true ) {
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar37;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar36;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar37;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar44;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar38;
      auVar23 = auVar5 * auVar12 + auVar23;
      uVar44 = auVar23._0_8_;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar44;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar44;
      uVar36 = auVar23._8_8_;
      uVar39 = uVar35 + 1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_4[uVar35];
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar40;
      if (uVar39 == uVar46) break;
      uVar44 = param_2[uVar39];
      auVar22 = auVar6 * auVar13 + auVar20 + auVar22;
      uVar37 = auVar22._8_8_;
      puVar2[uVar35 - 1] = auVar22._0_8_;
      uVar35 = uVar39;
    }
    auVar25 = auVar6 * auVar13 + auVar24 + auVar25;
    uVar44 = auVar25._8_8_;
    puVar2[uVar46 - 2] = auVar25._0_8_;
    puVar2[uVar46 - 1] = uVar44 + uVar36;
    puVar2[uVar46] = (ulong)CARRY8(uVar44,uVar36);
    uVar44 = 1;
    do {
      puVar43 = (ulong *)((ulong)(puVar2 + uVar46 + 0x13) & 0xfffffffffffffff0);
      uVar39 = *(ulong *)(param_3[-8] + 8) & puVar43[-0xf] |
               *(ulong *)(param_3[-6] + 8) & puVar43[-0xb] |
               *(ulong *)(param_3[-4] + 8) & puVar43[-7] | *(ulong *)(param_3[-2] + 8) & puVar43[-3]
               | *(ulong *)(*param_3 + 8) & puVar43[1] | *(ulong *)(param_3[2] + 8) & puVar43[5] |
               *(ulong *)(param_3[4] + 8) & puVar43[9] | *(ulong *)(param_3[6] + 8) & puVar43[0xd] |
               *(ulong *)(param_3[-7] + 8) & puVar43[-0xd] |
               *(ulong *)(param_3[-5] + 8) & puVar43[-9] | *(ulong *)(param_3[-3] + 8) & puVar43[-5]
               | *(ulong *)(param_3[-1] + 8) & puVar43[-1] | *(ulong *)(param_3[1] + 8) & puVar43[3]
               | *(ulong *)(param_3[3] + 8) & puVar43[7] | *(ulong *)(param_3[5] + 8) & puVar43[0xb]
               | *(ulong *)(param_3[7] + 8) & puVar43[0xf] |
               *(ulong *)param_3[-8] & puVar43[-0x10] | *(ulong *)param_3[-6] & puVar43[-0xc] |
               *(ulong *)param_3[-4] & puVar43[-8] | *(ulong *)param_3[-2] & puVar43[-4] |
               *(ulong *)*param_3 & *puVar43 | *(ulong *)param_3[2] & puVar43[4] |
               *(ulong *)param_3[4] & puVar43[8] | *(ulong *)param_3[6] & puVar43[0xc] |
               *(ulong *)param_3[-7] & puVar43[-0xe] | *(ulong *)param_3[-5] & puVar43[-10] |
               *(ulong *)param_3[-3] & puVar43[-6] | *(ulong *)param_3[-1] & puVar43[-2] |
               *(ulong *)param_3[1] & puVar43[2] | *(ulong *)param_3[3] & puVar43[6] |
               *(ulong *)param_3[5] & puVar43[10] | *(ulong *)param_3[7] & puVar43[0xe];
      param_3 = param_3 + 0x10;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = *puVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *param_2;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar39;
      auVar26 = auVar7 * auVar14 + auVar26;
      uVar36 = auVar26._0_8_;
      uVar38 = auVar26._8_8_;
      uVar41 = lVar45 * uVar36;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *param_4;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar41;
      uVar35 = param_2[1];
      uVar40 = SUB168(auVar8 * auVar15,8) + (ulong)CARRY8(uVar36,SUB168(auVar8 * auVar15,0));
      uVar36 = puVar2[1];
      uVar37 = 1;
      while( true ) {
        auVar30._8_8_ = 0;
        auVar30._0_8_ = uVar40;
        auVar29._8_8_ = 0;
        auVar29._0_8_ = uVar36;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = uVar38;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar40;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar35;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar39;
        auVar29 = auVar9 * auVar16 + auVar28 + auVar29;
        auVar27._8_8_ = 0;
        auVar27._0_8_ = auVar29._0_8_;
        uVar38 = auVar29._8_8_;
        uVar1 = uVar37 + 1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_4[uVar37];
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar41;
        auVar10 = auVar10 * auVar17;
        if (uVar1 == uVar46) break;
        uVar35 = param_2[uVar1];
        auVar27 = auVar10 + auVar21 + auVar27;
        uVar36 = puVar2[uVar1];
        uVar40 = auVar27._8_8_;
        puVar2[uVar37 - 1] = auVar27._0_8_;
        uVar37 = uVar1;
      }
      auVar49 = auVar29 + auVar10 + auVar30;
      uVar35 = puVar2[uVar46];
      puVar2[uVar46 - 2] = auVar49._0_8_;
      uVar36 = auVar49._8_8_;
      puVar2[uVar46 - 1] = uVar36 + uVar35;
      puVar2[uVar46] =
           (ulong)CARRY8(auVar10._8_8_ + (ulong)CARRY8(uVar40,auVar10._0_8_) +
                         (ulong)CARRY8(uVar40 + auVar10._0_8_,auVar29._0_8_),uVar38) +
           (ulong)CARRY8(uVar36,uVar35);
      uVar44 = uVar44 + 1;
    } while (uVar44 < uVar46);
    bVar47 = false;
    lVar45 = 0;
    uVar44 = *puVar2;
    uVar35 = uVar46;
    do {
      uVar36 = (ulong)bVar47;
      uVar37 = uVar44 - param_4[lVar45];
      bVar47 = uVar44 < param_4[lVar45] || uVar37 < uVar36;
      *(ulong *)(param_1 + lVar45 * 8) = uVar37 - uVar36;
      uVar44 = puVar2[lVar45 + 1];
      lVar45 = lVar45 + 1;
      uVar35 = uVar35 - 1;
    } while (uVar35 != 0);
    uVar35 = 0;
    do {
      uVar36 = *(ulong *)(param_1 + uVar35 * 8);
      uVar37 = puVar2[uVar35];
      puVar2[uVar35] = uVar35;
      *(ulong *)(param_1 + uVar35 * 8) =
           uVar37 & uVar44 - bVar47 | uVar36 & (uVar44 - bVar47 ^ 0xffffffffffffffff);
      uVar35 = uVar35 + 1;
      uVar46 = uVar46 - 1;
    } while (uVar46 != 0);
    return 1;
  }
  if ((DAT_0094b5a0 & 0x80108) != 0x80108) {
    uVar46 = (ulong)(param_6 << 3);
    uVar44 = (ulong)(auStack_170 + (uVar46 * -2 - param_1)) & 0xfff;
    if (uVar46 * 3 < uVar44) {
      uVar35 = uVar46 * -2 + 0xec0;
      lVar45 = uVar44 - uVar35;
      if (uVar44 < uVar35) {
        lVar45 = 0;
      }
      puVar42 = auStack_170 + (uVar46 * -2 - lVar45);
    }
    else {
      puVar42 = auStack_170 + (uVar46 * -2 - uVar44);
    }
    uVar44 = (ulong)puVar42 & 0xffffffffffffffc0;
    for (uVar46 = uVar44 + ((ulong)(&stack0xffffffffffffffd0 + -uVar44) & 0xfffffffffffff000);
        uVar44 < uVar46; uVar46 = uVar46 - 0x1000) {
    }
    *(BADSPACEBASE **)(uVar46 + 0x28) = register0x00000020;
    *(undefined8 *)(uVar46 - 8) = 0x4c225f;
    FUN_004c22a0();
    return 1;
  }
  uVar46 = (ulong)(param_6 << 3);
  uVar44 = (ulong)(auStack_170 + (uVar46 * -2 - param_1)) & 0xfff;
  if (uVar46 * 3 < uVar44) {
    uVar35 = uVar46 * -2 + 0xec0;
    lVar45 = uVar44 - uVar35;
    if (uVar44 < uVar35) {
      lVar45 = 0;
    }
    puVar42 = auStack_170 + (uVar46 * -2 - lVar45);
  }
  else {
    puVar42 = auStack_170 + (uVar46 * -2 - uVar44);
  }
  uVar44 = (ulong)puVar42 & 0xffffffffffffffc0;
  for (uVar46 = uVar44 + ((ulong)(&stack0xffffffffffffffd0 + -uVar44) & 0xfffffffffffff000);
      uVar44 < uVar46; uVar46 = uVar46 - 0x1000) {
  }
  *(long *)(uVar46 + 0x20) = *param_5;
  *(BADSPACEBASE **)(uVar46 + 0x28) = register0x00000020;
  *(undefined8 *)(uVar46 - 8) = 0x4c3803;
  FUN_004c3840();
  return 1;
}

