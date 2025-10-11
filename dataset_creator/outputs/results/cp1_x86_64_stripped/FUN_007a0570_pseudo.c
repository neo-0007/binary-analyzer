
undefined * FUN_007a0570(uint param_1)

{
  if (param_1 < 0x86) {
    if ((param_1 == 0) || (*(ushort *)(&DAT_00840220 + (long)(int)param_1 * 2) != 0)) {
      return &DAT_0083fdc0 + *(ushort *)(&DAT_00840220 + (long)(int)param_1 * 2);
    }
  }
  return (undefined *)0x0;
}

