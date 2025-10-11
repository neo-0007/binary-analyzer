
/* std::iostream::iostream(std::iostream&&) */

void __thiscall std::iostream::iostream(iostream *this,iostream *param_1)

{
  ios_base *this_00;
  undefined8 uVar1;
  long lVar2;
  ios_base *piVar3;
  
  this_00 = (ios_base *)(this + 0x18);
  ios_base::ios_base(this_00);
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined2 *)(this + 0xf8) = 0;
  *(undefined8 *)this = 0x92a690;
  *(undefined8 *)(this + 0x18) = 0x92a6b8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 8) = uVar1;
  lVar2 = *(long *)param_1;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  lVar2 = *(long *)(lVar2 + -0x18);
  *(undefined8 *)(this + 0x118) = 0;
  piVar3 = (ios_base *)(param_1 + lVar2);
  ios_base::_M_move(this_00,piVar3);
                    /* try { // try from 0066dd8a to 0066dd8e has its CatchHandler @ 0066ddf6 */
  ios::_M_cache_locale((ios *)this_00,(locale *)(this + 0xe8));
  uVar1 = *(undefined8 *)(piVar3 + 0xd8);
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(piVar3 + 0xd8) = 0;
  *(undefined8 *)(this + 0xf0) = uVar1;
  *(undefined2 *)(this + 0xf8) = *(undefined2 *)(piVar3 + 0xe0);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)this = 0x92a718;
  *(undefined8 *)(this + 0x18) = 0x92a768;
  *(undefined8 *)(this + 0x10) = 0x92a740;
  return;
}

