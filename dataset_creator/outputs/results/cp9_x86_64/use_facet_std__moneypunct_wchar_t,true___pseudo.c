
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::moneypunct<wchar_t, true> const& std::use_facet<std::moneypunct<wchar_t, true> >(std::locale
   const&) */

moneypunct * std::use_facet<std::moneypunct<wchar_t,true>>(locale *param_1)

{
  long lVar1;
  ulong uVar2;
  moneypunct *pmVar3;
  
  uVar2 = locale::id::_M_id((id *)&moneypunct<wchar_t,true>::id);
  if ((uVar2 < *(ulong *)(*(long *)param_1 + 0x10)) &&
     (lVar1 = *(long *)(*(long *)(*(long *)param_1 + 8) + uVar2 * 8), lVar1 != 0)) {
    pmVar3 = (moneypunct *)
             __dynamic_cast(lVar1,&locale::facet::typeinfo,&moneypunct<wchar_t,true>::typeinfo,0);
    if (pmVar3 != (moneypunct *)0x0) {
      return pmVar3;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  __throw_bad_cast();
}

