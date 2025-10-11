
undefined8
ossl_namemap_doall_names(long param_1,undefined4 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  void *local_40;
  int local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_48[0] = param_2;
  uVar2 = CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 8));
  if ((int)uVar2 != 0) {
    lVar3 = OPENSSL_LH_num_items(*(undefined8 *)(param_1 + 0x10));
    if (lVar3 != 0) {
      local_40 = CRYPTO_malloc((int)lVar3 * 8,"../crypto/core_namemap.c",0x9e);
      if (local_40 != (void *)0x0) {
        OPENSSL_LH_doall_arg(*(undefined8 *)(param_1 + 0x10),do_name,local_48);
        CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 8));
        if (0 < local_38) {
          lVar3 = 0;
          do {
            lVar1 = lVar3 * 8;
            lVar3 = lVar3 + 1;
            (*param_3)(*(undefined8 *)((long)local_40 + lVar1),param_4);
          } while ((int)lVar3 < local_38);
        }
        CRYPTO_free(local_40);
        uVar2 = 1;
        goto LAB_00416d3f;
      }
    }
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 8));
    uVar2 = 0;
  }
LAB_00416d3f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

