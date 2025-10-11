
char * stpcpy(char *__dest,char *__src)

{
  code *pcVar1;
  
  if (((DAT_0093df08 & 0x20) != 0) && ((DAT_0093dff4 & 0x200) != 0)) {
    if (((int)DAT_0093df08 < 0) && ((DAT_0093df08 & 0x40000000) != 0)) {
      return (char *)__stpcpy_evex;
    }
    if ((DAT_0093df08 & 0x800) != 0) {
      return (char *)__stpcpy_avx2_rtm;
    }
    if ((DAT_0093dff4 & 0x400) == 0) {
      return (char *)__stpcpy_avx2;
    }
  }
  pcVar1 = __stpcpy_sse2_unaligned;
  if (((DAT_0093dff4 & 8) == 0) && (pcVar1 = __stpcpy_sse2, (DAT_0093deec._1_1_ & 2) != 0)) {
    pcVar1 = __stpcpy_ssse3;
  }
  return (char *)pcVar1;
}

