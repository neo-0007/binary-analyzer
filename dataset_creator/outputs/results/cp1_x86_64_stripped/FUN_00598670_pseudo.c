
undefined * FUN_00598670(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  long in_FS_OFFSET;
  undefined1 auStack_d8 [168];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (undefined *)0x0) {
    param_3 = &DAT_00942740;
  }
  FUN_00597f40(auStack_d8);
  FUN_00598350(auStack_d8,param_1,param_2);
  FUN_00598430(param_3,auStack_d8);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

