
void ossl_blake2b_param_set_salt(long param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
  pvVar1 = memcpy((void *)(param_1 + 0x20),param_2,param_3);
  memset((void *)((long)pvVar1 + param_3),0,0x10 - param_3);
  return;
}

