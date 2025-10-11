
/* std::locale::facet::_M_sso_shim(std::locale::id const*) const */

__locale_struct * __thiscall std::locale::facet::_M_sso_shim(facet *this,id *param_1)

{
  undefined8 *puVar1;
  __locale_struct *this_00;
  __locale_data *p_Var2;
  
  puVar1 = (undefined8 *)__dynamic_cast(this,&typeinfo,&__shim::typeinfo);
  if (puVar1 == (undefined8 *)0x0) {
    if (param_1 == (id *)&__cxx11::numpunct<char>::id) {
      p_Var2 = (__locale_data *)operator_new(0x90);
      *(undefined4 *)(p_Var2 + 8) = 0;
      *(undefined8 *)(p_Var2 + 0x10) = 0;
      *(undefined8 *)(p_Var2 + 0x18) = 0;
      *(undefined ***)p_Var2 = &PTR____numpunct_cache_009276a8;
      p_Var2[0x20] = (__locale_data)0x0;
      *(undefined8 *)(p_Var2 + 0x28) = 0;
      *(undefined8 *)(p_Var2 + 0x30) = 0;
      *(undefined8 *)(p_Var2 + 0x38) = 0;
      *(undefined8 *)(p_Var2 + 0x40) = 0;
      *(undefined2 *)(p_Var2 + 0x48) = 0;
      p_Var2[0x88] = (__locale_data)0x0;
      this_00 = (__locale_struct *)operator_new(0x28);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[2] = p_Var2;
      this_00->__locales[0] = (__locale_data *)&PTR__numpunct_009289d8;
                    /* try { // try from 0064fa54 to 0064fa58 has its CatchHandler @ 00650360 */
      __cxx11::numpunct<char>::_M_initialize_numpunct
                ((numpunct<char> *)this_00,(__locale_struct *)0x0);
      this_00->__locales[3] = (__locale_data *)this;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[4] = p_Var2;
      this_00->__locales[0] = (__locale_data *)&PTR__numpunct_shim_00929108;
                    /* try { // try from 0064fa84 to 0064fa88 has its CatchHandler @ 006502f4 */
      __facet_shims::__numpunct_fill_cache<char>(this,p_Var2);
    }
    else if (param_1 == (id *)&__cxx11::collate<char>::id) {
      this_00 = (__locale_struct *)operator_new(0x20);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[0] = (__locale_data *)&PTR__collate_00928968;
                    /* try { // try from 0064fb63 to 0064fb67 has its CatchHandler @ 00650348 */
      p_Var2 = (__locale_data *)_S_get_c_locale();
      this_00->__locales[2] = p_Var2;
      this_00->__locales[3] = (__locale_data *)this;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[0] = (__locale_data *)&PTR__collate_shim_00929150;
    }
    else if (param_1 ==
             (id *)&__cxx11::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>::
                    id) {
      this_00 = (__locale_struct *)operator_new(0x18);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[2] = (__locale_data *)this;
      this_00->__locales[0] = (__locale_data *)&PTR__time_get_00928ca0;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[0] = (__locale_data *)&PTR__time_get_shim_009293a8;
    }
    else if (param_1 ==
             (id *)&__cxx11::money_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>::
                    id) {
      this_00 = (__locale_struct *)operator_new(0x18);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[2] = (__locale_data *)this;
      this_00->__locales[0] = (__locale_data *)&PTR__money_get_00928c40;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[0] = (__locale_data *)&PTR__money_get_shim_0090baf8;
    }
    else if (param_1 ==
             (id *)&__cxx11::money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>::
                    id) {
      this_00 = (__locale_struct *)operator_new(0x18);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[2] = (__locale_data *)this;
      this_00->__locales[0] = (__locale_data *)&PTR__money_put_00928c70;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[0] = (__locale_data *)&PTR__money_put_shim_0090bb28;
    }
    else if (param_1 == (id *)&__cxx11::moneypunct<char,true>::id) {
      p_Var2 = (__locale_data *)operator_new(0x70);
      *(undefined4 *)(p_Var2 + 8) = 0;
      *(undefined2 *)(p_Var2 + 0x20) = 0;
      *(undefined8 *)(p_Var2 + 0x10) = 0;
      *(undefined ***)p_Var2 = &PTR____moneypunct_cache_009275f8;
      *(undefined8 *)(p_Var2 + 0x18) = 0;
      p_Var2[0x22] = (__locale_data)0x0;
      *(undefined8 *)(p_Var2 + 0x28) = 0;
      *(undefined8 *)(p_Var2 + 0x30) = 0;
      *(undefined8 *)(p_Var2 + 0x38) = 0;
      *(undefined8 *)(p_Var2 + 0x40) = 0;
      *(undefined8 *)(p_Var2 + 0x48) = 0;
      *(undefined8 *)(p_Var2 + 0x50) = 0;
      *(undefined8 *)(p_Var2 + 0x58) = 0;
      *(undefined4 *)(p_Var2 + 0x60) = 0;
      p_Var2[0x6f] = (__locale_data)0x0;
      this_00 = (__locale_struct *)operator_new(0x28);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[2] = p_Var2;
      this_00->__locales[0] = (__locale_data *)&PTR__moneypunct_00928a68;
                    /* try { // try from 0064fcf3 to 0064fcf7 has its CatchHandler @ 006502d0 */
      __cxx11::moneypunct<char,true>::_M_initialize_moneypunct(this_00,(char *)0x0);
      this_00->__locales[3] = (__locale_data *)this;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[4] = p_Var2;
      this_00->__locales[0] = (__locale_data *)&PTR__moneypunct_shim_00929188;
                    /* try { // try from 0064fd27 to 0064fd2b has its CatchHandler @ 006502e8 */
      __facet_shims::__moneypunct_fill_cache<char,true>(this,p_Var2);
    }
    else if (param_1 == (id *)&__cxx11::moneypunct<char,false>::id) {
      p_Var2 = (__locale_data *)operator_new(0x70);
      *(undefined4 *)(p_Var2 + 8) = 0;
      *(undefined8 *)(p_Var2 + 0x10) = 0;
      *(undefined8 *)(p_Var2 + 0x18) = 0;
      *(undefined ***)p_Var2 = &PTR____moneypunct_cache_00927618;
      *(undefined2 *)(p_Var2 + 0x20) = 0;
      p_Var2[0x22] = (__locale_data)0x0;
      *(undefined8 *)(p_Var2 + 0x28) = 0;
      *(undefined8 *)(p_Var2 + 0x30) = 0;
      *(undefined8 *)(p_Var2 + 0x38) = 0;
      *(undefined8 *)(p_Var2 + 0x40) = 0;
      *(undefined8 *)(p_Var2 + 0x48) = 0;
      *(undefined8 *)(p_Var2 + 0x50) = 0;
      *(undefined8 *)(p_Var2 + 0x58) = 0;
      *(undefined4 *)(p_Var2 + 0x60) = 0;
      p_Var2[0x6f] = (__locale_data)0x0;
      this_00 = (__locale_struct *)operator_new(0x28);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[2] = p_Var2;
      this_00->__locales[0] = (__locale_data *)&PTR__moneypunct_00928ad0;
                    /* try { // try from 0064fdeb to 0064fdef has its CatchHandler @ 006502c4 */
      __cxx11::moneypunct<char,false>::_M_initialize_moneypunct(this_00,(char *)0x0);
      this_00->__locales[3] = (__locale_data *)this;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[4] = p_Var2;
      this_00->__locales[0] = (__locale_data *)&PTR__moneypunct_shim_009291f0;
                    /* try { // try from 0064fe1f to 0064fe23 has its CatchHandler @ 00650354 */
      __facet_shims::__moneypunct_fill_cache<char,false>(this,p_Var2);
    }
    else if (param_1 == (id *)&__cxx11::messages<char>::id) {
      this_00 = (__locale_struct *)operator_new(0x28);
                    /* try { // try from 0064fe52 to 0064fe56 has its CatchHandler @ 00650318 */
      __cxx11::messages<char>::messages((messages<char> *)this_00,0);
      this_00->__locales[4] = (__locale_data *)this;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[0] = (__locale_data *)&PTR__messages_shim_0090bb58;
    }
    else if (param_1 == (id *)&__cxx11::numpunct<wchar_t>::id) {
      p_Var2 = (__locale_data *)operator_new(0x150);
      *(undefined4 *)(p_Var2 + 8) = 0;
      *(undefined8 *)(p_Var2 + 0x10) = 0;
      *(undefined8 *)(p_Var2 + 0x18) = 0;
      *(undefined ***)p_Var2 = &PTR____numpunct_cache_009276c8;
      p_Var2[0x20] = (__locale_data)0x0;
      *(undefined8 *)(p_Var2 + 0x28) = 0;
      *(undefined8 *)(p_Var2 + 0x30) = 0;
      *(undefined8 *)(p_Var2 + 0x38) = 0;
      *(undefined8 *)(p_Var2 + 0x40) = 0;
      *(undefined8 *)(p_Var2 + 0x48) = 0;
      p_Var2[0x148] = (__locale_data)0x0;
      this_00 = (__locale_struct *)operator_new(0x28);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[2] = p_Var2;
      this_00->__locales[0] = (__locale_data *)&PTR__numpunct_00929698;
                    /* try { // try from 0064ff25 to 0064ff29 has its CatchHandler @ 00650330 */
      __cxx11::numpunct<wchar_t>::_M_initialize_numpunct
                ((numpunct<wchar_t> *)this_00,(__locale_struct *)0x0);
      this_00->__locales[3] = (__locale_data *)this;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[4] = p_Var2;
      this_00->__locales[0] = (__locale_data *)&PTR__numpunct_shim_00929258;
                    /* try { // try from 0064ff59 to 0064ff5d has its CatchHandler @ 0065036c */
      __facet_shims::__numpunct_fill_cache<wchar_t>(this,p_Var2);
    }
    else if (param_1 == (id *)&__cxx11::collate<wchar_t>::id) {
      this_00 = (__locale_struct *)operator_new(0x20);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[0] = (__locale_data *)&PTR__collate_00929628;
                    /* try { // try from 0064fb0a to 0064fb0e has its CatchHandler @ 00650300 */
      p_Var2 = (__locale_data *)_S_get_c_locale();
      this_00->__locales[2] = p_Var2;
      this_00->__locales[3] = (__locale_data *)this;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[0] = (__locale_data *)&PTR__collate_shim_009292a0;
    }
    else if (param_1 ==
             (id *)&__cxx11::
                    time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
                    id) {
      this_00 = (__locale_struct *)operator_new(0x18);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[2] = (__locale_data *)this;
      this_00->__locales[0] = (__locale_data *)&PTR__time_get_00929960;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[0] = (__locale_data *)&PTR__time_get_shim_00929400;
    }
    else if (param_1 ==
             (id *)&__cxx11::
                    money_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
                    id) {
      this_00 = (__locale_struct *)operator_new(0x18);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[2] = (__locale_data *)this;
      this_00->__locales[0] = (__locale_data *)&PTR__money_get_00929900;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[0] = (__locale_data *)&PTR__money_get_shim_0090bb90;
    }
    else if (param_1 ==
             (id *)&__cxx11::
                    money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
                    id) {
      this_00 = (__locale_struct *)operator_new(0x18);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[2] = (__locale_data *)this;
      this_00->__locales[0] = (__locale_data *)&PTR__money_put_00929930;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[0] = (__locale_data *)&PTR__money_put_shim_0090bbc0;
    }
    else if (param_1 == (id *)&__cxx11::moneypunct<wchar_t,true>::id) {
      p_Var2 = (__locale_data *)operator_new(0xa0);
      *(undefined4 *)(p_Var2 + 8) = 0;
      *(undefined8 *)(p_Var2 + 0x10) = 0;
      *(undefined8 *)(p_Var2 + 0x18) = 0;
      *(undefined ***)p_Var2 = &PTR____moneypunct_cache_00927638;
      p_Var2[0x20] = (__locale_data)0x0;
      *(undefined8 *)(p_Var2 + 0x24) = 0;
      *(undefined8 *)(p_Var2 + 0x30) = 0;
      *(undefined8 *)(p_Var2 + 0x38) = 0;
      *(undefined8 *)(p_Var2 + 0x40) = 0;
      *(undefined8 *)(p_Var2 + 0x48) = 0;
      *(undefined8 *)(p_Var2 + 0x50) = 0;
      *(undefined8 *)(p_Var2 + 0x58) = 0;
      *(undefined8 *)(p_Var2 + 0x60) = 0;
      *(undefined4 *)(p_Var2 + 0x68) = 0;
      p_Var2[0x98] = (__locale_data)0x0;
      this_00 = (__locale_struct *)operator_new(0x28);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[2] = p_Var2;
      this_00->__locales[0] = (__locale_data *)&PTR__moneypunct_00929728;
                    /* try { // try from 0065013a to 0065013e has its CatchHandler @ 00650324 */
      __cxx11::moneypunct<wchar_t,true>::_M_initialize_moneypunct(this_00,(char *)0x0);
      this_00->__locales[3] = (__locale_data *)this;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[4] = p_Var2;
      this_00->__locales[0] = (__locale_data *)&PTR__moneypunct_shim_009292d8;
                    /* try { // try from 0065016e to 00650172 has its CatchHandler @ 0065033c */
      __facet_shims::__moneypunct_fill_cache<wchar_t,true>(this,p_Var2);
    }
    else if (param_1 == (id *)&__cxx11::moneypunct<wchar_t,false>::id) {
      p_Var2 = (__locale_data *)operator_new(0xa0);
      *(undefined4 *)(p_Var2 + 8) = 0;
      *(undefined8 *)(p_Var2 + 0x10) = 0;
      *(undefined8 *)(p_Var2 + 0x18) = 0;
      *(undefined ***)p_Var2 = &PTR____moneypunct_cache_00927658;
      p_Var2[0x20] = (__locale_data)0x0;
      *(undefined8 *)(p_Var2 + 0x24) = 0;
      *(undefined8 *)(p_Var2 + 0x30) = 0;
      *(undefined8 *)(p_Var2 + 0x38) = 0;
      *(undefined8 *)(p_Var2 + 0x40) = 0;
      *(undefined8 *)(p_Var2 + 0x48) = 0;
      *(undefined8 *)(p_Var2 + 0x50) = 0;
      *(undefined8 *)(p_Var2 + 0x58) = 0;
      *(undefined8 *)(p_Var2 + 0x60) = 0;
      *(undefined4 *)(p_Var2 + 0x68) = 0;
      p_Var2[0x98] = (__locale_data)0x0;
      this_00 = (__locale_struct *)operator_new(0x28);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[2] = p_Var2;
      this_00->__locales[0] = (__locale_data *)&PTR__moneypunct_00929790;
                    /* try { // try from 00650239 to 0065023d has its CatchHandler @ 006502b8 */
      __cxx11::moneypunct<wchar_t,false>::_M_initialize_moneypunct(this_00,(char *)0x0);
      this_00->__locales[3] = (__locale_data *)this;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[4] = p_Var2;
      this_00->__locales[0] = (__locale_data *)&PTR__moneypunct_shim_00929340;
                    /* try { // try from 00650269 to 0065026d has its CatchHandler @ 0065030c */
      __facet_shims::__moneypunct_fill_cache<wchar_t,false>(this,p_Var2);
    }
    else {
      if (param_1 != (id *)&__cxx11::messages<wchar_t>::id) {
                    /* WARNING: Subroutine does not return */
        __throw_logic_error("cannot create shim for unknown locale::facet");
      }
      this_00 = (__locale_struct *)operator_new(0x28);
                    /* try { // try from 0064f98a to 0064f98e has its CatchHandler @ 006502dc */
      __cxx11::messages<wchar_t>::messages((messages<wchar_t> *)this_00,0);
      this_00->__locales[4] = (__locale_data *)this;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[0] = (__locale_data *)&PTR__messages_shim_0090bbf0;
    }
  }
  else {
    this_00 = (__locale_struct *)*puVar1;
  }
  return this_00;
}

