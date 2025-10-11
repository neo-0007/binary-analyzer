
/* WARNING: Removing unreachable block (ram,0x00402a0e) */
/* WARNING: Removing unreachable block (ram,0x00402a1d) */

void FUN_004029d0(void)

{
  long unaff_RBX;
  long in_stack_00000008;
  
  FUN_006c2e40();
  if (*(long **)(unaff_RBX + 0x10) != (long *)0x0) {
                    /* try { // try from 004029ec to 00402a32 has its CatchHandler @ 00402a61 */
    (**(code **)(**(long **)(unaff_RBX + 0x10) + 8))();
  }
  *(undefined8 *)(unaff_RBX + 0x10) = 0;
  if (in_stack_00000008 != 0) {
    thunk_FUN_007104f0(in_stack_00000008);
  }
  FUN_006e1eb0();
                    /* WARNING: Subroutine does not return */
  FUN_006240b0();
}

