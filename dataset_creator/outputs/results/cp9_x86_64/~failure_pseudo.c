
/* std::ios_base::failure::~failure() */

void __thiscall std::ios_base::failure::~failure(failure *this)

{
  ~failure(this);
  operator_delete(this);
  return;
}

