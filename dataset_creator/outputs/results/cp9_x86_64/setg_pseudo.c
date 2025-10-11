
/* std::wstreambuf::setg(wchar_t*, wchar_t*, wchar_t*) */

void __thiscall
std::wstreambuf::setg(wstreambuf *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  *(wchar_t **)(this + 8) = param_1;
  *(wchar_t **)(this + 0x10) = param_2;
  *(wchar_t **)(this + 0x18) = param_3;
  return;
}

