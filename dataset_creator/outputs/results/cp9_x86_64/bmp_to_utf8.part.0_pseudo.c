
int bmp_to_utf8_part_0(uchar *param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulong value;
  
  value = (ulong)(ushort)(*param_2 << 8 | *param_2 >> 8);
  if (0x7ff < value - 0xd800) {
LAB_005fb6e8:
    iVar2 = 4;
    if (param_3 < 5) {
      iVar2 = param_3;
    }
    iVar2 = UTF8_putc(param_1,iVar2,value);
    return iVar2;
  }
  if (3 < param_3) {
    uVar1 = (ushort)(param_2[1] << 8 | param_2[1] >> 8) - 0xdc00;
    if (uVar1 < 0x400) {
      value = ((ulong)uVar1 | (value - 0xd800) * 0x400) + 0x10000;
      goto LAB_005fb6e8;
    }
  }
  return -1;
}

