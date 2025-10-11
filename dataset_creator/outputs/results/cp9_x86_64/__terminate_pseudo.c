
/* __cxxabiv1::__terminate(void (*)()) */

void __cxxabiv1::__terminate(_func_void *param_1)

{
                    /* try { // try from 006acd1a to 006acd1b has its CatchHandler @ 006acd21 */
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  abort();
}

