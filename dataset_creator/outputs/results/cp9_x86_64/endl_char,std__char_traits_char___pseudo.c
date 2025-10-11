
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::ostream& std::endl<char, std::char_traits<char> >(std::ostream&) */

ostream * std::endl<char,std::char_traits<char>>(ostream *param_1)

{
  ctype<char> *this;
  ctype<char> cVar1;
  ostream *poVar2;
  
  this = *(ctype<char> **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xf0);
  if (this != (ctype<char> *)0x0) {
    if (this[0x38] == (ctype<char>)0x0) {
      ctype<char>::_M_widen_init(this);
      cVar1 = (ctype<char>)0xa;
      if (*(code **)(*(long *)this + 0x30) != ctype<char>::do_widen) {
        cVar1 = (ctype<char>)(**(code **)(*(long *)this + 0x30))(this);
      }
    }
    else {
      cVar1 = this[0x43];
    }
    poVar2 = (ostream *)ostream::put(param_1,(char)cVar1);
    poVar2 = (ostream *)ostream::flush(poVar2);
    return poVar2;
  }
                    /* WARNING: Subroutine does not return */
  __throw_bad_cast();
}

