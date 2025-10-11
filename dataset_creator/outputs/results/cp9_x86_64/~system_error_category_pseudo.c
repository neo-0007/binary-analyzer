
/* (anonymous namespace)::system_error_category::~system_error_category() */

void __thiscall
(anonymous_namespace)::system_error_category::~system_error_category(system_error_category *this)

{
  *(undefined ***)this = &PTR__system_error_category_0092c830;
  std::_V2::error_category::~error_category((error_category *)this);
  operator_delete(this);
  return;
}

