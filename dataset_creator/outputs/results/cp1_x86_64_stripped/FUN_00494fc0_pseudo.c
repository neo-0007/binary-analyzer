
undefined8 FUN_00494fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int in_EAX;
  ulong uVar5;
  long lVar6;
  uint *in_RCX;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  undefined1 auVar15 [16];
  uint in_XMM3_Dc;
  uint in_XMM3_Dd;
  undefined1 auVar16 [16];
  
  uVar5 = (ulong)(uint)(in_EAX << 4);
  uVar11 = in_RCX[4];
  uVar12 = in_RCX[5];
  uVar13 = in_RCX[6];
  uVar14 = in_RCX[7];
  auVar15._0_4_ = (uint)param_3 ^ *in_RCX;
  auVar15._4_4_ = (uint)((ulong)param_3 >> 0x20) ^ in_RCX[1];
  auVar15._8_4_ = in_XMM2_Dc ^ in_RCX[2];
  auVar15._12_4_ = in_XMM2_Dd ^ in_RCX[3];
  auVar16._0_4_ = (uint)param_4 ^ *in_RCX;
  auVar16._4_4_ = (uint)((ulong)param_4 >> 0x20) ^ in_RCX[1];
  auVar16._8_4_ = in_XMM3_Dc ^ in_RCX[2];
  auVar16._12_4_ = in_XMM3_Dd ^ in_RCX[3];
  uVar7 = in_RCX[8];
  uVar8 = in_RCX[9];
  uVar9 = in_RCX[10];
  uVar10 = in_RCX[0xb];
  lVar6 = 0x10 - uVar5;
  do {
    auVar1._4_4_ = uVar12;
    auVar1._0_4_ = uVar11;
    auVar1._8_4_ = uVar13;
    auVar1._12_4_ = uVar14;
    auVar15 = aesdec(auVar15,auVar1);
    auVar4._4_4_ = uVar12;
    auVar4._0_4_ = uVar11;
    auVar4._8_4_ = uVar13;
    auVar4._12_4_ = uVar14;
    auVar16 = aesdec(auVar16,auVar4);
    auVar1 = *(undefined1 (*) [16])((long)in_RCX + lVar6 + uVar5 + 0x20);
    uVar11 = auVar1._0_4_;
    uVar12 = auVar1._4_4_;
    uVar13 = auVar1._8_4_;
    uVar14 = auVar1._12_4_;
    lVar6 = lVar6 + 0x20;
    auVar2._4_4_ = uVar8;
    auVar2._0_4_ = uVar7;
    auVar2._8_4_ = uVar9;
    auVar2._12_4_ = uVar10;
    auVar15 = aesdec(auVar15,auVar2);
    auVar3._4_4_ = uVar8;
    auVar3._0_4_ = uVar7;
    auVar3._8_4_ = uVar9;
    auVar3._12_4_ = uVar10;
    auVar16 = aesdec(auVar16,auVar3);
    auVar2 = *(undefined1 (*) [16])((long)in_RCX + lVar6 + uVar5 + 0x10);
    uVar7 = auVar2._0_4_;
    uVar8 = auVar2._4_4_;
    uVar9 = auVar2._8_4_;
    uVar10 = auVar2._12_4_;
  } while (lVar6 != 0);
  auVar15 = aesdec(auVar15,auVar1);
  auVar16 = aesdec(auVar16,auVar1);
  aesdeclast(auVar15,auVar2);
  aesdeclast(auVar16,auVar2);
  return auVar2._0_8_;
}

