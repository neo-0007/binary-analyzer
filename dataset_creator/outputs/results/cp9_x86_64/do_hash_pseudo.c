
/* std::collate<wchar_t>::do_hash(wchar_t const*, wchar_t const*) const */

ulong __thiscall
std::collate<wchar_t>::do_hash(collate<wchar_t> *this,wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if (param_2 <= param_1) {
    return 0;
  }
  do {
    wVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = (uVar2 << 7 | uVar2 >> 0x39) + (long)wVar1;
  } while (param_1 < param_2);
  return uVar2;
}

