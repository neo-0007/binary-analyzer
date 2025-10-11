
char * _dl_dst_substitute(long param_1,char *param_2,char *param_3)

{
  char cVar1;
  long lVar2;
  char *__dest;
  char *pcVar3;
  char *__src;
  char *pcVar4;
  bool bVar5;
  
  bVar5 = false;
  cVar1 = *param_2;
  __dest = param_3;
  pcVar4 = param_2;
  do {
    while (pcVar4 = pcVar4 + 1, cVar1 == '$') {
      lVar2 = is_dst(pcVar4,"ORIGIN");
      if (lVar2 == 0) {
        lVar2 = is_dst(pcVar4,"PLATFORM");
        if (lVar2 == 0) {
          lVar2 = is_dst(pcVar4,&DAT_007c65b1);
          if (lVar2 == 0) {
            *__dest = '$';
            goto LAB_007ac25f;
          }
          pcVar3 = "";
          __src = "lib/x86_64-linux-gnu";
        }
        else {
          pcVar3 = _dl_platform + -1;
          __src = _dl_platform;
        }
      }
      else if (__libc_enable_secure == 0) {
        bVar5 = false;
        pcVar3 = *(char **)(param_1 + 0x350) + -1;
        __src = *(char **)(param_1 + 0x350);
      }
      else {
        if ((pcVar4 != param_2 + 1) || ((pcVar4[lVar2] != '\0' && (pcVar4[lVar2] != '/'))))
        goto LAB_007ac363;
        bVar5 = (*(byte *)(param_1 + 0x31c) & 3) == 0;
        pcVar3 = *(char **)(param_1 + 0x350) + -1;
        __src = *(char **)(param_1 + 0x350);
      }
      if ((char *)0xfffffffffffffffd < pcVar3) goto LAB_007ac363;
      __dest = stpcpy(__dest,__src);
      pcVar4 = pcVar4 + lVar2;
      cVar1 = *pcVar4;
      if (cVar1 == '\0') goto LAB_007ac2d0;
    }
    *__dest = cVar1;
LAB_007ac25f:
    __dest = __dest + 1;
    cVar1 = *pcVar4;
  } while (cVar1 != '\0');
LAB_007ac2d0:
  if ((!bVar5) ||
     (cVar1 = is_trusted_path_normalize(param_3,(long)__dest - (long)param_3), cVar1 != '\0')) {
    *__dest = '\0';
    return param_3;
  }
LAB_007ac363:
  *param_3 = '\0';
  return param_3;
}

