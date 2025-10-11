
char * strchrnul(char *__s,int __c)

{
  code *pcVar1;
  
  pcVar1 = __strchrnul_sse2;
  if (((DAT_0093df08 & 0x120) == 0x120) && ((DAT_0093dff4 & 0x200) != 0)) {
    if (((int)DAT_0093df08 < 0) && ((DAT_0093df08 & 0x40000000) != 0)) {
      return (char *)__strchrnul_evex;
    }
    pcVar1 = __strchrnul_avx2_rtm;
    if ((DAT_0093df08 & 0x800) == 0) {
      pcVar1 = __strchrnul_sse2;
      if ((DAT_0093dff4 & 0x400) == 0) {
        pcVar1 = __strchrnul_avx2;
      }
      return (char *)pcVar1;
    }
  }
  return (char *)pcVar1;
}

