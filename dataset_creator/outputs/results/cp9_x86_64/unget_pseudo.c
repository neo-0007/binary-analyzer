
/* std::wistream::unget() */

wistream * __thiscall std::wistream::unget(wistream *this)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  wios *pwVar4;
  long in_FS_OFFSET;
  sentry local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  wios::clear((wios *)(this + *(long *)(*(long *)this + -0x18)),
              *(uint *)((wios *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) & 0xfffffffd);
  sentry::sentry(&local_11,this,true);
  if (local_11 != (sentry)0x0) {
    pwVar4 = (wios *)(this + *(long *)(*(long *)this + -0x18));
    plVar1 = *(long **)((wistream *)pwVar4 + 0xe8);
    if (plVar1 != (long *)0x0) {
      uVar2 = plVar1[2];
      if ((ulong)plVar1[1] < uVar2) {
        iVar3 = *(int *)(uVar2 - 4);
        plVar1[2] = uVar2 - 4;
      }
      else {
                    /* try { // try from 00673aa8 to 00673aaa has its CatchHandler @ 00673ab2 */
        iVar3 = (**(code **)(*plVar1 + 0x58))(plVar1,0xffffffff);
      }
      if (iVar3 != -1) goto LAB_00673a61;
      pwVar4 = (wios *)(this + *(long *)(*(long *)this + -0x18));
    }
    wios::clear(pwVar4,*(uint *)(pwVar4 + 0x20) | 1);
  }
LAB_00673a61:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

