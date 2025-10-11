
/* std::wstreambuf::pbump(int) */

void __thiscall std::wstreambuf::pbump(wstreambuf *this,int param_1)

{
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + (long)param_1 * 4;
  return;
}

