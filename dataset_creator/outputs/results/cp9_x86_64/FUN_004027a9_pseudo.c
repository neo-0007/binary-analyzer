
/* WARNING: Removing unreachable block (ram,0x00402793) */

void FUN_004027a9(void)

{
  long unaff_RBX;
  __locale_t unaff_R14;
  void *unaff_R15;
  void *in_stack_00000008;
  
  __cxa_begin_catch();
  if (*(long **)(unaff_RBX + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(unaff_RBX + 0x10) + 8))();
  }
  *(undefined8 *)(unaff_RBX + 0x10) = 0;
  if (in_stack_00000008 != (void *)0x0) {
    operator_delete__(in_stack_00000008);
  }
  if (unaff_R15 != (void *)0x0) {
    operator_delete__(unaff_R15);
  }
  uselocale(unaff_R14);
                    /* WARNING: Subroutine does not return */
  __cxa_rethrow();
}

