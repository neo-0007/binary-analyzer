
undefined8 aes_gcm_init_key(long param_1,uchar *param_2,void *param_3)

{
  uint *puVar1;
  AES_KEY *key;
  int bits;
  
  key = (AES_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  if (param_3 == (void *)0x0 && param_2 == (uchar *)0x0) {
    return 1;
  }
  if (param_2 != (uchar *)0x0) {
    puVar1 = key[1].rd_key + 3;
    bits = *(int *)(param_1 + 0x68) << 3;
    if ((DAT_0093e59c._1_1_ & 2) == 0) {
      AES_set_encrypt_key(param_2,bits,key);
      CRYPTO_gcm128_init(puVar1,key,AES_encrypt);
      key[3].rd_key[1] = 0;
      key[3].rd_key[2] = 0;
    }
    else {
      AES_set_encrypt_key(param_2,bits,key);
      CRYPTO_gcm128_init(puVar1,key,AES_encrypt);
      *(code **)(key[3].rd_key + 1) = ossl_bsaes_ctr32_encrypt_blocks;
    }
    if ((param_3 != (void *)0x0) ||
       ((key[1].rd_key[2] != 0 &&
        (param_3 = *(void **)(key[2].rd_key + 0x34), param_3 != (void *)0x0)))) {
      CRYPTO_gcm128_setiv(puVar1,param_3,(long)(int)key[2].rd_key[0x36]);
      key[1].rd_key[2] = 1;
    }
    key[1].rd_key[1] = 1;
    return 1;
  }
  if (key[1].rd_key[1] == 0) {
    memcpy(*(void **)(key[2].rd_key + 0x34),param_3,(long)(int)key[2].rd_key[0x36]);
  }
  else {
    CRYPTO_gcm128_setiv(key[1].rd_key + 3,param_3);
  }
  key[1].rd_key[2] = 1;
  key[2].rd_key[0x38] = 0;
  return 1;
}

