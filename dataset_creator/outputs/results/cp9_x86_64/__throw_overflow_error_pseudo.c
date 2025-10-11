
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_overflow_error(char const*) */

void std::__throw_overflow_error(char *param_1)

{
  overflow_error *this;
  char *pcVar1;
  
  this = (overflow_error *)__cxa_allocate_exception(0x10);
  pcVar1 = (char *)gettext(param_1);
                    /* try { // try from 00403686 to 0040368a has its CatchHandler @ 004036a1 */
  overflow_error::overflow_error(this,pcVar1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&overflow_error::typeinfo,overflow_error::~overflow_error);
}

