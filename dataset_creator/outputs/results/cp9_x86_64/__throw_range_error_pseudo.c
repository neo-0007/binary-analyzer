
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_range_error(char const*) */

void std::__throw_range_error(char *param_1)

{
  range_error *this;
  char *pcVar1;
  
  this = (range_error *)__cxa_allocate_exception(0x10);
  pcVar1 = (char *)gettext(param_1);
                    /* try { // try from 0040362e to 00403632 has its CatchHandler @ 00403649 */
  range_error::range_error(this,pcVar1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&range_error::typeinfo,range_error::~range_error);
}

