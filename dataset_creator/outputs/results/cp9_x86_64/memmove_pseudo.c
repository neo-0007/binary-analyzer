
void * memmove(void *__dest,void *__src,size_t __n)

{
  code *pcVar1;
  
  pcVar1 = __memcpy_erms;
  if ((DAT_0093dff4 & 0x4800) == 0) {
    if (((DAT_0093df08 & 0x10000) == 0) || ((DAT_0093dff4 & 0x1000) != 0)) {
      if ((DAT_0093dff4 & 0x200) != 0) {
        if ((int)DAT_0093df08 < 0) {
          pcVar1 = __memmove_evex_unaligned_erms;
          if ((DAT_0093df08 & 0x200) == 0) {
            pcVar1 = __memmove_evex_unaligned;
          }
          return pcVar1;
        }
        if ((DAT_0093df08 & 0x800) != 0) {
          pcVar1 = __memcpy_avx_unaligned_erms_rtm;
          if ((DAT_0093df08 & 0x200) == 0) {
            pcVar1 = __memcpy_avx_unaligned_rtm;
          }
          return pcVar1;
        }
        if ((DAT_0093dff4 & 0x400) == 0) {
          pcVar1 = __memmove_avx_unaligned_erms;
          if ((DAT_0093df08 & 0x200) == 0) {
            pcVar1 = __memcpy_avx_unaligned;
          }
          return pcVar1;
        }
      }
      if (((DAT_0093deec._1_1_ & 2) == 0) || ((DAT_0093dff4 & 0x20) != 0)) {
        pcVar1 = __memcpy_sse2_unaligned_erms;
        if ((DAT_0093df08 & 0x200) == 0) {
          pcVar1 = __memcpy_sse2_unaligned;
        }
        return pcVar1;
      }
      pcVar1 = __memmove_ssse3;
      if ((DAT_0093dff4 & 2) != 0) {
        pcVar1 = __memmove_ssse3_back;
      }
    }
    else {
      pcVar1 = __memmove_avx512_no_vzeroupper;
      if ((int)DAT_0093df08 < 0) {
        pcVar1 = __memmove_avx512_unaligned_erms;
        if ((DAT_0093df08 & 0x200) == 0) {
          pcVar1 = __memcpy_avx512_unaligned;
        }
        return pcVar1;
      }
    }
  }
  return pcVar1;
}

