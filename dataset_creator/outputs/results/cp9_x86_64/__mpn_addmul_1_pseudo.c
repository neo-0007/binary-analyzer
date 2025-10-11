
long __mpn_addmul_1(ulong *param_1,ulong *param_2,long param_3,ulong param_4)

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
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  bool bVar21;
  
  uVar15 = -param_3;
  uVar19 = *param_1;
  param_1 = param_1 + param_3 + -2;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_4;
  auVar13 = auVar1 * auVar7;
  if ((uVar15 & 1) == 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2[1];
    auVar8._8_8_ = 0;
    auVar8._0_8_ = param_4;
    auVar2 = auVar2 * auVar8;
    uVar15 = uVar15 + 2;
    if ((long)uVar15 < 0) {
      uVar14 = param_2[param_3 + uVar15];
      while( true ) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar14;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = param_4;
        auVar5 = auVar5 * auVar11;
        uVar14 = param_2[param_3 + uVar15 + 1];
        uVar16 = (ulong)CARRY8(uVar19,auVar13._0_8_);
        uVar17 = auVar2._0_8_ + auVar13._8_8_;
        param_1[uVar15] = uVar19 + auVar13._0_8_;
        uVar19 = param_1[uVar15 + 1];
        auVar13._8_8_ =
             auVar2._8_8_ + (ulong)(CARRY8(auVar2._0_8_,auVar13._8_8_) || CARRY8(uVar17,uVar16));
        auVar13._0_8_ = uVar17 + uVar16;
        uVar16 = uVar15;
LAB_00788761:
        uVar18 = auVar13._8_8_;
        uVar17 = auVar13._0_8_;
        uVar20 = auVar5._0_8_;
        uVar15 = uVar16 + 2;
        if (-1 < (long)uVar15) break;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar14;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_4;
        auVar2 = auVar4 * auVar10;
        bVar21 = CARRY8(uVar19,uVar17);
        uVar14 = param_2[param_3 + uVar15];
        param_1[uVar16 + 1] = uVar19 + uVar17;
        uVar19 = param_1[uVar15];
        auVar13._8_8_ =
             auVar5._8_8_ + (ulong)(CARRY8(uVar20,uVar18) || CARRY8(uVar20 + uVar18,(ulong)bVar21));
        auVar13._0_8_ = uVar20 + uVar18 + (ulong)bVar21;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar14;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = param_4;
      auVar2 = auVar6 * auVar12;
      param_1[-1] = uVar19 + uVar17;
      auVar13._8_8_ =
           auVar5._8_8_ +
           (ulong)(CARRY8(uVar20,uVar18) || CARRY8(uVar20 + uVar18,(ulong)CARRY8(uVar19,uVar17)));
      auVar13._0_8_ = uVar20 + uVar18 + (ulong)CARRY8(uVar19,uVar17);
    }
    uVar19 = (ulong)CARRY8(*param_1,auVar13._0_8_);
    uVar14 = auVar2._0_8_ + auVar13._8_8_;
    *param_1 = *param_1 + auVar13._0_8_;
    auVar13._8_8_ =
         auVar2._8_8_ + (ulong)(CARRY8(auVar2._0_8_,auVar13._8_8_) || CARRY8(uVar14,uVar19));
    auVar13._0_8_ = uVar14 + uVar19;
  }
  else {
    uVar15 = uVar15 + 1;
    if ((long)uVar15 < 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2[param_3 + uVar15];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_4;
      auVar5 = auVar3 * auVar9;
      uVar14 = param_2[2];
      uVar16 = uVar15;
      goto LAB_00788761;
    }
  }
  uVar19 = param_1[1];
  param_1[1] = uVar19 + auVar13._0_8_;
  return (uVar15 & 0xffffffff) + auVar13._8_8_ + (ulong)CARRY8(uVar19,auVar13._0_8_);
}

