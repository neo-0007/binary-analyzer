
/* std::messages<wchar_t>::~messages() */

void __thiscall std::messages<wchar_t>::~messages(messages<wchar_t> *this)

{
  ~messages(this);
  operator_delete(this);
  return;
}

