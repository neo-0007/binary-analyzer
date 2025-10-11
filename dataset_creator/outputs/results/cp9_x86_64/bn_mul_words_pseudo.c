
ulong bn_mul_words(ulong *rp,ulong *ap,int num,ulong w)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong uVar22;
  ulong *puVar23;
  ulong *puVar24;
  
  uVar22 = 0;
  if (0 < num) {
    puVar23 = ap;
    puVar24 = rp;
    if ((num & 0xfffffffcU) != 0) {
      do {
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar22;
        num = num - 4;
        ap = puVar23 + 4;
        rp = puVar24 + 4;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = w;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *puVar23;
        auVar15 = auVar1 * auVar8 + auVar15;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = auVar15._8_8_;
        *puVar24 = auVar15._0_8_;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = w;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = puVar23[1];
        auVar16 = auVar2 * auVar9 + auVar16;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = auVar16._8_8_;
        puVar24[1] = auVar16._0_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = w;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = puVar23[2];
        auVar17 = auVar3 * auVar10 + auVar17;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = auVar17._8_8_;
        puVar24[2] = auVar17._0_8_;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = w;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = puVar23[3];
        auVar18 = auVar4 * auVar11 + auVar18;
        uVar22 = auVar18._8_8_;
        puVar24[3] = auVar18._0_8_;
        puVar23 = ap;
        puVar24 = rp;
      } while ((num & 0xfffffffcU) != 0);
      if (num == 0) {
        return uVar22;
      }
    }
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar22;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = w;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *ap;
    auVar19 = auVar5 * auVar12 + auVar19;
    uVar22 = auVar19._8_8_;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar22;
    *rp = auVar19._0_8_;
    if (num != 1) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = w;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = ap[1];
      auVar20 = auVar6 * auVar13 + auVar20;
      uVar22 = auVar20._8_8_;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar22;
      rp[1] = auVar20._0_8_;
      if (num != 2) {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = w;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = ap[2];
        auVar21 = auVar7 * auVar14 + auVar21;
        rp[2] = auVar21._0_8_;
        return auVar21._8_8_;
      }
    }
  }
  return uVar22;
}

