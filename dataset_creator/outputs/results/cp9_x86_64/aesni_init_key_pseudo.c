
undefined8 aesni_init_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  uVar4 = EVP_CIPHER_CTX_get0_cipher(param_1);
  iVar1 = EVP_CIPHER_get_mode(uVar4);
  if (iVar1 - 1U < 2) {
    if (param_4 == 0) {
      iVar2 = EVP_CIPHER_CTX_get_key_length(param_1);
      iVar2 = aesni_set_decrypt_key(param_2,iVar2 * 8,lVar3);
      *(code **)(lVar3 + 0xf8) = aesni_decrypt;
      pcVar5 = (code *)0x0;
      if (iVar1 != 2) goto LAB_00405c06;
    }
    else {
      iVar2 = EVP_CIPHER_CTX_get_key_length(param_1);
      iVar2 = aesni_set_encrypt_key(param_2,iVar2 * 8,lVar3);
      *(code **)(lVar3 + 0xf8) = aesni_encrypt;
      if (iVar1 != 2) goto LAB_00405c57;
    }
    pcVar5 = aesni_cbc_encrypt;
  }
  else {
    iVar2 = EVP_CIPHER_CTX_get_key_length(param_1);
    iVar2 = aesni_set_encrypt_key(param_2,iVar2 * 8,lVar3);
    *(code **)(lVar3 + 0xf8) = aesni_encrypt;
    if (iVar1 != 5) {
LAB_00405c57:
      *(undefined8 *)(lVar3 + 0x100) = 0;
      goto joined_r0x00405c6a;
    }
    pcVar5 = aesni_ctr32_encrypt_blocks;
  }
LAB_00405c06:
  *(code **)(lVar3 + 0x100) = pcVar5;
joined_r0x00405c6a:
  if (iVar2 < 0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/e_aes.c",0xad,"aesni_init_key");
    ERR_set_error(6,0x8f,0);
    return 0;
  }
  return 1;
}

