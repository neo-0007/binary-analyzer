
int ossl_pem_check_suffix(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  char *__s1;
  
  sVar2 = strlen(param_1);
  sVar3 = strlen(param_2);
  iVar1 = 0;
  if ((int)sVar3 + 1 < (int)sVar2) {
    __s1 = param_1 + ((long)(int)sVar2 - (long)(int)sVar3);
    iVar1 = strcmp(__s1,param_2);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = 0;
    if (__s1[-1] == ' ') {
      iVar1 = ((int)__s1 + -1) - (int)param_1;
    }
  }
  return iVar1;
}

