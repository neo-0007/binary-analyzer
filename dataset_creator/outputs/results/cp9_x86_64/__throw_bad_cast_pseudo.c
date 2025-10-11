
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_bad_cast() */

void std::__throw_bad_cast(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &PTR__bad_cast_0092bfd0;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&bad_cast::typeinfo,bad_cast::~bad_cast);
}

