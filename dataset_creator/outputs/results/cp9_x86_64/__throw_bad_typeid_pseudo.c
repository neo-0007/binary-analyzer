
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_bad_typeid() */

void std::__throw_bad_typeid(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &PTR__bad_typeid_0092c010;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&bad_typeid::typeinfo,bad_typeid::~bad_typeid);
}

