
/* std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::num_put(unsigned long) */

void __thiscall
std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::num_put
          (num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>> *this,
          ulong param_1)

{
  *(uint *)(this + 8) = (uint)(param_1 != 0);
  *(undefined ***)this = &PTR__num_put_0092ba88;
  return;
}

