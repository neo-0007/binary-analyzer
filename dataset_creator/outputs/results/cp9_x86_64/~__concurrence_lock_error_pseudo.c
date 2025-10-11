
/* __gnu_cxx::__concurrence_lock_error::~__concurrence_lock_error() */

void __thiscall
__gnu_cxx::__concurrence_lock_error::~__concurrence_lock_error(__concurrence_lock_error *this)

{
  *(undefined ***)this = &PTR____concurrence_lock_error_00927248;
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}

