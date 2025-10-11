
/* wchar_t* std::wstring::_S_construct<wchar_t const*>(wchar_t const*, wchar_t const*,
   std::allocator<wchar_t> const&, std::forward_iterator_tag) [clone .part.0] */

wchar_t * std::wstring::_S_construct<wchar_t_const*>
                    (undefined4 *param_1,long param_2,allocator *param_3)

{
  wchar_t *pwVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar3 = param_2 - (long)param_1 >> 2;
  puVar2 = (ulong *)_Rep::_S_create(uVar3,0,param_3);
  pwVar1 = (wchar_t *)(puVar2 + 3);
  if (uVar3 == 1) {
    *(undefined4 *)(puVar2 + 3) = *param_1;
  }
  else if (uVar3 != 0) {
    __wmemcpy_chk(pwVar1,param_1,uVar3,0x3fffffffffffffff);
  }
  if (puVar2 != &_Rep::_S_empty_rep_storage) {
    *(undefined4 *)(puVar2 + 2) = 0;
    *puVar2 = uVar3;
    *(undefined4 *)((long)puVar2 + (param_2 - (long)param_1) + 0x18) = 0;
    return pwVar1;
  }
  return pwVar1;
}

