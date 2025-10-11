
undefined8 rc2_init_key(undefined8 param_1,uchar *param_2)

{
  int bits;
  int len;
  int *piVar1;
  long lVar2;
  
  piVar1 = (int *)EVP_CIPHER_CTX_get_cipher_data();
  bits = *piVar1;
  len = EVP_CIPHER_CTX_get_key_length(param_1);
  lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  RC2_set_key((RC2_KEY *)(lVar2 + 4),len,param_2,bits);
  return 1;
}

