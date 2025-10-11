
int OBJ_NAME_remove(char *name,int type)

{
  int iVar1;
  int *ptr;
  long lVar2;
  long in_FS_OFFSET;
  uint local_38 [2];
  char *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = OBJ_NAME_init();
  if (iVar1 != 0) {
    iVar1 = CRYPTO_THREAD_write_lock(obj_lock);
    if (iVar1 != 0) {
      local_38[0] = type & 0xffff7fff;
      iVar1 = 0;
      local_30 = name;
      ptr = (int *)OPENSSL_LH_delete(names_lh,local_38);
      if (ptr != (int *)0x0) {
        if (name_funcs_stack != 0) {
          iVar1 = OPENSSL_sk_num();
          if (*ptr < iVar1) {
            lVar2 = OPENSSL_sk_value(name_funcs_stack);
            (**(code **)(lVar2 + 0x10))(*(undefined8 *)(ptr + 2),*ptr,*(undefined8 *)(ptr + 4));
          }
        }
        iVar1 = 1;
        CRYPTO_free(ptr);
      }
      CRYPTO_THREAD_unlock(obj_lock);
      goto LAB_004296dd;
    }
  }
  iVar1 = 0;
LAB_004296dd:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

