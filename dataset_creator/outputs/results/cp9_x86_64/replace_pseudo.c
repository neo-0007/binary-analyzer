
/* std::__cxx11::wstring::replace(__gnu_cxx::__normal_iterator<wchar_t*, std::__cxx11::wstring >,
   __gnu_cxx::__normal_iterator<wchar_t*, std::__cxx11::wstring >,
   __gnu_cxx::__normal_iterator<wchar_t const*, std::__cxx11::wstring >,
   __gnu_cxx::__normal_iterator<wchar_t const*, std::__cxx11::wstring >) */

void __thiscall
std::__cxx11::wstring::replace
          (wstring *this,long param_2,long param_3,wchar_t *param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(ulong *)(this + 8);
  uVar4 = param_2 - *(long *)this >> 2;
  uVar5 = param_5 - (long)param_4 >> 2;
  uVar3 = param_3 - param_2 >> 2;
  uVar2 = uVar1 - uVar4;
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  if (uVar4 <= uVar1) {
    _M_replace(this,uVar4,uVar3,param_4,uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_out_of_range_fmt
            ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",uVar4,
             uVar1,uVar5,uVar1,uVar2);
}

