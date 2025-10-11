
void FUN_006c98f0(undefined8 *param_1,ulong param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long *local_a8;
  long local_a0;
  long local_98;
  long lStack_90;
  long *local_88;
  long local_80;
  long local_78;
  long lStack_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*param_3 + 0x20) == FUN_006c94d0) {
    local_68 = local_58;
    local_58[0] = 0;
    local_60 = 0;
    if ((int)param_2 == 1) {
                    /* try { // try from 006c9ad4 to 006c9ad8 has its CatchHandler @ 006c9b4b */
      FUN_0069f220(&local_68,0,0,"iostream error",0xe);
    }
    else {
                    /* try { // try from 006c996d to 006c9971 has its CatchHandler @ 006c9b4b */
      FUN_0069f220(&local_68,0,0,"Unknown error",0xd);
    }
  }
  else {
    (**(code **)(*param_3 + 0x20))(&local_68,param_3,param_2 & 0xffffffff);
  }
                    /* try { // try from 006c9986 to 006c998a has its CatchHandler @ 006c9b42 */
  plVar1 = (long *)FUN_0069f220(&local_68,0,0,": ",2);
  if ((long *)*plVar1 == plVar1 + 2) {
    local_78 = plVar1[2];
    lStack_70 = plVar1[3];
    local_88 = &local_78;
  }
  else {
    local_78 = plVar1[2];
    local_88 = (long *)*plVar1;
  }
  local_80 = plVar1[1];
  *(undefined1 *)(plVar1 + 2) = 0;
  *plVar1 = (long)(plVar1 + 2);
  plVar1[1] = 0;
  uVar2 = thunk_FUN_007129d0(param_4);
                    /* try { // try from 006c99e2 to 006c99e6 has its CatchHandler @ 006c9afe */
  plVar1 = (long *)FUN_0069f220(&local_88,0,0,param_4,uVar2);
  if ((long *)*plVar1 == plVar1 + 2) {
    local_98 = plVar1[2];
    lStack_90 = plVar1[3];
    local_a8 = &local_98;
  }
  else {
    local_98 = plVar1[2];
    local_a8 = (long *)*plVar1;
  }
  local_a0 = plVar1[1];
  *(undefined1 *)(plVar1 + 2) = 0;
  *plVar1 = (long)(plVar1 + 2);
  plVar1[1] = 0;
                    /* try { // try from 006c9a2b to 006c9a2f has its CatchHandler @ 006c9b07 */
  FUN_006c9ce0(param_1,&local_a8);
  if (local_a8 != &local_98) {
    thunk_FUN_007104f0();
  }
  if (local_88 != &local_78) {
    thunk_FUN_007104f0();
  }
  if (local_68 != local_58) {
    thunk_FUN_007104f0();
  }
  param_1[2] = param_2;
  param_1[3] = param_3;
  *param_1 = &PTR_FUN_009398e8;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

