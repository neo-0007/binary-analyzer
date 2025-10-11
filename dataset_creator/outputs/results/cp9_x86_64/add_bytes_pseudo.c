
undefined8 add_bytes(long param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  byte bVar4;
  int iVar2;
  byte *pbVar3;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar3 = (byte *)(*(long *)(param_1 + 0xe8) + -1 + param_2);
  pbVar5 = (byte *)(param_3 + -1 + param_4);
  if (param_4 == 0) {
    return 1;
  }
  bVar4 = 0;
  pbVar6 = pbVar3;
  do {
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + -1;
    iVar2 = (uint)*pbVar6 + (uint)bVar1 + (uint)bVar4;
    *pbVar6 = (byte)iVar2;
    bVar4 = (byte)((uint)iVar2 >> 8);
    pbVar6 = pbVar6 + -1;
  } while ((byte *)(param_3 + -1) != pbVar5);
  pbVar3 = pbVar3 + -param_4;
  if ((bVar4 != 0) && (*(long *)(param_1 + 0xe8) != param_4)) {
    pbVar5 = pbVar3 + (param_4 - *(long *)(param_1 + 0xe8));
    do {
      *pbVar3 = *pbVar3 + 1;
      if (*pbVar3 != 0) {
        return 1;
      }
      pbVar3 = pbVar3 + -1;
    } while (pbVar3 != pbVar5);
  }
  return 1;
}

