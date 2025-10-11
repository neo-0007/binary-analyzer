
int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  if (((DAT_0093df08 & 0x20) != 0) && ((DAT_0093dff4 & 0x200) != 0)) {
    if (((int)DAT_0093df08 < 0) && ((DAT_0093df08 & 0x40000100) == 0x40000100)) {
      return 0x74a660;
    }
    if ((DAT_0093df08 & 0x800) != 0) {
      return 0x745a60;
    }
    if ((DAT_0093dff4 & 0x400) == 0) {
      return 0x712510;
    }
  }
  iVar1 = 0x710ff0;
  if (((DAT_0093dff4 & 8) == 0) && (iVar1 = 0x70fba0, (DAT_0093deec._1_1_ & 2) != 0)) {
    iVar1 = 0x7112a0;
  }
  return iVar1;
}

