
/* std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >::~num_get()
    */

void __thiscall
std::num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::~num_get
          (num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>> *this)

{
  *(undefined ***)this = &PTR__num_get_0092ba10;
  locale::facet::~facet((facet *)this);
  operator_delete(this);
  return;
}

