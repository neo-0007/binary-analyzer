
size_t __wcsnlen_sse2(wchar_t *param_1,size_t param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = wmemchr(param_1,L'\0',param_2);
  if (pwVar1 != (wchar_t *)0x0) {
    param_2 = (long)pwVar1 - (long)param_1 >> 2;
  }
  return param_2;
}

