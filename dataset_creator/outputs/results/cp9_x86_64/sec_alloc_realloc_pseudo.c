
void * sec_alloc_realloc(size_t *param_1,undefined8 param_2)

{
  void *__dest;
  
  __dest = (void *)CRYPTO_secure_malloc(param_2,"../crypto/buffer/buffer.c",0x3e);
  if ((__dest != (void *)0x0) && ((void *)param_1[1] != (void *)0x0)) {
    memcpy(__dest,(void *)param_1[1],*param_1);
    CRYPTO_secure_clear_free(param_1[1],*param_1,"../crypto/buffer/buffer.c",0x42);
    param_1[1] = 0;
  }
  return __dest;
}

