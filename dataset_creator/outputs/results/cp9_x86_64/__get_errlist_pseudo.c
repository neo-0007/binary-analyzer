
undefined8 __get_errlist(uint param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x86) {
    uVar1 = *(undefined8 *)(_sys_errlist_internal + (long)(int)param_1 * 8);
  }
  return uVar1;
}

