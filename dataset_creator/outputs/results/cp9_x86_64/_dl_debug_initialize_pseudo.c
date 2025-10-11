
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * _dl_debug_initialize(long param_1,long param_2)

{
  if ((param_2 == 0) && (_r_debug == 0)) {
    _r_debug = 1;
  }
  if (DAT_0093dd68 == (code *)0x0) {
    if (param_1 == 0) {
      param_1 = DAT_0093dd78;
    }
    _DAT_0093dd80 = 0;
    DAT_0093dd68 = _dl_debug_state;
    DAT_0093dd78 = param_1;
  }
  if (DAT_0093dd60 != (undefined *)0x0) {
    return &_r_debug;
  }
  DAT_0093dd60 = (&_dl_ns)[param_2 * 0x14];
  return &_r_debug;
}

