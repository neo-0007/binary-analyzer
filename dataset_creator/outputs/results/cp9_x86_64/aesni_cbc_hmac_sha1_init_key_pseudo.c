
uint aesni_cbc_hmac_sha1_init_key
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_4 == 0) {
    iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
    uVar2 = aesni_set_decrypt_key(param_2,iVar1 * 8,lVar3);
  }
  else {
    iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
    uVar2 = aesni_set_encrypt_key(param_2,iVar1 * 8,lVar3);
  }
  SHA1_Init((SHA_CTX *)(lVar3 + 0xf4));
  *(undefined8 *)(lVar3 + 0x218) = 0xffffffffffffffff;
  *(undefined8 *)(lVar3 + 0x154) = *(undefined8 *)(lVar3 + 0xf4);
  *(undefined8 *)(lVar3 + 0x15c) = *(undefined8 *)(lVar3 + 0xfc);
  *(undefined8 *)(lVar3 + 0x164) = *(undefined8 *)(lVar3 + 0x104);
  *(undefined8 *)(lVar3 + 0x16c) = *(undefined8 *)(lVar3 + 0x10c);
  *(undefined8 *)(lVar3 + 0x174) = *(undefined8 *)(lVar3 + 0x114);
  *(undefined8 *)(lVar3 + 0x17c) = *(undefined8 *)(lVar3 + 0x11c);
  *(undefined8 *)(lVar3 + 0x184) = *(undefined8 *)(lVar3 + 0x124);
  *(undefined8 *)(lVar3 + 0x18c) = *(undefined8 *)(lVar3 + 300);
  *(undefined8 *)(lVar3 + 0x194) = *(undefined8 *)(lVar3 + 0x134);
  *(undefined8 *)(lVar3 + 0x19c) = *(undefined8 *)(lVar3 + 0x13c);
  *(undefined8 *)(lVar3 + 0x1a4) = *(undefined8 *)(lVar3 + 0x144);
  *(undefined8 *)(lVar3 + 0x1ac) = *(undefined8 *)(lVar3 + 0x14c);
  *(undefined8 *)(lVar3 + 0x1b4) = *(undefined8 *)(lVar3 + 0xf4);
  *(undefined8 *)(lVar3 + 0x1bc) = *(undefined8 *)(lVar3 + 0xfc);
  *(undefined8 *)(lVar3 + 0x1c4) = *(undefined8 *)(lVar3 + 0x104);
  *(undefined8 *)(lVar3 + 0x1cc) = *(undefined8 *)(lVar3 + 0x10c);
  *(undefined8 *)(lVar3 + 0x1d4) = *(undefined8 *)(lVar3 + 0x114);
  *(undefined8 *)(lVar3 + 0x1dc) = *(undefined8 *)(lVar3 + 0x11c);
  *(undefined8 *)(lVar3 + 0x1e4) = *(undefined8 *)(lVar3 + 0x124);
  *(undefined8 *)(lVar3 + 0x1ec) = *(undefined8 *)(lVar3 + 300);
  *(undefined8 *)(lVar3 + 500) = *(undefined8 *)(lVar3 + 0x134);
  *(undefined8 *)(lVar3 + 0x1fc) = *(undefined8 *)(lVar3 + 0x13c);
  *(undefined8 *)(lVar3 + 0x204) = *(undefined8 *)(lVar3 + 0x144);
  *(undefined8 *)(lVar3 + 0x20c) = *(undefined8 *)(lVar3 + 0x14c);
  return ~uVar2 >> 0x1f;
}

