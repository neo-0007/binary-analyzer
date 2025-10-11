
/* std::moneypunct<wchar_t, true>::moneypunct(__locale_struct*, char const*, unsigned long) */

void __thiscall
std::moneypunct<wchar_t,true>::moneypunct
          (moneypunct<wchar_t,true> *this,__locale_struct *param_1,char *param_2,ulong param_3)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(uint *)(this + 8) = (uint)(param_3 != 0);
  *(undefined ***)this = &PTR__moneypunct_0092bb28;
                    /* try { // try from 00695f1f to 00695f23 has its CatchHandler @ 00695f2c */
  _M_initialize_moneypunct((__locale_struct *)this,(char *)param_1);
  return;
}

