
ulong _vpaes_schedule_transform(void)

{
  undefined1 (*in_R11) [16];
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 in_XMM9 [16];
  
  auVar1 = ~in_XMM9 & in_XMM0;
  auVar2._0_4_ = auVar1._0_4_ >> 4;
  auVar2._4_4_ = auVar1._4_4_ >> 4;
  auVar2._8_4_ = auVar1._8_4_ >> 4;
  auVar2._12_4_ = auVar1._12_4_ >> 4;
  auVar3 = pshufb(*in_R11,in_XMM0 & in_XMM9);
  auVar1 = pshufb(in_R11[1],auVar2);
  return auVar1._0_8_ ^ auVar3._0_8_;
}

