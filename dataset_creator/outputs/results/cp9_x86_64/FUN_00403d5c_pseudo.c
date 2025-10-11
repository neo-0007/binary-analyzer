
void FUN_00403d5c(void)

{
  locale *unaff_RBP;
  ios *piVar1;
  long unaff_R12;
  long *unaff_R13;
  long in_FS_OFFSET;
  long in_stack_00000038;
  
  std::locale::~locale(unaff_RBP);
  if (unaff_R12 == 1) {
    __cxa_begin_catch();
    std::ios::_M_setstate((ios *)(*(long *)(*unaff_R13 + -0x18) + (long)unaff_R13),1);
                    /* WARNING: Subroutine does not return */
    __cxa_rethrow();
  }
  __cxa_begin_catch();
                    /* try { // try from 00403d83 to 00403d87 has its CatchHandler @ 00403db8 */
  std::ios::_M_setstate((ios *)(*(long *)(*unaff_R13 + -0x18) + (long)unaff_R13),1);
  __cxa_end_catch();
  piVar1 = (ios *)(*(long *)(*unaff_R13 + -0x18) + (long)unaff_R13);
  std::ios::clear(piVar1,*(uint *)(piVar1 + 0x20) | 4);
  if (in_stack_00000038 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

