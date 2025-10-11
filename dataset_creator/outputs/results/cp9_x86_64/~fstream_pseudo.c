
/* std::fstream::~fstream() */

void __thiscall std::fstream::~fstream(fstream *this)

{
  long lVar1;
  long *in_RSI;
  
  lVar1 = *in_RSI;
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_RSI[8];
  *(long *)(this + 0x10) = in_RSI[9];
  *(undefined ***)(this + 0x18) = &PTR__filebuf_00929d68;
                    /* try { // try from 00668bfe to 00668c02 has its CatchHandler @ 00668c79 */
  filebuf::close((filebuf *)(this + 0x18));
  __basic_file<char>::~__basic_file((__basic_file<char> *)(this + 0x80));
  *(undefined ***)(this + 0x18) = &PTR__streambuf_0092b4a8;
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

