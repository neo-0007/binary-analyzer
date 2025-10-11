
/* std::filebuf::~filebuf() */

void __thiscall std::filebuf::~filebuf(filebuf *this)

{
  *(undefined ***)this = &PTR__filebuf_00929d68;
                    /* try { // try from 00668066 to 0066806a has its CatchHandler @ 00668095 */
  close(this);
  __basic_file<char>::~__basic_file((__basic_file<char> *)(this + 0x68));
  *(undefined ***)this = &PTR__streambuf_0092b4a8;
  locale::~locale((locale *)(this + 0x38));
  operator_delete(this);
  return;
}

