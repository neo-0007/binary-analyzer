
undefined1  [16] FUN_00632220(long param_1,undefined8 param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  int *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined1 local_75;
  int local_74;
  undefined1 *local_70;
  long local_68;
  long local_60;
  code *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_74 = 0;
  local_48 = (code *)0x0;
                    /* try { // try from 00632278 to 0063227c has its CatchHandler @ 006323a9 */
  auVar3 = FUN_006523e0(*(undefined8 *)(param_1 + 0x10));
  if (local_74 == 0) {
    if (local_48 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403890("uninitialized __any_string");
    }
    if (local_68 == local_60 + local_68) {
      local_70 = &DAT_009452b8;
    }
    else {
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00403890("basic_string::_S_construct null not valid");
      }
                    /* try { // try from 0063230e to 006323a8 has its CatchHandler @ 006323a9 */
      local_70 = (undefined1 *)FUN_006309c0(local_68,local_60 + local_68,&local_75);
    }
    FUN_00637180(in_stack_00000018,&local_70);
    if ((undefined8 *)(local_70 + -0x18) != &DAT_009452a0) {
      if (DAT_0093ea10 == '\0') {
        LOCK();
        piVar1 = (int *)(local_70 + -8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      else {
        iVar2 = *(int *)(local_70 + -8);
        *(int *)(local_70 + -8) = iVar2 + -1;
      }
      if (iVar2 < 1) {
        thunk_FUN_007104f0(local_70 + -0x18,&local_75);
      }
    }
  }
  else {
    *in_stack_00000010 = local_74;
  }
  if (local_48 != (code *)0x0) {
    (*local_48)(&local_68);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  auVar3._8_8_ = param_3 & 0xffffffff00000000 | auVar3._8_8_ & 0xffffffff;
  return auVar3;
}

