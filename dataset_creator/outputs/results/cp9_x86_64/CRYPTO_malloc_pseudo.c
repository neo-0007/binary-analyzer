
void * CRYPTO_malloc(int num,char *file,int line)

{
  void *pvVar1;
  undefined4 in_register_0000003c;
  
  if ((code *)malloc_impl != CRYPTO_malloc) {
                    /* WARNING: Could not recover jumptable at 0x004197b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)malloc_impl)();
    return pvVar1;
  }
  if (CONCAT44(in_register_0000003c,num) != 0) {
    if (allow_customize != 0) {
      allow_customize = 0;
    }
    pvVar1 = malloc(CONCAT44(in_register_0000003c,num));
    return pvVar1;
  }
  return (void *)0x0;
}

