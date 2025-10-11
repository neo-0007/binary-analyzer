
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::unexpected() */

void std::unexpected(void)

{
  _func_void *p_Var1;
  
  p_Var1 = (_func_void *)get_unexpected();
                    /* WARNING: Subroutine does not return */
  __cxxabiv1::__unexpected(p_Var1);
}

