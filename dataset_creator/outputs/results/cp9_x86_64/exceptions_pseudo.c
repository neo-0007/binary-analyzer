
/* std::wios::exceptions(std::_Ios_Iostate) */

void __thiscall std::wios::exceptions(wios *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x1c) = param_2;
  clear(this,*(undefined4 *)(this + 0x20));
  return;
}

