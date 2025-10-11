
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_bad_array_new_length() */

void std::__throw_bad_array_new_length(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &PTR__bad_array_new_length_0092bf90;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&bad_array_new_length::typeinfo,bad_array_new_length::~bad_array_new_length);
}

