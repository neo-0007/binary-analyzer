
undefined8 ossl_method_store_remove_all_provided(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      local_38 = param_1;
      local_30 = param_2;
      ossl_sa_doall_arg(*(undefined8 *)(param_1 + 8),alg_cleanup_by_provider,&local_38);
      CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x10));
      uVar2 = 1;
      goto LAB_0042bf24;
    }
  }
  uVar2 = 0;
LAB_0042bf24:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

