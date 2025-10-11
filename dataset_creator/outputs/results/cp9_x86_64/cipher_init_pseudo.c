
int cipher_init(EVP_CIPHER_CTX *param_1,EVP_CIPHER *param_2,ENGINE *param_3,uchar *param_4,
               long param_5)

{
  int iVar1;
  
  iVar1 = EVP_EncryptInit_ex(param_1,param_2,param_3,param_4,(uchar *)0x0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
  if ((iVar1 != param_5) &&
     (iVar1 = EVP_CIPHER_CTX_set_key_length(param_1,(int)param_5), iVar1 == 0)) {
    return 0;
  }
  iVar1 = EVP_CIPHER_CTX_set_padding(param_1,0);
  return iVar1;
}

