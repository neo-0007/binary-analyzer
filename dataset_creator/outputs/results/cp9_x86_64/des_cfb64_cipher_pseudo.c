
undefined8 des_cfb64_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  uint enc;
  int enc_00;
  DES_key_schedule *pDVar2;
  ulong uVar3;
  uchar *puVar4;
  uchar *extraout_RDX;
  uchar *puVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uchar *puStack_80;
  uchar *local_60;
  uchar *local_58;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = param_4;
  puVar5 = param_2;
  uVar7 = param_4;
  local_60 = param_2;
  local_58 = param_3;
  if (0x3fffffffffffffff < param_4) {
    puVar4 = param_3;
    puStack_80 = param_2;
    do {
      local_44 = EVP_CIPHER_CTX_get_num(param_1,puStack_80,puVar4,uVar3);
      enc = EVP_CIPHER_CTX_is_encrypting(param_1);
      uVar3 = (ulong)enc;
      puStack_80 = (uchar *)0x5221ff;
      pDVar2 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar6 = param_4 - uVar7;
      lVar1 = param_4 - uVar7;
      uVar7 = uVar7 + 0xc000000000000000;
      DES_cfb64_encrypt(param_3 + lVar1,param_2 + lVar6,0x4000000000000000,pDVar2,
                        (DES_cblock *)(param_1 + 0x28),&local_44,enc);
      EVP_CIPHER_CTX_set_num(param_1,local_44);
      puVar5 = (uchar *)0x5221ff;
      puVar4 = extraout_RDX;
    } while (0x3fffffffffffffff < uVar7);
    uVar7 = param_4 & 0x3fffffffffffffff;
    lVar6 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
    local_58 = param_3 + lVar6;
    local_60 = param_2 + lVar6;
    param_3 = extraout_RDX;
  }
  if (uVar7 != 0) {
    local_44 = EVP_CIPHER_CTX_get_num(param_1,puVar5,param_3,uVar3);
    enc_00 = EVP_CIPHER_CTX_is_encrypting(param_1);
    pDVar2 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    DES_cfb64_encrypt(local_58,local_60,uVar7,pDVar2,(DES_cblock *)(param_1 + 0x28),&local_44,enc_00
                     );
    EVP_CIPHER_CTX_set_num(param_1,local_44);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

