
/* std::wfilebuf::_M_seek(long, std::_Ios_Seekdir, __mbstate_t) */

undefined1  [16] __thiscall
std::wfilebuf::_M_seek(wfilebuf *this,undefined8 param_1,undefined4 param_3,ulong param_4)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  cVar2 = _M_terminate_output(this);
  if (cVar2 == '\0') {
    param_4 = 0;
    uVar4 = 0;
    lVar3 = -1;
  }
  else {
    lVar3 = __basic_file<char>::seekoff((__basic_file<char> *)(this + 0x68),param_1,param_3);
    if (lVar3 == -1) {
      param_4 = 0;
      uVar4 = 0;
    }
    else {
      *(ulong *)(this + 0x84) = param_4;
      *(undefined2 *)(this + 0xa9) = 0;
      *(undefined8 *)(this + 0x28) = 0;
      *(undefined8 *)(this + 0xe8) = *(undefined8 *)(this + 0xd0);
      *(undefined8 *)(this + 0xe0) = *(undefined8 *)(this + 0xd0);
      uVar1 = *(undefined8 *)(this + 0x98);
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined8 *)(this + 8) = uVar1;
      *(undefined8 *)(this + 0x10) = uVar1;
      *(undefined8 *)(this + 0x18) = uVar1;
      uVar4 = param_4 & 0xffffffff;
      param_4 = param_4 >> 0x20;
      *(undefined8 *)(this + 0x30) = 0;
    }
  }
  auVar5._8_8_ = uVar4 | param_4 << 0x20;
  auVar5._0_8_ = lVar3;
  return auVar5;
}

