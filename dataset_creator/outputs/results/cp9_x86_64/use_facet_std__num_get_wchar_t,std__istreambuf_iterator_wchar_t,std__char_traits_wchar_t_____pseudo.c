
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > > const&
   std::use_facet<std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t>
   > > >(std::locale const&) */

num_get * std::
          use_facet<std::num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>>
                    (locale *param_1)

{
  long lVar1;
  ulong uVar2;
  num_get *pnVar3;
  
  uVar2 = locale::id::_M_id((id *)&num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                                   ::id);
  if ((uVar2 < *(ulong *)(*(long *)param_1 + 0x10)) &&
     (lVar1 = *(long *)(*(long *)(*(long *)param_1 + 8) + uVar2 * 8), lVar1 != 0)) {
    pnVar3 = (num_get *)
             __dynamic_cast(lVar1,&locale::facet::typeinfo,
                            &num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                             ::typeinfo,0);
    if (pnVar3 != (num_get *)0x0) {
      return pnVar3;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  __throw_bad_cast();
}

