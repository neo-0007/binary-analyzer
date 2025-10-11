
undefined8 sm4_ecb_cipher(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = EVP_CIPHER_CTX_get0_cipher();
  uVar5 = (ulong)*(int *)(lVar2 + 4);
  if (uVar5 <= param_4) {
    uVar4 = 0;
    do {
      while( true ) {
        iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
        uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
        if (iVar1 != 0) break;
        ossl_sm4_decrypt();
        uVar4 = uVar4 + uVar5;
        if (param_4 - uVar5 < uVar4) {
          return 1;
        }
      }
      ossl_sm4_encrypt(param_3 + uVar4,param_2 + uVar4,uVar3);
      uVar4 = uVar4 + uVar5;
    } while (uVar4 <= param_4 - uVar5);
  }
  return 1;
}

