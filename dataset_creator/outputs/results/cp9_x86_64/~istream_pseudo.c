
/* std::istream::~istream() */

void __thiscall std::istream::~istream(istream *this)

{
  long lVar1;
  long *in_RSI;
  
  lVar1 = *in_RSI;
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_RSI[1];
  *(undefined8 *)(this + 8) = 0;
  return;
}

