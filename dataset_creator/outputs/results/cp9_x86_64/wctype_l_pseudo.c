
wctype_t wctype_l(char *__property,__locale_t __locale)

{
  __locale_data *p_Var1;
  int iVar2;
  size_t __n;
  size_t sVar3;
  int iVar4;
  char *__s;
  
  iVar4 = 0;
  __n = strlen(__property);
  p_Var1 = __locale->__locales[0];
  __s = *(char **)(p_Var1 + 0x90);
  while( true ) {
    sVar3 = strlen(__s);
    if (__n == sVar3) {
      iVar2 = bcmp(__property,__s,__n);
      if (iVar2 == 0) {
        return *(wctype_t *)(p_Var1 + (ulong)(uint)(iVar4 + *(int *)(p_Var1 + 200)) * 8 + 0x40);
      }
    }
    __s = __s + sVar3 + 1;
    if (*__s == '\0') break;
    iVar4 = iVar4 + 1;
  }
  return 0;
}

