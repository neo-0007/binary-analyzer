
/* std::__ios_failure::~__ios_failure() */

void __thiscall std::__ios_failure::~__ios_failure(__ios_failure *this)

{
  *(undefined ***)this = &PTR____ios_failure_0092c708;
  __destroy_ios_failure(this + 0x20);
  ios_base::failure[abi:cxx11]::~failure((failure_abi_cxx11_ *)this);
  operator_delete(this);
  return;
}

