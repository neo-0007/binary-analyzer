
/* std::locale::id::_M_id() const */

long __thiscall std::locale::id::_M_id(id *this)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = *(long *)this;
  if (lVar2 == 0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar1 = _S_refcount + 1;
      UNLOCK();
      iVar3 = _S_refcount + 1;
      LOCK();
      _S_refcount = iVar1;
      if (*(long *)this == 0) {
        *(long *)this = (long)iVar3;
      }
      UNLOCK();
      return *(long *)this + -1;
    }
    _S_refcount = _S_refcount + 1;
    lVar2 = (long)_S_refcount;
    *(long *)this = lVar2;
  }
  return lVar2 + -1;
}

