
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_logic_error(char const*) */

void std::__throw_logic_error(char *param_1)

{
  logic_error *this;
  char *pcVar1;
  
  this = (logic_error *)__cxa_allocate_exception(0x10);
  pcVar1 = (char *)gettext(param_1);
                    /* try { // try from 004033f8 to 004033fc has its CatchHandler @ 00403413 */
  logic_error::logic_error(this,pcVar1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&logic_error::typeinfo,logic_error::~logic_error);
}

