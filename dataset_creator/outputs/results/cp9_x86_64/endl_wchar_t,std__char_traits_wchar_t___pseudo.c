
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::wostream& std::endl<wchar_t, std::char_traits<wchar_t> >(std::wostream&) */

wostream * std::endl<wchar_t,std::char_traits<wchar_t>>(wostream *param_1)

{
  long *plVar1;
  wchar_t wVar2;
  wostream *pwVar3;
  
  plVar1 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xf0);
  if (plVar1 != (long *)0x0) {
    wVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,10);
    pwVar3 = (wostream *)wostream::put(param_1,wVar2);
    pwVar3 = (wostream *)wostream::flush(pwVar3);
    return pwVar3;
  }
                    /* WARNING: Subroutine does not return */
  __throw_bad_cast();
}

