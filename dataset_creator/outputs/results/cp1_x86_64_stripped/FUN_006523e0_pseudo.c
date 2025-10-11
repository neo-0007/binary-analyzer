
undefined1  [16]
FUN_006523e0(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
            undefined1 param_6,undefined8 param_7,int *param_8,long param_9,long *param_10)

{
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  ulong local_70;
  undefined1 *local_68;
  ulong local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_9 != 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0065245f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar4 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
      return auVar4;
    }
    goto LAB_006525c9;
  }
  local_58[0] = 0;
  local_60 = 0;
                    /* try { // try from 0065248a to 006525b1 has its CatchHandler @ 006525ce */
  local_68 = local_58;
  auVar4 = (**(code **)(*param_1 + 0x18))
                     (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&local_68);
  if (*param_8 == 0) {
    if ((code *)param_10[4] != (code *)0x0) {
      (*(code *)param_10[4])();
    }
    uVar2 = local_60;
    puVar1 = local_68;
    plVar3 = param_10 + 2;
    *param_10 = (long)plVar3;
    if ((local_68 + local_60 != (undefined1 *)0x0) && (local_68 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00403890("basic_string::_M_construct null not valid");
    }
    local_70 = local_60;
    if (local_60 < 0x10) {
      if (local_60 == 1) {
        *(undefined1 *)(param_10 + 2) = *local_68;
      }
      else if (local_60 != 0) goto LAB_00652580;
    }
    else {
      plVar3 = (long *)FUN_0069de90(param_10,&local_70,0);
      *param_10 = (long)plVar3;
      param_10[2] = local_70;
LAB_00652580:
      thunk_FUN_00713a50(plVar3,puVar1,uVar2);
      plVar3 = (long *)*param_10;
    }
    param_10[1] = local_70;
    *(undefined1 *)((long)plVar3 + local_70) = 0;
    param_10[4] = (long)FUN_0064f190;
  }
  if (local_68 != local_58) {
    thunk_FUN_007104f0();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._8_8_ = param_3 & 0xffffffff00000000 | auVar4._8_8_ & 0xffffffff;
    return auVar4;
  }
LAB_006525c9:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

