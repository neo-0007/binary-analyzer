
undefined8 des_ede_ecb_cipher(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  DES_cblock *output;
  const_DES_cblock *input;
  int enc;
  long lVar1;
  long lVar2;
  DES_key_schedule *ks1;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = EVP_CIPHER_CTX_get0_cipher();
  uVar4 = (ulong)*(int *)(lVar1 + 4);
  if (uVar4 <= param_4) {
    uVar3 = 0;
    do {
      enc = EVP_CIPHER_CTX_is_encrypting(param_1);
      lVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      ks1 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      output = (DES_cblock *)(param_2 + uVar3);
      input = (const_DES_cblock *)(param_3 + uVar3);
      uVar3 = uVar3 + uVar4;
      DES_ecb3_encrypt(input,output,ks1,(DES_key_schedule *)(lVar2 + 0x80),
                       (DES_key_schedule *)(lVar1 + 0x100),enc);
    } while (uVar3 <= param_4 - uVar4);
  }
  return 1;
}

