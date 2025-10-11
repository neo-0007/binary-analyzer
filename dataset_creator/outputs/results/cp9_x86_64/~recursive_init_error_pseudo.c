
/* __gnu_cxx::recursive_init_error::~recursive_init_error() */

void __thiscall __gnu_cxx::recursive_init_error::~recursive_init_error(recursive_init_error *this)

{
  ~recursive_init_error(this);
  operator_delete(this,8);
  return;
}

