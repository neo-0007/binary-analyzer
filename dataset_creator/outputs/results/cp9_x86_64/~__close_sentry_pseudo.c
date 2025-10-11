
/* ~__close_sentry() */

void __thiscall std::wfilebuf::close()::__close_sentry::~__close_sentry(__close_sentry *this)

{
  wfilebuf *this_00;
  long lVar1;
  undefined8 uVar2;
  
  this_00 = *(wfilebuf **)this;
  *(undefined4 *)(this_00 + 0x78) = 0;
  this_00[0xc0] = (wfilebuf)0x0;
  _M_destroy_internal_buffer(this_00);
  lVar1 = *(long *)this;
  *(undefined2 *)(lVar1 + 0xa9) = 0;
  uVar2 = *(undefined8 *)(lVar1 + 0x98);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 8) = uVar2;
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x84) = *(undefined8 *)(lVar1 + 0x7c);
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(*(long *)this + 0x8c) = *(undefined8 *)(*(long *)this + 0x84);
  return;
}

