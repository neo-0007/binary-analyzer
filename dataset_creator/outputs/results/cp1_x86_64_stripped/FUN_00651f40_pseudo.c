
void FUN_00651f40(long *param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,long param_6,long param_7)

{
  undefined1 *puVar1;
  long *plVar2;
  long in_FS_OFFSET;
  ulong local_90;
  undefined1 *local_88 [2];
  undefined1 local_78 [16];
  undefined1 *local_68;
  ulong local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88[0] = local_78;
  FUN_0064f5b0(local_88,param_6,param_7 + param_6);
                    /* try { // try from 00651fb5 to 00651fb7 has its CatchHandler @ 006520b7 */
  (**(code **)(*param_1 + 0x18))(&local_68,param_1,param_3,param_4,param_5,local_88);
  if ((code *)param_2[4] != (code *)0x0) {
                    /* try { // try from 00651fc4 to 006520b1 has its CatchHandler @ 006520c0 */
    (*(code *)param_2[4])(param_2);
  }
  puVar1 = local_68;
  plVar2 = param_2 + 2;
  *param_2 = (long)plVar2;
  if ((local_68 + local_60 != (undefined1 *)0x0) && (local_68 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00403890("basic_string::_M_construct null not valid");
  }
  local_90 = local_60;
  if (local_60 < 0x10) {
    if (local_60 == 1) {
      *(undefined1 *)(param_2 + 2) = *local_68;
      goto LAB_00652001;
    }
    if (local_60 == 0) goto LAB_00652001;
  }
  else {
    plVar2 = (long *)FUN_0069de90(param_2,&local_90,0);
    *param_2 = (long)plVar2;
    param_2[2] = local_90;
  }
  thunk_FUN_00713a50(plVar2,puVar1,local_60);
  plVar2 = (long *)*param_2;
LAB_00652001:
  param_2[1] = local_90;
  *(undefined1 *)((long)plVar2 + local_90) = 0;
  param_2[4] = (long)FUN_0064f190;
  if (local_68 != local_58) {
    thunk_FUN_007104f0();
  }
  if (local_88[0] != local_78) {
    thunk_FUN_007104f0();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

