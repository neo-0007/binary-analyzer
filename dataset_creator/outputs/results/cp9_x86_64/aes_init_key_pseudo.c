
undefined8 aes_init_key(undefined8 param_1,uchar *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  AES_KEY *key;
  undefined8 uVar3;
  code *pcVar4;
  
  key = (AES_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  uVar3 = EVP_CIPHER_CTX_get0_cipher(param_1);
  iVar1 = EVP_CIPHER_get_mode(uVar3);
  if ((iVar1 - 1U < 2) && (param_4 == 0)) {
    if ((DAT_0093e59c._1_1_ & 2) != 0) {
      if (iVar1 == 2) {
        iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
        iVar2 = AES_set_decrypt_key(param_2,iVar1 * 8,key);
        *(code **)(key[1].rd_key + 1) = AES_decrypt;
        *(code **)(key[1].rd_key + 3) = ossl_bsaes_cbc_encrypt;
      }
      else {
        iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
        iVar2 = vpaes_set_decrypt_key(param_2,iVar1 * 8,key);
        key[1].rd_key[3] = 0;
        key[1].rd_key[4] = 0;
        *(code **)(key[1].rd_key + 1) = vpaes_decrypt;
      }
      goto LAB_00405993;
    }
    iVar2 = EVP_CIPHER_CTX_get_key_length(param_1);
    iVar2 = AES_set_decrypt_key(param_2,iVar2 * 8,key);
    *(code **)(key[1].rd_key + 1) = AES_decrypt;
    if (iVar1 != 2) goto LAB_0040598a;
LAB_004059db:
    pcVar4 = AES_cbc_encrypt;
  }
  else {
    if ((DAT_0093e59c._1_1_ & 2) == 0) {
      iVar2 = EVP_CIPHER_CTX_get_key_length(param_1);
      iVar2 = AES_set_encrypt_key(param_2,iVar2 * 8,key);
      *(code **)(key[1].rd_key + 1) = AES_encrypt;
      if (iVar1 == 2) goto LAB_004059db;
    }
    else {
      if (iVar1 == 5) {
        iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
        iVar2 = AES_set_encrypt_key(param_2,iVar1 * 8,key);
        *(code **)(key[1].rd_key + 1) = AES_encrypt;
        *(code **)(key[1].rd_key + 3) = ossl_bsaes_ctr32_encrypt_blocks;
        goto LAB_00405993;
      }
      iVar2 = EVP_CIPHER_CTX_get_key_length(param_1);
      iVar2 = vpaes_set_encrypt_key(param_2,iVar2 * 8,key);
      *(code **)(key[1].rd_key + 1) = vpaes_encrypt;
      if (iVar1 == 2) {
        pcVar4 = vpaes_cbc_encrypt;
        goto LAB_0040598c;
      }
    }
LAB_0040598a:
    pcVar4 = (code *)0x0;
  }
LAB_0040598c:
  *(code **)(key[1].rd_key + 3) = pcVar4;
LAB_00405993:
  if (iVar2 < 0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/e_aes.c",0x96e,"aes_init_key");
    ERR_set_error(6,0x8f,0);
    return 0;
  }
  return 1;
}

