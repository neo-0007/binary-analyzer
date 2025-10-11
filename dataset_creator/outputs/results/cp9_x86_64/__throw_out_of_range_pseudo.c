
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_out_of_range(char const*) */

void std::__throw_out_of_range(char *param_1)

{
  out_of_range *this;
  char *pcVar1;
  
  this = (out_of_range *)__cxa_allocate_exception(0x10);
  pcVar1 = (char *)gettext(param_1);
                    /* try { // try from 00403558 to 0040355c has its CatchHandler @ 00403573 */
  out_of_range::out_of_range(this,pcVar1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&out_of_range::typeinfo,out_of_range::~out_of_range);
}

