
void FUN_00403e68(void)

{
  long lVar1;
  long in_RAX;
  undefined4 *unaff_RBX;
  wios *pwVar2;
  long *unaff_R12;
  long unaff_R13;
  long in_FS_OFFSET;
  long in_stack_00000028;
  
  if (in_RAX == 1) {
    __cxa_begin_catch();
    std::wios::_M_setstate((wios *)(*(long *)(*unaff_R12 + -0x18) + (long)unaff_R12),1);
                    /* WARNING: Subroutine does not return */
    __cxa_rethrow();
  }
  __cxa_begin_catch();
  std::wios::_M_setstate((wios *)(*(long *)(*unaff_R12 + -0x18) + (long)unaff_R12),1);
  __cxa_end_catch();
  if (unaff_R13 < 1) {
    lVar1 = unaff_R12[1];
  }
  else {
    lVar1 = unaff_R12[1];
    *unaff_RBX = 0;
  }
  if (lVar1 == 0) {
    pwVar2 = (wios *)(*(long *)(*unaff_R12 + -0x18) + (long)unaff_R12);
    std::wios::clear(pwVar2,*(uint *)(pwVar2 + 0x20) | 4);
  }
  if (in_stack_00000028 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

