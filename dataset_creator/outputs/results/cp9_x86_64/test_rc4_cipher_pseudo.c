
undefined8 test_rc4_cipher(undefined8 param_1,uchar *param_2,uchar *param_3,size_t param_4)

{
  long lVar1;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  RC4((RC4_KEY *)(lVar1 + 0x10),param_4,param_3,param_2);
  return 1;
}

