
/* std::ctype_byname<char>::~ctype_byname() */

void __thiscall std::ctype_byname<char>::~ctype_byname(ctype_byname<char> *this)

{
  ~ctype_byname(this);
  operator_delete(this);
  return;
}

