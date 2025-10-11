
void __cxa_call_unexpected(long param_1)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006accf0 to 006accf4 has its CatchHandler @ 006accf5 */
  __cxxabiv1::__unexpected(*(_func_void **)(param_1 + -0x40));
}

