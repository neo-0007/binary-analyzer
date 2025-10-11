
void poly1305_blocks(ulong *param_1,ulong *param_2,ulong param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  
  param_3 = param_3 >> 4;
  if (param_3 != 0) {
    uVar2 = param_1[3];
    uVar3 = param_1[4];
    uVar13 = *param_1;
    uVar16 = param_1[1];
    uVar17 = param_1[2];
    uVar19 = (uVar3 >> 2) + uVar3;
    do {
      uVar14 = *param_2;
      uVar18 = *param_2;
      puVar1 = param_2 + 1;
      uVar20 = uVar16 + *puVar1;
      uVar12 = uVar20 + CARRY8(uVar13,uVar14);
      param_2 = param_2 + 2;
      lVar15 = uVar17 + param_4 +
               (ulong)(CARRY8(uVar16,*puVar1) || CARRY8(uVar20,(ulong)CARRY8(uVar13,uVar14)));
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar3;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar13 + uVar18;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar2;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar13 + uVar18;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar2;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar12;
      auVar4 = auVar4 * auVar8 + auVar6 * auVar10;
      uVar17 = auVar4._0_8_;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar19;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar12;
      auVar5 = auVar7 * auVar11 + auVar5 * auVar9;
      uVar20 = auVar5._0_8_;
      uVar16 = auVar5._8_8_;
      uVar13 = lVar15 * uVar19;
      uVar18 = uVar17 + uVar13;
      uVar14 = uVar16 + uVar18;
      uVar18 = auVar4._8_8_ + (ulong)CARRY8(uVar17,uVar13) + lVar15 * uVar2 +
               (ulong)CARRY8(uVar16,uVar18);
      uVar16 = (uVar18 & 0xfffffffffffffffc) + (uVar18 >> 2);
      uVar13 = uVar20 + uVar16;
      uVar17 = (ulong)CARRY8(uVar20,uVar16);
      uVar16 = uVar14 + uVar17;
      uVar17 = (uVar18 & 3) + (ulong)CARRY8(uVar14,uVar17);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    *param_1 = uVar13;
    param_1[1] = uVar16;
    param_1[2] = uVar17;
  }
  return;
}

