
/* std::ctype<char>::narrow(char, char) const */

ulong __thiscall std::ctype<char>::narrow(ctype<char> *this,char param_1,char param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined7 in_register_00000011;
  undefined7 in_register_00000031;
  
  uVar2 = (ulong)(byte)this[(ulong)(byte)param_1 + 0x139];
  if (this[(ulong)(byte)param_1 + 0x139] == (ctype<char>)0x0) {
    uVar2 = CONCAT71(in_register_00000011,param_2) & 0xffffffff;
    uVar1 = (uint)CONCAT71(in_register_00000031,param_1);
    if (*(code **)(*(long *)this + 0x40) != do_narrow) {
      uVar1 = (**(code **)(*(long *)this + 0x40))(this,(int)param_1,(int)(char)SUB81(uVar2,0));
    }
    if (SUB81(uVar2,0) != SUB41(uVar1,0)) {
      this[(ulong)(byte)param_1 + 0x139] = SUB41(uVar1,0);
      uVar2 = (ulong)uVar1;
    }
  }
  return uVar2;
}

