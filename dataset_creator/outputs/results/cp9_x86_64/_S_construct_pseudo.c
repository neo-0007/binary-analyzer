
/* std::wstring::_S_construct(unsigned long, wchar_t, std::allocator<wchar_t> const&) */

ulong * std::wstring::_S_construct(ulong param_1,wchar_t param_2,allocator *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  
  if (param_1 == 0) {
    puVar2 = (ulong *)&DAT_00938298;
  }
  else {
    puVar1 = (ulong *)_Rep::_S_create(param_1,0,param_3);
    puVar2 = puVar1 + 3;
    if (param_1 == 1) {
      *(wchar_t *)(puVar1 + 3) = param_2;
    }
    else {
      __wmemset_chk(puVar2,param_2,param_1,0x3fffffffffffffff);
    }
    if (puVar1 != &_Rep::_S_empty_rep_storage) {
      *(undefined4 *)(puVar1 + 2) = 0;
      *puVar1 = param_1;
      *(undefined4 *)((long)puVar1 + param_1 * 4 + 0x18) = 0;
    }
  }
  return puVar2;
}

