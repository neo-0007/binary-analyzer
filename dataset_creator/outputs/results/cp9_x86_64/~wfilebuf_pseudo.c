
/* std::wfilebuf::~wfilebuf() */

void __thiscall std::wfilebuf::~wfilebuf(wfilebuf *this)

{
  *(undefined ***)this = &PTR__wfilebuf_0092a148;
                    /* try { // try from 0066ac56 to 0066ac5a has its CatchHandler @ 0066ac85 */
  close(this);
  __basic_file<char>::~__basic_file((__basic_file<char> *)(this + 0x68));
  *(undefined ***)this = &PTR__wstreambuf_0092b528;
  locale::~locale((locale *)(this + 0x38));
  operator_delete(this);
  return;
}

