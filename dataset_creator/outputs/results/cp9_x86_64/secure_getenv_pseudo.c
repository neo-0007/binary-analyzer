
char * secure_getenv(char *param_1)

{
  char *pcVar1;
  
  if (__libc_enable_secure == 0) {
    pcVar1 = getenv(param_1);
    return pcVar1;
  }
  return (char *)0x0;
}

