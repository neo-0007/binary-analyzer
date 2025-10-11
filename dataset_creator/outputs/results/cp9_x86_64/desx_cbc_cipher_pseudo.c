
undefined8 desx_cbc_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  uint enc;
  int enc_00;
  long lVar1;
  long lVar2;
  DES_key_schedule *pDVar3;
  long lVar4;
  uchar *puVar5;
  long lVar6;
  ulong uVar7;
  uchar *local_50;
  uchar *local_48;
  
  puVar5 = param_2;
  uVar7 = param_4;
  local_50 = param_2;
  local_48 = param_3;
  if (0x3fffffffffffffff < param_4) {
    do {
      enc = EVP_CIPHER_CTX_is_encrypting(param_1,puVar5);
      puVar5 = (uchar *)(ulong)enc;
      lVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      pDVar3 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar6 = param_4 - uVar7;
      lVar4 = param_4 - uVar7;
      uVar7 = uVar7 + 0xc000000000000000;
      DES_xcbc_encrypt(param_3 + lVar4,param_2 + lVar6,0x4000000000000000,pDVar3,
                       (DES_cblock *)(param_1 + 0x28),(const_DES_cblock *)(lVar2 + 0x80),
                       (const_DES_cblock *)(lVar1 + 0x88),enc);
    } while (0x3fffffffffffffff < uVar7);
    uVar7 = param_4 & 0x3fffffffffffffff;
    lVar6 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
    local_48 = param_3 + lVar6;
    local_50 = param_2 + lVar6;
  }
  if (uVar7 != 0) {
    enc_00 = EVP_CIPHER_CTX_is_encrypting(param_1,puVar5);
    lVar6 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    pDVar3 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    DES_xcbc_encrypt(local_48,local_50,uVar7,pDVar3,(DES_cblock *)(param_1 + 0x28),
                     (const_DES_cblock *)(lVar4 + 0x80),(const_DES_cblock *)(lVar6 + 0x88),enc_00);
  }
  return 1;
}

