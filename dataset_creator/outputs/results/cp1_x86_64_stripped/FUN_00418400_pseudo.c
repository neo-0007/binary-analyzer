
undefined8 FUN_00418400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  iVar1 = FUN_004182f0(param_1,param_2,&LAB_00418090,&local_28);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_20;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

