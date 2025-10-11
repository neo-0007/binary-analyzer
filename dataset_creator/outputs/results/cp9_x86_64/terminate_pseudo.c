
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::terminate() */

void std::terminate(void)

{
  _func_void *p_Var1;
  
  p_Var1 = (_func_void *)get_terminate();
                    /* WARNING: Subroutine does not return */
  __cxxabiv1::__terminate(p_Var1);
}

