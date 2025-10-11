
/* std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::_M_group_int(char const*, unsigned long, wchar_t, std::ios_base&, wchar_t*, wchar_t*, int&)
   const */

void __thiscall
std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::_M_group_int
          (num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>> *this,
          char *param_1,ulong param_2,wchar_t param_3,ios_base *param_4,wchar_t *param_5,
          wchar_t *param_6,int *param_7)

{
  wchar_t *pwVar1;
  
  pwVar1 = __add_grouping<wchar_t>(param_5,param_3,param_1,param_2,param_6,param_6 + *param_7);
  *param_7 = (int)((long)pwVar1 - (long)param_5 >> 2);
  return;
}

