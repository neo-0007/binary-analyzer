
/* WARNING: Removing unreachable block (ram,0x0040293b) */

void FUN_0040297e(void)

{
  long unaff_RBX;
  void *in_stack_00000008;
  void *in_stack_00000010;
  
  __cxa_begin_catch();
  if (*(long **)(unaff_RBX + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(unaff_RBX + 0x10) + 8))();
  }
  *(undefined8 *)(unaff_RBX + 0x10) = 0;
  if (in_stack_00000010 != (void *)0x0) {
    operator_delete__(in_stack_00000010);
  }
  if (in_stack_00000008 != (void *)0x0) {
    operator_delete__(in_stack_00000008);
  }
                    /* WARNING: Subroutine does not return */
  __cxa_rethrow();
}

