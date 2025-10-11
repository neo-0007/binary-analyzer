
/* std::ctype<char>::ctype(unsigned short const*, bool, unsigned long) */

void __thiscall
std::ctype<char>::ctype(ctype<char> *this,ushort *param_1,bool param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  *(uint *)(this + 8) = (uint)(param_3 != 0);
  *(undefined ***)this = &PTR__ctype_00928590;
                    /* try { // try from 0063a95a to 0063a95e has its CatchHandler @ 0063aa09 */
  lVar1 = locale::facet::_S_get_c_locale();
  *(long *)(this + 0x10) = lVar1;
  this[0x18] = (ctype<char>)(param_1 != (ushort *)0x0 && param_2);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(lVar1 + 0x78);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(lVar1 + 0x70);
  if (param_1 == (ushort *)0x0) {
    param_1 = *(ushort **)(lVar1 + 0x68);
  }
  *(ushort **)(this + 0x30) = param_1;
  this[0x38] = (ctype<char>)0x0;
  this[0x239] = (ctype<char>)0x0;
  *(undefined8 *)(this + 0x39) = 0;
  *(undefined8 *)(this + 0x131) = 0;
  puVar3 = (undefined8 *)((ulong)(this + 0x41) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x41) & 0xfffffffffffffff8))
                       + 0x139U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  *(undefined8 *)(this + 0x139) = 0;
  *(undefined8 *)(this + 0x231) = 0;
  puVar3 = (undefined8 *)((ulong)(this + 0x141) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x141) & 0xfffffffffffffff8))
                       + 0x239U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  return;
}

