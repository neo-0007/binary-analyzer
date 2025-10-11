
/* std::collate<wchar_t>::do_transform(wchar_t const*, wchar_t const*) const */

wchar_t * std::collate<wchar_t>::do_transform(wchar_t *param_1,wchar_t *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  ulong uVar7;
  size_t sVar8;
  long in_RCX;
  wchar_t wVar9;
  long in_RDX;
  wchar_t *pwVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pwVar5 = (wchar_t *)&DAT_00938298;
  *(undefined **)param_1 = &DAT_00938298;
  if (in_RDX != in_RCX) {
    if (in_RDX == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006953f8 to 006953fc has its CatchHandler @ 00695407 */
      __throw_logic_error("basic_string::_S_construct null not valid");
    }
                    /* try { // try from 00695253 to 00695257 has its CatchHandler @ 00695407 */
    pwVar5 = std::wstring::_S_construct<wchar_t_const*>();
  }
  lVar2 = *(long *)(pwVar5 + -6);
  uVar11 = in_RCX - in_RDX >> 1;
  if (0x3ffffffffffffffc < (ulong)(in_RCX - in_RDX)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00695402 to 00695406 has its CatchHandler @ 00695450 */
    __cxa_throw_bad_array_new_length();
  }
                    /* try { // try from 00695294 to 00695298 has its CatchHandler @ 00695450 */
  pwVar6 = (wchar_t *)operator_new__(uVar11 * 4);
  pwVar10 = pwVar5;
  while( true ) {
    uVar7 = _M_transform((collate<wchar_t> *)param_2,pwVar6,pwVar10,uVar11);
    if (uVar11 <= uVar7) {
      uVar11 = uVar7 + 1;
      operator_delete__(pwVar6);
      if (0x1ffffffffffffffe < uVar11) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00695419 to 0069541d has its CatchHandler @ 0069541e */
        __cxa_throw_bad_array_new_length();
      }
                    /* try { // try from 00695326 to 0069532a has its CatchHandler @ 0069541e */
      pwVar6 = (wchar_t *)operator_new__(uVar11 * 4);
      uVar7 = _M_transform((collate<wchar_t> *)param_2,pwVar6,pwVar10,uVar11);
    }
                    /* try { // try from 00695348 to 0069534c has its CatchHandler @ 00695410 */
    std::wstring::append((wstring *)param_1,pwVar6,uVar7);
    sVar8 = wcslen(pwVar10);
    if (pwVar5 + lVar2 == pwVar10 + sVar8) break;
    lVar3 = *(long *)param_1;
    pwVar10 = pwVar10 + sVar8 + 1;
    uVar7 = *(long *)(lVar3 + -0x18) + 1;
    if ((*(ulong *)(lVar3 + -0x10) < uVar7) || (0 < *(int *)(lVar3 + -8))) {
                    /* try { // try from 006952c2 to 006952c6 has its CatchHandler @ 00695410 */
      std::wstring::reserve((wstring *)param_1,uVar7);
    }
    puVar4 = *(undefined **)param_1;
    *(undefined4 *)(puVar4 + *(long *)(puVar4 + -0x18) * 4) = 0;
    if (puVar4 != &DAT_00938298) {
      *(undefined4 *)(puVar4 + -8) = 0;
      *(ulong *)(puVar4 + -0x18) = uVar7;
      *(undefined4 *)(puVar4 + uVar7 * 4) = 0;
    }
  }
  operator_delete__(pwVar6);
  if ((allocator *)(pwVar5 + -6) != (allocator *)&std::wstring::_Rep::_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      pwVar10 = pwVar5 + -2;
      wVar9 = *pwVar10;
      *pwVar10 = *pwVar10 + L'\xffffffff';
      UNLOCK();
    }
    else {
      wVar9 = pwVar5[-2];
      pwVar5[-2] = wVar9 + L'\xffffffff';
    }
    if (wVar9 < L'\x01') {
      std::wstring::_Rep::_M_destroy((allocator *)(pwVar5 + -6));
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

