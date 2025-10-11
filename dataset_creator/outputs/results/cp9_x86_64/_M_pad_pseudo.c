
/* std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::_M_pad(wchar_t, long, std::ios_base&, wchar_t*, wchar_t const*, int&) const */

void __thiscall
std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::_M_pad
          (num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>> *this,
          wchar_t param_1,long param_2,ios_base *param_3,wchar_t *param_4,wchar_t *param_5,
          int *param_6)

{
  __pad<wchar_t,std::char_traits<wchar_t>>::_S_pad
            (param_3,param_1,param_4,param_5,param_2,(long)*param_6);
  *param_6 = (int)param_2;
  return;
}

