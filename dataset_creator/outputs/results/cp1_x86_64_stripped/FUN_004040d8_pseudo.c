
void FUN_004040d8(void)

{
  long lVar1;
  long unaff_R12;
  long *unaff_R13;
  long in_FS_OFFSET;
  long in_stack_00000038;
  
  FUN_00625980();
  if (unaff_R12 == 1) {
    FUN_006c2e40();
    FUN_0066ec90(*(long *)(*unaff_R13 + -0x18) + (long)unaff_R13,1);
                    /* WARNING: Subroutine does not return */
    FUN_006240b0();
  }
  FUN_006c2e40();
                    /* try { // try from 004040ff to 00404103 has its CatchHandler @ 00404134 */
  FUN_0066ec90(*(long *)(*unaff_R13 + -0x18) + (long)unaff_R13,1);
  FUN_006c2eb0();
  lVar1 = *(long *)(*unaff_R13 + -0x18) + (long)unaff_R13;
  FUN_0066ec40(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  if (in_stack_00000038 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

