
/* std::__cxx11::wstring::reserve() */

void __thiscall std::__cxx11::wstring::reserve(wstring *this)

{
  wstring *__s1;
  ulong __n;
  ulong uVar1;
  wchar_t *__s1_00;
  wstring *pwVar2;
  undefined1 auVar3 [16];
  
  pwVar2 = *(wstring **)this;
  __s1 = this + 0x10;
  if (__s1 != pwVar2) {
    uVar1 = *(ulong *)(this + 8);
    if (uVar1 < 4) {
      if (uVar1 == 0) {
        *(wchar_t *)(this + 0x10) = *(wchar_t *)pwVar2;
        operator_delete(pwVar2);
        *(wstring **)this = __s1;
      }
      else {
        wmemcpy((wchar_t *)__s1,(wchar_t *)pwVar2,uVar1 + 1);
        operator_delete(*(void **)this);
        *(wstring **)this = __s1;
      }
    }
    else if (uVar1 < *(ulong *)(this + 0x10)) {
      __n = uVar1 + 1;
      if (__n >> 0x3d == 0) {
                    /* try { // try from 006a8e52 to 006a8eaf has its CatchHandler @ 006a8eb0 */
        __s1_00 = (wchar_t *)operator_new(__n * 4);
        pwVar2 = *(wstring **)this;
        if (__n != 0) {
          wmemcpy(__s1_00,(wchar_t *)pwVar2,__n);
          pwVar2 = *(wstring **)this;
        }
        if (__s1 != pwVar2) {
          operator_delete(pwVar2);
        }
        *(wchar_t **)this = __s1_00;
        *(ulong *)(this + 0x10) = uVar1;
        return;
      }
      if (__n >> 0x3e != 0) {
        __throw_bad_array_new_length();
      }
      auVar3 = __throw_bad_alloc();
                    /* catch(type#1 @ 0092c0c0) { ... } // from try @ 006a8e52 with catch @ 006a8eb0
                        */
      if (auVar3._8_8_ == 1) {
        __cxa_begin_catch(auVar3._0_8_);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006a8ec5 to 006a8ec9 has its CatchHandler @ 006a8edc */
        __cxa_rethrow();
      }
      __cxa_begin_catch(auVar3._0_8_);
      __cxa_end_catch();
      return;
    }
  }
  return;
}

