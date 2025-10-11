
undefined8 aes_ofb_cipher(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  local_34 = EVP_CIPHER_CTX_get_num(param_1);
  CRYPTO_ofb128_encrypt
            (param_3,param_2,param_4,lVar1,param_1 + 0x28,&local_34,*(undefined8 *)(lVar1 + 0xf8));
  EVP_CIPHER_CTX_set_num(param_1,local_34);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

