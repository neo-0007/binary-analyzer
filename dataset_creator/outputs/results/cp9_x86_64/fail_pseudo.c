
/* std::wios::fail() const */

bool __thiscall std::wios::fail(wios *this)

{
  return ((byte)this[0x20] & 5) != 0;
}

