
/* std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::~money_put() */

void __thiscall
std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::~money_put
          (money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>> *this)

{
  *(undefined ***)this = &PTR__money_put_0092bde0;
  locale::facet::~facet((facet *)this);
  operator_delete(this);
  return;
}

