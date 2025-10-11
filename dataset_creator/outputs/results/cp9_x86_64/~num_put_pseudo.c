
/* std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >::~num_put()
    */

void __thiscall
std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::~num_put
          (num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>> *this)

{
  *(undefined ***)this = &PTR__num_put_0092ba88;
  locale::facet::~facet((facet *)this);
  operator_delete(this);
  return;
}

