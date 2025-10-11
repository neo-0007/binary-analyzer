
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_underflow_error(char const*) */

void std::__throw_underflow_error(char *param_1)

{
  underflow_error *this;
  char *pcVar1;
  
  this = (underflow_error *)__cxa_allocate_exception(0x10);
  pcVar1 = (char *)gettext(param_1);
                    /* try { // try from 004036de to 004036e2 has its CatchHandler @ 004036f9 */
  underflow_error::underflow_error(this,pcVar1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&underflow_error::typeinfo,underflow_error::~underflow_error);
}

