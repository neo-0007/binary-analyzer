
size_t CRYPTO_128_unwrap(undefined8 param_1,undefined8 *param_2,void *param_3)

{
  int iVar1;
  size_t len;
  size_t sVar2;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  len = crypto_128_unwrap_raw(param_1,auStack_38);
  sVar2 = len;
  if (len != 0) {
    if (param_2 == (undefined8 *)0x0) {
      param_2 = &default_iv;
    }
    iVar1 = CRYPTO_memcmp(auStack_38,param_2,8);
    if (iVar1 != 0) {
      sVar2 = 0;
      OPENSSL_cleanse(param_3,len);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

