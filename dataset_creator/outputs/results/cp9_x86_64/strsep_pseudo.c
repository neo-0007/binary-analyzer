
char * strsep(char **__stringp,char *__delim)

{
  char *__s;
  size_t sVar1;
  char *pcVar2;
  
  __s = *__stringp;
  if (__s != (char *)0x0) {
    sVar1 = strcspn(__s,__delim);
    pcVar2 = __s + sVar1;
    if (*pcVar2 == '\0') {
      *__stringp = (char *)0x0;
      return __s;
    }
    *pcVar2 = '\0';
    *__stringp = pcVar2 + 1;
  }
  return __s;
}

