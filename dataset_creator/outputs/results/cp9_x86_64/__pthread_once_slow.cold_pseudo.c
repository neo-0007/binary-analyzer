
void __pthread_once_slow_cold(void)

{
  code *unaff_retaddr;
  undefined8 in_stack_00000008;
  int in_stack_00000010;
  
  if (in_stack_00000010 != 0) {
    (*unaff_retaddr)(in_stack_00000008);
    _pthread_cleanup_pop();
  }
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}

