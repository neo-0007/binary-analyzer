
/* std::__moneypunct_cache<wchar_t, false>::~__moneypunct_cache() */

void __thiscall
std::__moneypunct_cache<wchar_t,false>::~__moneypunct_cache(__moneypunct_cache<wchar_t,false> *this)

{
                    /* try { // try from 00627ebe to 00627ec2 has its CatchHandler @ 00627ed2 */
  ~__moneypunct_cache(this);
  operator_delete(this);
  return;
}

