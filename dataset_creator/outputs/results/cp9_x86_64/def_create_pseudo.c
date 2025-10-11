
void * def_create(long param_1)

{
  int iVar1;
  void *ptr;
  
  ptr = CRYPTO_malloc(0x30,"../crypto/conf/conf_def.c",0x73);
  if (ptr != (void *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x10))(ptr);
    if (iVar1 == 0) {
      CRYPTO_free(ptr);
      return (void *)0x0;
    }
  }
  return ptr;
}

