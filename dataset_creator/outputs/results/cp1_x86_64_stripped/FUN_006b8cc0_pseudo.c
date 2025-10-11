
int FUN_006b8cc0(long param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar2 = *(char **)(param_1 + 0x18);
  cVar1 = *pcVar2;
  if (cVar1 == 'n') {
    pcVar5 = pcVar2 + 1;
    *(char **)(param_1 + 0x18) = pcVar5;
    cVar1 = pcVar2[1];
    if (9 < (byte)(cVar1 - 0x30U)) {
      return 0;
    }
    bVar3 = true;
  }
  else {
    if (9 < (byte)(cVar1 - 0x30U)) {
      return 0;
    }
    bVar3 = false;
    pcVar5 = pcVar2;
  }
  iVar6 = 0;
  iVar4 = (int)(char)(cVar1 + -0x30);
  do {
    pcVar5 = pcVar5 + 1;
    *(char **)(param_1 + 0x18) = pcVar5;
    iVar6 = iVar4 + iVar6 * 10;
    if (9 < (byte)(*pcVar5 - 0x30U)) {
      if (bVar3) {
        iVar6 = -iVar6;
      }
      return iVar6;
    }
    iVar4 = (int)(char)(*pcVar5 - 0x30U);
  } while (iVar6 <= (int)((0x7fffffffU - iVar4) / 10));
  return -1;
}

