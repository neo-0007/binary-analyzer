
void __strncpy_sse2(void *param_1,char *param_2,size_t param_3)

{
  size_t __n;
  
  __n = strnlen(param_2,param_3);
  if (param_3 != __n) {
    memset((void *)((long)param_1 + __n),0,param_3 - __n);
  }
  memcpy(param_1,param_2,__n);
  return;
}

