
/* std::__iosfail_type_info::~__iosfail_type_info() */

void __thiscall std::__iosfail_type_info::~__iosfail_type_info(__iosfail_type_info *this)

{
  ~__iosfail_type_info(this);
  operator_delete(this);
  return;
}

