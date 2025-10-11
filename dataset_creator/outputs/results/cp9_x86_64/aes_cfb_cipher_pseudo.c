
undefined8 aes_cfb_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = EVP_CIPHER_CTX_get_cipher_data();
  local_44 = EVP_CIPHER_CTX_get_num(param_1);
  uVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
  CRYPTO_cfb128_encrypt(param_3,param_2,param_4,uVar1,param_1 + 0x28,&local_44,uVar2);
  EVP_CIPHER_CTX_set_num(param_1,local_44);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

