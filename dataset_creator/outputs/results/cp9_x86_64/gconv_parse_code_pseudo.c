
void gconv_parse_code(undefined8 *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  char *pcVar6;
  char *__s1;
  long in_FS_OFFSET;
  
  *(undefined2 *)(param_1 + 1) = 0;
  do {
    pcVar1 = (char *)*param_1;
    sVar4 = strlen(pcVar1);
    do {
      sVar5 = sVar4;
      if (sVar5 == 0) {
        *pcVar1 = '\0';
        return;
      }
      cVar2 = pcVar1[sVar5 - 1];
      sVar4 = sVar5 - 1;
    } while (((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar2 * 2) & 0x20) != 0) ||
            (cVar2 == '/' || cVar2 == ','));
    pcVar1[sVar5] = '\0';
    cVar2 = *(char *)*param_1;
    if (cVar2 == '\0') {
      return;
    }
    iVar3 = 0;
    pcVar1 = (char *)*param_1;
    __s1 = (char *)0x0;
    do {
      while (pcVar6 = pcVar1, cVar2 == ',') {
        cVar2 = pcVar6[1];
        pcVar1 = pcVar6 + 1;
        __s1 = pcVar6;
        if (cVar2 == '\0') goto LAB_006d4bb9;
      }
      if (cVar2 == '/') {
        iVar3 = iVar3 + 1;
        __s1 = pcVar6;
      }
      cVar2 = pcVar6[1];
      pcVar1 = pcVar6 + 1;
    } while (cVar2 != '\0');
LAB_006d4bb9:
    if (iVar3 < 2) {
      return;
    }
    if (__s1 == (char *)0x0) {
      return;
    }
    iVar3 = strcasecmp_l(__s1,"/TRANSLIT",(__locale_t)_nl_C_locobj);
    if ((iVar3 == 0) ||
       (iVar3 = strcasecmp_l(__s1,",TRANSLIT",(__locale_t)_nl_C_locobj), iVar3 == 0)) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    iVar3 = strcasecmp_l(__s1,"/IGNORE",(__locale_t)_nl_C_locobj);
    if ((iVar3 == 0) || (iVar3 = strcasecmp_l(__s1,",IGNORE",(__locale_t)_nl_C_locobj), iVar3 == 0))
    {
      *(undefined1 *)((long)param_1 + 9) = 1;
    }
    *__s1 = '\0';
  } while( true );
}

