
/* std::collate_byname<wchar_t>::~collate_byname() */

void __thiscall std::collate_byname<wchar_t>::~collate_byname(collate_byname<wchar_t> *this)

{
  *(undefined ***)this = &PTR__collate_0092b890;
  locale::facet::_S_destroy_c_locale((__locale_struct **)(this + 0x10));
  locale::facet::~facet((facet *)this);
  operator_delete(this);
  return;
}

