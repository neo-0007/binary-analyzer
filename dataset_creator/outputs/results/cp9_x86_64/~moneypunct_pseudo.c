
/* std::moneypunct<wchar_t, false>::~moneypunct() */

void __thiscall std::moneypunct<wchar_t,false>::~moneypunct(moneypunct<wchar_t,false> *this)

{
                    /* try { // try from 00629aee to 00629af2 has its CatchHandler @ 00629b02 */
  ~moneypunct(this);
  operator_delete(this);
  return;
}

