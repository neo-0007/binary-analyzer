
undefined8 decompose_rpath(undefined8 *param_1,char *param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  char *pcVar2;
  long *__ptr;
  long lVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  char *pcVar7;
  size_t __size;
  
  pcVar4 = *(char **)(param_3 + 8);
  if ((_dl_inhibit_rpath != (char *)0x0) && (__libc_enable_secure == 0)) {
    cVar1 = *_dl_inhibit_rpath;
    pcVar2 = _dl_inhibit_rpath;
    do {
      pcVar7 = pcVar4;
      cVar6 = *pcVar4;
      cVar5 = cVar1;
      if (cVar1 == *pcVar4) {
        do {
          if (cVar5 == '\0') goto LAB_007ac8d9;
          cVar1 = pcVar2[1];
          cVar5 = pcVar7[1];
          pcVar2 = pcVar2 + 1;
          pcVar7 = pcVar7 + 1;
          cVar6 = cVar5;
        } while (cVar1 == cVar5);
      }
      if (cVar6 == '\0') {
LAB_007ac8d9:
        if ((cVar1 == '\0') || (cVar1 == ':')) goto LAB_007ac7d3;
      }
      do {
        pcVar7 = pcVar2;
        if (*pcVar7 == '\0') goto LAB_007ac7ce;
        pcVar2 = pcVar7 + 1;
      } while (*pcVar7 != ':');
      cVar1 = pcVar7[1];
    } while (cVar1 != '\0');
  }
LAB_007ac7ce:
  if (*param_2 != '\0') {
    pcVar2 = strdup(param_2);
    if (pcVar2 == (char *)0x0) {
      pcVar4 = "cannot create RUNPATH/RPATH copy";
    }
    else {
      cVar1 = *pcVar2;
      if (cVar1 == '\0') {
        __size = 0x10;
      }
      else {
        lVar3 = 0;
        pcVar7 = pcVar2;
        do {
          pcVar7 = pcVar7 + 1;
          lVar3 = lVar3 + (ulong)(cVar1 == ':');
          cVar1 = *pcVar7;
        } while (cVar1 != '\0');
        __size = lVar3 * 8 + 0x10;
      }
      __ptr = (long *)malloc(__size);
      if (__ptr != (long *)0x0) {
        fillin_rpath_isra_0(pcVar2,__ptr,":",param_4,pcVar4,param_3);
        free(pcVar2);
        if (*__ptr != 0) {
          *param_1 = __ptr;
          *(undefined4 *)(param_1 + 1) = 1;
          return 1;
        }
        free(__ptr);
        goto LAB_007ac7d3;
      }
      free(pcVar2);
      pcVar4 = "cannot create cache for search path";
    }
                    /* WARNING: Subroutine does not return */
    _dl_signal_error(0xc,0,0,pcVar4);
  }
LAB_007ac7d3:
  *param_1 = 0xffffffffffffffff;
  return 0;
}

