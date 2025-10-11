
undefined4 namemap_name2num_n(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  void *local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (void *)CRYPTO_strndup(param_2,param_3,"../crypto/core_namemap.c",0xb3);
  if (local_38 != (void *)0x0) {
    local_30 = 0;
    lVar2 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x10),&local_38);
    CRYPTO_free(local_38);
    if (lVar2 != 0) {
      uVar1 = *(undefined4 *)(lVar2 + 8);
      goto LAB_00416b92;
    }
  }
  uVar1 = 0;
LAB_00416b92:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

