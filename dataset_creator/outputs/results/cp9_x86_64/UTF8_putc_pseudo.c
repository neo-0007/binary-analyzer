
int UTF8_putc(uchar *str,int len,ulong value)

{
  byte bVar1;
  
  if (str == (uchar *)0x0) {
    if (value < 0x80) {
      return 1;
    }
    if (0x7ff < value) {
      if (0xffff < value) {
        return (-(uint)(value < 0x110000) & 6) - 2;
      }
      return (-(uint)(value - 0xd800 < 0x800) & 0xfffffffb) + 3;
    }
    return 2;
  }
  if (0 < len) {
    bVar1 = (byte)value;
    if (value < 0x80) {
      *str = bVar1;
      return 1;
    }
    if (value < 0x800) {
      if (len != 1) {
        *str = (byte)(value >> 6) | 0xc0;
        str[1] = bVar1 & 0x3f | 0x80;
        return 2;
      }
    }
    else if (value < 0x10000) {
      if (value - 0xd800 < 0x800) {
        return -2;
      }
      if (2 < len) {
        *str = (byte)(value >> 0xc) | 0xe0;
        str[2] = bVar1 & 0x3f | 0x80;
        str[1] = (byte)(value >> 6) & 0x3f | 0x80;
        return 3;
      }
    }
    else {
      if (0x10ffff < value) {
        return -2;
      }
      if (3 < len) {
        *str = (byte)(value >> 0x12) | 0xf0;
        str[1] = (byte)(value >> 0xc) & 0x3f | 0x80;
        str[3] = bVar1 & 0x3f | 0x80;
        str[2] = (byte)(value >> 6) & 0x3f | 0x80;
        return 4;
      }
    }
  }
  return -1;
}

