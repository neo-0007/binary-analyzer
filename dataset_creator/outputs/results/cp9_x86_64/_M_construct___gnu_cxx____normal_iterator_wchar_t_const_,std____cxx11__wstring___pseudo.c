
/* void std::__cxx11::wstring::_M_construct<__gnu_cxx::__normal_iterator<wchar_t const*,
   std::__cxx11::wstring > >(__gnu_cxx::__normal_iterator<wchar_t const*, std::__cxx11::wstring >,
   __gnu_cxx::__normal_iterator<wchar_t const*, std::__cxx11::wstring >, std::forward_iterator_tag)
    */

void std::__cxx11::wstring::
     _M_construct<__gnu_cxx::__normal_iterator<wchar_t_const*,std::__cxx11::wstring>>
               (wstring *param_1,undefined4 *param_2,long param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  uVar2 = param_3 - (long)param_2 >> 2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = uVar2;
  if ((ulong)(param_3 - (long)param_2) < 0xd) {
    puVar1 = *(undefined4 **)param_1;
  }
  else {
    puVar1 = (undefined4 *)_M_create(param_1,&local_28,0);
    *(undefined4 **)param_1 = puVar1;
    *(ulong *)(param_1 + 0x10) = local_28;
  }
  if (uVar2 == 1) {
    *puVar1 = *param_2;
  }
  else if (uVar2 != 0) {
    __wmemcpy_chk(puVar1,param_2,uVar2,0x3fffffffffffffff);
    puVar1 = *(undefined4 **)param_1;
  }
  *(ulong *)(param_1 + 8) = local_28;
  puVar1[local_28] = 0;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

