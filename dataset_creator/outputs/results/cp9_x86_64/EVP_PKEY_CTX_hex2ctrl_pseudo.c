
undefined4 EVP_PKEY_CTX_hex2ctrl(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  void *ptr;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)OPENSSL_hexstr2buf(param_3,&local_38);
  if (ptr == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
    if (local_38 < 0x80000000) {
      uVar1 = (**(code **)(*(long *)(param_1 + 0x78) + 0xc0))(param_1,param_2,local_38,ptr);
    }
    CRYPTO_free(ptr);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

