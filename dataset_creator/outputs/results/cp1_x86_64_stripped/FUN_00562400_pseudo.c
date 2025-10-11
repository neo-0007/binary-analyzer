
long FUN_00562400(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong in_RAX;
  ulong unaff_RBX;
  long unaff_RBP;
  ulong uVar9;
  ulong in_R11;
  ulong unaff_R13;
  ulong unaff_R14;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = in_RAX;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = unaff_R14;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = in_R11;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = unaff_R14;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = in_R11;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = unaff_RBX;
  auVar1 = auVar1 * auVar5 + auVar3 * auVar7;
  uVar9 = auVar1._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = unaff_R13;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = unaff_RBX;
  uVar9 = auVar1._8_8_ + (ulong)CARRY8(uVar9,unaff_RBP * unaff_R13) + unaff_RBP * in_R11 +
          (ulong)CARRY8(SUB168(auVar2 * auVar6,8) + SUB168(auVar4 * auVar8,8) +
                        (ulong)CARRY8(SUB168(auVar2 * auVar6,0),SUB168(auVar4 * auVar8,0)),
                        uVar9 + unaff_RBP * unaff_R13);
  return (uVar9 & 0xfffffffffffffffc) + (uVar9 >> 2);
}

