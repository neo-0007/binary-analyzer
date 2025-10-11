
/* std::wios::move(std::wios&&) */

void __thiscall std::wios::move(wios *this,wios *param_1)

{
  wios wVar1;
  undefined8 uVar2;
  
  ios_base::_M_move((ios_base *)this,(ios_base *)param_1);
  _M_cache_locale(this,(locale *)(this + 0xd0));
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(this + 0xd8) = uVar2;
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  wVar1 = param_1[0xe4];
  *(undefined8 *)(this + 0xe8) = 0;
  this[0xe4] = wVar1;
  return;
}

