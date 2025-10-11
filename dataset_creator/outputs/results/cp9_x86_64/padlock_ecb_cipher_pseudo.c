
void padlock_ecb_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  iVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  padlock_ecb_encrypt(param_2,param_3,lVar2 + (ulong)(-iVar1 & 0xf),param_4);
  return;
}

