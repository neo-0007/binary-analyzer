
undefined8 try_provided_check(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_28 = *(long *)(param_1 + 0x20);
    lVar1 = evp_pkey_export_to_provider
                      (*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 8),&local_28,
                       *(undefined8 *)(param_1 + 0x10));
    if (lVar1 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/pmeth_check.c",0x28,"try_provided_check");
      ERR_set_error(6,0x86,0);
      uVar2 = 0;
    }
    else {
      uVar2 = evp_keymgmt_validate(local_28,lVar1,param_2,param_3);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

