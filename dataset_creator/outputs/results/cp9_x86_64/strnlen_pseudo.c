
size_t strnlen(char *__string,size_t __maxlen)

{
  code *pcVar1;
  
  pcVar1 = __strnlen_sse2;
  if (((DAT_0093df08 & 0x120) == 0x120) && ((DAT_0093dff4 & 0x200) != 0)) {
    if (((int)DAT_0093df08 < 0) && ((DAT_0093df08 & 0x40000000) != 0)) {
      return 0x74c060;
    }
    pcVar1 = __strnlen_avx2_rtm;
    if ((DAT_0093df08 & 0x800) == 0) {
      pcVar1 = __strnlen_sse2;
      if ((DAT_0093dff4 & 0x400) == 0) {
        pcVar1 = __strnlen_avx2;
      }
      return (size_t)pcVar1;
    }
  }
  return (size_t)pcVar1;
}

