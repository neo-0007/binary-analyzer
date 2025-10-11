
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* bool std::has_facet<std::moneypunct<wchar_t, false> >(std::locale const&) */

bool std::has_facet<std::moneypunct<wchar_t,false>>(locale *param_1)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  
  uVar1 = locale::id::_M_id((id *)&moneypunct<wchar_t,false>::id);
  bVar3 = false;
  if ((uVar1 < *(ulong *)(*(long *)param_1 + 0x10)) &&
     (lVar2 = *(long *)(*(long *)(*(long *)param_1 + 8) + uVar1 * 8), lVar2 != 0)) {
    lVar2 = __dynamic_cast(lVar2,&locale::facet::typeinfo,&moneypunct<wchar_t,false>::typeinfo,0);
    bVar3 = lVar2 != 0;
  }
  return bVar3;
}

