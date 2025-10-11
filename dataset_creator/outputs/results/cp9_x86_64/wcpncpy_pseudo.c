
wchar_t * wcpncpy(wchar_t *__dest,wchar_t *__src,size_t __n)

{
  size_t __n_00;
  wchar_t *pwVar1;
  
  __n_00 = wcsnlen(__src,__n);
  wmemcpy(__dest,__src,__n_00);
  if (__n != __n_00) {
    pwVar1 = wmemset(__dest + __n_00,L'\0',__n - __n_00);
    return pwVar1;
  }
  return __dest + __n_00;
}

