
/* std::ios::~ios() */

void __thiscall std::ios::~ios(ios *this)

{
  *(undefined ***)this = &PTR__ios_0092a558;
  ios_base::~ios_base((ios_base *)this);
  operator_delete(this);
  return;
}

