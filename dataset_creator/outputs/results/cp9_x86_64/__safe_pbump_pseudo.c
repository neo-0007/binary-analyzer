
/* std::wstreambuf::__safe_pbump(long) */

void __thiscall std::wstreambuf::__safe_pbump(wstreambuf *this,long param_1)

{
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + param_1 * 4;
  return;
}

