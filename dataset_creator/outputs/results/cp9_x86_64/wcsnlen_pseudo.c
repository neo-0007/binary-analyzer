
size_t wcsnlen(wchar_t *__s,size_t __maxlen)

{
  code *pcVar1;
  
  if (((DAT_0093df08 & 0x120) == 0x120) && ((DAT_0093dff4 & 0x200) != 0)) {
    if (((int)DAT_0093df08 < 0) && ((DAT_0093df08 & 0x40000000) != 0)) {
      return 0x756080;
    }
    if ((DAT_0093df08 & 0x800) != 0) {
      return 0x754fe0;
    }
    if ((DAT_0093dff4 & 0x400) == 0) {
      return 0x754620;
    }
  }
  pcVar1 = __wcsnlen_sse2;
  if ((DAT_0093deec._2_1_ & 8) != 0) {
    pcVar1 = __wcsnlen_sse4_1;
  }
  return (size_t)pcVar1;
}

