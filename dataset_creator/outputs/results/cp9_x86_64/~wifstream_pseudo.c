
/* std::wifstream::~wifstream() */

void __thiscall std::wifstream::~wifstream(wifstream *this)

{
  long lVar1;
  long *in_RSI;
  
  lVar1 = *in_RSI;
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_RSI[3];
  *(undefined ***)(this + 0x10) = &PTR__wfilebuf_0092a148;
                    /* try { // try from 0066b2a6 to 0066b2aa has its CatchHandler @ 0066b2ee */
  wfilebuf::close((wfilebuf *)(this + 0x10));
  __basic_file<char>::~__basic_file((__basic_file<char> *)(this + 0x78));
  *(undefined ***)(this + 0x10) = &PTR__wstreambuf_0092b528;
  locale::~locale((locale *)(this + 0x48));
  lVar1 = in_RSI[1];
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_RSI[2];
  *(undefined8 *)(this + 8) = 0;
  return;
}

