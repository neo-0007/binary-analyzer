
bool FUN_0062cbc0(long *param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  char cVar4;
  
  if (param_2 < 0x80) {
    pbVar1 = (byte *)*param_1;
    pbVar2 = (byte *)param_1[1];
    if (pbVar2 != pbVar1) {
      *param_1 = (long)(pbVar1 + 1);
      *pbVar1 = (byte)param_2;
    }
    return pbVar2 != pbVar1;
  }
  if (param_2 < 0x800) {
    pcVar3 = (char *)*param_1;
    if ((ulong)(param_1[1] - (long)pcVar3) < 2) {
      return false;
    }
    *param_1 = (long)(pcVar3 + 1);
    cVar4 = (char)(param_2 >> 6) + -0x40;
  }
  else {
    if (param_2 < 0x10000) {
      pcVar3 = (char *)*param_1;
      if ((ulong)(param_1[1] - (long)pcVar3) < 3) {
        return false;
      }
      *param_1 = (long)(pcVar3 + 1);
      cVar4 = (char)(param_2 >> 0xc) + -0x20;
    }
    else {
      if (0x10ffff < param_2) {
        return false;
      }
      pcVar3 = (char *)*param_1;
      if ((ulong)(param_1[1] - (long)pcVar3) < 4) {
        return false;
      }
      *param_1 = (long)(pcVar3 + 1);
      *pcVar3 = (char)(param_2 >> 0x12) + -0x10;
      pcVar3 = (char *)*param_1;
      *param_1 = (long)(pcVar3 + 1);
      cVar4 = ((byte)(param_2 >> 0xc) & 0x3f) + 0x80;
    }
    *pcVar3 = cVar4;
    pcVar3 = (char *)*param_1;
    *param_1 = (long)(pcVar3 + 1);
    cVar4 = ((byte)(param_2 >> 6) & 0x3f) + 0x80;
  }
  *pcVar3 = cVar4;
  pcVar3 = (char *)*param_1;
  *param_1 = (long)(pcVar3 + 1);
  *pcVar3 = ((byte)param_2 & 0x3f) + 0x80;
  return true;
}

