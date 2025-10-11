
void FUN_00636340(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00635930(auStack_38,&DAT_0083e5c2);
                    /* try { // try from 00636380 to 006363a5 has its CatchHandler @ 006363cd */
  func_0x00000000(param_1,auStack_38,0x10);
  uVar1 = thunk_EXT_FUN_00000000(param_2);
  uVar2 = FUN_00635f90(param_1);
  FUN_00635ec0(uVar2,uVar1,param_1);
  FUN_0062bf50(auStack_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

