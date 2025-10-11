
wchar_t * wcschr(wchar_t *__wcs,wchar_t __wc)

{
  code *pcVar1;
  
  pcVar1 = __wcschr_sse2;
  if (((DAT_0093df08 & 0x120) == 0x120) && ((DAT_0093dff4 & 0x200) != 0)) {
    if (((int)DAT_0093df08 < 0) && ((DAT_0093df08 & 0x40000000) != 0)) {
      return (wchar_t *)__wcschr_evex;
    }
    pcVar1 = __wcschr_avx2_rtm;
    if ((DAT_0093df08 & 0x800) == 0) {
      pcVar1 = __wcschr_sse2;
      if ((DAT_0093dff4 & 0x400) == 0) {
        pcVar1 = __wcschr_avx2;
      }
      return (wchar_t *)pcVar1;
    }
  }
  return (wchar_t *)pcVar1;
}

