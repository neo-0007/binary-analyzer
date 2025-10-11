
undefined8 aria_init_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = EVP_CIPHER_CTX_get0_cipher();
  iVar1 = EVP_CIPHER_get_mode(uVar2);
  if ((param_4 == 0) && (iVar1 - 1U < 2)) {
    uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
    iVar1 = ossl_aria_set_decrypt_key(param_2,iVar1 * 8,uVar2);
  }
  else {
    uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
    iVar1 = ossl_aria_set_encrypt_key(param_2,iVar1 * 8,uVar2);
  }
  if (-1 < iVar1) {
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/evp/e_aria.c",0x4c,"aria_init_key");
  ERR_set_error(6,0xb0,0);
  return 0;
}

