
void * rawmemchr(void *__s,int __c)

{
  code *pcVar1;
  
  pcVar1 = __rawmemchr_sse2;
  if (((DAT_0093df08 & 0x120) == 0x120) && ((DAT_0093dff4 & 0x200) != 0)) {
    if (((int)DAT_0093df08 < 0) && ((DAT_0093df08 & 0x40000000) != 0)) {
      pcVar1 = __rawmemchr_evex_rtm;
      if ((DAT_0093df08 & 0x800) == 0) {
        pcVar1 = __rawmemchr_evex;
      }
      return pcVar1;
    }
    pcVar1 = __rawmemchr_avx2_rtm;
    if ((DAT_0093df08 & 0x800) == 0) {
      pcVar1 = __rawmemchr_sse2;
      if ((DAT_0093dff4 & 0x400) == 0) {
        pcVar1 = __rawmemchr_avx2;
      }
      return pcVar1;
    }
  }
  return pcVar1;
}

