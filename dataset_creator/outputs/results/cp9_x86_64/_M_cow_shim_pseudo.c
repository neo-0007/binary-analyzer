
/* std::locale::facet::_M_cow_shim(std::locale::id const*) const */

__locale_struct * __thiscall std::locale::facet::_M_cow_shim(facet *this,id *param_1)

{
  undefined8 *puVar1;
  __locale_struct *this_00;
  __locale_data *p_Var2;
  
  puVar1 = (undefined8 *)__dynamic_cast(this,&typeinfo,&__shim::typeinfo);
  if (puVar1 == (undefined8 *)0x0) {
    if (param_1 == (id *)&numpunct<char>::id) {
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
      this_00->__locales[0] = (__locale_data *)&PTR__numpunct_0092ad40;
                    /* try { // try from 00633214 to 00633218 has its CatchHandler @ 00633b20 */
      numpunct<char>::_M_initialize_numpunct((numpunct<char> *)this_00,(__locale_struct *)0x0);
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
      this_00->__locales[0] = (__locale_data *)&PTR__numpunct_shim_00928278;
                    /* try { // try from 00633244 to 00633248 has its CatchHandler @ 00633ab4 */
      __facet_shims::__numpunct_fill_cache<char>(this,p_Var2);
    }
    else if (param_1 == (id *)&collate<char>::id) {
      this_00 = (__locale_struct *)operator_new(0x20);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[0] = (__locale_data *)&PTR__collate_0092acd0;
                    /* try { // try from 00633323 to 00633327 has its CatchHandler @ 00633b08 */
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
      this_00->__locales[0] = (__locale_data *)&PTR__collate_shim_009282c0;
    }
    else if (param_1 ==
             (id *)&time_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>::id) {
      this_00 = (__locale_struct *)operator_new(0x18);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[2] = (__locale_data *)this;
      this_00->__locales[0] = (__locale_data *)&PTR__time_get_0092b220;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[0] = (__locale_data *)&PTR__time_get_shim_0090ba58;
    }
    else if (param_1 ==
             (id *)&money_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>::id) {
      this_00 = (__locale_struct *)operator_new(0x18);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[2] = (__locale_data *)this;
      this_00->__locales[0] = (__locale_data *)&PTR__money_get_0092b170;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[0] = (__locale_data *)&PTR__money_get_shim_0090b928;
    }
    else if (param_1 ==
             (id *)&money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>::id) {
      this_00 = (__locale_struct *)operator_new(0x18);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[2] = (__locale_data *)this;
      this_00->__locales[0] = (__locale_data *)&PTR__money_put_0092b1a0;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[0] = (__locale_data *)&PTR__money_put_shim_0090b958;
    }
    else if (param_1 == (id *)&moneypunct<char,true>::id) {
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
      this_00->__locales[0] = (__locale_data *)&PTR__moneypunct_0092aee8;
                    /* try { // try from 006334b3 to 006334b7 has its CatchHandler @ 00633a90 */
      moneypunct<char,true>::_M_initialize_moneypunct(this_00,(char *)0x0);
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
      this_00->__locales[0] = (__locale_data *)&PTR__moneypunct_shim_009282f8;
                    /* try { // try from 006334e7 to 006334eb has its CatchHandler @ 00633aa8 */
      __facet_shims::__moneypunct_fill_cache<char,true>(this,p_Var2);
    }
    else if (param_1 == (id *)&moneypunct<char,false>::id) {
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
      this_00->__locales[0] = (__locale_data *)&PTR__moneypunct_0092af50;
                    /* try { // try from 006335ab to 006335af has its CatchHandler @ 00633a84 */
      moneypunct<char,false>::_M_initialize_moneypunct(this_00,(char *)0x0);
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
      this_00->__locales[0] = (__locale_data *)&PTR__moneypunct_shim_00928360;
                    /* try { // try from 006335df to 006335e3 has its CatchHandler @ 00633b14 */
      __facet_shims::__moneypunct_fill_cache<char,false>(this,p_Var2);
    }
    else if (param_1 == (id *)&messages<char>::id) {
      this_00 = (__locale_struct *)operator_new(0x28);
                    /* try { // try from 00633612 to 00633616 has its CatchHandler @ 00633ad8 */
      messages<char>::messages((messages<char> *)this_00,0);
      this_00->__locales[4] = (__locale_data *)this;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[0] = (__locale_data *)&PTR__messages_shim_0090b988;
    }
    else if (param_1 == (id *)&numpunct<wchar_t>::id) {
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
      this_00->__locales[0] = (__locale_data *)&PTR__numpunct_0092b980;
                    /* try { // try from 006336e5 to 006336e9 has its CatchHandler @ 00633af0 */
      numpunct<wchar_t>::_M_initialize_numpunct((numpunct<wchar_t> *)this_00,(__locale_struct *)0x0)
      ;
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
      this_00->__locales[0] = (__locale_data *)&PTR__numpunct_shim_009283c8;
                    /* try { // try from 00633719 to 0063371d has its CatchHandler @ 00633b2c */
      __facet_shims::__numpunct_fill_cache<wchar_t>(this,p_Var2);
    }
    else if (param_1 == (id *)&collate<wchar_t>::id) {
      this_00 = (__locale_struct *)operator_new(0x20);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[0] = (__locale_data *)&PTR__collate_0092b890;
                    /* try { // try from 006332ca to 006332ce has its CatchHandler @ 00633ac0 */
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
      this_00->__locales[0] = (__locale_data *)&PTR__collate_shim_00928410;
    }
    else if (param_1 ==
             (id *)&time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
                    id) {
      this_00 = (__locale_struct *)operator_new(0x18);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[2] = (__locale_data *)this;
      this_00->__locales[0] = (__locale_data *)&PTR__time_get_0092be60;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[0] = (__locale_data *)&PTR__time_get_shim_0090baa8;
    }
    else if (param_1 ==
             (id *)&money_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
                    id) {
      this_00 = (__locale_struct *)operator_new(0x18);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[2] = (__locale_data *)this;
      this_00->__locales[0] = (__locale_data *)&PTR__money_get_0092bdb0;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[0] = (__locale_data *)&PTR__money_get_shim_0090b9c0;
    }
    else if (param_1 ==
             (id *)&money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
                    id) {
      this_00 = (__locale_struct *)operator_new(0x18);
      *(undefined4 *)(this_00->__locales + 1) = 0;
      this_00->__locales[2] = (__locale_data *)this;
      this_00->__locales[0] = (__locale_data *)&PTR__money_put_0092bde0;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[0] = (__locale_data *)&PTR__money_put_shim_0090b9f0;
    }
    else if (param_1 == (id *)&moneypunct<wchar_t,true>::id) {
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
      this_00->__locales[0] = (__locale_data *)&PTR__moneypunct_0092bb28;
                    /* try { // try from 006338fa to 006338fe has its CatchHandler @ 00633ae4 */
      moneypunct<wchar_t,true>::_M_initialize_moneypunct(this_00,(char *)0x0);
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
      this_00->__locales[0] = (__locale_data *)&PTR__moneypunct_shim_00928448;
                    /* try { // try from 0063392e to 00633932 has its CatchHandler @ 00633afc */
      __facet_shims::__moneypunct_fill_cache<wchar_t,true>(this,p_Var2);
    }
    else if (param_1 == (id *)&moneypunct<wchar_t,false>::id) {
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
      this_00->__locales[0] = (__locale_data *)&PTR__moneypunct_0092bb90;
                    /* try { // try from 006339f9 to 006339fd has its CatchHandler @ 00633a78 */
      moneypunct<wchar_t,false>::_M_initialize_moneypunct(this_00,(char *)0x0);
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
      this_00->__locales[0] = (__locale_data *)&PTR__moneypunct_shim_009284b0;
                    /* try { // try from 00633a29 to 00633a2d has its CatchHandler @ 00633acc */
      __facet_shims::__moneypunct_fill_cache<wchar_t,false>(this,p_Var2);
    }
    else {
      if (param_1 != (id *)&messages<wchar_t>::id) {
                    /* WARNING: Subroutine does not return */
        __throw_logic_error("cannot create shim for unknown locale::facet");
      }
      this_00 = (__locale_struct *)operator_new(0x28);
                    /* try { // try from 0063314a to 0063314e has its CatchHandler @ 00633a9c */
      messages<wchar_t>::messages((messages<wchar_t> *)this_00,0);
      this_00->__locales[4] = (__locale_data *)this;
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      this_00->__locales[0] = (__locale_data *)&PTR__messages_shim_0090ba20;
    }
  }
  else {
    this_00 = (__locale_struct *)*puVar1;
  }
  return this_00;
}

