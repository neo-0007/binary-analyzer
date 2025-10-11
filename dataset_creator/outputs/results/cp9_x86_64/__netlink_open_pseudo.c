
undefined8 __netlink_open(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  socklen_t local_30;
  undefined1 local_2c [28];
  
  local_2c._12_8_ = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = socket(0x10,0x80003,0);
  *param_1 = iVar1;
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_2c[8] = '\0';
    local_2c[9] = '\0';
    local_2c[10] = '\0';
    local_2c[0xb] = '\0';
    local_2c._0_2_ = 0x10;
    local_2c[2] = '\0';
    local_2c[3] = '\0';
    local_2c[4] = '\0';
    local_2c[5] = '\0';
    local_2c[6] = '\0';
    local_2c[7] = '\0';
    iVar1 = bind(iVar1,(sockaddr *)local_2c,0xc);
    if (-1 < iVar1) {
      local_30 = 0xc;
      iVar1 = getsockname(*param_1,(sockaddr *)local_2c,&local_30);
      if (-1 < iVar1) {
        param_1[1] = local_2c._4_4_;
        uVar2 = 0;
        goto LAB_0076ad0f;
      }
    }
    syscall();
    uVar2 = 0xffffffff;
  }
LAB_0076ad0f:
  if (local_2c._12_8_ == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

