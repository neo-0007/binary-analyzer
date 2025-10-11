
/* std::wfilebuf::wfilebuf(std::wfilebuf&&) */

void __thiscall std::wfilebuf::wfilebuf(wfilebuf *this,wfilebuf *param_1)

{
  wfilebuf wVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  wstreambuf::wstreambuf((wstreambuf *)this,(wstreambuf *)param_1);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__wfilebuf_0092a148;
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(this + 0x68) = uVar5;
  wVar1 = param_1[0x70];
  param_1[0x70] = (wfilebuf)0x0;
  this[0x70] = wVar1;
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
  wVar1 = param_1[0xaa];
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 1;
  *(undefined2 *)(param_1 + 0xa8) = 0;
  param_1[0xaa] = (wfilebuf)0x0;
  this[0xaa] = wVar1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  this[0xc0] = param_1[0xc0];
  param_1[0xc0] = (wfilebuf)0x0;
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

