
/* std::wfilebuf::_M_destroy_pback() */

void __thiscall std::wfilebuf::_M_destroy_pback(wfilebuf *this)

{
  long lVar1;
  
  if (this[0xc0] != (wfilebuf)0x0) {
    this[0xc0] = (wfilebuf)0x0;
    lVar1 = *(long *)(this + 0xb0) + (ulong)(*(long *)(this + 0x10) != *(long *)(this + 8)) * 4;
    *(undefined8 *)(this + 8) = *(undefined8 *)(this + 0x98);
    *(long *)(this + 0xb0) = lVar1;
    *(long *)(this + 0x10) = lVar1;
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0xb8);
  }
  return;
}

