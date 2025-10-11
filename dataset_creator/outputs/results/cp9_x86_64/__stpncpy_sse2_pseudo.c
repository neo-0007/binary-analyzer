
void * __stpncpy_sse2(void *param_1,char *param_2,size_t param_3)

{
  size_t __n;
  void *pvVar1;
  
  __n = strnlen(param_2,param_3);
  memcpy(param_1,param_2,__n);
  if (param_3 != __n) {
    pvVar1 = memset((void *)((long)param_1 + __n),0,param_3 - __n);
    return pvVar1;
  }
  return (void *)((long)param_1 + __n);
}

