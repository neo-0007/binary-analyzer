
int FUN_005b8930(byte *param_1,int param_2,ulong param_3)

{
  byte bVar1;
  
  if (param_1 == (byte *)0x0) {
    if (param_3 < 0x80) {
      return 1;
    }
    if (0x7ff < param_3) {
      if (0xffff < param_3) {
        return (-(uint)(param_3 < 0x110000) & 6) - 2;
      }
      return (-(uint)(param_3 - 0xd800 < 0x800) & 0xfffffffb) + 3;
    }
    return 2;
  }
  if (0 < param_2) {
    bVar1 = (byte)param_3;
    if (param_3 < 0x80) {
      *param_1 = bVar1;
      return 1;
    }
    if (param_3 < 0x800) {
      if (param_2 != 1) {
        *param_1 = (byte)(param_3 >> 6) | 0xc0;
        param_1[1] = bVar1 & 0x3f | 0x80;
        return 2;
      }
    }
    else if (param_3 < 0x10000) {
      if (param_3 - 0xd800 < 0x800) {
        return -2;
      }
      if (2 < param_2) {
        *param_1 = (byte)(param_3 >> 0xc) | 0xe0;
        param_1[2] = bVar1 & 0x3f | 0x80;
        param_1[1] = (byte)(param_3 >> 6) & 0x3f | 0x80;
        return 3;
      }
    }
    else {
      if (0x10ffff < param_3) {
        return -2;
      }
      if (3 < param_2) {
        *param_1 = (byte)(param_3 >> 0x12) | 0xf0;
        param_1[1] = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
        param_1[3] = bVar1 & 0x3f | 0x80;
        param_1[2] = (byte)(param_3 >> 6) & 0x3f | 0x80;
        return 4;
      }
    }
  }
  return -1;
}

