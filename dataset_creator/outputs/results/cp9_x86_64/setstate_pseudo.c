
/* std::wios::setstate(std::_Ios_Iostate) */

void __thiscall std::wios::setstate(wios *this,uint param_2)

{
  clear(this,param_2 | *(uint *)(this + 0x20));
  return;
}

