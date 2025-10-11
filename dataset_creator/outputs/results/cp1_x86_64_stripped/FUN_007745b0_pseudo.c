
undefined8 FUN_007745b0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00771200(0x10,0x80003,0);
  *param_1 = iVar1;
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_24 = 0;
    local_2c = 0x10;
    iVar1 = FUN_00770ed0(iVar1,&local_2c,0xc);
    if (-1 < iVar1) {
      local_30 = 0xc;
      iVar1 = FUN_00770fa0(*param_1,&local_2c,&local_30);
      if (-1 < iVar1) {
        param_1[1] = local_2c._4_4_;
        uVar2 = 0;
        goto LAB_0077463f;
      }
    }
    syscall();
    uVar2 = 0xffffffff;
  }
LAB_0077463f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

