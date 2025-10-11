
/* std::wios::~wios() */

void __thiscall std::wios::~wios(wios *this)

{
  *(undefined ***)this = &PTR__wios_0092a578;
  ios_base::~ios_base((ios_base *)this);
  operator_delete(this);
  return;
}

