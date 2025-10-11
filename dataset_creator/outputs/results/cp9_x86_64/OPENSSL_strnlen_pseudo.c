
long OPENSSL_strnlen(char *param_1,long param_2)

{
  char *pcVar1;
  
  pcVar1 = param_1;
  if (param_2 == 0) {
    return 0;
  }
  do {
    if (*pcVar1 == '\0') {
      return (long)pcVar1 - (long)param_1;
    }
    pcVar1 = pcVar1 + 1;
  } while (param_1 + param_2 != pcVar1);
  return (long)(param_1 + param_2) - (long)param_1;
}

