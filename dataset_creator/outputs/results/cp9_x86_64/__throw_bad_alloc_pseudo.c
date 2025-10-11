
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_bad_alloc() */

void std::__throw_bad_alloc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &PTR__bad_alloc_0092bf50;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&bad_alloc::typeinfo,bad_alloc::~bad_alloc);
}

