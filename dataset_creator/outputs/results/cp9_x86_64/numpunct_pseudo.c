
/* std::numpunct<wchar_t>::numpunct(__locale_struct*, unsigned long) */

void __thiscall
std::numpunct<wchar_t>::numpunct(numpunct<wchar_t> *this,__locale_struct *param_1,ulong param_2)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(uint *)(this + 8) = (uint)(param_2 != 0);
  *(undefined ***)this = &PTR__numpunct_0092b980;
                    /* try { // try from 0069683f to 00696843 has its CatchHandler @ 0069684c */
  _M_initialize_numpunct(this,param_1);
  return;
}

