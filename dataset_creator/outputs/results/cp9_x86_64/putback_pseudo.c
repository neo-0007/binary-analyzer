
/* std::wistream::putback(wchar_t) */

wistream * __thiscall std::wistream::putback(wistream *this,wchar_t param_1)

{
  long *plVar1;
  ulong uVar2;
  wios *pwVar3;
  long in_FS_OFFSET;
  sentry local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  wios::clear((wios *)(this + *(long *)(*(long *)this + -0x18)),
              *(uint *)((wios *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) & 0xfffffffd);
  sentry::sentry(&local_21,this,true);
  if (local_21 != (sentry)0x0) {
    pwVar3 = (wios *)(this + *(long *)(*(long *)this + -0x18));
    plVar1 = *(long **)((wistream *)pwVar3 + 0xe8);
    if (plVar1 != (long *)0x0) {
      uVar2 = plVar1[2];
      if (((ulong)plVar1[1] < uVar2) && (param_1 == *(wchar_t *)(uVar2 - 4))) {
        plVar1[2] = uVar2 - 4;
      }
      else {
                    /* try { // try from 0067394d to 0067394f has its CatchHandler @ 00673959 */
        param_1 = (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
      }
      if (param_1 != L'\xffffffff') goto LAB_00673906;
      pwVar3 = (wios *)(this + *(long *)(*(long *)this + -0x18));
    }
    wios::clear(pwVar3,*(uint *)(pwVar3 + 0x20) | 1);
  }
LAB_00673906:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

