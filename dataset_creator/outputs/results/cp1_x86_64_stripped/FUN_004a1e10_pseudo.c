
void FUN_004a1e10(long *param_1,int param_2,int param_3,int param_4,byte param_5)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  int iVar5;
  byte *pbVar6;
  byte bVar7;
  
  pbVar3 = (byte *)*param_1;
  bVar7 = (param_2 != 0) << 5 | param_5 & 0xc0;
  pbVar6 = pbVar3 + 1;
  if (param_4 < 0x1f) {
    pbVar1 = pbVar3 + 2;
    *pbVar3 = (byte)param_4 & 0x1f | bVar7;
  }
  else {
    iVar2 = 0;
    *pbVar3 = bVar7 | 0x1f;
    iVar5 = param_4;
    do {
      lVar4 = (long)iVar2;
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 >> 7;
    } while (iVar5 != 0);
    pbVar3[lVar4 + 1] = (byte)param_4 & 0x7f;
    for (; param_4 = param_4 >> 7, lVar4 != 0; lVar4 = lVar4 + -1) {
      bVar7 = (byte)param_4 & 0x7f;
      if (iVar2 != (int)lVar4) {
        bVar7 = (byte)param_4 | 0x80;
      }
      pbVar3[lVar4] = bVar7;
    }
    pbVar6 = pbVar6 + iVar2;
    pbVar1 = pbVar6 + 1;
  }
  if (param_2 == 2) {
    *pbVar6 = 0x80;
    *param_1 = (long)pbVar1;
    return;
  }
  if (0x7f < param_3) {
    iVar2 = 0;
    iVar5 = param_3;
    do {
      lVar4 = (long)iVar2;
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 >> 8;
    } while (iVar5 != 0);
    *pbVar6 = (byte)iVar2 | 0x80;
    pbVar3 = pbVar6 + lVar4 + 1;
    do {
      *pbVar3 = (byte)param_3;
      pbVar3 = pbVar3 + -1;
      param_3 = param_3 >> 8;
    } while (pbVar6 != pbVar3);
    *param_1 = (long)(pbVar1 + lVar4 + 1);
    return;
  }
  *pbVar6 = (byte)param_3;
  *param_1 = (long)pbVar1;
  return;
}

