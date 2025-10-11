
undefined8 des_ofb_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  DES_key_schedule *pDVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  uchar *local_60;
  uchar *local_58;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = param_4;
  local_60 = param_2;
  local_58 = param_3;
  if (0x3fffffffffffffff < param_4) {
    do {
      local_44 = EVP_CIPHER_CTX_get_num(param_1);
      pDVar2 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar1 = param_4 - uVar4;
      lVar3 = param_4 - uVar4;
      uVar4 = uVar4 + 0xc000000000000000;
      DES_ofb64_encrypt(param_3 + lVar1,param_2 + lVar3,0x4000000000000000,pDVar2,
                        (DES_cblock *)(param_1 + 0x28),&local_44);
      EVP_CIPHER_CTX_set_num(param_1,local_44);
    } while (0x3fffffffffffffff < uVar4);
    uVar4 = param_4 & 0x3fffffffffffffff;
    lVar3 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
    local_58 = param_3 + lVar3;
    local_60 = param_2 + lVar3;
  }
  if (uVar4 != 0) {
    local_44 = EVP_CIPHER_CTX_get_num(param_1);
    pDVar2 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    DES_ofb64_encrypt(local_58,local_60,uVar4,pDVar2,(DES_cblock *)(param_1 + 0x28),&local_44);
    EVP_CIPHER_CTX_set_num(param_1,local_44);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

