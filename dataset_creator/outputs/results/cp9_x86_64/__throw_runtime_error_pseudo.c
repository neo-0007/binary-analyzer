
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_runtime_error(char const*) */

void std::__throw_runtime_error(char *param_1)

{
  runtime_error *this;
  char *pcVar1;
  
  this = (runtime_error *)__cxa_allocate_exception(0x10);
  pcVar1 = (char *)gettext(param_1);
                    /* try { // try from 004035d6 to 004035da has its CatchHandler @ 004035f1 */
  runtime_error::runtime_error(this,pcVar1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&runtime_error::typeinfo,runtime_error::~runtime_error);
}

