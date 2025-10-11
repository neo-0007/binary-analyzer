
undefined4 aes_xts_init_key(long param_1,uchar *param_2,undefined8 *param_3,int param_4)

{
  int bits;
  undefined8 uVar1;
  int iVar2;
  AES_KEY *key;
  code *pcVar3;
  uchar *userKey;
  
  key = (AES_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 != (undefined8 *)0x0 || param_2 != (uchar *)0x0) {
    if (param_2 != (uchar *)0x0) {
      iVar2 = EVP_CIPHER_CTX_get_key_length(param_1);
      iVar2 = iVar2 / 2;
      bits = iVar2 * 8;
      if (param_4 == 0) {
        key[2].rd_key[10] = 0;
        key[2].rd_key[0xb] = 0;
        userKey = param_2 + iVar2;
        if ((DAT_0093e59c._1_1_ & 2) != 0) {
          *(code **)(key[2].rd_key + 10) = ossl_bsaes_xts_decrypt;
        }
        AES_set_decrypt_key(param_2,bits,key);
        pcVar3 = AES_decrypt;
      }
      else {
        userKey = param_2 + iVar2;
        iVar2 = CRYPTO_memcmp(param_2,userKey,(long)iVar2);
        if (iVar2 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/evp/e_aes.c",0xc56,"aes_xts_init_key");
          ERR_set_error(6,0xc0,0);
          return 0;
        }
        key[2].rd_key[10] = 0;
        key[2].rd_key[0xb] = 0;
        if ((DAT_0093e59c._1_1_ & 2) != 0) {
          *(code **)(key[2].rd_key + 10) = ossl_bsaes_xts_encrypt;
        }
        AES_set_encrypt_key(param_2,bits,key);
        pcVar3 = AES_encrypt;
      }
      *(code **)(key[2].rd_key + 6) = pcVar3;
      AES_set_encrypt_key(userKey,bits,(AES_KEY *)(key[1].rd_key + 1));
      *(code **)(key[2].rd_key + 8) = AES_encrypt;
      *(AES_KEY **)(key[2].rd_key + 2) = key;
    }
    if (param_3 != (undefined8 *)0x0) {
      *(uint **)(key[2].rd_key + 4) = key[1].rd_key + 1;
      uVar1 = param_3[1];
      *(undefined8 *)(param_1 + 0x28) = *param_3;
      *(undefined8 *)(param_1 + 0x30) = uVar1;
    }
  }
  return 1;
}

