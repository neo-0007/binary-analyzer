
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::messages<char> const& std::use_facet<std::__cxx11::messages<char> >(std::locale
   const&) */

messages * std::use_facet<std::__cxx11::messages<char>>(locale *param_1)

{
  long lVar1;
  ulong uVar2;
  messages *pmVar3;
  
  uVar2 = locale::id::_M_id((id *)&__cxx11::messages<char>::id);
  if ((uVar2 < *(ulong *)(*(long *)param_1 + 0x10)) &&
     (lVar1 = *(long *)(*(long *)(*(long *)param_1 + 8) + uVar2 * 8), lVar1 != 0)) {
    pmVar3 = (messages *)
             __dynamic_cast(lVar1,&locale::facet::typeinfo,&__cxx11::messages<char>::typeinfo,0);
    if (pmVar3 != (messages *)0x0) {
      return pmVar3;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  __throw_bad_cast();
}

