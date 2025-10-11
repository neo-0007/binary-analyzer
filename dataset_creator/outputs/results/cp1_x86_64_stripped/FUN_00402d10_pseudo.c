
/* WARNING: Removing unreachable block (ram,0x00402d4e) */
/* WARNING: Removing unreachable block (ram,0x00402d5d) */

void FUN_00402d10(void)

{
  long unaff_RBX;
  long in_stack_00000008;
  
  FUN_006c2e40();
  if (*(long **)(unaff_RBX + 0x10) != (long *)0x0) {
                    /* try { // try from 00402d2c to 00402d72 has its CatchHandler @ 00402da1 */
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

