
/* std::wstreambuf::pubsetbuf(wchar_t*, long) */

wchar_t * std::wstreambuf::pubsetbuf(wchar_t *param_1,long param_2)

{
  wchar_t *pwVar1;
  
  if (*(code **)(*(long *)param_1 + 0x18) == setbuf) {
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00690680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = (wchar_t *)(**(code **)(*(long *)param_1 + 0x18))();
  return pwVar1;
}

