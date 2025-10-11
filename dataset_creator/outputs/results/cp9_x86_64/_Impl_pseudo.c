
/* std::locale::_Impl::_Impl(unsigned long) */

void __thiscall std::locale::_Impl::_Impl(_Impl *this,ulong param_1)

{
  undefined2 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  facet *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)this = (int)param_1;
  *(undefined8 *)(this + 0x10) = 0x30;
  *(undefined8 **)(this + 8) = &::(anonymous_namespace)::facet_vec;
  *(undefined8 **)(this + 0x18) = &::(anonymous_namespace)::cache_vec;
  puVar5 = &::(anonymous_namespace)::facet_vec;
  for (lVar4 = 0x30; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = &::(anonymous_namespace)::cache_vec;
  for (lVar4 = 0x30; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = (undefined8 *)(::(anonymous_namespace)::name_vec + 8);
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 **)(this + 0x20) = ::(anonymous_namespace)::name_vec;
  ::(anonymous_namespace)::name_vec._0_8_ = ::(anonymous_namespace)::name_c;
  puVar1 = (undefined2 *)facet::_S_get_c_name();
  ::(anonymous_namespace)::name_c._0_2_ = *puVar1;
                    /* try { // try from 00624f95 to 00624fd1 has its CatchHandler @ 00625f5a */
  ctype<char>::ctype((ctype<char> *)::(anonymous_namespace)::ctype_c,(ushort *)0x0,false,1);
  _M_install_facet(this,(id *)&ctype<char>::id,(facet *)::(anonymous_namespace)::ctype_c);
  codecvt<char,char,__mbstate_t>::codecvt
            ((codecvt<char,char,__mbstate_t> *)::(anonymous_namespace)::codecvt_c,1);
  _M_install_facet(this,(id *)&codecvt<char,char,__mbstate_t>::id,
                   (facet *)::(anonymous_namespace)::codecvt_c);
  ::(anonymous_namespace)::numpunct_cache_c._8_4_ = 1;
  ::(anonymous_namespace)::numpunct_cache_c[0x20] = 0;
  ::(anonymous_namespace)::numpunct_cache_c._0_8_ = &PTR____numpunct_cache_009276a8;
  ::(anonymous_namespace)::numpunct_cache_c._16_8_ = 0;
  ::(anonymous_namespace)::numpunct_cache_c._24_8_ = 0;
  ::(anonymous_namespace)::numpunct_cache_c._40_8_ = 0;
  ::(anonymous_namespace)::numpunct_cache_c._48_8_ = 0;
  ::(anonymous_namespace)::numpunct_cache_c._56_8_ = 0;
  ::(anonymous_namespace)::numpunct_cache_c._64_8_ = 0;
  ::(anonymous_namespace)::numpunct_cache_c._72_2_ = 0;
  ::(anonymous_namespace)::numpunct_cache_c[0x88] = 0;
  ::(anonymous_namespace)::numpunct_c._8_4_ = 1;
  ::(anonymous_namespace)::numpunct_c._0_8_ = &PTR__numpunct_009289d8;
  ::(anonymous_namespace)::numpunct_c._16_8_ = ::(anonymous_namespace)::numpunct_cache_c;
                    /* try { // try from 0062507d to 00625081 has its CatchHandler @ 00625f4b */
  __cxx11::numpunct<char>::_M_initialize_numpunct
            ((numpunct<char> *)::(anonymous_namespace)::numpunct_c,(__locale_struct *)0x0);
                    /* try { // try from 0062508f to 006250f7 has its CatchHandler @ 00625f5a */
  _M_install_facet(this,(id *)&__cxx11::numpunct<char>::id,
                   (facet *)::(anonymous_namespace)::numpunct_c);
  ::(anonymous_namespace)::num_get_c._8_4_ = 1;
  ::(anonymous_namespace)::num_get_c._0_8_ = &PTR__num_get_0092add0;
  _M_install_facet(this,(id *)&num_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>::
                               id,(facet *)::(anonymous_namespace)::num_get_c);
  ::(anonymous_namespace)::num_put_c._8_4_ = 1;
  ::(anonymous_namespace)::num_put_c._0_8_ = &PTR__num_put_0092ae48;
  _M_install_facet(this,(id *)&num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>::
                               id,(facet *)::(anonymous_namespace)::num_put_c);
  ::(anonymous_namespace)::collate_c._8_4_ = 1;
  ::(anonymous_namespace)::collate_c._0_8_ = &PTR__collate_00928968;
                    /* try { // try from 00625114 to 00625118 has its CatchHandler @ 00625f3c */
  ::(anonymous_namespace)::collate_c._16_8_ = facet::_S_get_c_locale();
                    /* try { // try from 00625131 to 00625135 has its CatchHandler @ 00625f5a */
  _M_install_facet(this,(id *)&__cxx11::collate<char>::id,
                   (facet *)::(anonymous_namespace)::collate_c);
  ::(anonymous_namespace)::moneypunct_cache_cf._32_2_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf._8_4_ = 1;
  ::(anonymous_namespace)::moneypunct_cache_cf._0_8_ = &PTR____moneypunct_cache_00927618;
  ::(anonymous_namespace)::moneypunct_cache_cf._16_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf._24_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf[0x22] = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf._40_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf._48_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf._56_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf._64_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf._72_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf._80_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf._88_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf._96_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf[0x6f] = 0;
  ::(anonymous_namespace)::moneypunct_cf._8_4_ = 1;
  ::(anonymous_namespace)::moneypunct_cf._0_8_ = &PTR__moneypunct_00928ad0;
  ::(anonymous_namespace)::moneypunct_cf._16_8_ = ::(anonymous_namespace)::moneypunct_cache_cf;
                    /* try { // try from 0062520e to 00625212 has its CatchHandler @ 00625f2d */
  __cxx11::moneypunct<char,false>::_M_initialize_moneypunct
            ((__locale_struct *)::(anonymous_namespace)::moneypunct_cf,(char *)0x0);
                    /* try { // try from 00625220 to 00625224 has its CatchHandler @ 00625f5a */
  _M_install_facet(this,(id *)&__cxx11::moneypunct<char,false>::id,
                   (facet *)::(anonymous_namespace)::moneypunct_cf);
  ::(anonymous_namespace)::moneypunct_cache_ct._8_4_ = 1;
  ::(anonymous_namespace)::moneypunct_cache_ct[0x22] = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct._0_8_ = &PTR____moneypunct_cache_009275f8;
  ::(anonymous_namespace)::moneypunct_cache_ct._32_2_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct._16_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct._24_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct._40_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct._48_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct._56_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct._64_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct._72_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct._80_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct._88_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct._96_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct[0x6f] = 0;
  ::(anonymous_namespace)::moneypunct_ct._8_4_ = 1;
  ::(anonymous_namespace)::moneypunct_ct._0_8_ = &PTR__moneypunct_00928a68;
  ::(anonymous_namespace)::moneypunct_ct._16_8_ = ::(anonymous_namespace)::moneypunct_cache_ct;
                    /* try { // try from 006252fd to 00625301 has its CatchHandler @ 00625f78 */
  __cxx11::moneypunct<char,true>::_M_initialize_moneypunct
            ((__locale_struct *)::(anonymous_namespace)::moneypunct_ct,(char *)0x0);
                    /* try { // try from 0062530f to 006256a2 has its CatchHandler @ 00625f5a */
  _M_install_facet(this,(id *)&__cxx11::moneypunct<char,true>::id,
                   (facet *)::(anonymous_namespace)::moneypunct_ct);
  ::(anonymous_namespace)::money_get_c._8_4_ = 1;
  ::(anonymous_namespace)::money_get_c._0_8_ = &PTR__money_get_00928c40;
  _M_install_facet(this,(id *)&__cxx11::
                               money_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>
                               ::id,(facet *)::(anonymous_namespace)::money_get_c);
  ::(anonymous_namespace)::money_put_c._8_4_ = 1;
  ::(anonymous_namespace)::money_put_c._0_8_ = &PTR__money_put_00928c70;
  _M_install_facet(this,(id *)&__cxx11::
                               money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>
                               ::id,(facet *)::(anonymous_namespace)::money_put_c);
  ::(anonymous_namespace)::timepunct_cache_c._8_4_ = 1;
  ::(anonymous_namespace)::timepunct_cache_c._16_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._0_8_ = &PTR____timepunct_cache_0092aea8;
  ::(anonymous_namespace)::timepunct_cache_c._24_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._32_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._40_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._48_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._56_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._64_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._72_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._80_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._88_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._96_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._104_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._112_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._120_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._128_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._136_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._144_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._152_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._160_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._168_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._176_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._184_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._192_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._200_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._208_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._216_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._224_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._232_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._240_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._248_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._256_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._264_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._272_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._280_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._288_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._296_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._304_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._312_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._320_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._328_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._336_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._344_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._352_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._360_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._368_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._376_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._384_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c[0x188] = 0;
  __timepunct<char>::__timepunct
            ((__timepunct<char> *)::(anonymous_namespace)::timepunct_c,
             (__timepunct_cache *)::(anonymous_namespace)::timepunct_cache_c,1);
  _M_install_facet(this,(id *)&__timepunct<char>::id,(facet *)::(anonymous_namespace)::timepunct_c);
  ::(anonymous_namespace)::time_get_c._8_4_ = 1;
  ::(anonymous_namespace)::time_get_c._0_8_ = &PTR__time_get_00928ca0;
  _M_install_facet(this,(id *)&__cxx11::
                               time_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>
                               ::id,(facet *)::(anonymous_namespace)::time_get_c);
  ::(anonymous_namespace)::time_put_c._8_4_ = 1;
  ::(anonymous_namespace)::time_put_c._0_8_ = &PTR__time_put_0092b1d0;
  _M_install_facet(this,(id *)&time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>
                               ::id,(facet *)::(anonymous_namespace)::time_put_c);
  __cxx11::messages<char>::messages((messages<char> *)::(anonymous_namespace)::messages_c,1);
  _M_install_facet(this,(id *)&__cxx11::messages<char>::id,
                   (facet *)::(anonymous_namespace)::messages_c);
  ctype<wchar_t>::ctype((ctype<wchar_t> *)::(anonymous_namespace)::ctype_w,1);
  _M_install_facet(this,(id *)&ctype<wchar_t>::id,(facet *)::(anonymous_namespace)::ctype_w);
  codecvt<wchar_t,char,__mbstate_t>::codecvt
            ((codecvt<wchar_t,char,__mbstate_t> *)::(anonymous_namespace)::codecvt_w,1);
  _M_install_facet(this,(id *)&codecvt<wchar_t,char,__mbstate_t>::id,
                   (facet *)::(anonymous_namespace)::codecvt_w);
  ::(anonymous_namespace)::numpunct_cache_w._8_4_ = 1;
  ::(anonymous_namespace)::numpunct_cache_w[0x20] = 0;
  ::(anonymous_namespace)::numpunct_cache_w._0_8_ = &PTR____numpunct_cache_009276c8;
  ::(anonymous_namespace)::numpunct_cache_w._16_8_ = 0;
  ::(anonymous_namespace)::numpunct_cache_w._24_8_ = 0;
  ::(anonymous_namespace)::numpunct_cache_w._40_8_ = 0;
  ::(anonymous_namespace)::numpunct_cache_w._48_8_ = 0;
  ::(anonymous_namespace)::numpunct_cache_w._56_8_ = 0;
  ::(anonymous_namespace)::numpunct_cache_w._64_8_ = 0;
  ::(anonymous_namespace)::numpunct_cache_w._72_8_ = 0;
  ::(anonymous_namespace)::numpunct_cache_w[0x148] = 0;
  ::(anonymous_namespace)::numpunct_w._8_4_ = 1;
  ::(anonymous_namespace)::numpunct_w._0_8_ = &PTR__numpunct_00929698;
  ::(anonymous_namespace)::numpunct_w._16_8_ = ::(anonymous_namespace)::numpunct_cache_w;
                    /* try { // try from 00625750 to 00625754 has its CatchHandler @ 00625f69 */
  __cxx11::numpunct<wchar_t>::_M_initialize_numpunct
            ((numpunct<wchar_t> *)::(anonymous_namespace)::numpunct_w,(__locale_struct *)0x0);
                    /* try { // try from 00625762 to 006257ca has its CatchHandler @ 00625f5a */
  _M_install_facet(this,(id *)&__cxx11::numpunct<wchar_t>::id,
                   (facet *)::(anonymous_namespace)::numpunct_w);
  ::(anonymous_namespace)::num_get_w._8_4_ = 1;
  ::(anonymous_namespace)::num_get_w._0_8_ = &PTR__num_get_0092ba10;
  _M_install_facet(this,(id *)&num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                               ::id,(facet *)::(anonymous_namespace)::num_get_w);
  ::(anonymous_namespace)::num_put_w._8_4_ = 1;
  ::(anonymous_namespace)::num_put_w._0_8_ = &PTR__num_put_0092ba88;
  _M_install_facet(this,(id *)&num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                               ::id,(facet *)::(anonymous_namespace)::num_put_w);
  ::(anonymous_namespace)::collate_w._8_4_ = 1;
  ::(anonymous_namespace)::collate_w._0_8_ = &PTR__collate_00929628;
                    /* try { // try from 006257e7 to 006257eb has its CatchHandler @ 00625f87 */
  ::(anonymous_namespace)::collate_w._16_8_ = facet::_S_get_c_locale();
                    /* try { // try from 00625804 to 00625808 has its CatchHandler @ 00625f5a */
  _M_install_facet(this,(id *)&__cxx11::collate<wchar_t>::id,
                   (facet *)::(anonymous_namespace)::collate_w);
  ::(anonymous_namespace)::moneypunct_cache_wf._8_4_ = 1;
  ::(anonymous_namespace)::moneypunct_cache_wf[0x20] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._0_8_ = &PTR____moneypunct_cache_00927658;
  ::(anonymous_namespace)::moneypunct_cache_wf._16_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._24_8_ = 0;
  ::(anonymous_namespace)::moneypunct_wf._0_8_ = &PTR__moneypunct_00929790;
  ::(anonymous_namespace)::moneypunct_cache_wf._36_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._48_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._56_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._64_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._72_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._80_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._88_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._96_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._104_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf[0x98] = 0;
  ::(anonymous_namespace)::moneypunct_wf._8_4_ = 1;
  ::(anonymous_namespace)::moneypunct_wf._16_8_ = ::(anonymous_namespace)::moneypunct_cache_wf;
                    /* try { // try from 006258e3 to 006258e7 has its CatchHandler @ 00625f1e */
  __cxx11::moneypunct<wchar_t,false>::_M_initialize_moneypunct
            ((__locale_struct *)::(anonymous_namespace)::moneypunct_wf,(char *)0x0);
                    /* try { // try from 006258f5 to 006258f9 has its CatchHandler @ 00625f5a */
  _M_install_facet(this,(id *)&__cxx11::moneypunct<wchar_t,false>::id,
                   (facet *)::(anonymous_namespace)::moneypunct_wf);
  ::(anonymous_namespace)::moneypunct_cache_wt._8_4_ = 1;
  ::(anonymous_namespace)::moneypunct_cache_wt[0x20] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._0_8_ = &PTR____moneypunct_cache_00927638;
  ::(anonymous_namespace)::moneypunct_cache_wt._16_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._24_8_ = 0;
  ::(anonymous_namespace)::moneypunct_wt._0_8_ = &PTR__moneypunct_00929728;
  ::(anonymous_namespace)::moneypunct_cache_wt._36_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._48_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._56_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._64_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._72_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._80_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._88_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._96_8_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._104_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt[0x98] = 0;
  ::(anonymous_namespace)::moneypunct_wt._8_4_ = 1;
  ::(anonymous_namespace)::moneypunct_wt._16_8_ = ::(anonymous_namespace)::moneypunct_cache_wt;
                    /* try { // try from 006259d4 to 006259d8 has its CatchHandler @ 00625f0f */
  __cxx11::moneypunct<wchar_t,true>::_M_initialize_moneypunct
            ((__locale_struct *)::(anonymous_namespace)::moneypunct_wt,(char *)0x0);
                    /* try { // try from 006259e6 to 00625e2b has its CatchHandler @ 00625f5a */
  _M_install_facet(this,(id *)&__cxx11::moneypunct<wchar_t,true>::id,
                   (facet *)::(anonymous_namespace)::moneypunct_wt);
  ::(anonymous_namespace)::money_get_w._8_4_ = 1;
  ::(anonymous_namespace)::money_get_w._0_8_ = &PTR__money_get_00929900;
  _M_install_facet(this,(id *)&__cxx11::
                               money_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                               ::id,(facet *)::(anonymous_namespace)::money_get_w);
  ::(anonymous_namespace)::money_put_w._8_4_ = 1;
  ::(anonymous_namespace)::money_put_w._0_8_ = &PTR__money_put_00929930;
  _M_install_facet(this,(id *)&__cxx11::
                               money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                               ::id,(facet *)::(anonymous_namespace)::money_put_w);
  ::(anonymous_namespace)::timepunct_cache_w._8_4_ = 1;
  ::(anonymous_namespace)::timepunct_cache_w._16_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._0_8_ = &PTR____timepunct_cache_0092bae8;
  ::(anonymous_namespace)::timepunct_cache_w._24_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._32_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._40_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._48_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._56_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._64_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._72_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._80_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._88_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._96_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._104_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._112_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._120_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._128_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._136_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._144_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._152_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._160_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._168_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._176_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._184_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._192_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._200_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._208_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._216_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._224_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._232_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._240_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._248_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._256_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._264_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._272_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._280_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._288_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._296_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._304_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._312_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._320_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._328_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._336_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._344_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._352_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._360_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._368_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._376_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._384_8_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w[0x188] = 0;
  __timepunct<wchar_t>::__timepunct
            ((__timepunct<wchar_t> *)::(anonymous_namespace)::timepunct_w,
             (__timepunct_cache *)::(anonymous_namespace)::timepunct_cache_w,1);
  _M_install_facet(this,(id *)&__timepunct<wchar_t>::id,
                   (facet *)::(anonymous_namespace)::timepunct_w);
  ::(anonymous_namespace)::time_get_w._8_4_ = 1;
  ::(anonymous_namespace)::time_get_w._0_8_ = &PTR__time_get_00929960;
  _M_install_facet(this,(id *)&__cxx11::
                               time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                               ::id,(facet *)::(anonymous_namespace)::time_get_w);
  ::(anonymous_namespace)::time_put_w._8_4_ = 1;
  ::(anonymous_namespace)::time_put_w._0_8_ = &PTR__time_put_0092be10;
  _M_install_facet(this,(id *)&time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                               ::id,(facet *)::(anonymous_namespace)::time_put_w);
  __cxx11::messages<wchar_t>::messages((messages<wchar_t> *)::(anonymous_namespace)::messages_w,1);
  _M_install_facet(this,(id *)&__cxx11::messages<wchar_t>::id,
                   (facet *)::(anonymous_namespace)::messages_w);
  ::(anonymous_namespace)::codecvt_c16._8_4_ = 1;
  ::(anonymous_namespace)::codecvt_c16._0_8_ = &PTR__codecvt_00927a70;
  _M_install_facet(this,(id *)&codecvt<char16_t,char,__mbstate_t>::id,
                   (facet *)::(anonymous_namespace)::codecvt_c16);
  ::(anonymous_namespace)::codecvt_c32._8_4_ = 1;
  ::(anonymous_namespace)::codecvt_c32._0_8_ = &PTR__codecvt_00927ac8;
  _M_install_facet(this,(id *)&codecvt<char32_t,char,__mbstate_t>::id,
                   (facet *)::(anonymous_namespace)::codecvt_c32);
  ::(anonymous_namespace)::codecvt_c16_c8._8_4_ = 1;
  ::(anonymous_namespace)::codecvt_c16_c8._0_8_ = &PTR__codecvt_00927b20;
  _M_install_facet(this,(id *)&codecvt<char16_t,char8_t,__mbstate_t>::id,
                   (facet *)::(anonymous_namespace)::codecvt_c16_c8);
  ::(anonymous_namespace)::codecvt_c32_c8._8_4_ = 1;
  ::(anonymous_namespace)::codecvt_c32_c8._0_8_ = &PTR__codecvt_00927b78;
  _M_install_facet(this,(id *)&codecvt<char32_t,char8_t,__mbstate_t>::id,
                   (facet *)::(anonymous_namespace)::codecvt_c32_c8);
  local_78 = (facet *)::(anonymous_namespace)::numpunct_cache_c;
  local_50 = ::(anonymous_namespace)::moneypunct_cache_wt;
  local_70 = ::(anonymous_namespace)::moneypunct_cache_cf;
  local_68 = ::(anonymous_namespace)::moneypunct_cache_ct;
  local_60 = ::(anonymous_namespace)::numpunct_cache_w;
  local_58 = ::(anonymous_namespace)::moneypunct_cache_wf;
  _M_init_extra(this,&local_78);
  lVar4 = *(long *)(this + 0x18);
  lVar2 = locale::id::_M_id((id *)&__cxx11::numpunct<char>::id);
  *(undefined1 **)(lVar4 + lVar2 * 8) = ::(anonymous_namespace)::numpunct_cache_c;
  lVar4 = *(long *)(this + 0x18);
  lVar2 = locale::id::_M_id((id *)&__cxx11::moneypunct<char,false>::id);
  *(undefined1 **)(lVar4 + lVar2 * 8) = ::(anonymous_namespace)::moneypunct_cache_cf;
  lVar4 = *(long *)(this + 0x18);
  lVar2 = locale::id::_M_id((id *)&__cxx11::moneypunct<char,true>::id);
  *(undefined1 **)(lVar4 + lVar2 * 8) = ::(anonymous_namespace)::moneypunct_cache_ct;
  lVar4 = *(long *)(this + 0x18);
  lVar2 = locale::id::_M_id((id *)&__timepunct<char>::id);
  *(undefined1 **)(lVar4 + lVar2 * 8) = ::(anonymous_namespace)::timepunct_cache_c;
  lVar4 = *(long *)(this + 0x18);
  lVar2 = locale::id::_M_id((id *)&__cxx11::numpunct<wchar_t>::id);
  *(undefined1 **)(lVar4 + lVar2 * 8) = ::(anonymous_namespace)::numpunct_cache_w;
  lVar4 = *(long *)(this + 0x18);
  lVar2 = locale::id::_M_id((id *)&__cxx11::moneypunct<wchar_t,false>::id);
  *(undefined1 **)(lVar4 + lVar2 * 8) = ::(anonymous_namespace)::moneypunct_cache_wf;
  lVar4 = *(long *)(this + 0x18);
  lVar3 = locale::id::_M_id((id *)&__cxx11::moneypunct<wchar_t,true>::id);
  lVar2 = *(long *)(this + 0x18);
  *(undefined1 **)(lVar4 + lVar3 * 8) = ::(anonymous_namespace)::moneypunct_cache_wt;
  lVar4 = locale::id::_M_id((id *)&__timepunct<wchar_t>::id);
  *(undefined1 **)(lVar2 + lVar4 * 8) = ::(anonymous_namespace)::timepunct_cache_w;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

