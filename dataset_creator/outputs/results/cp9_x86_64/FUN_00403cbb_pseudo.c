
void FUN_00403cbb(void)

{
  long lVar1;
  long in_RAX;
  undefined1 *unaff_RBX;
  ios *piVar2;
  long *unaff_R12;
  long unaff_R13;
  long in_FS_OFFSET;
  long in_stack_00000018;
  
  if (in_RAX == 1) {
    __cxa_begin_catch();
    std::ios::_M_setstate((ios *)(*(long *)(*unaff_R12 + -0x18) + (long)unaff_R12),1);
                    /* WARNING: Subroutine does not return */
    __cxa_rethrow();
  }
  __cxa_begin_catch();
  std::ios::_M_setstate((ios *)(*(long *)(*unaff_R12 + -0x18) + (long)unaff_R12),1);
  __cxa_end_catch();
  if (unaff_R13 < 1) {
    lVar1 = unaff_R12[1];
  }
  else {
    *unaff_RBX = 0;
    lVar1 = unaff_R12[1];
  }
  if (lVar1 == 0) {
    piVar2 = (ios *)(*(long *)(*unaff_R12 + -0x18) + (long)unaff_R12);
    std::ios::clear(piVar2,*(uint *)(piVar2 + 0x20) | 4);
  }
  if (in_stack_00000018 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

