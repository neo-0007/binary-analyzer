
/* std::wios::init(std::wstreambuf*) */

void __thiscall std::wios::init(wios *this,wstreambuf *param_1)

{
  ios_base::_M_init((ios_base *)this);
  _M_cache_locale(this,(locale *)(this + 0xd0));
  *(wstreambuf **)(this + 0xe8) = param_1;
  *(undefined4 *)(this + 0xe0) = 0;
  this[0xe4] = (wios)0x0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(uint *)(this + 0x20) = (uint)(param_1 == (wstreambuf *)0x0);
  return;
}

