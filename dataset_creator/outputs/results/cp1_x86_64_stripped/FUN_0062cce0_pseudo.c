
undefined8 FUN_0062cce0(long *param_1,uint param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  
  bVar2 = (byte)param_2;
  if (param_2 < 0x800) {
    pcVar1 = (char *)*param_1;
    uVar3 = 0;
    if (1 < (ulong)(param_1[1] - (long)pcVar1)) {
      uVar3 = 1;
      *pcVar1 = (char)(param_2 >> 6) + -0x40;
      *param_1 = (long)(pcVar1 + 2);
      pcVar1[1] = (bVar2 & 0x3f) + 0x80;
    }
  }
  else if (param_2 < 0x10000) {
    pcVar1 = (char *)*param_1;
    uVar3 = 0;
    if (2 < (ulong)(param_1[1] - (long)pcVar1)) {
      *pcVar1 = (char)(param_2 >> 0xc) + -0x20;
      pcVar1[1] = ((byte)(param_2 >> 6) & 0x3f) + 0x80;
      *param_1 = (long)(pcVar1 + 3);
      pcVar1[2] = (bVar2 & 0x3f) + 0x80;
      return 1;
    }
  }
  else {
    uVar3 = 0;
    if ((param_2 < 0x110000) && (pcVar1 = (char *)*param_1, 3 < (ulong)(param_1[1] - (long)pcVar1)))
    {
      *pcVar1 = (char)(param_2 >> 0x12) + -0x10;
      pcVar1[1] = ((byte)(param_2 >> 0xc) & 0x3f) + 0x80;
      pcVar1[2] = ((byte)(param_2 >> 6) & 0x3f) + 0x80;
      *param_1 = (long)(pcVar1 + 4);
      pcVar1[3] = (bVar2 & 0x3f) + 0x80;
      return 1;
    }
  }
  return uVar3;
}

