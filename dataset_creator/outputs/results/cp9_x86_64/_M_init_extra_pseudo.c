
/* std::locale::_Impl::_M_init_extra(void*, void*, char const*, char const*) */

void std::locale::_Impl::_M_init_extra(void *param_1,void *param_2,char *param_3,char *param_4)

{
  long lVar1;
  char *pcVar2;
  numpunct<char> *this;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  __locale_struct *p_Var6;
  messages<char> *this_00;
  numpunct<wchar_t> *this_01;
  messages<wchar_t> *this_02;
  long in_FS_OFFSET;
  bool bVar7;
  __locale_struct *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this = (numpunct<char> *)operator_new(0x18);
                    /* WARNING: Load size is inaccurate */
  p_Var6 = *param_2;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__numpunct_0092ad40;
                    /* try { // try from 0062e277 to 0062e27b has its CatchHandler @ 0062e8ec */
  numpunct<char>::_M_initialize_numpunct(this,p_Var6);
  if (__libc_single_threaded == '\0') {
    LOCK();
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    UNLOCK();
  }
  else {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  lVar1 = *(long *)((long)param_1 + 8);
  lVar3 = locale::id::_M_id((id *)&numpunct<char>::id);
  *(numpunct<char> **)(lVar1 + lVar3 * 8) = this;
  puVar4 = (undefined8 *)operator_new(0x18);
                    /* WARNING: Load size is inaccurate */
  local_48 = *param_2;
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = &PTR__collate_0092acd0;
  uVar5 = facet::_S_clone_c_locale(&local_48);
  bVar7 = __libc_single_threaded == '\0';
  puVar4[2] = uVar5;
  if (bVar7) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  else {
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
  }
  lVar1 = *(long *)((long)param_1 + 8);
  lVar3 = locale::id::_M_id((id *)&collate<char>::id);
  *(undefined8 **)(lVar1 + lVar3 * 8) = puVar4;
  p_Var6 = (__locale_struct *)operator_new(0x18);
                    /* WARNING: Load size is inaccurate */
  pcVar2 = *param_2;
  *(undefined4 *)(p_Var6->__locales + 1) = 0;
  p_Var6->__locales[2] = (__locale_data *)0x0;
  p_Var6->__locales[0] = (__locale_data *)&PTR__moneypunct_0092af50;
                    /* try { // try from 0062e345 to 0062e349 has its CatchHandler @ 0062e8e0 */
  moneypunct<char,false>::_M_initialize_moneypunct(p_Var6,pcVar2);
  if (__libc_single_threaded == '\0') {
    LOCK();
    *(int *)(p_Var6->__locales + 1) = *(int *)(p_Var6->__locales + 1) + 1;
    UNLOCK();
  }
  else {
    *(int *)(p_Var6->__locales + 1) = *(int *)(p_Var6->__locales + 1) + 1;
  }
  lVar1 = *(long *)((long)param_1 + 8);
  lVar3 = locale::id::_M_id((id *)&moneypunct<char,false>::id);
  *(__locale_struct **)(lVar1 + lVar3 * 8) = p_Var6;
  p_Var6 = (__locale_struct *)operator_new(0x18);
                    /* WARNING: Load size is inaccurate */
  pcVar2 = *param_2;
  *(undefined4 *)(p_Var6->__locales + 1) = 0;
  p_Var6->__locales[2] = (__locale_data *)0x0;
  p_Var6->__locales[0] = (__locale_data *)&PTR__moneypunct_0092aee8;
                    /* try { // try from 0062e3ab to 0062e3af has its CatchHandler @ 0062e934 */
  moneypunct<char,true>::_M_initialize_moneypunct(p_Var6,pcVar2);
  if (__libc_single_threaded == '\0') {
    LOCK();
    *(int *)(p_Var6->__locales + 1) = *(int *)(p_Var6->__locales + 1) + 1;
    UNLOCK();
  }
  else {
    *(int *)(p_Var6->__locales + 1) = *(int *)(p_Var6->__locales + 1) + 1;
  }
  lVar1 = *(long *)((long)param_1 + 8);
  lVar3 = locale::id::_M_id((id *)&moneypunct<char,true>::id);
  *(__locale_struct **)(lVar1 + lVar3 * 8) = p_Var6;
  puVar4 = (undefined8 *)operator_new(0x10);
  *(undefined4 *)(puVar4 + 1) = 0;
  bVar7 = __libc_single_threaded == '\0';
  *puVar4 = &PTR__money_get_0092b170;
  if (bVar7) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
  }
  lVar1 = *(long *)((long)param_1 + 8);
  lVar3 = locale::id::_M_id((id *)&money_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>
                                   ::id);
  *(undefined8 **)(lVar1 + lVar3 * 8) = puVar4;
  puVar4 = (undefined8 *)operator_new(0x10);
  *(undefined4 *)(puVar4 + 1) = 0;
  bVar7 = __libc_single_threaded == '\0';
  *puVar4 = &PTR__money_put_0092b1a0;
  if (bVar7) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
  }
  lVar1 = *(long *)((long)param_1 + 8);
  lVar3 = locale::id::_M_id((id *)&money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>
                                   ::id);
  *(undefined8 **)(lVar1 + lVar3 * 8) = puVar4;
  puVar4 = (undefined8 *)operator_new(0x10);
  *(undefined4 *)(puVar4 + 1) = 0;
  bVar7 = __libc_single_threaded == '\0';
  *puVar4 = &PTR__time_get_0092b220;
  if (bVar7) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
  }
  lVar1 = *(long *)((long)param_1 + 8);
  lVar3 = locale::id::_M_id((id *)&time_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>
                                   ::id);
  *(undefined8 **)(lVar1 + lVar3 * 8) = puVar4;
  this_00 = (messages<char> *)operator_new(0x20);
                    /* WARNING: Load size is inaccurate */
                    /* try { // try from 0062e4f1 to 0062e4f5 has its CatchHandler @ 0062e928 */
  messages<char>::messages(this_00,*param_2,param_4,0);
  if (__libc_single_threaded == '\0') {
    LOCK();
    *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    UNLOCK();
  }
  else {
    *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  }
  lVar1 = *(long *)((long)param_1 + 8);
  lVar3 = locale::id::_M_id((id *)&messages<char>::id);
  *(messages<char> **)(lVar1 + lVar3 * 8) = this_00;
  this_01 = (numpunct<wchar_t> *)operator_new(0x18);
                    /* WARNING: Load size is inaccurate */
  p_Var6 = *param_2;
  *(undefined4 *)(this_01 + 8) = 0;
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined ***)this_01 = &PTR__numpunct_0092b980;
                    /* try { // try from 0062e555 to 0062e559 has its CatchHandler @ 0062e91c */
  numpunct<wchar_t>::_M_initialize_numpunct(this_01,p_Var6);
  if (__libc_single_threaded == '\0') {
    LOCK();
    *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
    UNLOCK();
  }
  else {
    *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
  }
  lVar1 = *(long *)((long)param_1 + 8);
  lVar3 = locale::id::_M_id((id *)&numpunct<wchar_t>::id);
  *(numpunct<wchar_t> **)(lVar1 + lVar3 * 8) = this_01;
  puVar4 = (undefined8 *)operator_new(0x18);
                    /* WARNING: Load size is inaccurate */
  local_48 = *param_2;
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = &PTR__collate_0092b890;
  uVar5 = facet::_S_clone_c_locale(&local_48);
  bVar7 = __libc_single_threaded == '\0';
  puVar4[2] = uVar5;
  if (bVar7) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  else {
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
  }
  lVar1 = *(long *)((long)param_1 + 8);
  lVar3 = locale::id::_M_id((id *)&collate<wchar_t>::id);
  *(undefined8 **)(lVar1 + lVar3 * 8) = puVar4;
  p_Var6 = (__locale_struct *)operator_new(0x18);
  *(undefined4 *)(p_Var6->__locales + 1) = 0;
  pcVar2 = *(char **)param_3;
  p_Var6->__locales[2] = (__locale_data *)0x0;
  p_Var6->__locales[0] = (__locale_data *)&PTR__moneypunct_0092bb90;
                    /* try { // try from 0062e61d to 0062e621 has its CatchHandler @ 0062e910 */
  moneypunct<wchar_t,false>::_M_initialize_moneypunct(p_Var6,pcVar2);
  if (__libc_single_threaded == '\0') {
    LOCK();
    *(int *)(p_Var6->__locales + 1) = *(int *)(p_Var6->__locales + 1) + 1;
    UNLOCK();
  }
  else {
    *(int *)(p_Var6->__locales + 1) = *(int *)(p_Var6->__locales + 1) + 1;
  }
  lVar1 = *(long *)((long)param_1 + 8);
  lVar3 = locale::id::_M_id((id *)&moneypunct<wchar_t,false>::id);
  *(__locale_struct **)(lVar1 + lVar3 * 8) = p_Var6;
  p_Var6 = (__locale_struct *)operator_new(0x18);
  *(undefined4 *)(p_Var6->__locales + 1) = 0;
  pcVar2 = *(char **)param_3;
  p_Var6->__locales[2] = (__locale_data *)0x0;
  p_Var6->__locales[0] = (__locale_data *)&PTR__moneypunct_0092bb28;
                    /* try { // try from 0062e67f to 0062e683 has its CatchHandler @ 0062e904 */
  moneypunct<wchar_t,true>::_M_initialize_moneypunct(p_Var6,pcVar2);
  if (__libc_single_threaded == '\0') {
    LOCK();
    *(int *)(p_Var6->__locales + 1) = *(int *)(p_Var6->__locales + 1) + 1;
    UNLOCK();
  }
  else {
    *(int *)(p_Var6->__locales + 1) = *(int *)(p_Var6->__locales + 1) + 1;
  }
  lVar1 = *(long *)((long)param_1 + 8);
  lVar3 = locale::id::_M_id((id *)&moneypunct<wchar_t,true>::id);
  *(__locale_struct **)(lVar1 + lVar3 * 8) = p_Var6;
  puVar4 = (undefined8 *)operator_new(0x10);
  *(undefined4 *)(puVar4 + 1) = 0;
  bVar7 = __libc_single_threaded == '\0';
  *puVar4 = &PTR__money_get_0092bdb0;
  if (bVar7) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
  }
  lVar1 = *(long *)((long)param_1 + 8);
  lVar3 = locale::id::_M_id((id *)&money_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                                   ::id);
  *(undefined8 **)(lVar1 + lVar3 * 8) = puVar4;
  puVar4 = (undefined8 *)operator_new(0x10);
  *(undefined4 *)(puVar4 + 1) = 0;
  bVar7 = __libc_single_threaded == '\0';
  *puVar4 = &PTR__money_put_0092bde0;
  if (bVar7) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
  }
  lVar1 = *(long *)((long)param_1 + 8);
  lVar3 = locale::id::_M_id((id *)&money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                                   ::id);
  *(undefined8 **)(lVar1 + lVar3 * 8) = puVar4;
  puVar4 = (undefined8 *)operator_new(0x10);
  *(undefined4 *)(puVar4 + 1) = 0;
  bVar7 = __libc_single_threaded == '\0';
  *puVar4 = &PTR__time_get_0092be60;
  if (bVar7) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
  }
  lVar1 = *(long *)((long)param_1 + 8);
  lVar3 = locale::id::_M_id((id *)&time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                                   ::id);
  *(undefined8 **)(lVar1 + lVar3 * 8) = puVar4;
  this_02 = (messages<wchar_t> *)operator_new(0x20);
                    /* WARNING: Load size is inaccurate */
                    /* try { // try from 0062e79d to 0062e7a1 has its CatchHandler @ 0062e8f8 */
  messages<wchar_t>::messages(this_02,*param_2,param_4,0);
  if (__libc_single_threaded == '\0') {
    LOCK();
    *(int *)(this_02 + 8) = *(int *)(this_02 + 8) + 1;
    UNLOCK();
  }
  else {
    *(int *)(this_02 + 8) = *(int *)(this_02 + 8) + 1;
  }
  lVar1 = *(long *)((long)param_1 + 8);
  lVar3 = locale::id::_M_id((id *)&messages<wchar_t>::id);
  *(messages<wchar_t> **)(lVar1 + lVar3 * 8) = this_02;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

