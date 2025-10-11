
/* std::wios::set_rdbuf(std::wstreambuf*) */

void __thiscall std::wios::set_rdbuf(wios *this,wstreambuf *param_1)

{
  *(wstreambuf **)(this + 0xe8) = param_1;
  return;
}

