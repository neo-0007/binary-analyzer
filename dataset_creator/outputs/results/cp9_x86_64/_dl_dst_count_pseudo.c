
long _dl_dst_count(char *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  pcVar1 = strchr(param_1,0x24);
  if (pcVar1 != (char *)0x0) {
    do {
      pcVar1 = pcVar1 + 1;
      lVar2 = is_dst(pcVar1,"ORIGIN");
      if (((lVar2 != 0) || (lVar2 = is_dst(pcVar1,"PLATFORM"), lVar2 != 0)) ||
         (lVar2 = is_dst(pcVar1,&DAT_007c65b1), lVar2 != 0)) {
        lVar3 = lVar3 + 1;
        pcVar1 = pcVar1 + lVar2;
      }
      pcVar1 = strchr(pcVar1,0x24);
    } while (pcVar1 != (char *)0x0);
    return lVar3;
  }
  return 0;
}

