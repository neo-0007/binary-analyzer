
/* std::ctype<wchar_t>::do_is(wchar_t const*, wchar_t const*, unsigned short*) const */

wchar_t * __thiscall
std::ctype<wchar_t>::do_is(ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,ushort *param_3)

{
  ushort *puVar1;
  int iVar2;
  long lVar3;
  ushort uVar4;
  
  if (param_1 < param_2) {
    puVar1 = param_3 + ((ulong)((long)param_2 + (-1 - (long)param_1)) >> 2) + 1;
    do {
      lVar3 = 0;
      uVar4 = 0;
      do {
        iVar2 = iswctype_l(*param_1,*(wctype_t *)(this + lVar3 * 8 + 0x4c0),
                           *(__locale_t *)(this + 0x10));
        if (iVar2 != 0) {
          uVar4 = uVar4 | *(ushort *)(this + lVar3 * 2 + 0x49c);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0xc);
      *param_3 = uVar4;
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    } while (param_3 != puVar1);
  }
  return param_2;
}

