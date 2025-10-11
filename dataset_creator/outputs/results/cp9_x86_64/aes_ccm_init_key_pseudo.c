
undefined8 aes_ccm_init_key(long param_1,uchar *param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  AES_KEY *key;
  code *pcVar4;
  
  key = (AES_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 != (void *)0x0 || param_2 != (uchar *)0x0) {
    if (param_2 != (uchar *)0x0) {
      if ((DAT_0093e59c._1_1_ & 2) == 0) {
        iVar3 = EVP_CIPHER_CTX_get_key_length(param_1);
        AES_set_encrypt_key(param_2,iVar3 * 8,key);
        uVar1 = key[1].rd_key[5];
        uVar2 = key[1].rd_key[6];
        pcVar4 = AES_encrypt;
      }
      else {
        iVar3 = EVP_CIPHER_CTX_get_key_length(param_1);
        vpaes_set_encrypt_key(param_2,iVar3 * 8,key);
        uVar1 = key[1].rd_key[5];
        uVar2 = key[1].rd_key[6];
        pcVar4 = vpaes_encrypt;
      }
      CRYPTO_ccm128_init(key[1].rd_key + 9,uVar2,uVar1,key,pcVar4);
      key[1].rd_key[0x17] = 0;
      key[1].rd_key[0x18] = 0;
      key[1].rd_key[1] = 1;
    }
    if (param_3 != (void *)0x0) {
      memcpy((void *)(param_1 + 0x28),param_3,(long)(int)(0xf - key[1].rd_key[5]));
      key[1].rd_key[2] = 1;
    }
  }
  return 1;
}

