
void FUN_005664b0(byte *param_1,int param_2,long param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  
  iVar7 = 0x80;
  if (param_2 < 0x81) {
    iVar7 = param_2;
  }
  *param_1 = 0;
  if (param_4 < 1) {
    uVar9 = 0xffffffff;
    iVar6 = 0xff;
    bVar2 = 0xff;
    lVar3 = 0;
    iVar11 = 0;
    iVar8 = 0x80;
    pbVar10 = param_1;
    if (0 < param_2) goto LAB_00566520;
LAB_00566603:
    bVar1 = param_1[(long)iVar7 + -1];
  }
  else {
    if (0x400 < param_4) {
      param_4 = 0x400;
    }
    lVar3 = 0;
    iVar8 = param_4 + 7 >> 3;
    iVar11 = 0x80 - iVar8;
    iVar6 = 0xff >> (-(char)param_4 & 7U);
    bVar2 = (byte)iVar6;
    uVar9 = 0x7f - iVar8;
    pbVar10 = param_1 + iVar11;
    if (param_2 < 1) goto LAB_00566603;
LAB_00566520:
    do {
      bVar2 = (byte)iVar6;
      param_1[lVar3] = *(byte *)(param_3 + lVar3);
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < iVar7);
    bVar1 = param_1[(long)iVar7 + -1];
    if (0x7f < param_2) goto LAB_00566576;
  }
  pbVar5 = param_1;
  do {
    pbVar4 = pbVar5 + 1;
    bVar1 = (&DAT_008081c0)[(byte)(bVar1 + *pbVar5)];
    pbVar5[iVar7] = bVar1;
    pbVar5 = pbVar4;
  } while (param_1 + (ulong)(0x7f - iVar7) + 1 != pbVar4);
LAB_00566576:
  bVar2 = (&DAT_008081c0)[bVar2 & *pbVar10];
  *pbVar10 = bVar2;
  if (iVar11 != 0) {
    pbVar10 = param_1 + (int)uVar9;
    do {
      pbVar5 = pbVar10 + -1;
      bVar2 = (&DAT_008081c0)[bVar2 ^ pbVar10[iVar8]];
      *pbVar10 = bVar2;
      pbVar10 = pbVar5;
    } while (param_1 + (((long)(int)uVar9 + -1) - (ulong)uVar9) != pbVar5);
  }
  lVar3 = 0x7f;
  do {
    *(uint *)(param_1 + lVar3 * 2 + -2) = (uint)CONCAT11(param_1[lVar3],param_1[lVar3 + -1]);
    lVar3 = lVar3 + -2;
  } while (lVar3 != -1);
  return;
}

