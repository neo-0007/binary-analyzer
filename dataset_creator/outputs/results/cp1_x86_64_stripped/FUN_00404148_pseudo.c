
void FUN_00404148(void)

{
  long in_RAX;
  undefined4 *unaff_RBX;
  long lVar1;
  long *unaff_R12;
  long unaff_R13;
  long in_FS_OFFSET;
  long in_stack_00000028;
  
  if (in_RAX == 1) {
    FUN_006c2e40();
                    /* try { // try from 00404168 to 00404171 has its CatchHandler @ 004041bc */
    FUN_0066f730(*(long *)(*unaff_R12 + -0x18) + (long)unaff_R12,1);
                    /* WARNING: Subroutine does not return */
    FUN_006240b0();
  }
  FUN_006c2e40();
                    /* try { // try from 00404187 to 0040418b has its CatchHandler @ 004041d0 */
  FUN_0066f730(*(long *)(*unaff_R12 + -0x18) + (long)unaff_R12,1);
  FUN_006c2eb0();
  if (unaff_R13 < 1) {
    lVar1 = unaff_R12[1];
  }
  else {
    lVar1 = unaff_R12[1];
    *unaff_RBX = 0;
  }
  if (lVar1 == 0) {
    lVar1 = *(long *)(*unaff_R12 + -0x18) + (long)unaff_R12;
    FUN_0066f6e0(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  }
  if (in_stack_00000028 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

