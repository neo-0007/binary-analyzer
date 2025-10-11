
/* std::__basic_file<char>::fd() */

void __thiscall std::__basic_file<char>::fd(__basic_file<char> *this)

{
  fileno(*(FILE **)this);
  return;
}

