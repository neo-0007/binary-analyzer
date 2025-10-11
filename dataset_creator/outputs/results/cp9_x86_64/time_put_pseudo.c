
/* std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::time_put(unsigned long) */

void __thiscall
std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::time_put
          (time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>> *this,
          ulong param_1)

{
  *(uint *)(this + 8) = (uint)(param_1 != 0);
  *(undefined ***)this = &PTR__time_put_0092be10;
  return;
}

