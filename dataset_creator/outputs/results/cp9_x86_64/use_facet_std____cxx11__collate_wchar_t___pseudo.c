
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::collate<wchar_t> const& std::use_facet<std::__cxx11::collate<wchar_t> >(std::locale
   const&) */

collate * std::use_facet<std::__cxx11::collate<wchar_t>>(locale *param_1)

{
  long lVar1;
  ulong uVar2;
  collate *pcVar3;
  
  uVar2 = locale::id::_M_id((id *)&__cxx11::collate<wchar_t>::id);
  if ((uVar2 < *(ulong *)(*(long *)param_1 + 0x10)) &&
     (lVar1 = *(long *)(*(long *)(*(long *)param_1 + 8) + uVar2 * 8), lVar1 != 0)) {
    pcVar3 = (collate *)
             __dynamic_cast(lVar1,&locale::facet::typeinfo,&__cxx11::collate<wchar_t>::typeinfo,0);
    if (pcVar3 != (collate *)0x0) {
      return pcVar3;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  __throw_bad_cast();
}

