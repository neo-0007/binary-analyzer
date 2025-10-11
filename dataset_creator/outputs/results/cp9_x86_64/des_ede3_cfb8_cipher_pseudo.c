
undefined8 des_ede3_cfb8_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  DES_key_schedule *pDVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uchar *local_50;
  uchar *local_48;
  
  uVar7 = param_4;
  local_50 = param_2;
  local_48 = param_3;
  if (0x3fffffffffffffff < param_4) {
    do {
      iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      pDVar4 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar6 = param_4 - uVar7;
      lVar5 = param_4 - uVar7;
      uVar7 = uVar7 + 0xc000000000000000;
      DES_ede3_cfb_encrypt
                (param_3 + lVar5,param_2 + lVar6,8,0x4000000000000000,pDVar4,
                 (DES_key_schedule *)(lVar3 + 0x80),(DES_key_schedule *)(lVar2 + 0x100),
                 (DES_cblock *)(param_1 + 0x28),iVar1);
    } while (0x3fffffffffffffff < uVar7);
    uVar7 = param_4 & 0x3fffffffffffffff;
    lVar6 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
    local_48 = param_3 + lVar6;
    local_50 = param_2 + lVar6;
  }
  if (uVar7 != 0) {
    iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
    lVar6 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    lVar5 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    pDVar4 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    DES_ede3_cfb_encrypt
              (local_48,local_50,8,uVar7,pDVar4,(DES_key_schedule *)(lVar5 + 0x80),
               (DES_key_schedule *)(lVar6 + 0x100),(DES_cblock *)(param_1 + 0x28),iVar1);
  }
  return 1;
}

