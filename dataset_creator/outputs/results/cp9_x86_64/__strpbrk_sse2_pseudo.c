
byte * __strpbrk_sse2(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar3;
  long lVar4;
  byte abStack_100 [256];
  byte *pbVar2;
  
  pbVar1 = abStack_100;
  for (lVar4 = 0x20; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)pbVar1 = 0;
    pbVar1 = (byte *)((long)pbVar1 + 8);
  }
  do {
    bVar3 = *param_2;
    if (bVar3 == 0) break;
    abStack_100[bVar3] = bVar3;
    bVar3 = param_2[1];
    if (bVar3 == 0) break;
    abStack_100[bVar3] = bVar3;
    bVar3 = param_2[2];
    if (bVar3 == 0) break;
    abStack_100[bVar3] = bVar3;
    bVar3 = param_2[3];
    param_2 = param_2 + 4;
    abStack_100[bVar3] = bVar3;
  } while (bVar3 != 0);
  pbVar1 = (byte *)(param_1 + -4);
  do {
    pbVar2 = pbVar1;
    pbVar1 = pbVar2 + 4;
    bVar3 = *pbVar1;
    if (abStack_100[bVar3] == bVar3) goto LAB_0079e0dc;
    bVar3 = pbVar2[5];
    if (abStack_100[bVar3] == bVar3) goto LAB_0079e0d9;
    bVar3 = pbVar2[6];
    if (abStack_100[bVar3] == bVar3) goto LAB_0079e0d6;
    bVar3 = pbVar2[7];
  } while (abStack_100[bVar3] != bVar3);
  pbVar1 = pbVar2 + 5;
LAB_0079e0d6:
  pbVar1 = pbVar1 + 1;
LAB_0079e0d9:
  pbVar1 = pbVar1 + 1;
LAB_0079e0dc:
  if (bVar3 == 0) {
    pbVar1 = (byte *)0x0;
  }
  return pbVar1;
}

