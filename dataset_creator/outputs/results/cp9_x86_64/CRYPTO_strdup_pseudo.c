
char * CRYPTO_strdup(char *str,char *file,int line)

{
  size_t sVar1;
  char *__dest;
  
  if (str != (char *)0x0) {
    sVar1 = strlen(str);
    __dest = (char *)CRYPTO_malloc((int)sVar1 + 1,file,line);
    if (__dest != (char *)0x0) {
      __dest = strcpy(__dest,str);
    }
    return __dest;
  }
  return (char *)0x0;
}

