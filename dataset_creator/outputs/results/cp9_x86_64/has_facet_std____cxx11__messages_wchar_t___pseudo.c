
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* bool std::has_facet<std::__cxx11::messages<wchar_t> >(std::locale const&) */

bool std::has_facet<std::__cxx11::messages<wchar_t>>(locale *param_1)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  
  uVar1 = locale::id::_M_id((id *)&__cxx11::messages<wchar_t>::id);
  bVar3 = false;
  if ((uVar1 < *(ulong *)(*(long *)param_1 + 0x10)) &&
     (lVar2 = *(long *)(*(long *)(*(long *)param_1 + 8) + uVar1 * 8), lVar2 != 0)) {
    lVar2 = __dynamic_cast(lVar2,&locale::facet::typeinfo,&__cxx11::messages<wchar_t>::typeinfo,0);
    bVar3 = lVar2 != 0;
  }
  return bVar3;
}

