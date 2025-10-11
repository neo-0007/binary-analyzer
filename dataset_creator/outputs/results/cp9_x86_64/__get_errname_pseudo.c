
undefined * __get_errname(uint param_1)

{
  if (param_1 < 0x86) {
    if ((param_1 == 0) || (*(ushort *)(_sys_errnameidx + (long)(int)param_1 * 2) != 0)) {
      return &_sys_errname + *(ushort *)(_sys_errnameidx + (long)(int)param_1 * 2);
    }
  }
  return (undefined *)0x0;
}

