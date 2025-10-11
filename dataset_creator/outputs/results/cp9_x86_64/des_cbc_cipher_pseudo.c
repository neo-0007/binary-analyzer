
undefined8 des_cbc_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  DES_key_schedule *pDVar4;
  ulong uVar5;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  if (*(code **)(lVar3 + 0x80) == (code *)0x0) {
    uVar5 = param_4;
    if (0x3fffffffffffffff < param_4) {
      do {
        iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
        pDVar4 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
        lVar1 = param_4 - uVar5;
        lVar3 = param_4 - uVar5;
        uVar5 = uVar5 + 0xc000000000000000;
        DES_ncbc_encrypt(param_3 + lVar1,param_2 + lVar3,0x4000000000000000,pDVar4,
                         (DES_cblock *)(param_1 + 0x28),iVar2);
      } while (0x3fffffffffffffff < uVar5);
      uVar5 = param_4 & 0x3fffffffffffffff;
      lVar3 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
      param_3 = param_3 + lVar3;
      param_2 = param_2 + lVar3;
    }
    if (uVar5 != 0) {
      iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
      pDVar4 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      DES_ncbc_encrypt(param_3,param_2,uVar5,pDVar4,(DES_cblock *)(param_1 + 0x28),iVar2);
    }
  }
  else {
    (**(code **)(lVar3 + 0x80))(param_3,param_2,param_4,lVar3,param_1 + 0x28);
  }
  return 1;
}

