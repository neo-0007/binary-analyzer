
undefined8
ossl_cipher_hw_generic_ctr(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = *(undefined4 *)(param_1 + 0x70);
  if (*(long *)(param_1 + 8) == 0) {
    CRYPTO_ctr128_encrypt
              (param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x94,param_1 + 0x84
               ,&local_14);
  }
  else {
    CRYPTO_ctr128_encrypt_ctr32();
  }
  *(undefined4 *)(param_1 + 0x70) = local_14;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

