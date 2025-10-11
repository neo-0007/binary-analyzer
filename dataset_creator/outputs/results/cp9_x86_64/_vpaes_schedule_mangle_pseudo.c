
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _vpaes_schedule_mangle
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined1 (*pauVar1) [16];
  long in_R10;
  undefined1 in_XMM0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 in_XMM9 [16];
  
  if (param_4 == 0) {
    pauVar1 = (undefined1 (*) [16])(param_3 + 0x10);
    auVar3 = pshufb(in_XMM0 ^ _DAT_0049a5c0,_DAT_0049a4f0);
    auVar4 = pshufb(auVar3,_DAT_0049a4f0);
    auVar5 = pshufb(auVar4,_DAT_0049a4f0);
    auVar5 = auVar3 ^ auVar4 ^ auVar5;
  }
  else {
    auVar3 = ~in_XMM9 & in_XMM0;
    auVar5._0_4_ = auVar3._0_4_ >> 4;
    auVar5._4_4_ = auVar3._4_4_ >> 4;
    auVar5._8_4_ = auVar3._8_4_ >> 4;
    auVar5._12_4_ = auVar3._12_4_ >> 4;
    auVar6 = in_XMM0 & in_XMM9;
    auVar3 = pshufb(_DAT_0049a610,auVar6);
    auVar4 = pshufb(_DAT_0049a620,auVar5);
    auVar4 = pshufb(auVar4 ^ auVar3,_DAT_0049a4f0);
    auVar3 = pshufb(_DAT_0049a630,auVar6);
    auVar2 = pshufb(_DAT_0049a640,auVar5);
    auVar4 = pshufb(auVar2 ^ auVar3 ^ auVar4,_DAT_0049a4f0);
    auVar3 = pshufb(_DAT_0049a650,auVar6);
    auVar2 = pshufb(_DAT_0049a660,auVar5);
    auVar4 = pshufb(auVar2 ^ auVar3 ^ auVar4,_DAT_0049a4f0);
    auVar3 = pshufb(_DAT_0049a670,auVar6);
    auVar5 = pshufb(_DAT_0049a680,auVar5);
    auVar5 = auVar5 ^ auVar3 ^ auVar4;
    pauVar1 = (undefined1 (*) [16])(param_3 + -0x10);
  }
  auVar3 = pshufb(auVar5,*(undefined1 (*) [16])(param_5 + in_R10));
  *pauVar1 = auVar3;
  return;
}

