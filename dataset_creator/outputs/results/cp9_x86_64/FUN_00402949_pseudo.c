
/* WARNING: Removing unreachable block (ram,0x0040293b) */

void FUN_00402949(void)

{
  long unaff_RBX;
  void *pvStack0000000000000008;
  void *in_stack_00000010;
  
  pvStack0000000000000008 = (void *)0x0;
  __cxa_begin_catch();
  if (*(long **)(unaff_RBX + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(unaff_RBX + 0x10) + 8))();
  }
  *(undefined8 *)(unaff_RBX + 0x10) = 0;
  if (in_stack_00000010 != (void *)0x0) {
    operator_delete__(in_stack_00000010);
  }
  if (pvStack0000000000000008 != (void *)0x0) {
    operator_delete__(pvStack0000000000000008);
  }
                    /* WARNING: Subroutine does not return */
  __cxa_rethrow();
}

