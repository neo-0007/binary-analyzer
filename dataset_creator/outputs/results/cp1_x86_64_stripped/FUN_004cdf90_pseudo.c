
void FUN_004cdf90(long param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 local_28 [16];
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (undefined1  [16])0x0;
  local_18 = 0;
  if (param_1 != 0) {
    uVar1 = FUN_007128a0();
    local_28._8_8_ = uVar1;
  }
  local_18 = 0x32;
  FUN_00419fe0(0x40,local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

