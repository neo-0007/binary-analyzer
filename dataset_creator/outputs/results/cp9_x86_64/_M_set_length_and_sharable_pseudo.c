
/* std::wstring::_Rep::_M_set_length_and_sharable(unsigned long) */

void __thiscall std::wstring::_Rep::_M_set_length_and_sharable(_Rep *this,ulong param_1)

{
  if (this == (_Rep *)&_S_empty_rep_storage) {
    return;
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(ulong *)this = param_1;
  *(undefined4 *)(this + param_1 * 4 + 0x18) = 0;
  return;
}

