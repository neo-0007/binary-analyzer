
void FUN_00606420(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = param_2;
  uVar1 = FUN_00435f40(*(undefined8 *)(param_1 + 8),auStack_38);
  FUN_004364a0(*(undefined8 *)(param_1 + 8),uVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

