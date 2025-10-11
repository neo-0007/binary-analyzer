
char * strtok_r(char *__s,char *__delim,char **__save_ptr)

{
  size_t sVar1;
  char *__s_00;
  
  if (__s == (char *)0x0) {
    __s = *__save_ptr;
  }
  if (*__s != '\0') {
    sVar1 = strspn(__s,__delim);
    __s_00 = __s + sVar1;
    __s = __s_00;
    if (*__s_00 != '\0') {
      sVar1 = strcspn(__s_00,__delim);
      __s = __s_00 + sVar1;
      if (*__s != '\0') {
        *__s = '\0';
        __s = __s + 1;
      }
      goto LAB_00709ab2;
    }
  }
  __s_00 = (char *)0x0;
LAB_00709ab2:
  *__save_ptr = __s;
  return __s_00;
}

