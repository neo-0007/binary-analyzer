
undefined8 aesni_ecb_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = EVP_CIPHER_CTX_get_block_size();
  if ((ulong)(long)iVar1 <= param_4) {
    uVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
    uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    aesni_ecb_encrypt(param_3,param_2,param_4,uVar3,uVar2);
  }
  return 1;
}

