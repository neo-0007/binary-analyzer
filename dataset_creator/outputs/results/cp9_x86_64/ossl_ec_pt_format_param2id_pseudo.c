
undefined8 ossl_ec_pt_format_param2id(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if (*(int *)(param_1 + 8) == 4) {
    local_18 = *(long *)(param_1 + 0x10);
    if (local_18 != 0) {
      iVar1 = ossl_ec_pt_format_name2id();
      goto joined_r0x004df7ec;
    }
  }
  else if ((*(int *)(param_1 + 8) == 6) &&
          (iVar1 = OSSL_PARAM_get_utf8_ptr(param_1,&local_18), iVar1 != 0)) {
    iVar1 = ossl_ec_pt_format_name2id(local_18);
joined_r0x004df7ec:
    if (-1 < iVar1) {
      *param_2 = iVar1;
      uVar2 = 1;
      goto LAB_004df7bf;
    }
  }
  uVar2 = 0;
LAB_004df7bf:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

