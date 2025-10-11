
/* std::wstreambuf::setp(wchar_t*, wchar_t*) */

void __thiscall std::wstreambuf::setp(wstreambuf *this,wchar_t *param_1,wchar_t *param_2)

{
  *(wchar_t **)(this + 0x28) = param_1;
  *(wchar_t **)(this + 0x20) = param_1;
  *(wchar_t **)(this + 0x30) = param_2;
  return;
}

