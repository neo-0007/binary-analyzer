
void FUN_00404570(void)

{
  long in_RAX;
  long *unaff_R12;
  long in_FS_OFFSET;
  long in_stack_00000008;
  
  if (in_RAX == 1) {
    FUN_006c2e40();
                    /* try { // try from 0040458b to 00404594 has its CatchHandler @ 004045b9 */
    FUN_0066ec90(*(long *)(*unaff_R12 + -0x18) + (long)unaff_R12,1);
                    /* WARNING: Subroutine does not return */
    FUN_006240b0();
  }
  FUN_006c2e40();
                    /* try { // try from 004045aa to 004045ae has its CatchHandler @ 004045cd */
  FUN_0066ec90(*(long *)(*unaff_R12 + -0x18) + (long)unaff_R12,1);
  FUN_006c2eb0();
  if (in_stack_00000008 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

