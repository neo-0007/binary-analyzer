
undefined8 FUN_007b60e0(undefined8 *param_1,char *param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  char *pcVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  char cVar6;
  char cVar7;
  char *pcVar8;
  
  pcVar5 = *(char **)(param_3 + 8);
  if ((DAT_0094b0c0 != (char *)0x0) && (DAT_0093ae30 == 0)) {
    cVar1 = *DAT_0094b0c0;
    pcVar2 = DAT_0094b0c0;
    do {
      pcVar8 = pcVar5;
      cVar7 = *pcVar5;
      cVar6 = cVar1;
      if (cVar1 == *pcVar5) {
        do {
          if (cVar6 == '\0') goto LAB_007b6219;
          cVar1 = pcVar2[1];
          cVar6 = pcVar8[1];
          pcVar2 = pcVar2 + 1;
          pcVar8 = pcVar8 + 1;
          cVar7 = cVar6;
        } while (cVar1 == cVar6);
      }
      if (cVar7 == '\0') {
LAB_007b6219:
        if ((cVar1 == '\0') || (cVar1 == ':')) goto LAB_007b6113;
      }
      do {
        pcVar8 = pcVar2;
        if (*pcVar8 == '\0') goto LAB_007b610e;
        pcVar2 = pcVar8 + 1;
      } while (*pcVar8 != ':');
      cVar1 = pcVar8[1];
    } while (cVar1 != '\0');
  }
LAB_007b610e:
  if (*param_2 != '\0') {
    pcVar2 = (char *)FUN_007128a0();
    if (pcVar2 == (char *)0x0) {
      pcVar5 = "cannot create RUNPATH/RPATH copy";
    }
    else {
      cVar1 = *pcVar2;
      if (cVar1 == '\0') {
        lVar4 = 0x10;
      }
      else {
        lVar4 = 0;
        pcVar8 = pcVar2;
        do {
          pcVar8 = pcVar8 + 1;
          lVar4 = lVar4 + (ulong)(cVar1 == ':');
          cVar1 = *pcVar8;
        } while (cVar1 != '\0');
        lVar4 = lVar4 * 8 + 0x10;
      }
      plVar3 = (long *)FUN_007101b0(lVar4);
      if (plVar3 != (long *)0x0) {
        FUN_007b5e70(pcVar2,plVar3,":",param_4,pcVar5,param_3);
        FUN_007104f0(pcVar2);
        if (*plVar3 != 0) {
          *param_1 = plVar3;
          *(undefined4 *)(param_1 + 1) = 1;
          return 1;
        }
        FUN_007104f0(plVar3);
        goto LAB_007b6113;
      }
      FUN_007104f0(pcVar2);
      pcVar5 = "cannot create cache for search path";
    }
                    /* WARNING: Subroutine does not return */
    FUN_0078db10(0xc,0,0,pcVar5);
  }
LAB_007b6113:
  *param_1 = 0xffffffffffffffff;
  return 0;
}

