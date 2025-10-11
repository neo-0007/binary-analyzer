
/* __gnu_cxx::__throw_concurrence_unlock_error() */

void __gnu_cxx::__throw_concurrence_unlock_error(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &PTR____concurrence_unlock_error_00927270;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&__concurrence_unlock_error::typeinfo,
              __concurrence_unlock_error::~__concurrence_unlock_error);
}

