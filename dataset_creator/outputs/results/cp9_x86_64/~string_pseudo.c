
/* std::__cxx11::string::~string() */

void __thiscall std::__cxx11::string::~string(string *this)

{
  if (*(string **)this != this + 0x10) {
    operator_delete(*(string **)this);
    return;
  }
  return;
}

