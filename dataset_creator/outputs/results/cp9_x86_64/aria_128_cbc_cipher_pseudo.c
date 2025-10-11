
undefined8 aria_128_cbc_cipher(long param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long local_50;
  long local_48;
  
  uVar3 = param_4;
  local_50 = param_2;
  local_48 = param_3;
  if (0x3fffffffffffffff < param_4) {
    do {
      iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      if (iVar1 == 0) {
        CRYPTO_cbc128_decrypt
                  ((param_3 + param_4) - uVar3,(param_2 + param_4) - uVar3,0x4000000000000000,uVar2,
                   param_1 + 0x28,ossl_aria_encrypt);
      }
      else {
        CRYPTO_cbc128_encrypt();
      }
      uVar3 = uVar3 + 0xc000000000000000;
    } while (0x3fffffffffffffff < uVar3);
    uVar3 = param_4 & 0x3fffffffffffffff;
    local_50 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
    local_48 = param_3 + local_50;
    local_50 = param_2 + local_50;
  }
  if (uVar3 != 0) {
    iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
    uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    if (iVar1 == 0) {
      CRYPTO_cbc128_decrypt(local_48,local_50,uVar3,uVar2,param_1 + 0x28,ossl_aria_encrypt);
    }
    else {
      CRYPTO_cbc128_encrypt();
    }
  }
  return 1;
}

