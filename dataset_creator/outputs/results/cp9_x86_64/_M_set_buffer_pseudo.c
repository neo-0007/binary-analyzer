
/* std::wfilebuf::_M_set_buffer(long) */

void __thiscall std::wfilebuf::_M_set_buffer(wfilebuf *this,long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x98);
  *(long *)(this + 8) = lVar1;
  *(long *)(this + 0x10) = lVar1;
  if (((*(uint *)(this + 0x78) & 8) == 0) || (param_1 < 1)) {
    *(long *)(this + 0x18) = lVar1;
    if (((*(uint *)(this + 0x78) & 0x11) != 0) && ((param_1 == 0 && (1 < *(ulong *)(this + 0xa0)))))
    {
      *(long *)(this + 0x28) = lVar1;
      *(long *)(this + 0x20) = lVar1;
      *(ulong *)(this + 0x30) = lVar1 + -4 + *(ulong *)(this + 0xa0) * 4;
      return;
    }
  }
  else {
    *(long *)(this + 0x18) = lVar1 + param_1 * 4;
  }
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}

