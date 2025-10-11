
/* std::wfilebuf::_M_create_pback() */

void __thiscall std::wfilebuf::_M_create_pback(wfilebuf *this)

{
  if (this[0xc0] == (wfilebuf)0x0) {
    this[0xc0] = (wfilebuf)0x1;
    *(undefined8 *)(this + 0xb0) = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0xb8) = *(undefined8 *)(this + 0x18);
    *(wfilebuf **)(this + 8) = this + 0xac;
    *(wfilebuf **)(this + 0x10) = this + 0xac;
    *(wfilebuf **)(this + 0x18) = this + 0xb0;
  }
  return;
}

