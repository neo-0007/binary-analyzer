
void FUN_006513a0(long *param_1,long *param_2)

{
  long in_FS_OFFSET;
  undefined1 *local_48;
  long local_40;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*param_1 + 0x18))(&local_48,param_1);
  if ((code *)param_2[4] != (code *)0x0) {
                    /* try { // try from 006513d8 to 006513f5 has its CatchHandler @ 00651430 */
    (*(code *)param_2[4])(param_2);
  }
  *param_2 = (long)(param_2 + 2);
  FUN_0064fb30(param_2,local_48,local_48 + local_40 * 4);
  param_2[4] = (long)FUN_0064f1c0;
  if (local_48 != local_38) {
    thunk_FUN_007104f0();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

