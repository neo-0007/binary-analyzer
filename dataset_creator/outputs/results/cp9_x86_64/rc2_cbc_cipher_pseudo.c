
undefined8 rc2_cbc_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uchar *local_50;
  uchar *local_48;
  
  uVar5 = param_4;
  local_50 = param_2;
  local_48 = param_3;
  if (0x3fffffffffffffff < param_4) {
    do {
      iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
      lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar4 = param_4 - uVar5;
      lVar1 = param_4 - uVar5;
      uVar5 = uVar5 + 0xc000000000000000;
      RC2_cbc_encrypt(param_3 + lVar1,param_2 + lVar4,0x4000000000000000,(RC2_KEY *)(lVar3 + 4),
                      (uchar *)(param_1 + 0x28),iVar2);
    } while (0x3fffffffffffffff < uVar5);
    uVar5 = param_4 & 0x3fffffffffffffff;
    lVar4 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
    local_48 = param_3 + lVar4;
    local_50 = param_2 + lVar4;
  }
  if (uVar5 != 0) {
    iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
    lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    RC2_cbc_encrypt(local_48,local_50,uVar5,(RC2_KEY *)(lVar4 + 4),(uchar *)(param_1 + 0x28),iVar2);
  }
  return 1;
}

