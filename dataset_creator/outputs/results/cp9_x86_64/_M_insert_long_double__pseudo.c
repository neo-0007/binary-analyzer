
/* std::wostream& std::wostream::_M_insert<long double>(long double) */

wostream * std::wostream::_M_insert<long_double>(longdouble param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 extraout_RDX;
  wostream *in_RDI;
  wios *pwVar7;
  undefined8 in_R9;
  wostream *pwVar8;
  long in_FS_OFFSET;
  undefined6 in_stack_00000012;
  sentry local_48 [8];
  long *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  sentry::sentry(local_48,in_RDI);
  if (local_48[0] != (sentry)0x0) {
    pwVar8 = in_RDI + *(long *)(*(long *)in_RDI + -0x18);
    plVar1 = *(long **)(pwVar8 + 0xf8);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0068eafd to 0068eb06 has its CatchHandler @ 0068eb07 */
      __throw_bad_cast();
    }
    if (pwVar8[0xe4] == (wostream)0x0) {
      plVar3 = *(long **)(pwVar8 + 0xf0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        __throw_bad_cast();
      }
                    /* try { // try from 0068eab4 to 0068eab6 has its CatchHandler @ 0068eb07 */
      uVar6 = (**(code **)(*plVar3 + 0x50))(plVar3,0x20);
      *(undefined4 *)(pwVar8 + 0xe0) = uVar6;
      lVar2 = *(long *)in_RDI;
      pwVar8[0xe4] = (wostream)0x1;
      pwVar8 = in_RDI + *(long *)(lVar2 + -0x18);
    }
    else {
      uVar6 = *(undefined4 *)(pwVar8 + 0xe0);
    }
                    /* try { // try from 0068ea2b to 0068ea2d has its CatchHandler @ 0068eb07 */
    (**(code **)(*plVar1 + 0x40))
              (plVar1,*(long *)(pwVar8 + 0xe8),*(long *)(pwVar8 + 0xe8) == 0,pwVar8,uVar6,in_R9,
               param_1._0_8_);
    if ((char)extraout_RDX != '\0') {
                    /* try { // try from 0068ea45 to 0068ea49 has its CatchHandler @ 0068eb13 */
      wios::clear((wios *)(in_RDI + *(long *)(*(long *)in_RDI + -0x18)),
                  *(uint *)((wios *)(in_RDI + *(long *)(*(long *)in_RDI + -0x18)) + 0x20) | 1,
                  extraout_RDX,CONCAT62(in_stack_00000012,param_1._8_2_));
    }
  }
  plVar1 = local_40;
  lVar2 = *(long *)(*local_40 + -0x18);
  if ((*(byte *)((long)local_40 + lVar2 + 0x19) & 0x20) != 0) {
    cVar4 = uncaught_exception();
    if ((cVar4 == '\0') && (plVar1 = *(long **)((long)plVar1 + lVar2 + 0xe8), plVar1 != (long *)0x0)
       ) {
      iVar5 = (**(code **)(*plVar1 + 0x30))();
      if (iVar5 == -1) {
        pwVar7 = (wios *)((long)local_40 + *(long *)(*local_40 + -0x18));
        wios::clear(pwVar7,*(uint *)(pwVar7 + 0x20) | 1);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

