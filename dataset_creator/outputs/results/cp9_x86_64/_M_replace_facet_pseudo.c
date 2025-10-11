
/* std::locale::_Impl::_M_replace_facet(std::locale::_Impl const*, std::locale::id const*) */

void __thiscall std::locale::_Impl::_M_replace_facet(_Impl *this,_Impl *param_1,id *param_2)

{
  facet *pfVar1;
  ulong uVar2;
  
  uVar2 = locale::id::_M_id(param_2);
  if ((uVar2 <= *(long *)(param_1 + 0x10) - 1U) &&
     (pfVar1 = *(facet **)(*(long *)(param_1 + 8) + uVar2 * 8), pfVar1 != (facet *)0x0)) {
    _M_install_facet(this,param_2,pfVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_runtime_error("locale::_Impl::_M_replace_facet");
}

