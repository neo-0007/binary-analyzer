
void FUN_004041f8(void)

{
  long in_RAX;
  long *unaff_R12;
  long in_FS_OFFSET;
  long in_stack_00000038;
  
  if (in_RAX == 1) {
    FUN_006c2e40();
                    /* try { // try from 00404213 to 0040421c has its CatchHandler @ 00404241 */
    FUN_0066f730(*(long *)(*unaff_R12 + -0x18) + (long)unaff_R12,1);
                    /* WARNING: Subroutine does not return */
    FUN_006240b0();
  }
  FUN_006c2e40();
                    /* try { // try from 00404232 to 00404236 has its CatchHandler @ 00404255 */
  FUN_0066f730(*(long *)(*unaff_R12 + -0x18) + (long)unaff_R12,1);
  FUN_006c2eb0();
  if (in_stack_00000038 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

