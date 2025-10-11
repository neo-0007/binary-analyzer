
void cmac_update(long param_1,void *param_2,size_t param_3)

{
  CMAC_Update(*(CMAC_CTX **)(param_1 + 8),param_2,param_3);
  return;
}

