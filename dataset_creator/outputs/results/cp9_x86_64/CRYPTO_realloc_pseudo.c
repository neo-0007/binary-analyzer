
void * CRYPTO_realloc(void *addr,int num,char *file,int line)

{
  void *pvVar1;
  undefined4 in_register_00000034;
  
  if ((code *)realloc_impl != CRYPTO_realloc) {
                    /* WARNING: Could not recover jumptable at 0x0041980a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)realloc_impl)();
    return pvVar1;
  }
  if (addr != (void *)0x0) {
    if (CONCAT44(in_register_00000034,num) != 0) {
      pvVar1 = realloc(addr,CONCAT44(in_register_00000034,num));
      return pvVar1;
    }
    CRYPTO_free(addr);
    return (void *)0x0;
  }
  pvVar1 = CRYPTO_malloc(num,file,line);
  return pvVar1;
}

