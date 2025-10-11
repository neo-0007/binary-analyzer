
wchar_t * wcschrnul(wchar_t *__s,wchar_t __wc)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  
  wVar2 = *__s;
  while ((__wc != wVar2 && (wVar2 != L'\0'))) {
    pwVar1 = __s + 1;
    __s = __s + 1;
    wVar2 = *pwVar1;
  }
  return __s;
}

