
/* std::locale::_Impl::_M_replace_category(std::locale::_Impl const*, std::locale::id const* const*)
    */

void __thiscall std::locale::_Impl::_M_replace_category(_Impl *this,_Impl *param_1,id **param_2)

{
  id *piVar1;
  
  piVar1 = *param_2;
  while (piVar1 != (id *)0x0) {
    param_2 = param_2 + 1;
    _M_replace_facet(this,param_1,piVar1);
    piVar1 = *param_2;
  }
  return;
}

