
/* std::wios::_M_setstate(std::_Ios_Iostate) */

void __thiscall std::wios::_M_setstate(wios *this,uint param_2)

{
  *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | param_2;
  if ((param_2 & *(uint *)(this + 0x1c)) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __cxa_rethrow();
}

