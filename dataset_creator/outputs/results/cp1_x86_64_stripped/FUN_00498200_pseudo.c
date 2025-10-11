
undefined8 FUN_00498200(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long in_RAX;
  long in_RCX;
  long in_R11;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_XMM1_Dc;
  undefined4 uVar9;
  undefined4 in_XMM1_Dd;
  undefined4 uVar10;
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM7 [16];
  undefined1 in_XMM9 [16];
  undefined1 in_XMM15 [16];
  
  auVar11._8_4_ = in_XMM1_Dc;
  auVar11._0_8_ = param_2;
  auVar11._12_4_ = in_XMM1_Dd;
  auVar11 = aesdec(in_XMM2 ^ in_XMM7 ^ in_XMM15 ^ in_XMM9,auVar11);
  uVar7 = *(undefined4 *)(in_R11 + 0x30);
  uVar8 = *(undefined4 *)(in_R11 + 0x34);
  uVar9 = *(undefined4 *)(in_R11 + 0x38);
  uVar10 = *(undefined4 *)(in_R11 + 0x3c);
  auVar11 = aesdec(auVar11,*(undefined1 (*) [16])(in_R11 + 0x20));
  uVar3 = *(undefined4 *)(in_R11 + 0x40);
  uVar4 = *(undefined4 *)(in_R11 + 0x44);
  uVar5 = *(undefined4 *)(in_R11 + 0x48);
  uVar6 = *(undefined4 *)(in_R11 + 0x4c);
  do {
    auVar1._4_4_ = uVar8;
    auVar1._0_4_ = uVar7;
    auVar1._8_4_ = uVar9;
    auVar1._12_4_ = uVar10;
    auVar11 = aesdec(auVar11,auVar1);
    auVar1 = *(undefined1 (*) [16])(in_RCX + in_RAX);
    uVar7 = auVar1._0_4_;
    uVar8 = auVar1._4_4_;
    uVar9 = auVar1._8_4_;
    uVar10 = auVar1._12_4_;
    in_RAX = in_RAX + 0x20;
    auVar2._4_4_ = uVar4;
    auVar2._0_4_ = uVar3;
    auVar2._8_4_ = uVar5;
    auVar2._12_4_ = uVar6;
    auVar11 = aesdec(auVar11,auVar2);
    auVar2 = *(undefined1 (*) [16])(in_RCX + -0x10 + in_RAX);
    uVar3 = auVar2._0_4_;
    uVar4 = auVar2._4_4_;
    uVar5 = auVar2._8_4_;
    uVar6 = auVar2._12_4_;
  } while (in_RAX != 0);
  auVar11 = aesdec(auVar11,auVar1);
  aesdeclast(auVar11,in_XMM7 ^ in_XMM15);
  return auVar2._0_8_;
}

