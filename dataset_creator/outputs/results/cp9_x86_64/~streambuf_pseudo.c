
/* std::streambuf::~streambuf() */

void __thiscall std::streambuf::~streambuf(streambuf *this)

{
  *(undefined ***)this = &PTR__streambuf_0092b4a8;
  locale::~locale((locale *)(this + 0x38));
  operator_delete(this);
  return;
}

