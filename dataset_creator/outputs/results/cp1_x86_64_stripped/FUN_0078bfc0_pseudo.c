
int FUN_0078bfc0(byte *param_1,char *param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  uVar5 = (uint)*param_1;
  iVar4 = (int)*param_2;
  while ((char)uVar5 != '\0') {
    while( true ) {
      cVar2 = (char)uVar5;
      bVar6 = (char)iVar4 - 0x30;
      if ((byte)(cVar2 - 0x30U) < 10) break;
      if (bVar6 < 10) {
        return -1;
      }
      if (cVar2 != (char)iVar4) {
        return cVar2 - iVar4;
      }
      pbVar1 = param_1 + 1;
      uVar5 = (uint)*pbVar1;
      iVar4 = (int)param_2[1];
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (*pbVar1 == 0) goto LAB_0078c006;
    }
    if (9 < bVar6) {
      return 1;
    }
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar3 = (int)(char)(cVar2 - 0x30U);
    iVar7 = (int)(char)bVar6;
    bVar6 = *pbVar1;
    while (uVar5 = (uint)(char)bVar6, (byte)(bVar6 - 0x30) < 10) {
      param_1 = param_1 + 1;
      iVar3 = (uVar5 - 0x30) + iVar3 * 10;
      bVar6 = *param_1;
    }
    cVar2 = param_2[1];
    param_2 = param_2 + 1;
    while (iVar4 = (int)cVar2, (byte)(cVar2 - 0x30U) < 10) {
      param_2 = param_2 + 1;
      iVar7 = iVar4 + -0x30 + iVar7 * 10;
      cVar2 = *param_2;
    }
    if (iVar7 != iVar3) {
      return iVar3 - iVar7;
    }
  }
LAB_0078c006:
  return -(int)(char)iVar4;
}

