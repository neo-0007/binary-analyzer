
undefined8 FUN_007092c0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_1;
  local_30 = param_2;
  iVar1 = FUN_00708fd0(FUN_007091e0,&local_38);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = local_28;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

