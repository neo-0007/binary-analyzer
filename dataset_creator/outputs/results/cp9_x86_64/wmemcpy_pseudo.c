
wchar_t * wmemcpy(wchar_t *__s1,wchar_t *__s2,size_t __n)

{
  wchar_t *pwVar1;
  
  pwVar1 = (wchar_t *)memcpy(__s1,__s2,__n << 2);
  return pwVar1;
}

