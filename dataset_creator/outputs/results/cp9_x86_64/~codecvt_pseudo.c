
/* std::codecvt<wchar_t, char, __mbstate_t>::~codecvt() */

void __thiscall
std::codecvt<wchar_t,char,__mbstate_t>::~codecvt(codecvt<wchar_t,char,__mbstate_t> *this)

{
                    /* try { // try from 006aefee to 006aeff2 has its CatchHandler @ 006af002 */
  ~codecvt(this);
  operator_delete(this);
  return;
}

