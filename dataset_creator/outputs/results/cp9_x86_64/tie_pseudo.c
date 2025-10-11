
/* std::wios::tie(std::wostream*) */

undefined8 __thiscall std::wios::tie(wios *this,wostream *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0xd8);
  *(wostream **)(this + 0xd8) = param_1;
  return uVar1;
}

