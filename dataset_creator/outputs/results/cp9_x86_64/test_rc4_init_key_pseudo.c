
int test_rc4_init_key(undefined8 param_1,void *param_2)

{
  int len;
  void *__dest;
  uchar *data;
  long lVar1;
  int iVar2;
  
  len = EVP_CIPHER_CTX_get_key_length();
  fwrite("(TEST_ENG_OPENSSL_RC4) test_init_key() called\n",1,0x2e,(FILE *)stderr);
  iVar2 = len;
  if (0 < len) {
    __dest = (void *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    memcpy(__dest,param_2,(long)len);
    data = (uchar *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    lVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    iVar2 = 1;
    RC4_set_key((RC4_KEY *)(lVar1 + 0x10),len,data);
  }
  return iVar2;
}

