
/* std::wstring::_Rep::_M_clone(std::allocator<wchar_t> const&, unsigned long) */

long * __thiscall std::wstring::_Rep::_M_clone(_Rep *this,allocator *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)_S_create(*(long *)this + param_2,*(ulong *)(this + 8),param_1);
  lVar2 = *(long *)this;
  plVar1 = plVar3 + 3;
  if (lVar2 != 0) {
    if (lVar2 == 1) {
      *(undefined4 *)(plVar3 + 3) = *(undefined4 *)(this + 0x18);
    }
    else {
      __wmemcpy_chk(plVar1,this + 0x18,lVar2,0x3fffffffffffffff);
      lVar2 = *(long *)this;
    }
  }
  if (plVar3 != &_S_empty_rep_storage) {
    *(undefined4 *)(plVar3 + 2) = 0;
    *plVar3 = lVar2;
    *(undefined4 *)((long)plVar3 + lVar2 * 4 + 0x18) = 0;
    return plVar1;
  }
  return plVar1;
}

