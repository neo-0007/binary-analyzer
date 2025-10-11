
void FUN_0049c6e0(ulong *param_1,long param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                 int param_6)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong extraout_XMM0_Qb;
  ulong extraout_XMM0_Qb_00;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = param_3 - 0x10;
  if (0xf < param_3) {
    uVar3 = *param_5;
    uVar6 = param_5[1];
    param_2 = param_2 - (long)param_1;
    FUN_0049c770(param_1,param_2,param_4);
    uVar5 = uVar3;
    if (param_6 == 0) {
      do {
        uVar3 = *param_1;
        uVar7 = param_1[1];
        uVar4 = FUN_0049c120();
        *(ulong *)(param_2 + (long)param_1) = uVar4 ^ uVar5;
        ((ulong *)(param_2 + (long)param_1))[1] = extraout_XMM0_Qb_00 ^ uVar6;
        param_1 = param_1 + 2;
        bVar2 = 0xf < uVar1;
        uVar1 = uVar1 - 0x10;
        uVar5 = uVar3;
        uVar6 = uVar7;
      } while (bVar2);
    }
    else {
      do {
        uVar3 = FUN_0049bfc0(*param_1 ^ uVar3);
        *(ulong *)(param_2 + (long)param_1) = uVar3;
        ((ulong *)(param_2 + (long)param_1))[1] = extraout_XMM0_Qb;
        param_1 = param_1 + 2;
        bVar2 = 0xf < uVar1;
        uVar1 = uVar1 - 0x10;
        uVar7 = extraout_XMM0_Qb;
      } while (bVar2);
    }
    *param_5 = uVar3;
    param_5[1] = uVar7;
  }
  return;
}

