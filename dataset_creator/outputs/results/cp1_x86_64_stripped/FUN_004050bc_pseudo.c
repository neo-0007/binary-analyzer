
void FUN_004050bc(void)

{
  code *unaff_retaddr;
  undefined8 in_stack_00000008;
  int in_stack_00000010;
  
  if (in_stack_00000010 != 0) {
    (*unaff_retaddr)(in_stack_00000008);
    FUN_007a27e0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_006cd5c0();
}

