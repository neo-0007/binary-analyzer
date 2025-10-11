
void FUN_00633e00(long *param_1,long *param_2,undefined4 param_3,undefined4 param_4,ulong param_5,
                 undefined4 *param_6,long param_7)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined1 local_52;
  undefined1 local_51;
  long *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_7 = param_7 * 4;
  if (param_7 == 0) {
    local_50 = (long *)&DAT_009452d8;
  }
  else {
    if (param_6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403890("basic_string::_S_construct null not valid");
    }
    lVar3 = param_7 >> 2;
    plVar4 = (long *)FUN_0063af10(lVar3,0,&local_52);
    local_50 = plVar4 + 3;
    if (lVar3 == 1) {
      *(undefined4 *)(plVar4 + 3) = *param_6;
    }
    else if (lVar3 != 0) {
      FUN_00771ea0(local_50,param_6,lVar3,0x3fffffffffffffff);
    }
    param_5 = param_5 & 0xffffffff;
    if (plVar4 != &DAT_009452c0) {
      *(undefined4 *)(plVar4 + 2) = 0;
      *plVar4 = lVar3;
      *(undefined4 *)((long)plVar4 + param_7 + 0x18) = 0;
    }
  }
                    /* try { // try from 00633ec3 to 00633ec5 has its CatchHandler @ 006340b0 */
  (**(code **)(*param_1 + 0x18))(&local_48,param_1,param_3,param_4,param_5,&local_50);
  if ((code *)param_2[4] != (code *)0x0) {
                    /* try { // try from 00633ed2 to 00633fab has its CatchHandler @ 006340b9 */
    (*(code *)param_2[4])(param_2);
  }
  if (*(int *)(local_48 + -8) < 0) {
    lVar3 = FUN_0063bfe0((undefined8 *)(local_48 + -0x18),&local_51,0);
  }
  else {
    lVar3 = local_48;
    if ((undefined8 *)(local_48 + -0x18) != &DAT_009452c0) {
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(local_48 + -8) = *(int *)(local_48 + -8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_48 + -8) = *(int *)(local_48 + -8) + 1;
      }
    }
  }
  *param_2 = lVar3;
  lVar3 = *(long *)(local_48 + -0x18);
  param_2[4] = (long)FUN_00630e70;
  param_2[1] = lVar3;
  if ((undefined8 *)(local_48 + -0x18) != &DAT_009452c0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar1 = (int *)(local_48 + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = *(int *)(local_48 + -8);
      *(int *)(local_48 + -8) = iVar2 + -1;
    }
    if (iVar2 < 1) {
      thunk_FUN_007104f0((undefined8 *)(local_48 + -0x18),&local_51);
    }
  }
  if (local_50 + -3 != &DAT_009452c0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      plVar4 = local_50 + -1;
      iVar2 = (int)*plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
    }
    else {
      iVar2 = (int)local_50[-1];
      *(int *)(local_50 + -1) = iVar2 + -1;
    }
    if (iVar2 < 1) {
      thunk_FUN_007104f0(local_50 + -3,&local_48);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

