
/* std::wstreambuf::~wstreambuf() */

void __thiscall std::wstreambuf::~wstreambuf(wstreambuf *this)

{
  *(undefined ***)this = &PTR__wstreambuf_0092b528;
  locale::~locale((locale *)(this + 0x38));
  operator_delete(this);
  return;
}

