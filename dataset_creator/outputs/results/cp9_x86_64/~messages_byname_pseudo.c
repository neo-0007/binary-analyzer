
/* std::messages_byname<wchar_t>::~messages_byname() */

void __thiscall std::messages_byname<wchar_t>::~messages_byname(messages_byname<wchar_t> *this)

{
  *(undefined ***)this = &PTR__messages_byname_0092bf00;
  messages<wchar_t>::~messages((messages<wchar_t> *)this);
  operator_delete(this);
  return;
}

