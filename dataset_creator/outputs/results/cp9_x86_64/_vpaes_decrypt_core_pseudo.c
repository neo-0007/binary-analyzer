
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 _vpaes_decrypt_core(undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [32];
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM9 [16];
  undefined1 in_XMM10 [16];
  undefined1 in_XMM11 [16];
  
  puVar3 = (undefined *)(ulong)*(uint *)param_3[0xf];
  auVar6 = ~in_XMM9 & in_XMM0;
  auVar5._0_4_ = auVar6._0_4_ >> 4;
  auVar5._4_4_ = auVar6._4_4_ >> 4;
  auVar5._8_4_ = auVar6._8_4_ >> 4;
  auVar5._12_4_ = auVar6._12_4_ >> 4;
  auVar6 = pshufb(_DAT_0049a690,in_XMM0 & in_XMM9);
  auVar5 = pshufb(_DAT_0049a6a0,auVar5);
  uVar4 = ((long)puVar3 << 4 ^ 0x30U) & 0x30;
  auVar5 = auVar5 ^ auVar6 ^ *param_3;
  param_3 = param_3 + 1;
  auVar6 = _DAT_0049a520;
  puVar2 = &DAT_0049a6d0 + uVar4;
  while( true ) {
    auVar7 = ~in_XMM9 & auVar5;
    auVar9._0_4_ = auVar7._0_4_ >> 4;
    auVar9._4_4_ = auVar7._4_4_ >> 4;
    auVar9._8_4_ = auVar7._8_4_ >> 4;
    auVar9._12_4_ = auVar7._12_4_ >> 4;
    auVar7 = pshufb(in_XMM11,auVar5 & in_XMM9);
    auVar5 = auVar5 & in_XMM9 ^ auVar9;
    auVar8 = pshufb(in_XMM10,auVar9);
    auVar11 = pshufb(in_XMM10,auVar5);
    auVar8 = pshufb(in_XMM10,auVar8 ^ auVar7);
    auVar8 = auVar8 ^ auVar5;
    auVar5 = pshufb(in_XMM10,auVar11 ^ auVar7);
    auVar5 = auVar5 ^ auVar9;
    if (puVar2 == (undefined *)0x0) break;
    auVar9 = pshufb(_DAT_0049a6b0,auVar8);
    auVar7 = pshufb(_DAT_0049a6c0,auVar5);
    auVar11 = pshufb(_DAT_0049a6d0,auVar8);
    auVar7 = pshufb(*param_3 ^ auVar9 ^ auVar7,auVar6);
    auVar9 = pshufb(_DAT_0049a6e0,auVar5);
    auVar10 = pshufb(_DAT_0049a6f0,auVar8);
    auVar7 = pshufb(auVar7 ^ auVar11 ^ auVar9,auVar6);
    auVar9 = pshufb(_DAT_0049a700,auVar5);
    auVar8 = pshufb(_DAT_0049a710,auVar8);
    auVar7 = pshufb(auVar7 ^ auVar10 ^ auVar9,auVar6);
    auVar5 = pshufb(_DAT_0049a720,auVar5);
    param_3 = param_3 + 1;
    auVar1._16_16_ = auVar6;
    auVar1._0_16_ = auVar6;
    auVar6 = auVar1._12_16_;
    auVar5 = auVar7 ^ auVar8 ^ auVar5;
    puVar3 = puVar3 + -1;
    puVar2 = puVar3;
  }
  auVar7 = pshufb(_DAT_0049a730,auVar8);
  auVar6 = pshufb(_DAT_0049a740,auVar5);
  auVar6 = pshufb(auVar6 ^ auVar7 ^ *param_3,*(undefined1 (*) [16])(&DAT_0049a570 + uVar4));
  return auVar6._0_8_;
}

