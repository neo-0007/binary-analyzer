
/* WARNING: Removing unreachable block (ram,0x0049a0f2) */
/* WARNING: Removing unreachable block (ram,0x0049a0e5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong _vpaes_schedule_round(void)

{
  undefined1 auVar1 [32];
  undefined4 in_XMM0_Dd;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong in_XMM7_Qa;
  undefined1 in_XMM8 [16];
  undefined1 in_XMM9 [16];
  undefined1 in_XMM10 [16];
  undefined1 in_XMM11 [16];
  undefined1 in_XMM12 [16];
  undefined1 in_XMM13 [16];
  
  in_XMM7_Qa = in_XMM7_Qa ^ in_XMM8[0xf];
  auVar2._4_4_ = in_XMM0_Dd;
  auVar2._0_4_ = in_XMM0_Dd;
  auVar2._8_4_ = in_XMM0_Dd;
  auVar2._12_4_ = in_XMM0_Dd;
  auVar1._16_16_ = auVar2;
  auVar1._0_16_ = auVar2;
  auVar2 = ~in_XMM9 & auVar1._1_16_;
  auVar3._0_4_ = auVar2._0_4_ >> 4;
  auVar3._4_4_ = auVar2._4_4_ >> 4;
  auVar3._8_4_ = auVar2._8_4_ >> 4;
  auVar3._12_4_ = auVar2._12_4_ >> 4;
  auVar2 = auVar1._1_16_ & in_XMM9;
  auVar4 = pshufb(in_XMM11,auVar2);
  auVar2 = auVar2 ^ auVar3;
  auVar5 = pshufb(in_XMM10,auVar3);
  auVar6 = pshufb(in_XMM10,auVar2);
  auVar5 = pshufb(in_XMM10,auVar5 ^ auVar4);
  auVar4 = pshufb(in_XMM10,auVar6 ^ auVar4);
  auVar5 = pshufb(in_XMM13,auVar5 ^ auVar2);
  auVar2 = pshufb(in_XMM12,auVar4 ^ auVar3);
  return auVar2._0_8_ ^ auVar5._0_8_ ^ in_XMM7_Qa << 0x20 ^ in_XMM7_Qa ^ (ulong)DAT_0049a5c0;
}

