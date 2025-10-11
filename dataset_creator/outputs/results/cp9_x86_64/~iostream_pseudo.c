
/* std::iostream::~iostream() */

void __thiscall std::iostream::~iostream(iostream *this)

{
  long lVar1;
  long *in_RSI;
  
  lVar1 = *in_RSI;
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_RSI[5];
  *(long *)(this + 0x10) = in_RSI[6];
  lVar1 = in_RSI[3];
  *(long *)(this + 0x10) = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18) + 0x10) = in_RSI[4];
  lVar1 = in_RSI[1];
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_RSI[2];
  *(undefined8 *)(this + 8) = 0;
  return;
}

