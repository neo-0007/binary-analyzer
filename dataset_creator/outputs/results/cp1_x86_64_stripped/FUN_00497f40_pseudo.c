
undefined8 FUN_00497f40(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long in_RAX;
  long in_RCX;
  long unaff_RBX;
  long in_R8;
  long in_R11;
  long unaff_R12;
  long unaff_R13;
  long unaff_R14;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 in_XMM1_Dc;
  undefined4 uVar18;
  undefined4 in_XMM1_Dd;
  undefined4 uVar19;
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM6 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM7 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 in_XMM9 [16];
  undefined1 in_XMM10 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 in_XMM15 [16];
  undefined1 auVar33 [16];
  
  auVar28 = in_XMM10 ^ in_XMM15 ^ in_XMM9;
  auVar29 = *(undefined1 (*) [16])(unaff_RBX + unaff_R12) ^ auVar28;
  auVar30 = in_XMM10 ^ auVar29;
  auVar31 = *(undefined1 (*) [16])(unaff_RBX + unaff_R13) ^ auVar30;
  auVar32 = in_XMM10 ^ auVar31;
  auVar33 = *(undefined1 (*) [16])(unaff_RBX + unaff_R14) ^ auVar32;
  auVar26 = *(undefined1 (*) [16])(in_R11 + 0x20);
  lVar2 = 0;
  if (in_R8 + 1U != 0) {
    for (; (in_R8 + 1U >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  lVar2 = 0;
  if (in_R8 + 3U != 0) {
    for (; (in_R8 + 3U >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  lVar2 = 0;
  if (in_R8 + 5U != 0) {
    for (; (in_R8 + 5U >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  auVar20._8_4_ = in_XMM1_Dc;
  auVar20._0_8_ = param_2;
  auVar20._12_4_ = in_XMM1_Dd;
  auVar20 = aesdec(in_XMM2 ^ auVar28,auVar20);
  auVar21._8_4_ = in_XMM1_Dc;
  auVar21._0_8_ = param_2;
  auVar21._12_4_ = in_XMM1_Dd;
  auVar21 = aesdec(in_XMM3 ^ auVar29,auVar21);
  auVar22._8_4_ = in_XMM1_Dc;
  auVar22._0_8_ = param_2;
  auVar22._12_4_ = in_XMM1_Dd;
  auVar22 = aesdec(in_XMM4 ^ auVar30,auVar22);
  auVar23._8_4_ = in_XMM1_Dc;
  auVar23._0_8_ = param_2;
  auVar23._12_4_ = in_XMM1_Dd;
  auVar23 = aesdec(in_XMM5 ^ auVar31,auVar23);
  auVar24._8_4_ = in_XMM1_Dc;
  auVar24._0_8_ = param_2;
  auVar24._12_4_ = in_XMM1_Dd;
  auVar24 = aesdec(in_XMM6 ^ auVar32,auVar24);
  auVar25._8_4_ = in_XMM1_Dc;
  auVar25._0_8_ = param_2;
  auVar25._12_4_ = in_XMM1_Dd;
  auVar25 = aesdec(in_XMM7 ^ auVar33,auVar25);
  uVar16 = *(undefined4 *)(in_R11 + 0x30);
  uVar17 = *(undefined4 *)(in_R11 + 0x34);
  uVar18 = *(undefined4 *)(in_R11 + 0x38);
  uVar19 = *(undefined4 *)(in_R11 + 0x3c);
  auVar20 = aesdec(auVar20,auVar26);
  auVar21 = aesdec(auVar21,auVar26);
  auVar22 = aesdec(auVar22,auVar26);
  auVar23 = aesdec(auVar23,auVar26);
  auVar24 = aesdec(auVar24,auVar26);
  auVar26 = aesdec(auVar25,auVar26);
  uVar12 = *(undefined4 *)(in_R11 + 0x40);
  uVar13 = *(undefined4 *)(in_R11 + 0x44);
  uVar14 = *(undefined4 *)(in_R11 + 0x48);
  uVar15 = *(undefined4 *)(in_R11 + 0x4c);
  do {
    auVar27._4_4_ = uVar17;
    auVar27._0_4_ = uVar16;
    auVar27._8_4_ = uVar18;
    auVar27._12_4_ = uVar19;
    auVar20 = aesdec(auVar20,auVar27);
    auVar7._4_4_ = uVar17;
    auVar7._0_4_ = uVar16;
    auVar7._8_4_ = uVar18;
    auVar7._12_4_ = uVar19;
    auVar21 = aesdec(auVar21,auVar7);
    auVar8._4_4_ = uVar17;
    auVar8._0_4_ = uVar16;
    auVar8._8_4_ = uVar18;
    auVar8._12_4_ = uVar19;
    auVar22 = aesdec(auVar22,auVar8);
    auVar9._4_4_ = uVar17;
    auVar9._0_4_ = uVar16;
    auVar9._8_4_ = uVar18;
    auVar9._12_4_ = uVar19;
    auVar23 = aesdec(auVar23,auVar9);
    auVar10._4_4_ = uVar17;
    auVar10._0_4_ = uVar16;
    auVar10._8_4_ = uVar18;
    auVar10._12_4_ = uVar19;
    auVar24 = aesdec(auVar24,auVar10);
    auVar11._4_4_ = uVar17;
    auVar11._0_4_ = uVar16;
    auVar11._8_4_ = uVar18;
    auVar11._12_4_ = uVar19;
    auVar27 = aesdec(auVar26,auVar11);
    auVar25 = *(undefined1 (*) [16])(in_RCX + in_RAX);
    uVar16 = auVar25._0_4_;
    uVar17 = auVar25._4_4_;
    uVar18 = auVar25._8_4_;
    uVar19 = auVar25._12_4_;
    in_RAX = in_RAX + 0x20;
    auVar26._4_4_ = uVar13;
    auVar26._0_4_ = uVar12;
    auVar26._8_4_ = uVar14;
    auVar26._12_4_ = uVar15;
    auVar20 = aesdec(auVar20,auVar26);
    auVar1._4_4_ = uVar13;
    auVar1._0_4_ = uVar12;
    auVar1._8_4_ = uVar14;
    auVar1._12_4_ = uVar15;
    auVar21 = aesdec(auVar21,auVar1);
    auVar3._4_4_ = uVar13;
    auVar3._0_4_ = uVar12;
    auVar3._8_4_ = uVar14;
    auVar3._12_4_ = uVar15;
    auVar22 = aesdec(auVar22,auVar3);
    auVar4._4_4_ = uVar13;
    auVar4._0_4_ = uVar12;
    auVar4._8_4_ = uVar14;
    auVar4._12_4_ = uVar15;
    auVar23 = aesdec(auVar23,auVar4);
    auVar5._4_4_ = uVar13;
    auVar5._0_4_ = uVar12;
    auVar5._8_4_ = uVar14;
    auVar5._12_4_ = uVar15;
    auVar24 = aesdec(auVar24,auVar5);
    auVar6._4_4_ = uVar13;
    auVar6._0_4_ = uVar12;
    auVar6._8_4_ = uVar14;
    auVar6._12_4_ = uVar15;
    auVar26 = aesdec(auVar27,auVar6);
    auVar1 = *(undefined1 (*) [16])(in_RCX + -0x10 + in_RAX);
    uVar12 = auVar1._0_4_;
    uVar13 = auVar1._4_4_;
    uVar14 = auVar1._8_4_;
    uVar15 = auVar1._12_4_;
  } while (in_RAX != 0);
  auVar20 = aesdec(auVar20,auVar25);
  auVar21 = aesdec(auVar21,auVar25);
  auVar22 = aesdec(auVar22,auVar25);
  auVar23 = aesdec(auVar23,auVar25);
  auVar24 = aesdec(auVar24,auVar25);
  auVar26 = aesdec(auVar26,auVar25);
  aesdeclast(auVar20,auVar28 ^ in_XMM9);
  aesdeclast(auVar21,auVar29 ^ in_XMM9);
  aesdeclast(auVar22,auVar30 ^ in_XMM9);
  aesdeclast(auVar23,auVar31 ^ in_XMM9);
  aesdeclast(auVar24,auVar32 ^ in_XMM9);
  aesdeclast(auVar26,auVar33 ^ in_XMM9);
  return auVar1._0_8_;
}

