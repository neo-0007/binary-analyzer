
ulong FUN_007b9120(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (DAT_0094b420 == 0) {
    DAT_0094b428 = 0x94b5e8;
    DAT_0094b420 = DAT_0093eb18 + 0x94b5e7U & -DAT_0093eb18;
  }
  DAT_0094b428 = DAT_0094b428 + 0xf & 0xfffffffffffffff0;
  if ((DAT_0094b428 + param_1 < DAT_0094b420) &&
     (param_1 <= -DAT_0094b428 && -param_1 != DAT_0094b428)) {
    uVar3 = DAT_0094b428;
    DAT_0094b418 = DAT_0094b428;
    DAT_0094b428 = DAT_0094b428 + param_1;
    return uVar3;
  }
  uVar3 = DAT_0093eb18 + -1 + param_1 & -DAT_0093eb18;
  if ((uVar3 != 0) || (param_1 == 0)) {
    lVar1 = DAT_0093eb18 + uVar3;
    uVar3 = FUN_0076f020(0,lVar1,3,0x22,0xffffffff,0);
    if (uVar3 != 0xffffffffffffffff) {
      if (DAT_0094b420 != uVar3) {
        DAT_0094b418 = uVar3;
        DAT_0094b420 = uVar3 + lVar1;
        DAT_0094b428 = uVar3 + param_1;
        return uVar3;
      }
      uVar2 = DAT_0094b428;
      DAT_0094b418 = DAT_0094b428;
      DAT_0094b420 = uVar3 + lVar1;
      DAT_0094b428 = DAT_0094b428 + param_1;
      return uVar2;
    }
  }
  return 0;
}

