
undefined8 dlmopen(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  iVar1 = _dlerror_run(dlmopen_doit,&local_38);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = local_20;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

