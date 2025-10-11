
char * strndup(char *__string,size_t __n)

{
  size_t __n_00;
  void *__dest;
  char *pcVar1;
  
  __n_00 = strnlen(__string,__n);
  __dest = malloc(__n_00 + 1);
  if (__dest != (void *)0x0) {
    *(undefined1 *)((long)__dest + __n_00) = 0;
    pcVar1 = (char *)memcpy(__dest,__string,__n_00);
    return pcVar1;
  }
  return (char *)0x0;
}

