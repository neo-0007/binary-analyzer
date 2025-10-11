
undefined1  [16]
FUN_00652760(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
            undefined8 param_5,char param_6,undefined8 param_7,undefined8 param_8,long *param_9)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  undefined1 *local_68 [2];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_9 == (long *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00652875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4,param_5,(int)param_6);
      return auVar1;
    }
  }
  else {
    if (param_9[4] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403890("uninitialized __any_string",param_2,0);
    }
    local_68[0] = local_58;
    FUN_0064f5b0(local_68,*param_9,param_9[1] + *param_9);
                    /* try { // try from 006527f9 to 006527fb has its CatchHandler @ 0065288a */
    auVar1 = (**(code **)(*param_1 + 0x18))
                       (param_1,param_2,param_3,param_4,param_5,(int)param_6,local_68);
    if (local_68[0] != local_58) {
      thunk_FUN_007104f0();
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return auVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

