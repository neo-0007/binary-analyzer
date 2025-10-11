
wchar_t * wmemset(wchar_t *__s,wchar_t __c,size_t __n)

{
  code *pcVar1;
  
  pcVar1 = __wmemset_sse2_unaligned;
  if (((DAT_0093df08 & 0x20) != 0) && ((DAT_0093dff4 & 0x200) != 0)) {
    if ((int)DAT_0093df08 < 0) {
      pcVar1 = __wmemset_avx512_unaligned;
      if ((DAT_0093dff4 & 0x1000) != 0) {
        pcVar1 = __wmemset_evex_unaligned;
      }
      return (wchar_t *)pcVar1;
    }
    pcVar1 = __wmemset_avx2_unaligned_rtm;
    if (((DAT_0093df08 & 0x800) == 0) &&
       (pcVar1 = __wmemset_sse2_unaligned, (DAT_0093dff4 & 0x400) == 0)) {
      pcVar1 = __wmemset_avx2_unaligned;
    }
  }
  return (wchar_t *)pcVar1;
}

