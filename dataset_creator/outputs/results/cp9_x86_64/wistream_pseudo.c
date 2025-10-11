
/* std::wistream::wistream(std::wistream&&) */

void __thiscall std::wistream::wistream(wistream *this,wistream *param_1)

{
  ios_base *this_00;
  wistream wVar1;
  undefined8 uVar2;
  long lVar3;
  ios_base *piVar4;
  
  this_00 = (ios_base *)(this + 0x10);
  ios_base::ios_base(this_00);
  this[0xf4] = (wistream)0x0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x10) = 0x92a9c8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 8) = uVar2;
  lVar3 = *(long *)param_1;
  *(undefined8 *)(this + 0x100) = 0;
  lVar3 = *(long *)(lVar3 + -0x18);
  *(undefined8 *)this = 0x92a9a0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  piVar4 = (ios_base *)(param_1 + lVar3);
  ios_base::_M_move(this_00,piVar4);
                    /* try { // try from 00672236 to 0067223a has its CatchHandler @ 00672291 */
  wios::_M_cache_locale((wios *)this_00,(locale *)(this + 0xe0));
  uVar2 = *(undefined8 *)(piVar4 + 0xd8);
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(piVar4 + 0xd8) = 0;
  *(undefined8 *)(this + 0xe8) = uVar2;
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(piVar4 + 0xe0);
  wVar1 = *(wistream *)(piVar4 + 0xe4);
  *(undefined8 *)(param_1 + 8) = 0;
  this[0xf4] = wVar1;
  return;
}

