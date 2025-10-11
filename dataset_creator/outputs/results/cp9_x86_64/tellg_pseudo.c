
/* std::wistream::tellg() */

undefined8 __thiscall std::wistream::tellg(wistream *this)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  sentry local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  sentry::sentry(&local_21,this,true);
  if ((local_21 == (sentry)0x0) ||
     ((*(uint *)(this + *(long *)(*(long *)this + -0x18) + 0x20) & 5) != 0)) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
                    /* try { // try from 00673cee to 00673cf0 has its CatchHandler @ 00673cfe */
    uVar1 = (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x18) + 0xe8) + 0x20))
                      (*(long **)(this + *(long *)(*(long *)this + -0x18) + 0xe8),0,1,8);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

