
void FUN_00636700(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00635990(auStack_38,&DAT_0083e5c2);
                    /* try { // try from 00636740 to 0063675a has its CatchHandler @ 00636782 */
  func_0x00000000(param_1,auStack_38,0x10);
  uVar1 = FUN_00635fa0(param_1);
  FUN_00635ec0(uVar1,param_2,param_1);
  FUN_0062c010(auStack_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

