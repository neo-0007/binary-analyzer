
void __cxa_call_terminate(long *param_1)

{
  if (param_1 != (long *)0x0) {
    __cxa_begin_catch();
    if (*param_1 + 0xb8b1aabcbcd4d500U < 2) {
                    /* WARNING: Subroutine does not return */
      __cxxabiv1::__terminate((_func_void *)param_1[-7]);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}

