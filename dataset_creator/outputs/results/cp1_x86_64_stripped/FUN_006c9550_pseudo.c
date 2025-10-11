
void FUN_006c9550(undefined8 *param_1,ulong param_2,long *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long in_FS_OFFSET;
  undefined1 *local_c8;
  undefined1 **local_c0;
  ulong local_b0;
  long *local_a8;
  long local_a0;
  long local_98;
  long lStack_90;
  ulong *local_88;
  ulong local_80;
  ulong local_78 [2];
  undefined1 *local_68;
  long local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*param_3 + 0x20) == FUN_006c94d0) {
    local_58 = 0;
    local_68 = &local_58;
    local_60 = 0;
    if ((int)param_2 == 1) {
                    /* try { // try from 006c97de to 006c97e2 has its CatchHandler @ 006c9899 */
      FUN_0069f220(&local_68,0,0,"iostream error",0xe);
    }
    else {
                    /* try { // try from 006c95de to 006c95e2 has its CatchHandler @ 006c9899 */
      FUN_0069f220(&local_68,0,0,"Unknown error",0xd);
    }
  }
  else {
    (**(code **)(*param_3 + 0x20))(&local_68,param_3,param_2 & 0xffffffff);
  }
  local_c0 = &local_68;
  local_c8 = &local_58;
  puVar1 = (undefined1 *)*param_4;
  uVar2 = param_4[1];
  local_88 = local_78;
  if ((puVar1 + uVar2 != (undefined1 *)0x0) && (puVar1 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006c9869 to 006c986d has its CatchHandler @ 006c9887 */
    FUN_00403890("basic_string::_M_construct null not valid");
  }
  local_b0 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      local_78[0] = CONCAT71(local_78[0]._1_7_,*puVar1);
    }
    else if (uVar2 != 0) goto LAB_006c97ab;
  }
  else {
                    /* try { // try from 006c9794 to 006c9798 has its CatchHandler @ 006c9887 */
    local_88 = (ulong *)FUN_0069de90(&local_88,&local_b0,0);
    local_78[0] = local_b0;
LAB_006c97ab:
    thunk_FUN_00713a50(local_88,puVar1,uVar2);
  }
  *(undefined1 *)((long)local_88 + local_b0) = 0;
  local_80 = local_b0;
  if (0x3fffffffffffffff - local_b0 < 2) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006c9875 to 006c9879 has its CatchHandler @ 006c9890 */
    FUN_00403998("basic_string::append");
  }
                    /* try { // try from 006c9662 to 006c9666 has its CatchHandler @ 006c9890 */
  FUN_0069fc40(&local_88,": ",2);
  uVar2 = 0xf;
  if (local_88 != local_78) {
    uVar2 = local_78[0];
  }
  if (uVar2 < local_80 + local_60) {
    uVar2 = 0xf;
    if (local_68 != local_c8) {
      uVar2 = CONCAT71(uStack_57,local_58);
    }
    if (uVar2 < local_80 + local_60) goto LAB_006c96a8;
                    /* try { // try from 006c980c to 006c9810 has its CatchHandler @ 006c989f */
    plVar3 = (long *)FUN_0069f220(local_c0,0,0,local_88);
    local_a8 = &local_98;
    plVar5 = plVar3 + 2;
    plVar4 = (long *)*plVar3;
    if (plVar4 == plVar5) {
      local_98 = plVar3[2];
      lStack_90 = plVar3[3];
      goto LAB_006c96d8;
    }
  }
  else {
LAB_006c96a8:
                    /* try { // try from 006c96ab to 006c96af has its CatchHandler @ 006c989f */
    plVar3 = (long *)FUN_0069fc40(&local_88);
    local_a8 = &local_98;
    plVar5 = plVar3 + 2;
    plVar4 = (long *)*plVar3;
    if (plVar4 == plVar5) {
      local_98 = plVar3[2];
      lStack_90 = plVar3[3];
      goto LAB_006c96d8;
    }
  }
  local_98 = plVar3[2];
  local_a8 = plVar4;
LAB_006c96d8:
  local_a0 = plVar3[1];
  *plVar3 = (long)plVar5;
  plVar3[1] = 0;
  *(undefined1 *)(plVar3 + 2) = 0;
                    /* try { // try from 006c96f8 to 006c96fc has its CatchHandler @ 006c98a5 */
  FUN_006c9ce0(param_1,&local_a8);
  if (local_a8 != &local_98) {
    thunk_FUN_007104f0();
  }
  if (local_88 != local_78) {
    thunk_FUN_007104f0();
  }
  if (local_68 != local_c8) {
    thunk_FUN_007104f0();
  }
  param_1[2] = param_2;
  param_1[3] = param_3;
  *param_1 = &PTR_FUN_009398e8;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

