
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_length_error(char const*) */

void std::__throw_length_error(char *param_1)

{
  length_error *this;
  char *pcVar1;
  
  this = (length_error *)__cxa_allocate_exception(0x10);
  pcVar1 = (char *)gettext(param_1);
                    /* try { // try from 00403500 to 00403504 has its CatchHandler @ 0040351b */
  length_error::length_error(this,pcVar1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&length_error::typeinfo,length_error::~length_error);
}

