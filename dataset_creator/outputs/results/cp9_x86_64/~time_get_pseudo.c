
/* std::time_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::~time_get() */

void __thiscall
std::time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::~time_get
          (time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>> *this)

{
  *(undefined ***)this = &PTR__time_get_0092be60;
  locale::facet::~facet((facet *)this);
  operator_delete(this);
  return;
}

