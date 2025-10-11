
/* std::system_error::~system_error() */

void __thiscall std::system_error::~system_error(system_error *this)

{
  ~system_error(this);
  operator_delete(this);
  return;
}

