
int FUN_005fcea0(long param_1,char *param_2,byte *param_3,int param_4)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  int iVar7;
  
  pcVar3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x5c) & 2) != 0)) {
    pcVar3 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz./";
  }
  iVar7 = 0;
  pcVar6 = param_2;
  if (0 < param_4) {
    do {
      iVar7 = iVar7 + 4;
      param_2 = pcVar6 + 4;
      uVar5 = (ulong)*param_3 << 0x10;
      if (param_4 < 3) {
        if (param_4 == 2) {
          uVar2 = (ulong)param_3[1] << 8 | uVar5;
          *pcVar6 = pcVar3[uVar5 >> 0x12];
          pcVar6[1] = pcVar3[(uint)(uVar2 >> 0xc) & 0x3f];
          cVar1 = pcVar3[(uint)(uVar2 >> 6) & 0x3f];
        }
        else {
          *pcVar6 = pcVar3[uVar5 >> 0x12];
          pcVar6[1] = pcVar3[(uint)(uVar5 >> 0xc) & 0x3f];
          cVar1 = '=';
        }
        pcVar6[2] = cVar1;
        pcVar6[3] = '=';
        break;
      }
      uVar2 = (ulong)param_3[1] << 8 | uVar5;
      uVar4 = param_3[2] | uVar2;
      *pcVar6 = pcVar3[uVar5 >> 0x12];
      pcVar6[1] = pcVar3[(uint)(uVar2 >> 0xc) & 0x3f];
      pcVar6[2] = pcVar3[(uint)(uVar4 >> 6) & 0x3f];
      pcVar6[3] = pcVar3[(uint)uVar4 & 0x3f];
      param_4 = param_4 + -3;
      pcVar6 = param_2;
      param_3 = param_3 + 3;
    } while (param_4 != 0);
  }
  *param_2 = '\0';
  return iVar7;
}

