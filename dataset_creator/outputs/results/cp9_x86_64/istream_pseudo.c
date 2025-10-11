
/* std::istream::istream(std::istream&&) */

void __thiscall std::istream::istream(istream *this,istream *param_1)

{
  ios_base *this_00;
  undefined2 uVar1;
  undefined8 uVar2;
  long lVar3;
  ios_base *piVar4;
  
  this_00 = (ios_base *)(this + 0x10);
  ios_base::ios_base(this_00);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined2 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x10) = 0x92a968;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 8) = uVar2;
  lVar3 = *(long *)param_1;
  *(undefined8 *)(this + 0x110) = 0;
  lVar3 = *(long *)(lVar3 + -0x18);
  *(undefined8 *)this = 0x92a940;
  piVar4 = (ios_base *)(param_1 + lVar3);
  ios_base::_M_move(this_00,piVar4);
                    /* try { // try from 0066ed6e to 0066ed72 has its CatchHandler @ 0066edbc */
  ios::_M_cache_locale((ios *)this_00,(locale *)(this + 0xe0));
  uVar2 = *(undefined8 *)(piVar4 + 0xd8);
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(piVar4 + 0xd8) = 0;
  *(undefined8 *)(this + 0xe8) = uVar2;
  uVar1 = *(undefined2 *)(piVar4 + 0xe0);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined2 *)(this + 0xf0) = uVar1;
  return;
}

