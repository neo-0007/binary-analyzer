
char * FUN_007b5b60(long param_1,char *param_2,char *param_3)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  bVar7 = false;
  cVar1 = *param_2;
  pcVar3 = param_3;
  pcVar6 = param_2;
  do {
    while (pcVar6 = pcVar6 + 1, cVar1 == '$') {
      lVar2 = FUN_007b2d50(pcVar6,"ORIGIN");
      if (lVar2 == 0) {
        lVar2 = FUN_007b2d50(pcVar6,"PLATFORM");
        if (lVar2 == 0) {
          lVar2 = FUN_007b2d50(pcVar6,&DAT_007d043b);
          if (lVar2 == 0) {
            *pcVar3 = '$';
            goto LAB_007b5b9f;
          }
          pcVar4 = "";
          pcVar5 = "lib/x86_64-linux-gnu";
        }
        else {
          pcVar4 = DAT_0094b0f0 + -1;
          pcVar5 = DAT_0094b0f0;
        }
      }
      else if (DAT_0093ae30 == 0) {
        bVar7 = false;
        pcVar4 = *(char **)(param_1 + 0x350) + -1;
        pcVar5 = *(char **)(param_1 + 0x350);
      }
      else {
        if ((pcVar6 != param_2 + 1) || ((pcVar6[lVar2] != '\0' && (pcVar6[lVar2] != '/'))))
        goto LAB_007b5ca3;
        bVar7 = (*(byte *)(param_1 + 0x31c) & 3) == 0;
        pcVar4 = *(char **)(param_1 + 0x350) + -1;
        pcVar5 = *(char **)(param_1 + 0x350);
      }
      if ((char *)0xfffffffffffffffd < pcVar4) goto LAB_007b5ca3;
      pcVar3 = (char *)thunk_FUN_00713930(pcVar3,pcVar5);
      pcVar6 = pcVar6 + lVar2;
      cVar1 = *pcVar6;
      if (cVar1 == '\0') goto LAB_007b5c10;
    }
    *pcVar3 = cVar1;
LAB_007b5b9f:
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar6;
  } while (cVar1 != '\0');
LAB_007b5c10:
  if ((!bVar7) || (cVar1 = FUN_007b2e00(param_3,(long)pcVar3 - (long)param_3), cVar1 != '\0')) {
    *pcVar3 = '\0';
    return param_3;
  }
LAB_007b5ca3:
  *param_3 = '\0';
  return param_3;
}

