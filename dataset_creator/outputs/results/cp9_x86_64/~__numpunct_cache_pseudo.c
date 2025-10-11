
/* std::__numpunct_cache<wchar_t>::~__numpunct_cache() */

void __thiscall std::__numpunct_cache<wchar_t>::~__numpunct_cache(__numpunct_cache<wchar_t> *this)

{
                    /* try { // try from 0062a1ae to 0062a1b2 has its CatchHandler @ 0062a1c2 */
  ~__numpunct_cache(this);
  operator_delete(this);
  return;
}

