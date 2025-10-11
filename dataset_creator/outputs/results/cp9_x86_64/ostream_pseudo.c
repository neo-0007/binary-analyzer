
/* std::ostream::ostream(std::ostream&&) */

void __thiscall std::ostream::ostream(ostream *this,ostream *param_1)

{
  ios_base *this_00;
  long lVar1;
  undefined8 uVar2;
  ios_base *piVar3;
  
  this_00 = (ios_base *)(this + 8);
  ios_base::ios_base(this_00);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined2 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 8) = 0x92b408;
  lVar1 = *(long *)param_1;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  piVar3 = (ios_base *)(param_1 + *(long *)(lVar1 + -0x18));
  *(undefined8 *)this = 0x92b3e0;
  ios_base::_M_move(this_00,piVar3);
                    /* try { // try from 0068a2dd to 0068a2e1 has its CatchHandler @ 0068a319 */
  ios::_M_cache_locale((ios *)this_00,(locale *)(this + 0xd8));
  uVar2 = *(undefined8 *)(piVar3 + 0xd8);
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(piVar3 + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = uVar2;
  *(undefined2 *)(this + 0xe8) = *(undefined2 *)(piVar3 + 0xe0);
  return;
}

