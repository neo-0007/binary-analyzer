
undefined8 FUN_0070c800(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(DAT_0093e1c0 + 8) & 0xfffffffffffffff8;
  if (param_1 < uVar4 - 0x21) {
    lVar1 = DAT_0093e0e8;
    if (DAT_0093e0e8 == 0) {
      lVar1 = DAT_0093eb18;
    }
    uVar3 = -lVar1 & (uVar4 - 0x21) - param_1;
    if ((uVar3 != 0) && (DAT_0094a9c8 == '\0')) {
      lVar1 = FUN_0076eb20(0);
      if (lVar1 == -1) {
        lVar1 = 0;
      }
      if (lVar1 == DAT_0093e1c0 + uVar4) {
        if (((DAT_0094a9c8 != '\0') || (FUN_0076eb20(-uVar3), DAT_0094a9c8 != '\0')) ||
           (lVar2 = FUN_0076eb20(0), lVar2 == -1)) {
          lVar2 = 0;
        }
        if ((lVar2 != 0) && (lVar1 = lVar1 - lVar2, lVar1 != 0)) {
          DAT_0093e9e8 = DAT_0093e9e8 - lVar1;
          *(ulong *)(DAT_0093e1c0 + 8) = uVar4 - lVar1 | 1;
          return 1;
        }
      }
    }
  }
  return 0;
}

