
void OBJ_NAME_do_all_sorted(int type,fn *fn,void *arg)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  void *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = type;
  iVar2 = OPENSSL_LH_num_items(names_lh);
  local_40 = CRYPTO_malloc(iVar2 * 8,"../crypto/objects/o_names.c",0x151);
  if (local_40 != (void *)0x0) {
    local_44 = 0;
    OBJ_NAME_do_all(type,do_all_sorted_fn,&local_48);
    qsort(local_40,(long)local_44,8,do_all_sorted_cmp);
    if (0 < local_44) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 * 8;
        lVar3 = lVar3 + 1;
        (*fn)(*(OBJ_NAME **)((long)local_40 + lVar1),arg);
      } while ((int)lVar3 < local_44);
    }
    CRYPTO_free(local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

