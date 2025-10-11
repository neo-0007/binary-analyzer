
int UTF8_getc(uchar *str,int len,ulong *val)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  
  if (len < 1) {
    return 0;
  }
  bVar1 = *str;
  if ((char)bVar1 < '\0') {
    if ((bVar1 & 0xe0) == 0xc0) {
      if (len == 1) {
        return -1;
      }
      if ((str[1] & 0xc0) != 0x80) {
        return -3;
      }
      uVar2 = (ulong)(str[1] & 0x3f | (bVar1 & 0x1f) << 6);
      if (uVar2 < 0x80) {
        return -4;
      }
      iVar3 = 2;
    }
    else if ((bVar1 & 0xf0) == 0xe0) {
      if (len < 3) {
        return -1;
      }
      if ((str[1] & 0xc0) != 0x80) {
        return -3;
      }
      if ((str[2] & 0xc0) != 0x80) {
        return -3;
      }
      uVar2 = (ulong)(str[2] & 0x3f) | (long)(int)((bVar1 & 0xf) << 0xc | (str[1] & 0x3f) << 6);
      if (uVar2 < 0x800) {
        return -4;
      }
      if (uVar2 - 0xd800 < 0x800) {
        return -2;
      }
      iVar3 = 3;
    }
    else {
      if ((bVar1 & 0xf8) != 0xf0) {
        return -2;
      }
      if (len < 4) {
        return -1;
      }
      if ((str[1] & 0xc0) != 0x80) {
        return -3;
      }
      if ((str[2] & 0xc0) != 0x80) {
        return -3;
      }
      if ((str[3] & 0xc0) != 0x80) {
        return -3;
      }
      uVar2 = (ulong)((str[2] & 0x3f) << 6 |
                     (bVar1 & 7) << 0x12 | str[3] & 0x3f | (str[1] & 0x3f) << 0xc);
      if (uVar2 < 0x10000) {
        return -4;
      }
      iVar3 = 4;
    }
  }
  else {
    uVar2 = (ulong)bVar1;
    iVar3 = 1;
  }
  *val = uVar2;
  return iVar3;
}

