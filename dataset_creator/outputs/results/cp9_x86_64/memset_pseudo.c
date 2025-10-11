
void * memset(void *__s,int __c,size_t __n)

{
  uint uVar1;
  code *pcVar2;
  
  pcVar2 = __memset_erms;
  if ((DAT_0093dff4 & 0x800) == 0) {
    if (((DAT_0093df08 & 0x10000) == 0) || ((DAT_0093dff4 & 0x1000) != 0)) {
      uVar1 = DAT_0093df08 & 0x200;
      if ((DAT_0093df08 & 0x20) != 0) {
        if (((int)DAT_0093df08 < 0) && ((DAT_0093df08 & 0x40000100) == 0x40000100)) {
          pcVar2 = __memset_evex_unaligned_erms;
          if (uVar1 == 0) {
            pcVar2 = __memset_evex_unaligned;
          }
          return pcVar2;
        }
        if ((DAT_0093df08 & 0x800) != 0) {
          pcVar2 = __memset_avx2_unaligned_erms_rtm;
          if (uVar1 == 0) {
            pcVar2 = __memset_avx2_unaligned_rtm;
          }
          return pcVar2;
        }
        if ((DAT_0093dff4 & 0x400) == 0) {
          pcVar2 = __memset_avx2_unaligned_erms;
          if (uVar1 == 0) {
            pcVar2 = __memset_avx2_unaligned;
          }
          return pcVar2;
        }
      }
      pcVar2 = __memset_sse2_unaligned;
      if (uVar1 != 0) {
        pcVar2 = __memset_sse2_unaligned_erms;
      }
    }
    else {
      pcVar2 = __memset_avx512_no_vzeroupper;
      if (((int)DAT_0093df08 < 0) && ((DAT_0093df08 & 0x40000100) == 0x40000100)) {
        pcVar2 = __memset_avx512_unaligned_erms;
        if ((DAT_0093df08 & 0x200) == 0) {
          pcVar2 = __memset_avx512_unaligned;
        }
        return pcVar2;
      }
    }
  }
  return pcVar2;
}

