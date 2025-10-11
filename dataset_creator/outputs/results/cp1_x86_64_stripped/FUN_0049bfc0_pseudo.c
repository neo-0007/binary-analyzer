
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0049bfc0(undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  ulong uVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM9 [16];
  undefined1 in_XMM10 [16];
  undefined1 in_XMM11 [16];
  undefined1 in_XMM12 [16];
  undefined1 in_XMM13 [16];
  undefined1 in_XMM14 [16];
  undefined1 in_XMM15 [16];
  
  uVar4 = 0x10;
  pauVar2 = (undefined1 (*) [16])(ulong)*(uint *)param_3[0xf];
  auVar5 = ~in_XMM9 & in_XMM0;
  auVar6._0_4_ = auVar5._0_4_ >> 4;
  auVar6._4_4_ = auVar5._4_4_ >> 4;
  auVar6._8_4_ = auVar5._8_4_ >> 4;
  auVar6._12_4_ = auVar5._12_4_ >> 4;
  auVar7 = pshufb(_DAT_0049c7f0,in_XMM0 & in_XMM9);
  auVar5 = pshufb(_DAT_0049c800,auVar6);
  pauVar3 = param_3 + 1;
  auVar5 = auVar5 ^ auVar7 ^ *param_3;
  pauVar1 = pauVar3;
  while( true ) {
    auVar6 = ~in_XMM9 & auVar5;
    auVar7._0_4_ = auVar6._0_4_ >> 4;
    auVar7._4_4_ = auVar6._4_4_ >> 4;
    auVar7._8_4_ = auVar6._8_4_ >> 4;
    auVar7._12_4_ = auVar6._12_4_ >> 4;
    auVar9 = pshufb(in_XMM11,auVar5 & in_XMM9);
    auVar5 = auVar5 & in_XMM9 ^ auVar7;
    auVar6 = pshufb(in_XMM10,auVar7);
    auVar8 = pshufb(in_XMM10,auVar5);
    auVar6 = pshufb(in_XMM10,auVar6 ^ auVar9);
    auVar6 = auVar6 ^ auVar5;
    auVar5 = pshufb(in_XMM10,auVar8 ^ auVar9);
    auVar5 = auVar5 ^ auVar7;
    if (pauVar1 == (undefined1 (*) [16])0x0) break;
    auVar8 = pshufb(in_XMM13,auVar6);
    auVar7 = pshufb(in_XMM12,auVar5);
    auVar7 = auVar7 ^ auVar8 ^ *pauVar3;
    auVar8 = pshufb(in_XMM15,auVar6);
    auVar5 = pshufb(in_XMM14,auVar5);
    auVar6 = pshufb(auVar7,*(undefined1 (*) [16])(&DAT_0049c870 + uVar4));
    pauVar3 = pauVar3 + 1;
    auVar6 = auVar6 ^ auVar5 ^ auVar8;
    auVar7 = pshufb(auVar7,*(undefined1 (*) [16])(&DAT_0049c8b0 + uVar4));
    auVar5 = pshufb(auVar6,*(undefined1 (*) [16])(&DAT_0049c870 + uVar4));
    uVar4 = uVar4 + 0x10 & 0x30;
    pauVar2 = (undefined1 (*) [16])(pauVar2[-1] + 0xf);
    auVar5 = auVar5 ^ auVar7 ^ auVar6;
    pauVar1 = pauVar2;
  }
  auVar6 = pshufb(_DAT_0049c850,auVar6);
  auVar5 = pshufb(_DAT_0049c860,auVar5);
  auVar5 = pshufb(auVar5 ^ auVar6 ^ *pauVar3,*(undefined1 (*) [16])(&DAT_0049c8f0 + uVar4));
  return auVar5._0_8_;
}

