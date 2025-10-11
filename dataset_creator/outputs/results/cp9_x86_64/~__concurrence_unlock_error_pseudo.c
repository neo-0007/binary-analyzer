
/* __gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error() */

void __thiscall
__gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error(__concurrence_unlock_error *this)

{
  *(undefined ***)this = &PTR____concurrence_unlock_error_00927270;
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}

