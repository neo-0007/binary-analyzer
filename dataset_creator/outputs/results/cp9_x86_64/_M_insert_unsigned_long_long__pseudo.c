
/* std::wostream& std::wostream::_M_insert<unsigned long long>(unsigned long long) */

wostream * __thiscall std::wostream::_M_insert<unsigned_long_long>(wostream *this,ulonglong param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  char extraout_DL;
  wios *pwVar7;
  wostream *pwVar8;
  long in_FS_OFFSET;
  sentry local_48 [8];
  long *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  sentry::sentry(local_48,this);
  if (local_48[0] != (sentry)0x0) {
    pwVar8 = this + *(long *)(*(long *)this + -0x18);
    plVar1 = *(long **)(pwVar8 + 0xf8);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0068e6ce to 0068e6d7 has its CatchHandler @ 0068e6d8 */
      __throw_bad_cast();
    }
    if (pwVar8[0xe4] == (wostream)0x0) {
      plVar3 = *(long **)(pwVar8 + 0xf0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        __throw_bad_cast();
      }
                    /* try { // try from 0068e684 to 0068e686 has its CatchHandler @ 0068e6d8 */
      uVar6 = (**(code **)(*plVar3 + 0x50))(plVar3,0x20);
      *(undefined4 *)(pwVar8 + 0xe0) = uVar6;
      lVar2 = *(long *)this;
      pwVar8[0xe4] = (wostream)0x1;
      pwVar8 = this + *(long *)(lVar2 + -0x18);
    }
    else {
      uVar6 = *(undefined4 *)(pwVar8 + 0xe0);
    }
                    /* try { // try from 0068e5f6 to 0068e5f8 has its CatchHandler @ 0068e6d8 */
    (**(code **)(*plVar1 + 0x30))
              (plVar1,*(long *)(pwVar8 + 0xe8),*(long *)(pwVar8 + 0xe8) == 0,pwVar8,uVar6,param_1);
    if (extraout_DL != '\0') {
                    /* try { // try from 0068e60e to 0068e612 has its CatchHandler @ 0068e6e4 */
      wios::clear((wios *)(this + *(long *)(*(long *)this + -0x18)),
                  *(uint *)((wios *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 1);
    }
  }
  plVar1 = local_40;
  lVar2 = *(long *)(*local_40 + -0x18);
  if (((((*(byte *)((long)local_40 + lVar2 + 0x19) & 0x20) != 0) &&
       (cVar4 = uncaught_exception(), cVar4 == '\0')) &&
      (plVar1 = *(long **)((long)plVar1 + lVar2 + 0xe8), plVar1 != (long *)0x0)) &&
     (iVar5 = (**(code **)(*plVar1 + 0x30))(), iVar5 == -1)) {
    pwVar7 = (wios *)((long)local_40 + *(long *)(*local_40 + -0x18));
    wios::clear(pwVar7,*(uint *)(pwVar7 + 0x20) | 1);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return this;
}

