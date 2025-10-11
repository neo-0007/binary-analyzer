
/* std::wistream::peek() */

ulong __thiscall std::wistream::peek(wistream *this)

{
  long *plVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  sentry local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  sentry::sentry(&local_21,this,true);
  uVar2 = 0xffffffff;
  if (local_21 != (sentry)0x0) {
    plVar1 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0xe8);
    if ((uint *)plVar1[2] < (uint *)plVar1[3]) {
      uVar2 = (ulong)*(uint *)plVar1[2];
    }
    else {
                    /* try { // try from 00673553 to 00673555 has its CatchHandler @ 0067355d */
      uVar2 = (**(code **)(*plVar1 + 0x48))();
    }
    if ((int)uVar2 == -1) {
      wios::clear((wios *)(this + *(long *)(*(long *)this + -0x18)),
                  *(uint *)((wios *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 2);
      uVar2 = uVar2 & 0xffffffff;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

