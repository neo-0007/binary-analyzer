
undefined8 __gconv_compare_alias_cache(char *param_1,char *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_30 [2];
  int local_28 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (gconv_cache == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = find_module_idx(param_1,local_30);
    if (iVar1 == 0) {
      uVar2 = find_module_idx(param_2,local_28);
      if ((int)uVar2 == 0) {
        *param_3 = local_30[0] - local_28[0];
        goto LAB_006d42cc;
      }
    }
    iVar1 = strcmp(param_1,param_2);
    *param_3 = iVar1;
    uVar2 = 0;
  }
LAB_006d42cc:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

