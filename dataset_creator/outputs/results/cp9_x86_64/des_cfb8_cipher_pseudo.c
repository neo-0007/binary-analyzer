
undefined8 des_cfb8_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  DES_key_schedule *pDVar3;
  uchar *puVar4;
  long lVar5;
  ulong uVar6;
  uchar *puStack_60;
  uchar *local_50;
  uchar *local_48;
  
  puVar4 = param_2;
  uVar6 = param_4;
  local_50 = param_2;
  local_48 = param_3;
  if (0x3fffffffffffffff < param_4) {
    puStack_60 = param_2;
    do {
      iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1,puStack_60);
      puStack_60 = (uchar *)0x5226dd;
      pDVar3 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar1 = param_4 - uVar6;
      lVar5 = param_4 - uVar6;
      uVar6 = uVar6 + 0xc000000000000000;
      DES_cfb_encrypt(param_3 + lVar1,param_2 + lVar5,8,0x4000000000000000,pDVar3,
                      (DES_cblock *)(param_1 + 0x28),iVar2);
      puVar4 = (uchar *)0x5226dd;
    } while (0x3fffffffffffffff < uVar6);
    uVar6 = param_4 & 0x3fffffffffffffff;
    lVar5 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
    local_48 = param_3 + lVar5;
    local_50 = param_2 + lVar5;
  }
  if (uVar6 != 0) {
    iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1,puVar4);
    pDVar3 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    DES_cfb_encrypt(local_48,local_50,8,uVar6,pDVar3,(DES_cblock *)(param_1 + 0x28),iVar2);
  }
  return 1;
}

