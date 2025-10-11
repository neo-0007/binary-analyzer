
undefined8 rc2_cfb64_cipher(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  int enc;
  long lVar1;
  ulong length;
  uchar *puVar2;
  uchar *puVar3;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 >> 0x3e == 0) {
    length = param_4;
    if (param_4 == 0) goto LAB_00523bdc;
  }
  else {
    length = 0x4000000000000000;
  }
  do {
    param_4 = param_4 - length;
    local_44 = EVP_CIPHER_CTX_get_num(param_1);
    enc = EVP_CIPHER_CTX_is_encrypting(param_1);
    lVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    puVar3 = param_3 + length;
    puVar2 = param_2 + length;
    RC2_cfb64_encrypt(param_3,param_2,length,(RC2_KEY *)(lVar1 + 4),(uchar *)(param_1 + 0x28),
                      &local_44,enc);
    EVP_CIPHER_CTX_set_num(param_1,local_44);
    if (param_4 < length) {
      length = param_4;
    }
    param_2 = puVar2;
    param_3 = puVar3;
  } while (param_4 != 0);
LAB_00523bdc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

