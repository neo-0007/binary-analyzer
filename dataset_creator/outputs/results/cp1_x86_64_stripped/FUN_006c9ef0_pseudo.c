
undefined8 FUN_006c9ef0(undefined8 param_1,long *param_2)

{
  long in_FS_OFFSET;
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 local_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*param_2 + 0x20))(&local_38);
                    /* try { // try from 006c9f22 to 006c9f26 has its CatchHandler @ 006c9f59 */
  FUN_00635bb0(param_1,local_38,local_30);
  if (local_38 != local_28) {
    thunk_FUN_007104f0();
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

