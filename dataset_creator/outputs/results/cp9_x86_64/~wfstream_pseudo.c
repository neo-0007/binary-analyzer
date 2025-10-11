
/* std::wfstream::~wfstream() */

void __thiscall std::wfstream::~wfstream(wfstream *this)

{
  long lVar1;
  long *in_RSI;
  
  lVar1 = *in_RSI;
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_RSI[8];
  *(long *)(this + 0x10) = in_RSI[9];
  *(undefined ***)(this + 0x18) = &PTR__wfilebuf_0092a148;
                    /* try { // try from 0066b7ee to 0066b7f2 has its CatchHandler @ 0066b869 */
  wfilebuf::close((wfilebuf *)(this + 0x18));
  __basic_file<char>::~__basic_file((__basic_file<char> *)(this + 0x80));
  *(undefined ***)(this + 0x18) = &PTR__wstreambuf_0092b528;
  locale::~locale((locale *)(this + 0x50));
  lVar1 = in_RSI[1];
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_RSI[6];
  *(long *)(this + 0x10) = in_RSI[7];
  lVar1 = in_RSI[4];
  *(long *)(this + 0x10) = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18) + 0x10) = in_RSI[5];
  lVar1 = in_RSI[2];
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_RSI[3];
  *(undefined8 *)(this + 8) = 0;
  return;
}

