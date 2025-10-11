
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00784240(long param_1,long param_2)

{
  if ((param_2 == 0) && (DAT_0094ad58 == 0)) {
    DAT_0094ad58 = 1;
  }
  if (DAT_0094ad68 == (code *)0x0) {
    if (param_1 == 0) {
      param_1 = DAT_0094ad78;
    }
    _DAT_0094ad80 = 0;
    DAT_0094ad68 = FUN_007841e0;
    DAT_0094ad78 = param_1;
  }
  if (DAT_0094ad60 != (undefined *)0x0) {
    return &DAT_0094ad58;
  }
  DAT_0094ad60 = (&PTR_DAT_0093eb60)[param_2 * 0x14];
  return &DAT_0094ad58;
}

