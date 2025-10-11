
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_bad_exception() */

void std::__throw_bad_exception(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &PTR__bad_exception_0092c118;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&bad_exception::typeinfo,bad_exception::~bad_exception);
}

