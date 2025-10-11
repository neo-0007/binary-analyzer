
/* WARNING: Removing unreachable block (ram,0x00402c6b) */

void FUN_00402cae(void)

{
  long unaff_RBX;
  long in_stack_00000008;
  long in_stack_00000010;
  
  FUN_006c2e40();
  if (*(long **)(unaff_RBX + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(unaff_RBX + 0x10) + 8))();
  }
  *(undefined8 *)(unaff_RBX + 0x10) = 0;
  if (in_stack_00000010 != 0) {
    thunk_FUN_007104f0(in_stack_00000010);
  }
  if (in_stack_00000008 != 0) {
    thunk_FUN_007104f0(in_stack_00000008);
  }
                    /* WARNING: Subroutine does not return */
  FUN_006240b0();
}

