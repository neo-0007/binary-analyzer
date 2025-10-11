
/* std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::_M_group_float(char const*, unsigned long, wchar_t, wchar_t const*, wchar_t*, wchar_t*, int&)
   const */

void __thiscall
std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::_M_group_float
          (num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>> *this,
          char *param_1,ulong param_2,wchar_t param_3,wchar_t *param_4,wchar_t *param_5,
          wchar_t *param_6,int *param_7)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  
  if (param_4 != (wchar_t *)0x0) {
    iVar3 = (int)((long)param_4 - (long)param_6 >> 2);
    pwVar1 = __add_grouping<wchar_t>(param_5,param_3,param_1,param_2,param_6,param_6 + iVar3);
    iVar2 = 0;
    if ((long)(*param_7 - iVar3) != 0) {
      __wmemcpy_chk(pwVar1,param_4,(long)(*param_7 - iVar3),0x3fffffffffffffff);
      iVar2 = *param_7 - iVar3;
    }
    *param_7 = iVar2 + (int)((long)pwVar1 - (long)param_5 >> 2);
    return;
  }
  pwVar1 = __add_grouping<wchar_t>(param_5,param_3,param_1,param_2,param_6,param_6 + *param_7);
  *param_7 = (int)((long)pwVar1 - (long)param_5 >> 2);
  return;
}

