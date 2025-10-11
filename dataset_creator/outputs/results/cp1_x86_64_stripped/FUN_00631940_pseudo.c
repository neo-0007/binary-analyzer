
undefined1  [16] FUN_00631940(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  int *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined1 local_75;
  int local_74;
  long *local_70;
  undefined4 *local_68;
  long local_60;
  code *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_74 = 0;
  local_48 = (code *)0x0;
                    /* try { // try from 0063199c to 006319a0 has its CatchHandler @ 00631b69 */
  auVar5 = FUN_006525f0(*(undefined8 *)(param_1 + 0x10));
  if (local_74 == 0) {
    if (local_48 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403890("uninitialized __any_string");
    }
    lVar2 = local_60 * 4;
    if (lVar2 == 0) {
      local_70 = (long *)&DAT_009452d8;
    }
    else {
      if (local_68 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00403890("basic_string::_S_construct null not valid");
      }
      lVar3 = lVar2 >> 2;
                    /* try { // try from 00631a4b to 00631b68 has its CatchHandler @ 00631b69 */
      plVar4 = (long *)FUN_0063af10(lVar3,0,&local_75);
      local_70 = plVar4 + 3;
      if (lVar3 == 1) {
        *(undefined4 *)(plVar4 + 3) = *local_68;
      }
      else if (lVar3 != 0) {
        FUN_00771ea0(local_70,local_68,lVar3,0x3fffffffffffffff);
      }
      if (plVar4 != &DAT_009452c0) {
        *(undefined4 *)(plVar4 + 2) = 0;
        *plVar4 = lVar3;
        *(undefined4 *)((long)plVar4 + lVar2 + 0x18) = 0;
      }
    }
    FUN_0063a4a0(in_stack_00000018,&local_70);
    if (local_70 + -3 != &DAT_009452c0) {
      if (DAT_0093ea10 == '\0') {
        LOCK();
        plVar4 = local_70 + -1;
        iVar1 = (int)*plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
      }
      else {
        iVar1 = (int)local_70[-1];
        *(int *)(local_70 + -1) = iVar1 + -1;
      }
      if (iVar1 < 1) {
        thunk_FUN_007104f0(local_70 + -3,&local_75);
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
  auVar5._8_8_ = param_3 & 0xffffffff00000000 | auVar5._8_8_ & 0xffffffff;
  return auVar5;
}

