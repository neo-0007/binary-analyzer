
void __libc_alloc_buffer_copy_string(undefined8 param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_3);
  __libc_alloc_buffer_copy_bytes(param_1,param_2,param_3,sVar1 + 1);
  return;
}

