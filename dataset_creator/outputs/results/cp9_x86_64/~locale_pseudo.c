
/* std::locale::~locale() */

void __thiscall std::locale::~locale(locale *this)

{
  int iVar1;
  _Impl *this_00;
  
  this_00 = *(_Impl **)this;
  if (this_00 != _S_classic) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar1 = *(int *)this_00;
      *(int *)this_00 = *(int *)this_00 + -1;
      UNLOCK();
    }
    else {
      iVar1 = *(int *)this_00;
      *(int *)this_00 = iVar1 + -1;
    }
    if (iVar1 == 1) {
      _Impl::~_Impl(this_00);
      operator_delete(this_00);
      return;
    }
  }
  return;
}

