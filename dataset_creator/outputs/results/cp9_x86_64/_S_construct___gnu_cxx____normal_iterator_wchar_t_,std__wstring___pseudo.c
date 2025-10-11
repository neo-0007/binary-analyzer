
/* wchar_t* std::wstring::_S_construct<__gnu_cxx::__normal_iterator<wchar_t*, std::wstring >
   >(__gnu_cxx::__normal_iterator<wchar_t*, std::wstring >, __gnu_cxx::__normal_iterator<wchar_t*,
   std::wstring >, std::allocator<wchar_t> const&, std::forward_iterator_tag) */

wchar_t * std::wstring::_S_construct<__gnu_cxx::__normal_iterator<wchar_t*,std::wstring>>
                    (undefined4 *param_1,undefined4 *param_2,allocator *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  if (param_2 != param_1) {
    uVar2 = (long)param_2 - (long)param_1 >> 2;
    puVar1 = (ulong *)_Rep::_S_create(uVar2,0,param_3);
    if (uVar2 == 1) {
      *(undefined4 *)(puVar1 + 3) = *param_1;
    }
    else if (uVar2 != 0) {
      __wmemcpy_chk(puVar1 + 3,param_1,uVar2,0x3fffffffffffffff);
    }
    if (puVar1 != &_Rep::_S_empty_rep_storage) {
      *(undefined4 *)(puVar1 + 2) = 0;
      *puVar1 = uVar2;
      *(undefined4 *)((long)puVar1 + ((long)param_2 - (long)param_1) + 0x18) = 0;
    }
    return (wchar_t *)(puVar1 + 3);
  }
  return (wchar_t *)&DAT_00938298;
}

