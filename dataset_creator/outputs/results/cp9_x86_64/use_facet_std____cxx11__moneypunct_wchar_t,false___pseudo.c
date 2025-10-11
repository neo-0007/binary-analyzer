
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::moneypunct<wchar_t, false> const& std::use_facet<std::__cxx11::moneypunct<wchar_t,
   false> >(std::locale const&) */

moneypunct * std::use_facet<std::__cxx11::moneypunct<wchar_t,false>>(locale *param_1)

{
  long lVar1;
  ulong uVar2;
  moneypunct *pmVar3;
  
  uVar2 = locale::id::_M_id((id *)&__cxx11::moneypunct<wchar_t,false>::id);
  if ((uVar2 < *(ulong *)(*(long *)param_1 + 0x10)) &&
     (lVar1 = *(long *)(*(long *)(*(long *)param_1 + 8) + uVar2 * 8), lVar1 != 0)) {
    pmVar3 = (moneypunct *)
             __dynamic_cast(lVar1,&locale::facet::typeinfo,
                            &__cxx11::moneypunct<wchar_t,false>::typeinfo,0);
    if (pmVar3 != (moneypunct *)0x0) {
      return pmVar3;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  __throw_bad_cast();
}

