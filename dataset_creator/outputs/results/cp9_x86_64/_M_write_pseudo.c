
/* std::wostream::_M_write(wchar_t const*, long) */

void __thiscall std::wostream::_M_write(wostream *this,wchar_t *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x18) + 0xe8) + 0x60))();
  if (param_2 == lVar1) {
    return;
  }
  wios::clear((wios *)(this + *(long *)(*(long *)this + -0x18)),
              *(uint *)((wios *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 1);
  return;
}

