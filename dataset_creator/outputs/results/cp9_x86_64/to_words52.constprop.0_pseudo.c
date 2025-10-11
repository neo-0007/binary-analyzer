
void to_words52_constprop_0(ulong *param_1,int param_2,ulong *param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  byte *pbVar7;
  long lVar8;
  
  puVar4 = param_1;
  puVar5 = param_3;
  do {
    puVar6 = (ulong *)((long)puVar5 + 0xd);
    *puVar4 = *puVar5 & 0xfffffffffffff;
    puVar4[1] = *(ulong *)((long)puVar5 + 6) >> 4 & 0xfffffffffffff;
    puVar4 = puVar4 + 2;
    puVar5 = puVar6;
  } while (puVar6 != (ulong *)((long)param_3 + 0x75));
  pbVar7 = (byte *)((long)param_3 + 0x7b);
  uVar3 = 0;
  do {
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + -1;
    uVar3 = uVar3 * 0x100 + (ulong)bVar1;
  } while ((byte *)((long)param_3 + 0x74) != pbVar7);
  lVar8 = 5;
  param_1[0x12] = uVar3 & 0xfffffffffffff;
  uVar3 = 0;
  do {
    lVar2 = lVar8 + 0x7a;
    lVar8 = lVar8 + -1;
    uVar3 = uVar3 * 0x100 + (ulong)*(byte *)((long)param_3 + lVar2);
  } while ((int)lVar8 != 0);
  param_1[0x13] = uVar3 >> 4;
  if (0x14 < param_2) {
    memset(param_1 + 0x14,0,(ulong)(param_2 - 0x15) * 8 + 8);
    return;
  }
  return;
}

