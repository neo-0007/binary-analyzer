
undefined4 FUN_00651e00(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined1 *local_58 [2];
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58[0] = local_48;
  FUN_0064f5b0(local_58,param_2,param_3 + param_2);
                    /* try { // try from 00651e48 to 00651e4a has its CatchHandler @ 00651e7f */
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_58,param_4);
  if (local_58[0] != local_48) {
    thunk_FUN_007104f0();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

