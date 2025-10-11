
/* std::wostream::~wostream() */

void __thiscall std::wostream::~wostream(wostream *this)

{
  long lVar1;
  long *in_RSI;
  
  lVar1 = *in_RSI;
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_RSI[1];
  return;
}

