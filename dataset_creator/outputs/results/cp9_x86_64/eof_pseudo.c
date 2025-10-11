
/* std::wios::eof() const */

uint __thiscall std::wios::eof(wios *this)

{
  return *(uint *)(this + 0x20) >> 1 & 1;
}

