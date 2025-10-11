
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > > const&
   std::use_facet<std::__cxx11::time_get<char, std::istreambuf_iterator<char, std::char_traits<char>
   > > >(std::locale const&) */

time_get *
std::use_facet<std::__cxx11::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>>
          (locale *param_1)

{
  long lVar1;
  ulong uVar2;
  time_get *ptVar3;
  
  uVar2 = locale::id::_M_id((id *)&__cxx11::
                                   time_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>
                                   ::id);
  if ((uVar2 < *(ulong *)(*(long *)param_1 + 0x10)) &&
     (lVar1 = *(long *)(*(long *)(*(long *)param_1 + 8) + uVar2 * 8), lVar1 != 0)) {
    ptVar3 = (time_get *)
             __dynamic_cast(lVar1,&locale::facet::typeinfo,
                            &__cxx11::
                             time_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>::
                             typeinfo,0);
    if (ptVar3 != (time_get *)0x0) {
      return ptVar3;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  __throw_bad_cast();
}

