
void FUN_00404040(void)

{
  long in_RAX;
  long *unaff_R12;
  long in_FS_OFFSET;
  long in_stack_00000038;
  
  if (in_RAX == 1) {
    FUN_006c2e40();
                    /* try { // try from 0040405b to 00404064 has its CatchHandler @ 00404089 */
    FUN_0066ec90(*(long *)(*unaff_R12 + -0x18) + (long)unaff_R12,1);
                    /* WARNING: Subroutine does not return */
    FUN_006240b0();
  }
  FUN_006c2e40();
                    /* try { // try from 0040407a to 0040407e has its CatchHandler @ 0040409d */
  FUN_0066ec90(*(long *)(*unaff_R12 + -0x18) + (long)unaff_R12,1);
  FUN_006c2eb0();
  if (in_stack_00000038 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

