
void * __glibc_morecore(intptr_t param_1)

{
  void *pvVar1;
  
  if (__always_fail_morecore != '\0') {
    return (void *)0x0;
  }
  pvVar1 = sbrk(param_1);
  if (pvVar1 != (void *)0xffffffffffffffff) {
    return pvVar1;
  }
  return (void *)0x0;
}

