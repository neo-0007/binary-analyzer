
int wmemcmp(wchar_t *__s1,wchar_t *__s2,size_t __n)

{
  int iVar1;
  
  if (((((DAT_0093df08 & 0x20) != 0) && ((DAT_0093deec & 0x400000) != 0)) &&
      ((DAT_0093df08 & 0x100) != 0)) && ((DAT_0093dff4 & 0x200) != 0)) {
    if (((int)DAT_0093df08 < 0) && ((DAT_0093df08 & 0x40000000) != 0)) {
      return 0x7566c0;
    }
    if ((DAT_0093df08 & 0x800) != 0) {
      return 0x755640;
    }
    if ((DAT_0093dff4 & 0x400) == 0) {
      return 0x7521c0;
    }
  }
  iVar1 = 0x751290;
  if (((DAT_0093deec & 0x80000) == 0) && (iVar1 = 0x752130, (DAT_0093deec & 0x200) != 0)) {
    iVar1 = 0x751b00;
  }
  return iVar1;
}

