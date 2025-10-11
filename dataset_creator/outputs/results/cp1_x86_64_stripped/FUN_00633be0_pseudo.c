
void FUN_00633be0(long *param_1,long *param_2,undefined4 param_3,undefined4 param_4,ulong param_5,
                 long param_6,long param_7)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 == param_7 + param_6) {
    local_50 = &DAT_009452b8;
  }
  else {
    if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403890("basic_string::_S_construct null not valid");
    }
    local_50 = (undefined1 *)FUN_006309c0(param_6,param_7 + param_6,&local_52);
    param_5 = param_5 & 0xffffffff;
  }
                    /* try { // try from 00633c61 to 00633c63 has its CatchHandler @ 00633dd6 */
  (**(code **)(*param_1 + 0x18))(&local_48,param_1,param_3,param_4,param_5,&local_50);
  if ((code *)param_2[4] != (code *)0x0) {
                    /* try { // try from 00633c70 to 00633cfb has its CatchHandler @ 00633dcd */
    (*(code *)param_2[4])(param_2);
  }
  if (*(int *)(local_48 + -8) < 0) {
    lVar3 = FUN_00638b30((undefined8 *)(local_48 + -0x18),&local_51,0);
  }
  else {
    lVar3 = local_48;
    if ((undefined8 *)(local_48 + -0x18) != &DAT_009452a0) {
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
  param_2[4] = (long)FUN_006311c0;
  param_2[1] = lVar3;
  if ((undefined8 *)(local_48 + -0x18) != &DAT_009452a0) {
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
  if ((undefined8 *)(local_50 + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar1 = (int *)(local_50 + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = *(int *)(local_50 + -8);
      *(int *)(local_50 + -8) = iVar2 + -1;
    }
    if (iVar2 < 1) {
      thunk_FUN_007104f0(local_50 + -0x18,&local_48);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

