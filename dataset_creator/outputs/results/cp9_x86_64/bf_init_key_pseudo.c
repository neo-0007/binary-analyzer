
bool bf_init_key(undefined8 param_1,uchar *param_2)

{
  int len;
  BF_KEY *key;
  
  len = EVP_CIPHER_CTX_get_key_length();
  if (-1 < len) {
    key = (BF_KEY *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    BF_set_key(key,len,param_2);
  }
  return -1 < len;
}

