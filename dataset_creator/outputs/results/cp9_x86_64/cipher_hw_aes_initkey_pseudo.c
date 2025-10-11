
undefined8 cipher_hw_aes_initkey(undefined8 *param_1,uchar *param_2,int param_3)

{
  AES_KEY *key;
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  
  uVar2 = DAT_0093e59c;
  iVar1 = *(int *)(param_1 + 2);
  key = (AES_KEY *)(param_1 + 0x18);
  param_3 = param_3 * 8;
  param_1[0x16] = key;
  uVar2 = uVar2 & 0x200;
  if (iVar1 - 1U < 2) {
    if ((*(byte *)((long)param_1 + 0x3c) & 2) != 0) {
      if (uVar2 == 0) goto LAB_00441904;
      goto LAB_004418c7;
    }
    if (uVar2 == 0) {
      iVar3 = AES_set_decrypt_key(param_2,param_3,key);
      iVar1 = *(int *)(param_1 + 2);
      *param_1 = AES_decrypt;
      goto joined_r0x00441973;
    }
    if (iVar1 == 2) {
      iVar3 = AES_set_decrypt_key(param_2,param_3,key);
      *param_1 = AES_decrypt;
      param_1[1] = ossl_bsaes_cbc_encrypt;
      goto LAB_004418e5;
    }
    iVar3 = vpaes_set_decrypt_key();
    *param_1 = vpaes_decrypt;
    if (*(int *)(param_1 + 2) != 2) goto LAB_004418df;
LAB_00441953:
    pcVar4 = vpaes_cbc_encrypt;
  }
  else {
    if (uVar2 == 0) {
LAB_00441904:
      iVar3 = AES_set_encrypt_key(param_2,param_3,key);
      iVar1 = *(int *)(param_1 + 2);
      *param_1 = AES_encrypt;
joined_r0x00441973:
      if (iVar1 == 2) {
        pcVar4 = AES_cbc_encrypt;
        goto LAB_004418e1;
      }
    }
    else {
      if (iVar1 == 5) {
        iVar3 = AES_set_encrypt_key(param_2,param_3,key);
        *param_1 = AES_encrypt;
        param_1[1] = ossl_bsaes_ctr32_encrypt_blocks;
        goto LAB_004418e5;
      }
LAB_004418c7:
      iVar3 = vpaes_set_encrypt_key(param_2,param_3,key);
      *param_1 = vpaes_encrypt;
      if (*(int *)(param_1 + 2) == 2) goto LAB_00441953;
    }
LAB_004418df:
    pcVar4 = (code *)0x0;
  }
LAB_004418e1:
  param_1[1] = pcVar4;
LAB_004418e5:
  if (-1 < iVar3) {
    return 1;
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/ciphers/cipher_aes_hw.c",0x75,"cipher_hw_aes_initkey")
  ;
  ERR_set_error(0x39,0x65,0);
  return 0;
}

