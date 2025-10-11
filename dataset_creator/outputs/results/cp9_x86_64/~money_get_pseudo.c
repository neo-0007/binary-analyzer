
/* std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::~money_get() */

void __thiscall
std::money_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::~money_get
          (money_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>> *this)

{
  *(undefined ***)this = &PTR__money_get_0092bdb0;
  locale::facet::~facet((facet *)this);
  operator_delete(this);
  return;
}

