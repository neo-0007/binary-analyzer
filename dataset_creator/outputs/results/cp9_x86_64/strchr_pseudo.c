
char * strchr(char *__s,int __c)

{
  code *pcVar1;
  
  if (((DAT_0093df08 & 0x120) == 0x120) && ((DAT_0093dff4 & 0x200) != 0)) {
    if (((int)DAT_0093df08 < 0) && ((DAT_0093df08 & 0x40000000) != 0)) {
      return (char *)__strchr_evex;
    }
    if ((DAT_0093df08 & 0x800) != 0) {
      return (char *)__strchr_avx2_rtm;
    }
    if ((DAT_0093dff4 & 0x400) == 0) {
      return (char *)__strchr_avx2;
    }
  }
  pcVar1 = __strchr_sse2;
  if ((DAT_0093dff4 & 4) != 0) {
    pcVar1 = __strchr_sse2_no_bsf;
  }
  return (char *)pcVar1;
}

