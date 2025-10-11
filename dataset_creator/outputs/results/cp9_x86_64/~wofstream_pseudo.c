
/* std::wofstream::~wofstream() */

void __thiscall std::wofstream::~wofstream(wofstream *this)

{
  long lVar1;
  long *in_RSI;
  
  lVar1 = *in_RSI;
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_RSI[3];
  *(undefined ***)(this + 8) = &PTR__wfilebuf_0092a148;
                    /* try { // try from 0066b216 to 0066b21a has its CatchHandler @ 0066b256 */
  wfilebuf::close((wfilebuf *)(this + 8));
  __basic_file<char>::~__basic_file((__basic_file<char> *)(this + 0x70));
  *(undefined ***)(this + 8) = &PTR__wstreambuf_0092b528;
  locale::~locale((locale *)(this + 0x40));
  lVar1 = in_RSI[1];
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_RSI[2];
  return;
}

