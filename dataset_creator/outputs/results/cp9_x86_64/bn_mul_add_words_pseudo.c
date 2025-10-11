
ulong bn_mul_add_words(ulong *rp,ulong *ap,int num,ulong w)

{
  ulong *puVar1;
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
  undefined1 auVar22 [16];
  ulong uVar23;
  ulong uVar24;
  ulong *puVar25;
  
  uVar24 = 0;
  if (0 < num) {
    puVar25 = ap;
    if ((num & 0xfffffffcU) != 0) {
      do {
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar24;
        num = num - 4;
        ap = puVar25 + 4;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = w;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = *puVar25;
        auVar16 = auVar2 * auVar9 + auVar16;
        uVar23 = auVar16._0_8_;
        uVar24 = *rp;
        *rp = *rp + uVar23;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = auVar16._8_8_ + (ulong)CARRY8(uVar24,uVar23);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = w;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = puVar25[1];
        auVar17 = auVar3 * auVar10 + auVar17;
        uVar23 = auVar17._0_8_;
        puVar1 = rp + 1;
        uVar24 = *puVar1;
        *puVar1 = *puVar1 + uVar23;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = auVar17._8_8_ + (ulong)CARRY8(uVar24,uVar23);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = w;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = puVar25[2];
        auVar18 = auVar4 * auVar11 + auVar18;
        uVar23 = auVar18._0_8_;
        puVar1 = rp + 2;
        uVar24 = *puVar1;
        *puVar1 = *puVar1 + uVar23;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = auVar18._8_8_ + (ulong)CARRY8(uVar24,uVar23);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = w;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = puVar25[3];
        auVar19 = auVar5 * auVar12 + auVar19;
        uVar23 = auVar19._0_8_;
        puVar25 = rp + 3;
        uVar24 = *puVar25;
        *puVar25 = *puVar25 + uVar23;
        uVar24 = auVar19._8_8_ + (ulong)CARRY8(uVar24,uVar23);
        rp = rp + 4;
        puVar25 = ap;
      } while ((num & 0xfffffffcU) != 0);
      if (num == 0) {
        return uVar24;
      }
    }
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar24;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = w;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = *ap;
    auVar20 = auVar6 * auVar13 + auVar20;
    uVar23 = auVar20._0_8_;
    uVar24 = *rp;
    *rp = *rp + uVar23;
    uVar24 = auVar20._8_8_ + (ulong)CARRY8(uVar24,uVar23);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar24;
    if (num != 1) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = w;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = ap[1];
      auVar21 = auVar7 * auVar14 + auVar21;
      uVar23 = auVar21._0_8_;
      puVar25 = rp + 1;
      uVar24 = *puVar25;
      *puVar25 = *puVar25 + uVar23;
      uVar24 = auVar21._8_8_ + (ulong)CARRY8(uVar24,uVar23);
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar24;
      if (num != 2) {
        auVar8._8_8_ = 0;
        auVar8._0_8_ = w;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = ap[2];
        auVar22 = auVar8 * auVar15 + auVar22;
        uVar23 = auVar22._0_8_;
        puVar25 = rp + 2;
        uVar24 = *puVar25;
        *puVar25 = *puVar25 + uVar23;
        return auVar22._8_8_ + (ulong)CARRY8(uVar24,uVar23);
      }
    }
  }
  return uVar24;
}

