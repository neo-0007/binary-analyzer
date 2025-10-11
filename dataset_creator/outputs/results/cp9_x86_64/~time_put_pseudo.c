
/* std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::~time_put() */

void __thiscall
std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::~time_put
          (time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>> *this)

{
  *(undefined ***)this = &PTR__time_put_0092be10;
  locale::facet::~facet((facet *)this);
  operator_delete(this);
  return;
}

