
undefined8 v3_check_critical(undefined8 *param_1)

{
  char *__s;
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  __s = (char *)*param_1;
  sVar2 = strlen(__s);
  if (8 < sVar2) {
    pcVar3 = __s + 9;
    iVar1 = strncmp(__s,"critical,",9);
    if (iVar1 == 0) {
      while( true ) {
        iVar1 = ossl_ctype_check((int)*pcVar3,8);
        if (iVar1 == 0) break;
        pcVar3 = pcVar3 + 1;
      }
      *param_1 = pcVar3;
      return 1;
    }
  }
  return 0;
}

