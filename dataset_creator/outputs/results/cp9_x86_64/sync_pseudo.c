
/* std::__basic_file<char>::sync() */

void __thiscall std::__basic_file<char>::sync(__basic_file<char> *this)

{
  fflush(*(FILE **)this);
  return;
}

