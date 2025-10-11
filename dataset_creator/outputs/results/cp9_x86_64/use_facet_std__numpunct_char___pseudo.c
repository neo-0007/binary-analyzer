
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::numpunct<char> const& std::use_facet<std::numpunct<char> >(std::locale const&) */

numpunct * std::use_facet<std::numpunct<char>>(locale *param_1)

{
  long lVar1;
  ulong uVar2;
  numpunct *pnVar3;
  
  uVar2 = locale::id::_M_id((id *)&numpunct<char>::id);
  if ((uVar2 < *(ulong *)(*(long *)param_1 + 0x10)) &&
     (lVar1 = *(long *)(*(long *)(*(long *)param_1 + 8) + uVar2 * 8), lVar1 != 0)) {
    pnVar3 = (numpunct *)__dynamic_cast(lVar1,&locale::facet::typeinfo,&numpunct<char>::typeinfo,0);
    if (pnVar3 != (numpunct *)0x0) {
      return pnVar3;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  __throw_bad_cast();
}

