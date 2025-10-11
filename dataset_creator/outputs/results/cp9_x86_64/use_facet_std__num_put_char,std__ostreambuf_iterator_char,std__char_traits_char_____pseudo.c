
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > > const&
   std::use_facet<std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
   >(std::locale const&) */

num_put * std::use_facet<std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>>
                    (locale *param_1)

{
  long lVar1;
  ulong uVar2;
  num_put *pnVar3;
  
  uVar2 = locale::id::_M_id((id *)&num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>
                                   ::id);
  if ((uVar2 < *(ulong *)(*(long *)param_1 + 0x10)) &&
     (lVar1 = *(long *)(*(long *)(*(long *)param_1 + 8) + uVar2 * 8), lVar1 != 0)) {
    pnVar3 = (num_put *)
             __dynamic_cast(lVar1,&locale::facet::typeinfo,
                            &num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>::
                             typeinfo,0);
    if (pnVar3 != (num_put *)0x0) {
      return pnVar3;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  __throw_bad_cast();
}

