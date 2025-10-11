
undefined8 FUN_004ccf20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  FUN_0051f000();
  iVar1 = FUN_004ccce0(param_1,param_2,param_3,&local_38);
  FUN_0051f050();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_38;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

