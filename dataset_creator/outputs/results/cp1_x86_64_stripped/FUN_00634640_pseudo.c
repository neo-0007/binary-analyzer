
undefined8
FUN_00634640(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
            undefined8 param_5,char param_6,undefined8 param_7,undefined8 param_8,long *param_9)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 local_49;
  undefined1 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_9 == (long *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0063474d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4,param_5,(int)param_6);
      return uVar3;
    }
  }
  else {
    if (param_9[4] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403890("uninitialized __any_string",param_2,0);
    }
    lVar2 = *param_9;
    lVar5 = param_9[1] + lVar2;
    if (lVar2 == lVar5) {
      local_48 = &DAT_009452b8;
    }
    else {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00403890("basic_string::_S_construct null not valid",lVar5,0);
      }
      local_48 = (undefined1 *)FUN_006309c0(lVar2,lVar5,&local_49);
    }
                    /* try { // try from 006346dd to 006346df has its CatchHandler @ 006347cb */
    uVar3 = (**(code **)(*param_1 + 0x18))
                      (param_1,param_2,param_3,param_4,param_5,(int)param_6,&local_48);
    if ((undefined8 *)(local_48 + -0x18) != &DAT_009452a0) {
      if (DAT_0093ea10 == '\0') {
        LOCK();
        piVar1 = (int *)(local_48 + -8);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_48 + -8);
        *(int *)(local_48 + -8) = iVar4 + -1;
      }
      if (iVar4 < 1) {
        thunk_FUN_007104f0(local_48 + -0x18,&local_49);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

