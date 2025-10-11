
undefined8 ossl_namemap_num2name(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0;
  local_28 = param_3;
  iVar1 = ossl_namemap_doall_names(param_1,param_2,do_num2name,&local_28);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_20;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

