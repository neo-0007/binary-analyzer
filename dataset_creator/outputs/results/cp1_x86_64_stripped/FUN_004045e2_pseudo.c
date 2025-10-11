
void FUN_004045e2(void)

{
  long in_RAX;
  long *unaff_R12;
  long in_FS_OFFSET;
  long in_stack_00000008;
  
  if (in_RAX == 1) {
    FUN_006c2e40();
                    /* try { // try from 004045fd to 00404606 has its CatchHandler @ 0040462b */
    FUN_0066f730(*(long *)(*unaff_R12 + -0x18) + (long)unaff_R12,1);
                    /* WARNING: Subroutine does not return */
    FUN_006240b0();
  }
  FUN_006c2e40();
                    /* try { // try from 0040461c to 00404620 has its CatchHandler @ 0040463f */
  FUN_0066f730(*(long *)(*unaff_R12 + -0x18) + (long)unaff_R12,1);
  FUN_006c2eb0();
  if (in_stack_00000008 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

