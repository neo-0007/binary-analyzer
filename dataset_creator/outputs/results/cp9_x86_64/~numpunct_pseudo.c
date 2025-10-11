
/* std::numpunct<wchar_t>::~numpunct() */

void __thiscall std::numpunct<wchar_t>::~numpunct(numpunct<wchar_t> *this)

{
                    /* try { // try from 0062a97e to 0062a982 has its CatchHandler @ 0062a992 */
  ~numpunct(this);
  operator_delete(this);
  return;
}

