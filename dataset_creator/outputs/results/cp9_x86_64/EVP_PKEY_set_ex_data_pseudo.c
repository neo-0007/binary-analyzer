
void EVP_PKEY_set_ex_data(long param_1,int param_2,void *param_3)

{
  CRYPTO_set_ex_data((CRYPTO_EX_DATA *)(param_1 + 0x50),param_2,param_3);
  return;
}

