
/* std::wistream::readsome(wchar_t*, long) */

undefined8 __thiscall std::wistream::readsome(wistream *this,wchar_t *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  sentry local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  sentry::sentry(&local_21,this,true);
  if (local_21 != (sentry)0x0) {
    plVar1 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0xe8);
    if (plVar1[3] == plVar1[2]) {
                    /* try { // try from 006737f3 to 006737f5 has its CatchHandler @ 006737fd */
      lVar2 = (**(code **)(*plVar1 + 0x38))();
    }
    else {
      lVar2 = plVar1[3] - plVar1[2] >> 2;
    }
    if (0 < lVar2) {
      if (lVar2 <= param_2) {
        param_2 = lVar2;
      }
                    /* try { // try from 006737c7 to 006737c9 has its CatchHandler @ 006737fd */
      uVar3 = (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x18) + 0xe8) + 0x40))
                        (*(long **)(this + *(long *)(*(long *)this + -0x18) + 0xe8),param_1,param_2)
      ;
      *(undefined8 *)(this + 8) = uVar3;
      goto LAB_0067375a;
    }
    if (lVar2 == -1) {
      wios::clear((wios *)(this + *(long *)(*(long *)this + -0x18)),
                  *(uint *)((wios *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 2);
    }
  }
  uVar3 = *(undefined8 *)(this + 8);
LAB_0067375a:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

