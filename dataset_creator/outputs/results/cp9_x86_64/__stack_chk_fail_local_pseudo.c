
void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __fortify_fail("stack smashing detected");
}

