
undefined8 aes_cbc_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = EVP_CIPHER_CTX_get_cipher_data();
  pcVar1 = *(code **)(lVar4 + 0x100);
  if (pcVar1 == (code *)0x0) {
    iVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar3 == 0) {
      CRYPTO_cbc128_decrypt
                (param_3,param_2,param_4,lVar4,param_1 + 0x28,*(undefined8 *)(lVar4 + 0xf8));
    }
    else {
      CRYPTO_cbc128_encrypt();
    }
  }
  else {
    uVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
    (*pcVar1)(param_3,param_2,param_4,lVar4,param_1 + 0x28,uVar2);
  }
  return 1;
}

