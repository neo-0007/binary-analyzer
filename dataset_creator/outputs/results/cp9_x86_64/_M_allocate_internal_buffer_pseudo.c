
/* std::wfilebuf::_M_allocate_internal_buffer() */

void __thiscall std::wfilebuf::_M_allocate_internal_buffer(wfilebuf *this)

{
  void *pvVar1;
  
  if (this[0xa8] != (wfilebuf)0x0) {
    return;
  }
  if (*(long *)(this + 0x98) != 0) {
    return;
  }
  if (*(ulong *)(this + 0xa0) < 0x1fffffffffffffff) {
    pvVar1 = operator_new__(*(ulong *)(this + 0xa0) << 2);
    this[0xa8] = (wfilebuf)0x1;
    *(void **)(this + 0x98) = pvVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __cxa_throw_bad_array_new_length();
}

