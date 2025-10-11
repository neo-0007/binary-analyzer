
undefined8 FUN_007c8810(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 1;
  if (param_1 == 2) {
    uVar1 = FUN_00771190(param_2,0,0xb,&local_14,4);
  }
  else if (param_1 == 10) {
    uVar1 = FUN_00771190(param_2,0x29,0x19,&local_14,4);
  }
  else {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x61;
    uVar1 = 0xffffffff;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

