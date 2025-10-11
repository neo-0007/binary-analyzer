
/* std::wios::bad() const */

uint __thiscall std::wios::bad(wios *this)

{
  return *(uint *)(this + 0x20) & 1;
}

