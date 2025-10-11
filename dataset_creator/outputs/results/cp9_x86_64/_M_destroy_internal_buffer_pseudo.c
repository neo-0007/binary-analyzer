
/* std::wfilebuf::_M_destroy_internal_buffer() */

void __thiscall std::wfilebuf::_M_destroy_internal_buffer(wfilebuf *this)

{
  if (this[0xa8] != (wfilebuf)0x0) {
    if (*(void **)(this + 0x98) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x98));
    }
    *(undefined8 *)(this + 0x98) = 0;
    this[0xa8] = (wfilebuf)0x0;
  }
  if (*(void **)(this + 0xd0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xd0));
  }
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  return;
}

