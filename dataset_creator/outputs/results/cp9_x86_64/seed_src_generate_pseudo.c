
bool seed_src_generate(long param_1,void *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  size_t __n;
  void *__src;
  
  if (*(int *)(param_1 + 8) == 1) {
    lVar1 = ossl_rand_pool_new(param_4,1,param_3,param_3);
    if (lVar1 != 0) {
      lVar2 = ossl_pool_acquire_entropy(lVar1);
      if (lVar2 != 0) {
        __n = ossl_rand_pool_length(lVar1);
        __src = (void *)ossl_rand_pool_buffer(lVar1);
        memcpy(param_2,__src,__n);
      }
      ossl_rand_pool_free(lVar1);
      return lVar2 != 0;
    }
    ERR_new();
    ERR_set_debug("../providers/implementations/rands/seed_src.c",0x6d,"seed_src_generate");
    ERR_set_error(0x39,0xc0100,0);
  }
  else {
    ERR_new();
    ERR_set_debug("../providers/implementations/rands/seed_src.c",0x65,"seed_src_generate");
    ERR_set_error(0x39,(*(int *)(param_1 + 8) != 2) + 0xc0,0);
  }
  return false;
}

