
byte FUN_006cdce0(long param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  char cVar5;
  char *pcVar6;
  undefined1 local_20 [16];
  
  lVar2 = thunk_FUN_007129d0(param_1 + 9);
  pbVar4 = (byte *)(param_1 + 10 + lVar2);
  if (3 < *(byte *)(param_1 + 8)) {
    if (*pbVar4 != 8) {
      return 0xff;
    }
    if (pbVar4[1] != 0) {
      return 0xff;
    }
    pbVar4 = pbVar4 + 2;
  }
  if (*(char *)(param_1 + 9) != 'z') {
    return 0;
  }
  do {
    bVar1 = *pbVar4;
    pbVar3 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
  } while ((char)bVar1 < '\0');
  do {
    pbVar4 = pbVar3;
    pbVar3 = pbVar4 + 1;
  } while ((char)*pbVar4 < '\0');
  if (*(byte *)(param_1 + 8) == 1) {
    pbVar4 = pbVar4 + 2;
  }
  else {
    do {
      pbVar4 = pbVar3 + 1;
      bVar1 = *pbVar3;
      pbVar3 = pbVar4;
    } while ((char)bVar1 < '\0');
  }
  pcVar6 = (char *)(param_1 + 10);
  do {
    pbVar3 = pbVar4 + 1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar3;
  } while ((char)bVar1 < '\0');
  cVar5 = *(char *)(param_1 + 10);
  while (cVar5 != 'R') {
    while (cVar5 != 'P') {
      if ((cVar5 != 'L') && (cVar5 != 'B')) {
        return 0;
      }
      cVar5 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
      pbVar3 = pbVar3 + 1;
      if (cVar5 == 'R') goto LAB_006cddc0;
    }
    pcVar6 = pcVar6 + 1;
    pbVar3 = (byte *)FUN_006cdb90(*pbVar3 & 0x7f,0,pbVar3 + 1,local_20);
    cVar5 = *pcVar6;
  }
LAB_006cddc0:
  return *pbVar3;
}

