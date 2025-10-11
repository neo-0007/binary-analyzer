
undefined8 des_ecb_cipher(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  const_DES_cblock *input;
  DES_cblock *output;
  int enc;
  long lVar1;
  DES_key_schedule *ks;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = EVP_CIPHER_CTX_get0_cipher();
  uVar3 = (ulong)*(int *)(lVar1 + 4);
  if (uVar3 <= param_4) {
    uVar2 = 0;
    do {
      enc = EVP_CIPHER_CTX_is_encrypting(param_1);
      ks = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      output = (DES_cblock *)(param_2 + uVar2);
      input = (const_DES_cblock *)(param_3 + uVar2);
      uVar2 = uVar2 + uVar3;
      DES_ecb_encrypt(input,output,ks,enc);
    } while (uVar2 <= param_4 - uVar3);
  }
  return 1;
}

