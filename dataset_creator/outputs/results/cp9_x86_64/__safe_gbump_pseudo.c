
/* std::wstreambuf::__safe_gbump(long) */

void __thiscall std::wstreambuf::__safe_gbump(wstreambuf *this,long param_1)

{
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + param_1 * 4;
  return;
}

