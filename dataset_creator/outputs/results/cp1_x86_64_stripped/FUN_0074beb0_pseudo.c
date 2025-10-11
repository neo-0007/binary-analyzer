
long FUN_0074beb0(long param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  long lVar4;
  byte abStack_100 [256];
  byte *pbVar3;
  
  pbVar2 = abStack_100;
  for (lVar4 = 0x20; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)pbVar2 = 0;
    pbVar2 = (byte *)((long)pbVar2 + 8);
  }
  do {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    abStack_100[bVar1] = bVar1;
    bVar1 = param_2[1];
    if (bVar1 == 0) break;
    abStack_100[bVar1] = bVar1;
    bVar1 = param_2[2];
    if (bVar1 == 0) break;
    abStack_100[bVar1] = bVar1;
    bVar1 = param_2[3];
    param_2 = param_2 + 4;
    abStack_100[bVar1] = bVar1;
  } while (bVar1 != 0);
  pbVar2 = (byte *)(param_1 + -4);
  do {
    pbVar3 = pbVar2;
    pbVar2 = pbVar3 + 4;
    if ((abStack_100[*pbVar2] & *pbVar2) == 0) goto LAB_0074bf4c;
    if ((abStack_100[pbVar3[5]] & pbVar3[5]) == 0) goto LAB_0074bf49;
    if ((abStack_100[pbVar3[6]] & pbVar3[6]) == 0) goto LAB_0074bf46;
  } while ((abStack_100[pbVar3[7]] & pbVar3[7]) != 0);
  pbVar2 = pbVar3 + 5;
LAB_0074bf46:
  pbVar2 = pbVar2 + 1;
LAB_0074bf49:
  pbVar2 = pbVar2 + 1;
LAB_0074bf4c:
  return (long)pbVar2 - param_1;
}

