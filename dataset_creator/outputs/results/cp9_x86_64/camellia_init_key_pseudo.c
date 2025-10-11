
undefined8 camellia_init_key(undefined8 param_1,uchar *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  CAMELLIA_KEY *key;
  undefined8 uVar2;
  code *pcVar3;
  
  key = (CAMELLIA_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
  iVar1 = Camellia_set_key(param_2,iVar1 * 8,key);
  if (iVar1 < 0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/e_camellia.c",0xc9,"camellia_init_key");
    ERR_set_error(6,0x9d,0);
    return 0;
  }
  uVar2 = EVP_CIPHER_CTX_get0_cipher(param_1);
  iVar1 = EVP_CIPHER_get_mode(uVar2);
  pcVar3 = (code *)0x0;
  if (iVar1 - 1U < 2) {
    if (param_4 == 0) {
      key[1].u.d = (double)Camellia_decrypt;
      if (iVar1 == 2) {
        pcVar3 = Camellia_cbc_encrypt;
      }
      else {
        pcVar3 = (code *)0x0;
      }
      *(code **)((long)&key[1].u + 8) = pcVar3;
      return 1;
    }
    if (iVar1 == 2) {
      pcVar3 = Camellia_cbc_encrypt;
    }
  }
  *(code **)((long)&key[1].u + 8) = pcVar3;
  key[1].u.d = (double)Camellia_encrypt;
  return 1;
}

