
undefined4 EVP_PKEY_get_raw_public_key(long param_1,undefined8 ***param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 **local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = param_2;
  if (*(long *)(param_1 + 0x60) == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      ERR_new();
      uVar4 = 0x24e;
    }
    else {
      pcVar1 = *(code **)(*(long *)(param_1 + 8) + 0x110);
      if (pcVar1 != (code *)0x0) {
        iVar3 = (*pcVar1)(param_1,param_2);
        if (iVar3 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/evp/p_lib.c",600,"EVP_PKEY_get_raw_public_key");
          ERR_set_error(6,0xb6,0);
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
        goto LAB_0052fa90;
      }
      ERR_new();
      uVar4 = 0x253;
    }
    uVar2 = 0;
    ERR_set_debug("../crypto/evp/p_lib.c",uVar4,"EVP_PKEY_get_raw_public_key");
    ERR_set_error(6,0x96,0);
  }
  else {
    local_28 = param_2;
    if (param_2 != (undefined8 ***)0x0) {
      local_28 = &local_30;
    }
    local_18 = 2;
    local_20 = param_3;
    uVar2 = evp_keymgmt_util_export(param_1,2,get_raw_key_details,&local_28);
  }
LAB_0052fa90:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

