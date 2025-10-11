
/* std::__cxx11::wstring::erase(__gnu_cxx::__normal_iterator<wchar_t*, std::__cxx11::wstring >,
   __gnu_cxx::__normal_iterator<wchar_t*, std::__cxx11::wstring >) */

undefined4 * __thiscall std::__cxx11::wstring::erase(wstring *this,undefined4 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = (long)param_2 - *(long *)this;
  uVar2 = lVar1 >> 2;
  if (param_3 != *(long *)this + *(long *)(this + 8) * 4) {
    _M_erase(this,uVar2,param_3 - (long)param_2 >> 2);
    return (undefined4 *)(*(long *)this + lVar1);
  }
  *(ulong *)(this + 8) = uVar2;
  *param_2 = 0;
  return param_2;
}

