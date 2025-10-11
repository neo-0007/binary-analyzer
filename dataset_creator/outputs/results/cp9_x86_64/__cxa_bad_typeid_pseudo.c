
void __cxa_bad_typeid(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &PTR__bad_typeid_0092c010;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&std::bad_typeid::typeinfo,std::bad_typeid::~bad_typeid);
}

