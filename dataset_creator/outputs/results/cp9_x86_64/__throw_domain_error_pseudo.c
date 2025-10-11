
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_domain_error(char const*) */

void std::__throw_domain_error(char *param_1)

{
  domain_error *this;
  char *pcVar1;
  
  this = (domain_error *)__cxa_allocate_exception(0x10);
  pcVar1 = (char *)gettext(param_1);
                    /* try { // try from 00403450 to 00403454 has its CatchHandler @ 0040346b */
  domain_error::domain_error(this,pcVar1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&domain_error::typeinfo,domain_error::~domain_error);
}

