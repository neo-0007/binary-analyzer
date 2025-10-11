
/* std::wios::operator void*() const */

void * __thiscall std::wios::operator_cast_to_void_(wios *this)

{
  wios *pwVar1;
  
  pwVar1 = (wios *)0x0;
  if (((byte)this[0x20] & 5) == 0) {
    pwVar1 = this;
  }
  return pwVar1;
}

