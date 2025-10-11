
void FUN_00404037(void)

{
  long in_RAX;
  undefined1 *unaff_RBX;
  long lVar1;
  long *unaff_R12;
  long unaff_R13;
  long in_FS_OFFSET;
  long in_stack_00000018;
  
  if (in_RAX == 1) {
    FUN_006c2e40();
    FUN_0066ec90(*(long *)(*unaff_R12 + -0x18) + (long)unaff_R12,1);
                    /* WARNING: Subroutine does not return */
    FUN_006240b0();
  }
  FUN_006c2e40();
  FUN_0066ec90(*(long *)(*unaff_R12 + -0x18) + (long)unaff_R12,1);
  FUN_006c2eb0();
  if (unaff_R13 < 1) {
    lVar1 = unaff_R12[1];
  }
  else {
    *unaff_RBX = 0;
    lVar1 = unaff_R12[1];
  }
  if (lVar1 == 0) {
    lVar1 = *(long *)(*unaff_R12 + -0x18) + (long)unaff_R12;
    FUN_0066ec40(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  }
  if (in_stack_00000018 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

