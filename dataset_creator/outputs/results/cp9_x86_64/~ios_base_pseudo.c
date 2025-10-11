
/* std::ios_base::~ios_base() */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  ~ios_base(this);
  operator_delete(this);
  return;
}

