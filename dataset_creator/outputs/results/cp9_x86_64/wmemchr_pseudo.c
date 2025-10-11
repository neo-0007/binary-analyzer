
wchar_t * wmemchr(wchar_t *__s,wchar_t __c,size_t __n)

{
  code *pcVar1;
  
  pcVar1 = __wmemchr_sse2;
  if (((DAT_0093df08 & 0x120) == 0x120) && ((DAT_0093dff4 & 0x200) != 0)) {
    if (((int)DAT_0093df08 < 0) && ((DAT_0093df08 & 0x40000000) != 0)) {
      pcVar1 = __wmemchr_evex_rtm;
      if ((DAT_0093df08 & 0x800) == 0) {
        pcVar1 = __wmemchr_evex;
      }
      return (wchar_t *)pcVar1;
    }
    pcVar1 = __wmemchr_avx2_rtm;
    if ((DAT_0093df08 & 0x800) == 0) {
      pcVar1 = __wmemchr_sse2;
      if ((DAT_0093dff4 & 0x400) == 0) {
        pcVar1 = __wmemchr_avx2;
      }
      return (wchar_t *)pcVar1;
    }
  }
  return (wchar_t *)pcVar1;
}

