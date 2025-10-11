
char * strdup(char *__s)

{
  size_t sVar1;
  void *__dest;
  char *pcVar2;
  
  sVar1 = strlen(__s);
  __dest = malloc(sVar1 + 1);
  if (__dest != (void *)0x0) {
    pcVar2 = (char *)memcpy(__dest,__s,sVar1 + 1);
    return pcVar2;
  }
  return (char *)0x0;
}

