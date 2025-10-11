
/* std::filebuf::filebuf(std::filebuf&&) */

void __thiscall std::filebuf::filebuf(filebuf *this,filebuf *param_1)

{
  filebuf fVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  streambuf::streambuf((streambuf *)this,(streambuf *)param_1);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__filebuf_00929d68;
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(this + 0x68) = uVar5;
  fVar1 = param_1[0x70];
  param_1[0x70] = (filebuf)0x0;
  this[0x70] = fVar1;
  uVar5 = *(undefined8 *)(param_1 + 0x84);
  uVar3 = *(undefined4 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x98) = uVar4;
  *(undefined8 *)(this + 0x84) = uVar5;
  uVar4 = *(undefined8 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x78) = uVar3;
  uVar5 = *(undefined8 *)(param_1 + 0x7c);
  *(undefined8 *)(this + 0x8c) = uVar4;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
  uVar2 = *(undefined2 *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0x7c) = uVar5;
  *(undefined2 *)(this + 0xa8) = uVar2;
  fVar1 = param_1[0xaa];
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 1;
  *(undefined2 *)(param_1 + 0xa8) = 0;
  param_1[0xaa] = (filebuf)0x0;
  this[0xaa] = fVar1;
  *(undefined8 *)(param_1 + 8) = 0;
  this[0xab] = param_1[0xab];
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  this[0xc0] = param_1[0xc0];
  param_1[0xc0] = (filebuf)0x0;
  *(undefined8 *)(this + 200) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(this + 0xd0) = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
  uVar4 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(this + 0xe8) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x84) = uVar5;
  *(undefined8 *)(param_1 + 0x8c) = uVar5;
  return;
}

