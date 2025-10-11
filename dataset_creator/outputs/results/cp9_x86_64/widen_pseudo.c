
/* std::ctype<char>::widen(char const*, char const*, char*) const */

char * __thiscall
std::ctype<char>::widen(ctype<char> *this,char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  if (this[0x38] != (ctype<char>)0x1) {
    if (this[0x38] == (ctype<char>)0x0) {
      _M_widen_init(this);
    }
    if (*(code **)(*(long *)this + 0x38) != do_widen) {
                    /* WARNING: Could not recover jumptable at 0x006768a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar1 = (char *)(**(code **)(*(long *)this + 0x38))(this,param_1,param_2,param_3);
      return pcVar1;
    }
  }
  if (param_1 != param_2) {
    memcpy(param_3,param_1,(long)param_2 - (long)param_1);
    param_1 = param_2;
  }
  return param_1;
}

