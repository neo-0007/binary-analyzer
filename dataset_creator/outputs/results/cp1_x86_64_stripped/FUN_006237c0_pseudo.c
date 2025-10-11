
/* WARNING: Type propagation algorithm not settling */

byte * FUN_006237c0(long param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = FUN_006cceb0();
  }
  *param_3 = uVar4;
  cVar1 = *param_2;
  param_2 = param_2 + 1;
  if (cVar1 == -1) {
    param_3[1] = uVar4;
  }
  else {
    uVar4 = FUN_00623750(cVar1,param_1);
    param_2 = (char *)FUN_006234b0(cVar1,uVar4,param_2);
  }
  cVar1 = *param_2;
  pbVar6 = (byte *)(param_2 + 1);
  pbVar8 = (byte *)0x0;
  *(char *)(param_3 + 5) = cVar1;
  if (cVar1 != -1) {
    bVar5 = 0;
    do {
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      bVar3 = bVar5 & 0x3f;
      bVar5 = bVar5 + 7;
      pbVar8 = (byte *)((ulong)pbVar8 | (ulong)(bVar2 & 0x7f) << bVar3);
    } while ((char)bVar2 < '\0');
    pbVar8 = pbVar8 + (long)pbVar6;
  }
  param_3[3] = pbVar8;
  pbVar8 = pbVar6 + 1;
  bVar5 = 0;
  uVar7 = 0;
  *(byte *)((long)param_3 + 0x29) = *pbVar6;
  do {
    bVar2 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    bVar3 = bVar5 & 0x3f;
    bVar5 = bVar5 + 7;
    uVar7 = uVar7 | (ulong)(bVar2 & 0x7f) << bVar3;
  } while ((char)bVar2 < '\0');
  param_3[4] = pbVar8 + uVar7;
  return pbVar8;
}

