
/* std::streambuf::streambuf(std::streambuf const&) */

void __thiscall std::streambuf::streambuf(streambuf *this,streambuf *param_1)

{
  *(undefined ***)this = &PTR__streambuf_0092b4a8;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  locale::locale((locale *)(this + 0x38),(locale *)(param_1 + 0x38));
  return;
}

