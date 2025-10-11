
undefined8
FUN_00488e20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = *(undefined4 *)(param_1 + 0xe);
  FUN_005524c0(param_3,param_2,param_4,param_1[0x16],(long)param_1 + 0x94,&local_14,*param_1);
  *(undefined4 *)(param_1 + 0xe) = local_14;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

