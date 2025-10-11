
undefined8 sm4_cbc_cipher(long param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long local_50;
  long local_48;
  
  uVar4 = param_4;
  local_50 = param_2;
  local_48 = param_3;
  if (0x3fffffffffffffff < param_4) {
    do {
      iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      lVar5 = (param_2 + param_4) - uVar4;
      lVar3 = (param_3 + param_4) - uVar4;
      uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      if (iVar1 == 0) {
        CRYPTO_cbc128_decrypt(lVar3,lVar5,0x4000000000000000,uVar2,param_1 + 0x28,ossl_sm4_decrypt);
      }
      else {
        CRYPTO_cbc128_encrypt(lVar3,lVar5,0x4000000000000000,uVar2,param_1 + 0x28,ossl_sm4_encrypt);
      }
      uVar4 = uVar4 + 0xc000000000000000;
    } while (0x3fffffffffffffff < uVar4);
    uVar4 = param_4 & 0x3fffffffffffffff;
    local_50 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
    local_48 = param_3 + local_50;
    local_50 = param_2 + local_50;
  }
  if (uVar4 != 0) {
    iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
    uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    if (iVar1 == 0) {
      CRYPTO_cbc128_decrypt(local_48,local_50,uVar4,uVar2,param_1 + 0x28,ossl_sm4_decrypt);
    }
    else {
      CRYPTO_cbc128_encrypt(local_48,local_50,uVar4,uVar2,param_1 + 0x28,ossl_sm4_encrypt);
    }
  }
  return 1;
}

