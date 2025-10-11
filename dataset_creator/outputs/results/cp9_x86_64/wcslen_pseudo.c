
size_t wcslen(wchar_t *__s)

{
  code *pcVar1;
  
  if (((DAT_0093df08 & 0x120) == 0x120) && ((DAT_0093dff4 & 0x200) != 0)) {
    if (((int)DAT_0093df08 < 0) && ((DAT_0093df08 & 0x40000000) != 0)) {
      return 0x755f00;
    }
    if ((DAT_0093df08 & 0x800) != 0) {
      return 0x754de0;
    }
    if ((DAT_0093dff4 & 0x400) == 0) {
      return 0x7541c0;
    }
  }
  pcVar1 = __wcslen_sse2;
  if ((DAT_0093deec._2_1_ & 8) != 0) {
    pcVar1 = __wcslen_sse4_1;
  }
  return (size_t)pcVar1;
}

