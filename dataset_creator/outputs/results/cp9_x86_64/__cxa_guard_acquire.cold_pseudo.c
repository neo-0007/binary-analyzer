
void __cxa_guard_acquire_cold(void)

{
  recursive_init_error *this;
  
  this = (recursive_init_error *)__cxa_allocate_exception(8);
  __gnu_cxx::recursive_init_error::recursive_init_error(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&__gnu_cxx::recursive_init_error::typeinfo,
              __gnu_cxx::recursive_init_error::~recursive_init_error);
}

