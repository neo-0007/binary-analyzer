
/* std::wios::rdbuf(std::wstreambuf*) */

undefined8 __thiscall std::wios::rdbuf(wios *this,wstreambuf *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0xe8);
  *(wstreambuf **)(this + 0xe8) = param_1;
  clear(this,0);
  return uVar1;
}

