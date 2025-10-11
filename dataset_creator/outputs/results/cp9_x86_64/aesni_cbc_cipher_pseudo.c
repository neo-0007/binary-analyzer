
undefined8 aesni_cbc_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = EVP_CIPHER_CTX_is_encrypting();
  uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  aesni_cbc_encrypt(param_3,param_2,param_4,uVar2,param_1 + 0x28,uVar1);
  return 1;
}

