
/* std::wstring::_Rep::_M_refcopy() */

_Rep * __thiscall std::wstring::_Rep::_M_refcopy(_Rep *this)

{
  if (this != (_Rep *)&_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
      UNLOCK();
    }
    else {
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
    }
  }
  return this + 0x18;
}

