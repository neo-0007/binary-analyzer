
/* std::wiostream::wiostream(std::wiostream&&) */

void __thiscall std::wiostream::wiostream(wiostream *this,wiostream *param_1)

{
  ios_base *this_00;
  undefined8 uVar1;
  long lVar2;
  ios_base *piVar3;
  
  this_00 = (ios_base *)(this + 0x18);
  ios_base::ios_base(this_00);
  this[0xfc] = (wiostream)0x0;
  *(undefined8 *)this = 0x92a7e0;
  *(undefined8 *)(this + 0x18) = 0x92a808;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 8) = uVar1;
  lVar2 = *(long *)param_1;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  lVar2 = *(long *)(lVar2 + -0x18);
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  piVar3 = (ios_base *)(param_1 + lVar2);
  *(undefined8 *)(this + 0x118) = 0;
  ios_base::_M_move(this_00,piVar3);
                    /* try { // try from 0066e512 to 0066e516 has its CatchHandler @ 0066e58b */
  wios::_M_cache_locale((wios *)this_00,(locale *)(this + 0xe8));
  uVar1 = *(undefined8 *)(piVar3 + 0xd8);
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(piVar3 + 0xd8) = 0;
  *(undefined8 *)(this + 0xf0) = uVar1;
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(piVar3 + 0xe0);
  this[0xfc] = *(wiostream *)(piVar3 + 0xe4);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)this = 0x92a868;
  *(undefined8 *)(this + 0x18) = 0x92a8b8;
  *(undefined8 *)(this + 0x10) = 0x92a890;
  return;
}

