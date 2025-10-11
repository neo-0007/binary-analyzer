
int bcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  if (((((DAT_0093df08 & 0x20) != 0) && ((DAT_0093deec & 0x400000) != 0)) &&
      ((DAT_0093df08 & 0x100) != 0)) && ((DAT_0093dff4 & 0x200) != 0)) {
    if (((int)DAT_0093df08 < 0) && ((DAT_0093df08 & 0x40000000) != 0)) {
      return 0x748700;
    }
    if ((DAT_0093df08 & 0x800) != 0) {
      return 0x744900;
    }
    if ((DAT_0093dff4 & 0x400) == 0) {
      return 0x717bc0;
    }
  }
  iVar1 = 0x718000;
  if (((DAT_0093deec & 0x80000) == 0) && (iVar1 = 0x7177c0, (DAT_0093deec & 0x200) != 0)) {
    iVar1 = 0x7407f0;
  }
  return iVar1;
}

