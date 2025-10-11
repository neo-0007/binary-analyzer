
/* std::__basic_file<char>::~__basic_file() */

void __thiscall std::__basic_file<char>::~__basic_file(__basic_file<char> *this)

{
  close(this);
  return;
}

