
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_invalid_argument(char const*) */

void std::__throw_invalid_argument(char *param_1)

{
  invalid_argument *this;
  char *pcVar1;
  
  this = (invalid_argument *)__cxa_allocate_exception(0x10);
  pcVar1 = (char *)gettext(param_1);
                    /* try { // try from 004034a8 to 004034ac has its CatchHandler @ 004034c3 */
  invalid_argument::invalid_argument(this,pcVar1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&invalid_argument::typeinfo,invalid_argument::~invalid_argument);
}

