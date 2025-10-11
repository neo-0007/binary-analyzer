
undefined8 EVP_PKEY_export(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/pmeth_gn.c",0x1ba,"EVP_PKEY_export");
    ERR_set_error(6,0xc0102,0);
    uVar1 = 0;
  }
  else {
    if ((*param_1 == 0) || (*(long *)(param_1 + 0x18) != 0)) {
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar1 = evp_keymgmt_util_export();
        return uVar1;
      }
      goto LAB_00410fc4;
    }
    local_28 = param_3;
    local_20 = param_4;
    uVar1 = (**(code **)(*(long *)(param_1 + 2) + 0x120))(param_1,&local_28,pkey_fake_import,0,0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
LAB_00410fc4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

