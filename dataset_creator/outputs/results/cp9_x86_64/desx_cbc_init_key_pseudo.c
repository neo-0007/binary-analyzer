
undefined8 desx_cbc_init_key(undefined8 param_1,const_DES_cblock *param_2)

{
  DES_key_schedule *schedule;
  long lVar1;
  
  schedule = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data();
  DES_set_key_unchecked(param_2,schedule);
  lVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  *(const_DES_cblock *)(lVar1 + 0x80) = param_2[1];
  lVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  *(const_DES_cblock *)(lVar1 + 0x88) = param_2[2];
  return 1;
}

