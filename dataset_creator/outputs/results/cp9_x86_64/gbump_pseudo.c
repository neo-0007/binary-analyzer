
/* std::wstreambuf::gbump(int) */

void __thiscall std::wstreambuf::gbump(wstreambuf *this,int param_1)

{
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + (long)param_1 * 4;
  return;
}

