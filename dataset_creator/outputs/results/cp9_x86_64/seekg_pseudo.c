
/* std::wistream::seekg(long, std::_Ios_Seekdir) */

wistream * __thiscall std::wistream::seekg(wistream *this,undefined8 param_1,undefined4 param_3)

{
  long lVar1;
  long in_FS_OFFSET;
  sentry local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  wios::clear((wios *)(this + *(long *)(*(long *)this + -0x18)),
              *(uint *)((wios *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) & 0xfffffffd);
  sentry::sentry(&local_21,this,true);
  if ((local_21 != (sentry)0x0) && (((byte)this[*(long *)(*(long *)this + -0x18) + 0x20] & 5) == 0))
  {
                    /* try { // try from 00673f45 to 00673f47 has its CatchHandler @ 00673f8d */
    lVar1 = (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x18) + 0xe8) + 0x20))
                      (*(long **)(this + *(long *)(*(long *)this + -0x18) + 0xe8),param_1,param_3,8)
    ;
    if (lVar1 == -1) {
      wios::clear((wios *)(this + *(long *)(*(long *)this + -0x18)),
                  *(uint *)((wios *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 4);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

