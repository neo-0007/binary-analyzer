
undefined1  [16]
FUN_006525f0(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
            undefined1 param_6,undefined8 param_7,int *param_8,long param_9,long *param_10)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  undefined4 *local_68;
  long local_60;
  undefined4 local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_9 == 0) {
    local_60 = 0;
    local_58[0] = 0;
                    /* try { // try from 00652695 to 00652728 has its CatchHandler @ 0065273b */
    local_68 = local_58;
    auVar1 = (**(code **)(*param_1 + 0x18))
                       (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&local_68);
    if (*param_8 == 0) {
      if ((code *)param_10[4] != (code *)0x0) {
        (*(code *)param_10[4])(param_10);
      }
      *param_10 = (long)(param_10 + 2);
      FUN_0064fb30(param_10,local_68,local_68 + local_60);
      param_10[4] = (long)FUN_0064f1c0;
    }
    if (local_68 != local_58) {
      thunk_FUN_007104f0();
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      auVar1._8_8_ = param_3 & 0xffffffff00000000 | auVar1._8_8_ & 0xffffffff;
      return auVar1;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00652668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

