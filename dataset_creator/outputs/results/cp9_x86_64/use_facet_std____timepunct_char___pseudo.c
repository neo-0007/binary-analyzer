
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__timepunct<char> const& std::use_facet<std::__timepunct<char> >(std::locale const&) */

__timepunct * std::use_facet<std::__timepunct<char>>(locale *param_1)

{
  long lVar1;
  ulong uVar2;
  __timepunct *p_Var3;
  
  uVar2 = locale::id::_M_id((id *)&__timepunct<char>::id);
  if ((uVar2 < *(ulong *)(*(long *)param_1 + 0x10)) &&
     (lVar1 = *(long *)(*(long *)(*(long *)param_1 + 8) + uVar2 * 8), lVar1 != 0)) {
    p_Var3 = (__timepunct *)
             __dynamic_cast(lVar1,&locale::facet::typeinfo,&__timepunct<char>::typeinfo,0);
    if (p_Var3 != (__timepunct *)0x0) {
      return p_Var3;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  __throw_bad_cast();
}

