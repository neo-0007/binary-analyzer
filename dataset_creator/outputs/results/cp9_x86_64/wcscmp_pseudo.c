
int wcscmp(wchar_t *__s1,wchar_t *__s2)

{
  int iVar1;
  
  iVar1 = 0x752c50;
  if (((DAT_0093df08 & 0x120) == 0x120) && ((DAT_0093dff4 & 0x200) != 0)) {
    if (((int)DAT_0093df08 < 0) && ((DAT_0093df08 & 0x40000000) != 0)) {
      return 0x755a40;
    }
    iVar1 = 0x754990;
    if ((DAT_0093df08 & 0x800) == 0) {
      iVar1 = 0x752c50;
      if ((DAT_0093dff4 & 0x400) == 0) {
        iVar1 = 0x753920;
      }
      return iVar1;
    }
  }
  return iVar1;
}

