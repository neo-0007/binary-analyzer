
undefined8 seed_cfb128_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  int enc;
  SEED_KEY_SCHEDULE *ks;
  ulong len;
  uchar *puVar1;
  uchar *puVar2;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 >> 0x3e == 0) {
    len = param_4;
    if (param_4 == 0) goto LAB_0052486b;
  }
  else {
    len = 0x4000000000000000;
  }
  do {
    param_4 = param_4 - len;
    local_44 = EVP_CIPHER_CTX_get_num(param_1);
    enc = EVP_CIPHER_CTX_is_encrypting(param_1);
    ks = (SEED_KEY_SCHEDULE *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    puVar2 = param_3 + len;
    puVar1 = param_2 + len;
    SEED_cfb128_encrypt(param_3,param_2,len,ks,(uchar *)(param_1 + 0x28),&local_44,enc);
    EVP_CIPHER_CTX_set_num(param_1,local_44);
    if (param_4 < len) {
      len = param_4;
    }
    param_2 = puVar1;
    param_3 = puVar2;
  } while (param_4 != 0);
LAB_0052486b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

