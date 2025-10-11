
size_t mbrlen(char *__s,size_t __n,mbstate_t *__ps)

{
  size_t sVar1;
  
  if (__ps == (mbstate_t *)0x0) {
    __ps = (mbstate_t *)&internal;
  }
  sVar1 = mbrtowc((wchar_t *)0x0,__s,__n,__ps);
  return sVar1;
}

