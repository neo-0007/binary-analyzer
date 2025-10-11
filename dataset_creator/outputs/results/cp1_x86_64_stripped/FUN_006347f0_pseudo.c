
undefined8
FUN_006347f0(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
            undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
            undefined8 *param_9)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined1 local_49;
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_9 == (undefined8 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0063493d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4);
      return uVar5;
    }
  }
  else {
    if (param_9[4] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403890("uninitialized __any_string",param_2,0);
    }
    puVar1 = (undefined4 *)*param_9;
    lVar2 = param_9[1] * 4;
    if (lVar2 == 0) {
      local_48 = (long *)&DAT_009452d8;
    }
    else {
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00403890("basic_string::_S_construct null not valid",param_2,0);
      }
      lVar3 = lVar2 >> 2;
      plVar4 = (long *)FUN_0063af10(lVar3,0,&local_49);
      local_48 = plVar4 + 3;
      if (lVar3 == 1) {
        *(undefined4 *)(plVar4 + 3) = *puVar1;
      }
      else if (lVar3 != 0) {
        FUN_00771ea0(local_48,puVar1,lVar3,0x3fffffffffffffff);
      }
      param_6 = param_6 & 0xffffffff;
      if (plVar4 != &DAT_009452c0) {
        *(undefined4 *)(plVar4 + 2) = 0;
        *plVar4 = lVar3;
        *(undefined4 *)((long)plVar4 + lVar2 + 0x18) = 0;
      }
    }
                    /* try { // try from 006348c9 to 006348cb has its CatchHandler @ 00634a2c */
    uVar5 = (**(code **)(*param_1 + 0x18))
                      (param_1,param_2,param_3,param_4,param_5,param_6,&local_48);
    if (local_48 + -3 != &DAT_009452c0) {
      if (DAT_0093ea10 == '\0') {
        LOCK();
        plVar4 = local_48 + -1;
        iVar6 = (int)*plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
      }
      else {
        iVar6 = (int)local_48[-1];
        *(int *)(local_48 + -1) = iVar6 + -1;
      }
      if (iVar6 < 1) {
        thunk_FUN_007104f0(local_48 + -3,&local_49);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

