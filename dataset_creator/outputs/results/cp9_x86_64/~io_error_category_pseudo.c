
/* (anonymous namespace)::io_error_category::~io_error_category() */

void __thiscall
(anonymous_namespace)::io_error_category::~io_error_category(io_error_category *this)

{
  *(undefined ***)this = &PTR__io_error_category_0092c690;
  std::_V2::error_category::~error_category((error_category *)this);
  operator_delete(this);
  return;
}

