
long evp_keymgmt_util_export_to_provider(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    lVar4 = *(long *)(param_1 + 0x68);
    if (((lVar4 == 0) || (lVar1 = *(long *)(param_1 + 0x60), lVar1 == param_2)) ||
       ((*(int *)(lVar1 + 4) == *(int *)(param_2 + 4) &&
        (*(long *)(lVar1 + 0x18) == *(long *)(param_2 + 0x18))))) goto LAB_00529e70;
    iVar2 = CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x38));
    if (iVar2 != 0) {
      if (*(long *)(param_1 + 0x70) == *(long *)(param_1 + 0x80)) {
        plVar5 = (long *)evp_keymgmt_util_find_operation_cache(param_1,param_2);
        uVar3 = *(undefined8 *)(param_1 + 0x38);
        if ((plVar5 != (long *)0x0) && (*plVar5 != 0)) {
          lVar4 = plVar5[1];
          CRYPTO_THREAD_unlock(uVar3);
          goto LAB_00529e70;
        }
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x38);
      }
      CRYPTO_THREAD_unlock(uVar3);
      lVar4 = *(long *)(param_1 + 0x60);
      if (*(long *)(lVar4 + 200) != 0) {
        uVar3 = EVP_KEYMGMT_get0_name(param_2);
        iVar2 = EVP_KEYMGMT_is_a(lVar4,uVar3);
        if (iVar2 != 0) {
          local_28 = 0x87;
          local_30 = 0;
          local_38 = param_2;
          iVar2 = evp_keymgmt_util_export(param_1,0x87,evp_keymgmt_util_try_import,&local_38);
          if (iVar2 != 0) {
            iVar2 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x38));
            if (iVar2 != 0) {
              lVar4 = evp_keymgmt_util_find_operation_cache(param_1,param_2);
              if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 8), lVar4 != 0)) {
                CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x38));
                evp_keymgmt_freedata(param_2,local_30);
                goto LAB_00529e70;
              }
              if (*(long *)(param_1 + 0x70) != *(long *)(param_1 + 0x80)) {
                evp_keymgmt_util_clear_operation_cache(param_1,0);
              }
              iVar2 = evp_keymgmt_util_cache_keydata(param_1,param_2,local_30);
              if (iVar2 != 0) {
                *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x70);
                CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x38));
                lVar4 = local_30;
                goto LAB_00529e70;
              }
              CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x38));
            }
            lVar4 = 0;
            evp_keymgmt_freedata(param_2,local_30);
            goto LAB_00529e70;
          }
        }
      }
    }
  }
  lVar4 = 0;
LAB_00529e70:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

