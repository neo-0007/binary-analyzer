
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0070d9f0(ulong *param_1,ulong param_2,long param_3,ulong param_4,long param_5,uint param_6
                  )

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *param_1;
  if ((_DAT_0093e164 & 2) == 0) {
    uVar3 = param_3 + -1 + param_5 + uVar3 & -param_5;
  }
  if (uVar3 < param_4) {
    uVar3 = param_4;
  }
  uVar1 = 0;
  if (param_2 < uVar3) {
    uVar1 = FUN_0076f020(0,uVar3,3,param_6 | 0x22,0xffffffff,0);
    if (uVar1 != 0xffffffffffffffff) {
      if (((param_6 & 0x40000) == 0) && (DAT_0093e0e8 - 1U < uVar3)) {
        uVar2 = DAT_0093eb18 - 1U & uVar1;
        uVar4 = uVar3;
        uVar5 = uVar1;
        if (uVar2 != 0) {
          uVar4 = uVar3 + uVar2;
          uVar5 = -DAT_0093eb18 & uVar1;
        }
        FUN_0076f0e0(uVar5,uVar4,0xe);
      }
      _DAT_0093e164 = _DAT_0093e164 | 2;
      *param_1 = uVar3;
    }
  }
  return uVar1;
}

