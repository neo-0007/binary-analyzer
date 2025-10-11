
void FUN_00652100(long *param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,long param_6,long param_7)

{
  long in_FS_OFFSET;
  undefined1 *local_88 [2];
  undefined1 local_78 [16];
  undefined1 *local_68;
  long local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88[0] = local_78;
  FUN_0064fce0(local_88,param_6,param_6 + param_7 * 4);
                    /* try { // try from 00652176 to 00652178 has its CatchHandler @ 006521ff */
  (**(code **)(*param_1 + 0x18))(&local_68,param_1,param_3,param_4,param_5,local_88);
  if ((code *)param_2[4] != (code *)0x0) {
                    /* try { // try from 00652185 to 006521a3 has its CatchHandler @ 006521f6 */
    (*(code *)param_2[4])(param_2);
  }
  *param_2 = (long)(param_2 + 2);
  FUN_0064fb30(param_2,local_68,local_68 + local_60 * 4);
  param_2[4] = (long)FUN_0064f1c0;
  if (local_68 != local_58) {
    thunk_FUN_007104f0();
  }
  if (local_88[0] != local_78) {
    thunk_FUN_007104f0();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

