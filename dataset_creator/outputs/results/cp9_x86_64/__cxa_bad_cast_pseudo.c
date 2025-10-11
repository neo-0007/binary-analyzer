
void __cxa_bad_cast(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &PTR__bad_cast_0092bfd0;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&std::bad_cast::typeinfo,std::bad_cast::~bad_cast);
}

