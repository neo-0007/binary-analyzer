
/* std::__moneypunct_cache<wchar_t, false>::_M_cache(std::locale const&) */

void __thiscall
std::__moneypunct_cache<wchar_t,false>::_M_cache
          (__moneypunct_cache<wchar_t,false> *this,locale *param_1)

{
  int *piVar1;
  wchar_t wVar2;
  int iVar3;
  char *__s;
  ulong uVar4;
  __moneypunct_cache<wchar_t,false> _Var5;
  undefined4 uVar6;
  moneypunct *pmVar7;
  size_t sVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  ctype *pcVar12;
  long lVar13;
  char *pcVar14;
  long in_FS_OFFSET;
  wstring *local_90;
  string *local_88;
  wstring *local_78;
  wstring *local_70;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  char *local_60;
  wchar_t *local_58;
  wchar_t *local_50;
  wchar_t *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pmVar7 = use_facet<std::moneypunct<wchar_t,false>>(param_1);
  lVar13 = *(long *)pmVar7;
  if (*(code **)(lVar13 + 0x10) == moneypunct<wchar_t,false>::do_decimal_point) {
    uVar6 = *(undefined4 *)(*(long *)(pmVar7 + 0x10) + 0x24);
  }
  else {
    uVar6 = (**(code **)(lVar13 + 0x10))(pmVar7);
    lVar13 = *(long *)pmVar7;
  }
  *(undefined4 *)(this + 0x24) = uVar6;
  if (*(code **)(lVar13 + 0x18) == moneypunct<wchar_t,false>::do_thousands_sep) {
    uVar6 = *(undefined4 *)(*(long *)(pmVar7 + 0x10) + 0x28);
  }
  else {
    uVar6 = (**(code **)(lVar13 + 0x18))(pmVar7);
    lVar13 = *(long *)pmVar7;
  }
  *(undefined4 *)(this + 0x28) = uVar6;
  if (*(code **)(lVar13 + 0x40) == moneypunct<wchar_t,false>::do_frac_digits) {
    uVar6 = *(undefined4 *)(*(long *)(pmVar7 + 0x10) + 0x60);
  }
  else {
    uVar6 = (**(code **)(lVar13 + 0x40))(pmVar7);
    lVar13 = *(long *)pmVar7;
  }
  *(undefined4 *)(this + 0x60) = uVar6;
  if (*(code **)(lVar13 + 0x20) == moneypunct<wchar_t,false>::do_grouping) {
    pcVar14 = (char *)0xffffffffffffffff;
    __s = *(char **)(*(long *)(pmVar7 + 0x10) + 0x10);
    if (__s != (char *)0x0) {
      sVar8 = strlen(__s);
      pcVar14 = __s + sVar8;
    }
                    /* try { // try from 006990f5 to 006990f9 has its CatchHandler @ 006996fa */
    local_60 = std::string::_S_construct<char_const*>(__s,pcVar14,&local_48);
  }
  else {
                    /* try { // try from 00699460 to 00699461 has its CatchHandler @ 006996fa */
    (**(code **)(lVar13 + 0x20))(&local_60,pmVar7);
  }
  local_88 = (string *)&local_60;
  uVar4 = *(ulong *)(local_60 + -0x18);
  *(ulong *)(this + 0x18) = uVar4;
                    /* try { // try from 00699114 to 00699118 has its CatchHandler @ 00699777 */
  pcVar14 = (char *)operator_new__(uVar4);
                    /* try { // try from 0069912a to 0069912e has its CatchHandler @ 00699785 */
  std::string::copy(local_88,pcVar14,uVar4,0);
  _Var5 = (__moneypunct_cache<wchar_t,false>)0x0;
  if (*(long *)(this + 0x18) != 0) {
    _Var5 = (__moneypunct_cache<wchar_t,false>)((byte)(*pcVar14 - 1U) < 0x7e);
  }
  this[0x20] = _Var5;
  if (*(code **)(*(long *)pmVar7 + 0x28) == moneypunct<wchar_t,false>::do_curr_symbol) {
    pwVar9 = *(wchar_t **)(*(long *)(pmVar7 + 0x10) + 0x30);
    if (pwVar9 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00699617 to 0069961b has its CatchHandler @ 00699755 */
      __throw_logic_error("basic_string::_S_construct null not valid");
    }
    sVar8 = wcslen(pwVar9);
    if (pwVar9 == pwVar9 + sVar8) {
      local_58 = (wchar_t *)&DAT_00938298;
    }
    else {
                    /* try { // try from 00699191 to 00699195 has its CatchHandler @ 00699634 */
      local_58 = std::wstring::_S_construct<wchar_t_const*>(pwVar9,pwVar9 + sVar8,&local_63);
    }
  }
  else {
                    /* try { // try from 00699440 to 00699441 has its CatchHandler @ 00699724 */
    (**(code **)(*(long *)pmVar7 + 0x28))(&local_58,pmVar7);
  }
  local_78 = (wstring *)&local_58;
  uVar4 = *(ulong *)(local_58 + -6);
  *(ulong *)(this + 0x38) = uVar4;
  if (0x1ffffffffffffffe < uVar4) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00699640 to 00699644 has its CatchHandler @ 00699657 */
    __cxa_throw_bad_array_new_length();
  }
                    /* try { // try from 006991c8 to 006991cc has its CatchHandler @ 00699628 */
  pwVar9 = (wchar_t *)operator_new__(uVar4 * 4);
                    /* try { // try from 006991dd to 006991e1 has its CatchHandler @ 006997bf */
  std::wstring::copy(local_78,pwVar9,uVar4,0);
  if (*(code **)(*(long *)pmVar7 + 0x30) == moneypunct<wchar_t,false>::do_positive_sign) {
    pwVar10 = *(wchar_t **)(*(long *)(pmVar7 + 0x10) + 0x40);
    if (pwVar10 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0069960b to 0069960f has its CatchHandler @ 0069974c */
      __throw_logic_error("basic_string::_S_construct null not valid");
    }
    sVar8 = wcslen(pwVar10);
    if (pwVar10 == pwVar10 + sVar8) {
      local_50 = (wchar_t *)&DAT_00938298;
    }
    else {
                    /* try { // try from 00699226 to 0069922a has its CatchHandler @ 00699706 */
      local_50 = std::wstring::_S_construct<wchar_t_const*>(pwVar10,pwVar10 + sVar8,&local_62);
    }
  }
  else {
                    /* try { // try from 006994b0 to 006994b1 has its CatchHandler @ 00699771 */
    (**(code **)(*(long *)pmVar7 + 0x30))(&local_50,pmVar7);
  }
  local_70 = (wstring *)&local_50;
  uVar4 = *(ulong *)(local_50 + -6);
  *(ulong *)(this + 0x48) = uVar4;
  if (0x1ffffffffffffffe < uVar4) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0069972d to 00699731 has its CatchHandler @ 0069973b */
    __cxa_throw_bad_array_new_length();
  }
                    /* try { // try from 0069925d to 00699261 has its CatchHandler @ 00699732 */
  pwVar10 = (wchar_t *)operator_new__(uVar4 * 4);
                    /* try { // try from 00699272 to 00699276 has its CatchHandler @ 0069978e */
  std::wstring::copy(local_70,pwVar10,uVar4,0);
  if (*(code **)(*(long *)pmVar7 + 0x38) == moneypunct<wchar_t,false>::do_negative_sign) {
    pwVar11 = *(wchar_t **)(*(long *)(pmVar7 + 0x10) + 0x50);
    if (pwVar11 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00699623 to 00699627 has its CatchHandler @ 0069964e */
      __throw_logic_error("basic_string::_S_construct null not valid");
    }
    sVar8 = wcslen(pwVar11);
    if (pwVar11 == pwVar11 + sVar8) {
      local_48 = (wchar_t *)&DAT_00938298;
    }
    else {
                    /* try { // try from 006992ba to 006992be has its CatchHandler @ 0069971e */
      local_48 = std::wstring::_S_construct<wchar_t_const*>(pwVar11,pwVar11 + sVar8,&local_61);
    }
  }
  else {
                    /* try { // try from 006994f0 to 006994f1 has its CatchHandler @ 00699712 */
    (**(code **)(*(long *)pmVar7 + 0x38))(&local_48,pmVar7);
  }
  local_90 = (wstring *)&local_48;
  uVar4 = *(ulong *)(local_48 + -6);
  *(ulong *)(this + 0x58) = uVar4;
  if (0x1ffffffffffffffe < uVar4) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00699780 to 00699784 has its CatchHandler @ 006997dd */
    __cxa_throw_bad_array_new_length();
  }
                    /* try { // try from 006992f1 to 006992f5 has its CatchHandler @ 006996ee */
  pwVar11 = (wchar_t *)operator_new__(uVar4 * 4);
                    /* try { // try from 00699306 to 0069936d has its CatchHandler @ 00699645 */
  std::wstring::copy(local_90,pwVar11,uVar4,0);
  if (*(code **)(*(long *)pmVar7 + 0x48) == moneypunct<wchar_t,false>::do_pos_format) {
    uVar6 = *(undefined4 *)(*(long *)(pmVar7 + 0x10) + 100);
  }
  else {
                    /* try { // try from 006994c3 to 006994d4 has its CatchHandler @ 00699645 */
    uVar6 = (**(code **)(*(long *)pmVar7 + 0x48))(pmVar7);
  }
  *(undefined4 *)(this + 100) = uVar6;
  if (*(code **)(*(long *)pmVar7 + 0x50) == moneypunct<wchar_t,false>::do_neg_format) {
    uVar6 = *(undefined4 *)(*(long *)(pmVar7 + 0x10) + 0x68);
  }
  else {
    uVar6 = (**(code **)(*(long *)pmVar7 + 0x50))(pmVar7);
  }
  *(undefined4 *)(this + 0x68) = uVar6;
  pcVar12 = use_facet<std::ctype<wchar_t>>(param_1);
  (**(code **)(*(long *)pcVar12 + 0x58))
            (pcVar12,money_base::_S_atoms,money_base::_S_atoms + 0xb,this + 0x6c);
  *(wchar_t **)(this + 0x30) = pwVar9;
  *(wchar_t **)(this + 0x40) = pwVar10;
  *(char **)(this + 0x10) = pcVar14;
  *(wchar_t **)(this + 0x50) = pwVar11;
  this[0x98] = (__moneypunct_cache<wchar_t,false>)0x1;
  if ((allocator *)(local_48 + -6) != (allocator *)&std::wstring::_Rep::_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      pwVar9 = local_48 + -2;
      wVar2 = *pwVar9;
      *pwVar9 = *pwVar9 + L'\xffffffff';
      UNLOCK();
    }
    else {
      wVar2 = local_48[-2];
      local_48[-2] = wVar2 + L'\xffffffff';
    }
    if (wVar2 < L'\x01') {
      std::wstring::_Rep::_M_destroy((allocator *)(local_48 + -6));
    }
  }
  if ((allocator *)(local_50 + -6) != (allocator *)&std::wstring::_Rep::_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      pwVar9 = local_50 + -2;
      wVar2 = *pwVar9;
      *pwVar9 = *pwVar9 + L'\xffffffff';
      UNLOCK();
    }
    else {
      wVar2 = local_50[-2];
      local_50[-2] = wVar2 + L'\xffffffff';
    }
    if (wVar2 < L'\x01') {
      std::wstring::_Rep::_M_destroy((allocator *)(local_50 + -6));
    }
  }
  if ((allocator *)(local_58 + -6) != (allocator *)&std::wstring::_Rep::_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      pwVar9 = local_58 + -2;
      wVar2 = *pwVar9;
      *pwVar9 = *pwVar9 + L'\xffffffff';
      UNLOCK();
    }
    else {
      wVar2 = local_58[-2];
      local_58[-2] = wVar2 + L'\xffffffff';
    }
    if (wVar2 < L'\x01') {
      std::wstring::_Rep::_M_destroy((allocator *)(local_58 + -6));
    }
  }
  if ((allocator *)(local_60 + -0x18) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      piVar1 = (int *)(local_60 + -8);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar3 = *(int *)(local_60 + -8);
      *(int *)(local_60 + -8) = iVar3 + -1;
    }
    if (iVar3 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_60 + -0x18));
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

