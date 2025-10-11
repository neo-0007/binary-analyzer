
/* std::ifstream::~ifstream() */

void __thiscall std::ifstream::~ifstream(ifstream *this)

{
  long lVar1;
  long *in_RSI;
  
  lVar1 = *in_RSI;
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_RSI[3];
  *(undefined ***)(this + 0x10) = &PTR__filebuf_00929d68;
                    /* try { // try from 006686b6 to 006686ba has its CatchHandler @ 006686fe */
  filebuf::close((filebuf *)(this + 0x10));
  __basic_file<char>::~__basic_file((__basic_file<char> *)(this + 0x78));
  *(undefined ***)(this + 0x10) = &PTR__streambuf_0092b4a8;
  locale::~locale((locale *)(this + 0x48));
  lVar1 = in_RSI[1];
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_RSI[2];
  *(undefined8 *)(this + 8) = 0;
  return;
}

