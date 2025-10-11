
void ossl_blake2s_param_set_salt(long param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
  pvVar1 = memcpy((void *)(param_1 + 0x10),param_2,param_3);
  memset((void *)((long)pvVar1 + param_3),0,8 - param_3);
  return;
}

