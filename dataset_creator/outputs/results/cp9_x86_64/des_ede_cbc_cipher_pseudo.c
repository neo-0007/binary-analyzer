
undefined8 des_ede_cbc_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  DES_key_schedule *ks1;
  ulong uVar3;
  long lVar4;
  uchar *local_68;
  
  ks1 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data();
  if (ks1[3].ks[0] == (_union_772)0x0) {
    uVar3 = param_4;
    local_68 = param_3;
    if (0x3fffffffffffffff < param_4) {
      do {
        iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
        lVar4 = param_4 - uVar3;
        lVar1 = param_4 - uVar3;
        uVar3 = uVar3 + 0xc000000000000000;
        DES_ede3_cbc_encrypt
                  (param_3 + lVar1,param_2 + lVar4,0x4000000000000000,ks1,ks1 + 1,ks1 + 2,
                   (DES_cblock *)(param_1 + 0x28),iVar2);
      } while (0x3fffffffffffffff < uVar3);
      uVar3 = param_4 & 0x3fffffffffffffff;
      lVar4 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
      local_68 = param_3 + lVar4;
      param_2 = param_2 + lVar4;
    }
    if (uVar3 != 0) {
      iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
      DES_ede3_cbc_encrypt
                (local_68,param_2,uVar3,ks1,ks1 + 1,ks1 + 2,(DES_cblock *)(param_1 + 0x28),iVar2);
    }
  }
  else {
    (*(code *)ks1[3].ks[0])(param_3,param_2,param_4,ks1,param_1 + 0x28);
  }
  return 1;
}

