
undefined8 aes_cfb1_cipher(EVP_CIPHER_CTX *param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_78;
  ulong local_60;
  long local_58;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  iVar1 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
  local_78 = param_2;
  local_58 = param_3;
  if (iVar1 == 0) {
    local_60 = param_4;
    if (param_4 >> 0x3c != 0) {
      local_58 = (param_4 + 0xf000000000000000 >> 0x3c) + 1 << 0x3c;
      local_78 = local_58 + param_2;
      lVar5 = param_3;
      do {
        local_44 = EVP_CIPHER_CTX_get_num(param_1);
        uVar4 = *(undefined8 *)(lVar2 + 0xf8);
        uVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
        lVar6 = param_2 + 0x1000000000000000;
        CRYPTO_cfb128_1_encrypt
                  (lVar5,param_2,0x8000000000000000,lVar2,param_1->iv,&local_44,uVar3,uVar4);
        EVP_CIPHER_CTX_set_num(param_1,local_44);
        lVar5 = lVar5 + 0x1000000000000000;
        param_2 = lVar6;
      } while (lVar6 != local_78);
      local_60 = param_4 & 0xfffffffffffffff;
      local_58 = param_3 + local_58;
    }
    if (local_60 == 0) goto LAB_00405ff4;
    local_44 = EVP_CIPHER_CTX_get_num(param_1);
    uVar4 = EVP_CIPHER_CTX_is_encrypting(param_1);
    param_4 = local_60 << 3;
  }
  else {
    local_44 = EVP_CIPHER_CTX_get_num(param_1);
    uVar4 = EVP_CIPHER_CTX_is_encrypting(param_1);
  }
  CRYPTO_cfb128_1_encrypt(local_58,local_78,param_4,lVar2,param_1->iv,&local_44,uVar4);
  EVP_CIPHER_CTX_set_num(param_1,local_44);
LAB_00405ff4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return 1;
}

