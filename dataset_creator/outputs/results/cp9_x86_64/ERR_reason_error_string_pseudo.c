
char * ERR_reason_error_string(ulong e)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  long in_FS_OFFSET;
  ulong local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = CRYPTO_THREAD_run_once(&err_string_init,do_err_strings_init_ossl_);
  if (iVar1 == 0) goto LAB_0050ff70;
  pcVar2 = (char *)0x0;
  if ((do_err_strings_init_ossl_ret_ == 0) || ((e & 0x80000000) != 0)) goto LAB_0050ff16;
  local_38[0] = (ulong)((uint)e & 0x7fffffff);
  iVar1 = CRYPTO_THREAD_read_lock(err_string_lock);
  if (iVar1 == 0) {
LAB_0050ff30:
    local_38[0] = (ulong)((uint)e & 0x7fffff);
    iVar1 = CRYPTO_THREAD_read_lock(err_string_lock);
    if (iVar1 != 0) {
      lVar3 = OPENSSL_LH_retrieve(int_error_hash,local_38);
      CRYPTO_THREAD_unlock(err_string_lock);
      if (lVar3 != 0) goto LAB_0050ff12;
    }
LAB_0050ff70:
    pcVar2 = (char *)0x0;
  }
  else {
    lVar3 = OPENSSL_LH_retrieve(int_error_hash,local_38);
    CRYPTO_THREAD_unlock(err_string_lock);
    if (lVar3 == 0) goto LAB_0050ff30;
LAB_0050ff12:
    pcVar2 = *(char **)(lVar3 + 8);
  }
LAB_0050ff16:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pcVar2;
}

