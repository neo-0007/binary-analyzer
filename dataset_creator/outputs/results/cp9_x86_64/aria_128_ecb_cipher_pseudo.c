
undefined8 aria_128_ecb_cipher(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = EVP_CIPHER_CTX_get0_cipher();
  uVar5 = (ulong)*(int *)(lVar2 + 4);
  if (uVar5 <= param_4) {
    uVar4 = 0;
    do {
      EVP_CIPHER_CTX_is_encrypting(param_1);
      uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar1 = param_2 + uVar4;
      lVar2 = param_3 + uVar4;
      uVar4 = uVar4 + uVar5;
      ossl_aria_encrypt(lVar2,lVar1,uVar3);
    } while (uVar4 <= param_4 - uVar5);
  }
  return 1;
}

