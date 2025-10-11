
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > > const&
   std::use_facet<std::time_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t>
   > > >(std::locale const&) */

time_put *
std::use_facet<std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>>
          (locale *param_1)

{
  long lVar1;
  ulong uVar2;
  time_put *ptVar3;
  
  uVar2 = locale::id::_M_id((id *)&time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                                   ::id);
  if ((uVar2 < *(ulong *)(*(long *)param_1 + 0x10)) &&
     (lVar1 = *(long *)(*(long *)(*(long *)param_1 + 8) + uVar2 * 8), lVar1 != 0)) {
    ptVar3 = (time_put *)
             __dynamic_cast(lVar1,&locale::facet::typeinfo,
                            &time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                             ::typeinfo,0);
    if (ptVar3 != (time_put *)0x0) {
      return ptVar3;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  __throw_bad_cast();
}

