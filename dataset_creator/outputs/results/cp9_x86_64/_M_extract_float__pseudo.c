
/* std::wistream& std::wistream::_M_extract<float>(float&) */

wistream * __thiscall std::wistream::_M_extract<float>(wistream *this,float *param_1)

{
  long *plVar1;
  wistream *pwVar2;
  long in_FS_OFFSET;
  sentry local_25;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  sentry::sentry(&local_25,this,false);
  if (local_25 != (sentry)0x0) {
    local_24 = 0;
    pwVar2 = this + *(long *)(*(long *)this + -0x18);
    plVar1 = *(long **)(pwVar2 + 0x100);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00675115 to 00675119 has its CatchHandler @ 0067511f */
      __throw_bad_cast();
    }
                    /* try { // try from 006750d0 to 006750d2 has its CatchHandler @ 0067511f */
    (**(code **)(*plVar1 + 0x48))
              (plVar1,*(undefined8 *)(pwVar2 + 0xe8),0xffffffff,0,0xffffffff,pwVar2,&local_24);
    if (local_24 != 0) {
      wios::clear((wios *)(this + *(long *)(*(long *)this + -0x18)),
                  local_24 | *(uint *)((wios *)(this + *(long *)(*(long *)this + -0x18)) + 0x20),
                  param_1);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

