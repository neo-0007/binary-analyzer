
/* std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > std::money_put<wchar_t,
   std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::_M_insert<true>(std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, std::ios_base&,
   wchar_t, std::wstring const&) const */

undefined1  [16]
std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::_M_insert<true>
          (undefined8 param_1,long *param_2,ulong param_3,long param_4,wchar_t param_5,
          undefined8 *param_6)

{
  int *piVar1;
  wchar_t wVar2;
  char *pcVar3;
  int iVar4;
  ctype *pcVar5;
  ulong uVar6;
  long lVar7;
  wchar_t *pwVar8;
  long lVar9;
  __moneypunct_cache<wchar_t,true> *this;
  bool bVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  byte bVar15;
  wchar_t *pwVar16;
  long in_FS_OFFSET;
  undefined1 auVar17 [16];
  ulong local_b0;
  wchar_t *local_90;
  ulong local_88;
  wchar_t *local_58;
  undefined *local_50;
  undefined1 local_44 [4];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  pcVar5 = use_facet<std::ctype<wchar_t>>((locale *)(param_4 + 0xd0));
  uVar6 = locale::id::_M_id((id *)&moneypunct<wchar_t,true>::id);
  plVar12 = (long *)(*(long *)(*(long *)(param_4 + 0xd0) + 0x18) + uVar6 * 8);
  lVar9 = *plVar12;
  if (lVar9 == 0) {
                    /* try { // try from 0069a4ed to 0069a4f1 has its CatchHandler @ 0069a6aa */
    this = (__moneypunct_cache<wchar_t,true> *)operator_new(0xa0);
    *(undefined4 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined ***)this = &PTR____moneypunct_cache_00927638;
    this[0x20] = (__moneypunct_cache<wchar_t,true>)0x0;
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined4 *)(this + 0x68) = 0;
    this[0x98] = (__moneypunct_cache<wchar_t,true>)0x0;
                    /* try { // try from 0069a575 to 0069a579 has its CatchHandler @ 0069a6a1 */
    __moneypunct_cache<wchar_t,true>::_M_cache(this,(locale *)(param_4 + 0xd0));
    locale::_Impl::_M_install_cache(*(_Impl **)(param_4 + 0xd0),(facet *)this,uVar6);
    lVar9 = *plVar12;
  }
  pwVar8 = (wchar_t *)*param_6;
  pwVar16 = pwVar8;
  if (*pwVar8 == *(wchar_t *)(lVar9 + 0x6c)) {
    local_90 = *(wchar_t **)(lVar9 + 0x50);
    local_44 = *(undefined1 (*) [4])(lVar9 + 0x68);
    local_b0 = *(ulong *)(lVar9 + 0x58);
    if (*(long *)(pwVar8 + -6) != 0) {
      pwVar16 = pwVar8 + 1;
    }
  }
  else {
    local_44 = *(undefined1 (*) [4])(lVar9 + 100);
    local_90 = *(wchar_t **)(lVar9 + 0x40);
    local_b0 = *(ulong *)(lVar9 + 0x48);
  }
  lVar7 = (**(code **)(*(long *)pcVar5 + 0x28))
                    (pcVar5,0x800,pwVar16,pwVar16 + *(long *)(pwVar8 + -6));
  uVar6 = lVar7 - (long)pwVar16 >> 2;
  if (uVar6 != 0) {
    local_58 = (wchar_t *)&DAT_00938298;
                    /* try { // try from 0069a13c to 0069a202 has its CatchHandler @ 0069a67d */
    std::wstring::reserve((wstring *)&local_58,uVar6 * 2);
    iVar4 = *(int *)(lVar9 + 0x60);
    uVar11 = uVar6 - (long)iVar4;
    if (0 < (long)uVar11) {
      if (iVar4 < 0) {
        uVar11 = uVar6;
      }
      if (*(long *)(lVar9 + 0x18) == 0) {
                    /* try { // try from 0069a5a9 to 0069a673 has its CatchHandler @ 0069a67d */
        std::wstring::assign((wstring *)&local_58,pwVar16,uVar11);
      }
      else {
        std::wstring::_M_replace_aux
                  ((wstring *)&local_58,0,*(ulong *)(local_58 + -6),uVar11 * 2,L'\0');
        uVar13 = *(ulong *)(lVar9 + 0x18);
        pcVar3 = *(char **)(lVar9 + 0x10);
        wVar2 = *(wchar_t *)(lVar9 + 0x28);
        if (L'\xffffffff' < local_58[-2]) {
          std::wstring::_M_leak_hard((wstring *)&local_58);
        }
        pwVar8 = __add_grouping<wchar_t>(local_58,wVar2,pcVar3,uVar13,pwVar16,pwVar16 + uVar11);
        if (L'\xffffffff' < local_58[-2]) {
          std::wstring::_M_leak_hard((wstring *)&local_58);
        }
        uVar13 = (long)pwVar8 - (long)local_58 >> 2;
        if (*(ulong *)(local_58 + -6) < uVar13) {
                    /* WARNING: Subroutine does not return */
          __throw_out_of_range_fmt
                    ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::erase",
                     uVar13);
        }
        std::wstring::_M_mutate((wstring *)&local_58,uVar13,*(ulong *)(local_58 + -6) - uVar13,0);
      }
      iVar4 = *(int *)(lVar9 + 0x60);
    }
    if (0 < iVar4) {
                    /* try { // try from 0069a48f to 0069a4ac has its CatchHandler @ 0069a67d */
      std::wstring::push_back((wstring *)&local_58,*(wchar_t *)(lVar9 + 0x24));
      if ((long)uVar11 < 0) {
        std::wstring::append((wstring *)&local_58,-uVar11,*(wchar_t *)(lVar9 + 0x70));
        std::wstring::append((wstring *)&local_58,pwVar16,uVar6);
      }
      else {
        std::wstring::append((wstring *)&local_58,pwVar16 + uVar11,(long)*(int *)(lVar9 + 0x60));
      }
    }
    local_88 = local_b0 + *(long *)(local_58 + -6);
    uVar14 = *(uint *)(param_4 + 0x18) & 0xb0;
    if ((*(uint *)(param_4 + 0x18) & 0x200) != 0) {
      local_88 = local_88 + *(long *)(lVar9 + 0x38);
    }
    local_50 = &DAT_00938298;
                    /* try { // try from 0069a260 to 0069a467 has its CatchHandler @ 0069a674 */
    std::wstring::reserve((wstring *)&local_50,local_88 * 2);
    uVar6 = *(ulong *)(param_4 + 0x10);
    plVar12 = (long *)local_44;
    bVar10 = uVar14 == 0x10 && local_88 < uVar6;
    do {
      switch((char)*plVar12) {
      case '\0':
        if (bVar10) {
LAB_0069a303:
          std::wstring::append((wstring *)&local_50,uVar6 - local_88,param_5);
        }
        break;
      case '\x01':
        if (bVar10) goto LAB_0069a303;
                    /* try { // try from 0069a4bf to 0069a4de has its CatchHandler @ 0069a674 */
        std::wstring::push_back((wstring *)&local_50,param_5);
        break;
      case '\x02':
        if ((*(byte *)(param_4 + 0x19) & 2) != 0) {
          std::wstring::append
                    ((wstring *)&local_50,*(wchar_t **)(lVar9 + 0x30),*(ulong *)(lVar9 + 0x38));
        }
        break;
      case '\x03':
        if (local_b0 != 0) {
          std::wstring::push_back((wstring *)&local_50,*local_90);
        }
        break;
      case '\x04':
        std::wstring::append((wstring *)&local_50,(wstring *)&local_58);
      }
      plVar12 = (long *)((long)plVar12 + 1);
    } while (plVar12 != local_40);
    if (local_b0 < 2) {
      uVar11 = *(ulong *)(local_50 + -0x18);
    }
    else {
      std::wstring::append((wstring *)&local_50,local_90 + 1,local_b0 - 1);
      uVar11 = *(ulong *)(local_50 + -0x18);
    }
    if (uVar11 < uVar6) {
      if (uVar14 == 0x20) {
        std::wstring::append((wstring *)&local_50,uVar6 - uVar11,param_5);
        uVar11 = uVar6;
      }
      else {
        std::wstring::_M_replace_aux((wstring *)&local_50,0,0,uVar6 - uVar11,param_5);
        uVar11 = uVar6;
      }
    }
    bVar15 = (byte)param_3;
    if ((bVar15 == 0) &&
       (lVar9 = (**(code **)(*param_2 + 0x60))(param_2,local_50,(long)(int)uVar11),
       (int)uVar11 != lVar9)) {
      bVar15 = 1;
    }
    param_3 = (ulong)bVar15 | param_3 & 0xffffffffffffff00;
    if ((allocator *)(local_50 + -0x18) != (allocator *)&std::wstring::_Rep::_S_empty_rep_storage) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        piVar1 = (int *)(local_50 + -8);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      else {
        iVar4 = *(int *)(local_50 + -8);
        *(int *)(local_50 + -8) = iVar4 + -1;
      }
      if (iVar4 < 1) {
        std::wstring::_Rep::_M_destroy((allocator *)(local_50 + -0x18));
      }
    }
    if ((allocator *)(local_58 + -6) != (allocator *)&std::wstring::_Rep::_S_empty_rep_storage) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        pwVar8 = local_58 + -2;
        wVar2 = *pwVar8;
        *pwVar8 = *pwVar8 + L'\xffffffff';
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
  }
  *(undefined8 *)(param_4 + 0x10) = 0;
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar17._8_8_ = param_3;
    auVar17._0_8_ = param_2;
    return auVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

