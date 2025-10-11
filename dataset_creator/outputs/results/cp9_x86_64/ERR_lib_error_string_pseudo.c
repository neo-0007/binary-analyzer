
char * ERR_lib_error_string(ulong e)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  ulong local_28 [3];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = CRYPTO_THREAD_run_once(&err_string_init,do_err_strings_init_ossl_);
  if ((iVar1 != 0) && (do_err_strings_init_ossl_ret_ != 0)) {
    local_28[0] = 0x1000000;
    if ((e & 0x80000000) == 0) {
      local_28[0] = (ulong)((uint)e & 0x7f800000);
    }
    iVar1 = CRYPTO_THREAD_read_lock(err_string_lock);
    if (iVar1 != 0) {
      lVar2 = OPENSSL_LH_retrieve(int_error_hash,local_28);
      CRYPTO_THREAD_unlock(err_string_lock);
      if (lVar2 != 0) {
        pcVar3 = *(char **)(lVar2 + 8);
        goto LAB_0050fe52;
      }
    }
  }
  pcVar3 = (char *)0x0;
LAB_0050fe52:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

