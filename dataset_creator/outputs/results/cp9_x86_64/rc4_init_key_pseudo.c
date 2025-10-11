
bool rc4_init_key(undefined8 param_1,uchar *param_2)

{
  int len;
  RC4_KEY *key;
  
  len = EVP_CIPHER_CTX_get_key_length();
  if (0 < len) {
    key = (RC4_KEY *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    RC4_set_key(key,len,param_2);
  }
  return 0 < len;
}

