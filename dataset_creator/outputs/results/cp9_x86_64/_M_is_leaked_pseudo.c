
/* std::wstring::_Rep::_M_is_leaked() const */

uint __thiscall std::wstring::_Rep::_M_is_leaked(_Rep *this)

{
  return *(uint *)(this + 0x10) >> 0x1f;
}

