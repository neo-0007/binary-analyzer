
/* WARNING: Removing unreachable block (ram,0x0049a0f2) */
/* WARNING: Removing unreachable block (ram,0x0049a0e5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong _vpaes_schedule_low_round(void)

{
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong in_XMM7_Qa;
  undefined1 in_XMM9 [16];
  undefined1 in_XMM10 [16];
  undefined1 in_XMM11 [16];
  undefined1 in_XMM12 [16];
  undefined1 in_XMM13 [16];
  
  auVar1 = ~in_XMM9 & in_XMM0;
  auVar2._0_4_ = auVar1._0_4_ >> 4;
  auVar2._4_4_ = auVar1._4_4_ >> 4;
  auVar2._8_4_ = auVar1._8_4_ >> 4;
  auVar2._12_4_ = auVar1._12_4_ >> 4;
  auVar3 = pshufb(in_XMM11,in_XMM0 & in_XMM9);
  auVar1 = in_XMM0 & in_XMM9 ^ auVar2;
  auVar4 = pshufb(in_XMM10,auVar2);
  auVar5 = pshufb(in_XMM10,auVar1);
  auVar4 = pshufb(in_XMM10,auVar4 ^ auVar3);
  auVar3 = pshufb(in_XMM10,auVar5 ^ auVar3);
  auVar4 = pshufb(in_XMM13,auVar4 ^ auVar1);
  auVar1 = pshufb(in_XMM12,auVar3 ^ auVar2);
  return auVar1._0_8_ ^ auVar4._0_8_ ^ in_XMM7_Qa << 0x20 ^ in_XMM7_Qa ^ (ulong)DAT_0049a5c0;
}

