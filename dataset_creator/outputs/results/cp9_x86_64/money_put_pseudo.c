
/* std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::money_put(unsigned long) */

void __thiscall
std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::money_put
          (money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>> *this,
          ulong param_1)

{
  *(uint *)(this + 8) = (uint)(param_1 != 0);
  *(undefined ***)this = &PTR__money_put_0092bde0;
  return;
}

