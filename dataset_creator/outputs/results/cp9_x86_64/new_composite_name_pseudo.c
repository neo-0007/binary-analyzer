
char * new_composite_name(int param_1,undefined8 *param_2)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  void *__dest;
  char *pcVar5;
  size_t __size;
  long lVar6;
  bool bVar7;
  
  lVar6 = 0;
  __size = 0;
  bVar7 = true;
  if (param_1 != 6) {
    do {
      if (lVar6 != 6) {
        if (param_1 == (int)lVar6) {
          pcVar5 = (char *)*param_2;
        }
        else {
          pcVar5 = (&PTR__nl_C_name_00930a60)[lVar6];
        }
        sVar2 = strlen(pcVar5);
        __size = __size + 2 + (ulong)(byte)(&_nl_category_name_sizes)[lVar6] + sVar2;
        if ((bVar7) && (pcVar5 != (char *)*param_2)) {
          iVar1 = strcmp(pcVar5,(char *)*param_2);
          bVar7 = iVar1 == 0;
        }
        if (lVar6 == 0xc) goto LAB_006d5041;
      }
      lVar6 = lVar6 + 1;
    } while( true );
  }
  do {
    if (lVar6 != 6) {
      pcVar5 = (char *)param_2[lVar6];
      sVar2 = strlen(pcVar5);
      __size = __size + 2 + (ulong)(byte)(&_nl_category_name_sizes)[lVar6] + sVar2;
      if ((bVar7) && ((char *)*param_2 != pcVar5)) {
        iVar1 = strcmp(pcVar5,(char *)*param_2);
        bVar7 = iVar1 == 0;
      }
      if (lVar6 == 0xc) break;
    }
    lVar6 = lVar6 + 1;
  } while( true );
LAB_006d5041:
  if (bVar7) {
    pcVar5 = (char *)*param_2;
    iVar1 = strcmp(pcVar5,"C");
    if (iVar1 == 0) {
      return "C";
    }
    iVar1 = strcmp(pcVar5,"POSIX");
    if (iVar1 == 0) {
      return "C";
    }
    __dest = malloc(sVar2 + 1);
    if (__dest != (void *)0x0) {
      pcVar5 = (char *)memcpy(__dest,pcVar5,sVar2 + 1);
      return pcVar5;
    }
  }
  else {
    pcVar5 = (char *)malloc(__size);
    if (pcVar5 != (char *)0x0) {
      if (param_1 == 6) {
        lVar6 = 0;
        pcVar3 = pcVar5;
        do {
          if (lVar6 != 6) {
            pcVar4 = (char *)param_2[lVar6];
            pcVar3 = stpcpy(pcVar3,"LC_COLLATE" + (byte)(&_nl_category_name_idxs)[lVar6]);
            *pcVar3 = '=';
            pcVar4 = stpcpy(pcVar3 + 1,pcVar4);
            *pcVar4 = ';';
            pcVar3 = pcVar4 + 1;
            if (lVar6 == 0xc) goto LAB_006d5168;
          }
          lVar6 = lVar6 + 1;
        } while( true );
      }
      lVar6 = 0;
      pcVar3 = pcVar5;
      do {
        if (lVar6 != 6) {
          if (param_1 == (int)lVar6) {
            pcVar4 = (char *)*param_2;
          }
          else {
            pcVar4 = (&PTR__nl_C_name_00930a60)[lVar6];
          }
          pcVar3 = stpcpy(pcVar3,"LC_COLLATE" + (byte)(&_nl_category_name_idxs)[lVar6]);
          *pcVar3 = '=';
          pcVar4 = stpcpy(pcVar3 + 1,pcVar4);
          *pcVar4 = ';';
          pcVar3 = pcVar4 + 1;
          if (lVar6 == 0xc) {
LAB_006d5168:
            *pcVar4 = '\0';
            return pcVar5;
          }
        }
        lVar6 = lVar6 + 1;
      } while( true );
    }
  }
  return (char *)0x0;
}

