
/* std::_V2::error_category::~error_category() */

void __thiscall std::_V2::error_category::~error_category(error_category *this)

{
  ~error_category(this);
  operator_delete(this);
  return;
}

