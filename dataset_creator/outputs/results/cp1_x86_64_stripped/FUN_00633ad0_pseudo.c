
ulong FUN_00633ad0(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined1 local_29;
  undefined1 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == param_2 + param_3) {
    local_28 = &DAT_009452b8;
  }
  else {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403890("basic_string::_S_construct null not valid");
    }
    local_28 = (undefined1 *)FUN_006309c0(param_2,param_2 + param_3,&local_29);
  }
                    /* try { // try from 00633b28 to 00633b2a has its CatchHandler @ 00633bbd */
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,&local_28,param_4);
  if ((undefined8 *)(local_28 + -0x18) != &DAT_009452a0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar1 = (int *)(local_28 + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = *(int *)(local_28 + -8);
      *(int *)(local_28 + -8) = iVar2 + -1;
    }
    if (iVar2 < 1) {
      thunk_FUN_007104f0(local_28 + -0x18,&local_29);
      uVar3 = uVar3 & 0xffffffff;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

