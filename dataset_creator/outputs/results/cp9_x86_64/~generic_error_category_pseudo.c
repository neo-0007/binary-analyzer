
/* (anonymous namespace)::generic_error_category::~generic_error_category() */

void __thiscall
(anonymous_namespace)::generic_error_category::~generic_error_category(generic_error_category *this)

{
  *(undefined ***)this = &PTR__generic_error_category_0092c7e0;
  std::_V2::error_category::~error_category((error_category *)this);
  operator_delete(this);
  return;
}

