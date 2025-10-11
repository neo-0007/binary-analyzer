
undefined8 * FUN_00639550(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = thunk_FUN_007129d0(param_2);
  uVar2 = FUN_00637c80(0,0,&local_31);
  *param_1 = uVar2;
                    /* try { // try from 006395a3 to 006395c0 has its CatchHandler @ 006395e5 */
  FUN_00638bc0(param_1,*(long *)(*param_3 + -0x18) + lVar1);
  FUN_00638e20(param_1,param_2,lVar1);
  FUN_00638c90(param_1,param_3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

