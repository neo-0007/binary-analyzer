
wctrans_t wctrans(char *__property)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  char *__s2;
  long lVar4;
  long in_FS_OFFSET;
  
  lVar1 = **(long **)(in_FS_OFFSET + -0xd8);
  __s2 = *(char **)(lVar1 + 0x98);
  if (*__s2 != '\0') {
    lVar4 = 0;
    do {
      iVar2 = strcmp(__property,__s2);
      if (iVar2 == 0) {
        return *(wctrans_t *)(lVar1 + (lVar4 + 8 + (ulong)*(uint *)(lVar1 + 0xd0)) * 8);
      }
      lVar4 = lVar4 + 1;
      sVar3 = strlen(__s2);
      __s2 = __s2 + sVar3 + 1;
    } while (*__s2 != '\0');
  }
  return (wctrans_t)0x0;
}

