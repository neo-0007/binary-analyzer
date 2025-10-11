
char * evp_pkey_get_legacy(long param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  EVP_PKEY *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (EVP_PKEY *)0x0;
  if ((param_1 != 0) &&
     ((pcVar3 = *(char **)(param_1 + 0x20), pcVar3 != (char *)0x0 ||
      (*(long *)(param_1 + 0x68) != 0)))) {
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_0053224f;
    iVar1 = CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x38));
    if (iVar1 != 0) {
      pcVar3 = *(char **)(param_1 + 0x28);
      iVar1 = CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x38));
      if (iVar1 != 0) {
        if (pcVar3 != (char *)0x0) goto LAB_0053224f;
        iVar1 = evp_pkey_copy_downgraded(&local_28,param_1);
        if (iVar1 != 0) {
          iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x38));
          if (iVar1 != 0) {
            pcVar2 = *(char **)(param_1 + 0x28);
            if (pcVar2 == (char *)0x0) {
              pcVar2 = (local_28->pkey).ptr;
              *(char **)(param_1 + 0x28) = pcVar2;
              (local_28->pkey).ptr = (char *)0x0;
            }
            iVar1 = CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x38));
            if (iVar1 != 0) {
              pcVar3 = pcVar2;
            }
          }
          EVP_PKEY_free(local_28);
          goto LAB_0053224f;
        }
      }
    }
  }
  pcVar3 = (char *)0x0;
LAB_0053224f:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pcVar3;
}

