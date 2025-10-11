
/* std::wofstream::wofstream(char const*, std::_Ios_Openmode) */

void __thiscall
std::wofstream::wofstream(wofstream *this,long *param_1,undefined8 param_3,uint param_4)

{
  wfilebuf *this_00;
  long lVar1;
  long lVar2;
  wios *pwVar3;
  
  lVar2 = param_1[1];
  this_00 = (wfilebuf *)(this + 8);
  *(long *)this = lVar2;
  lVar2 = *(long *)(lVar2 + -0x18);
  *(long *)(this + lVar2) = param_1[2];
  wios::init((wios *)(this + lVar2),(wstreambuf *)0x0);
  lVar2 = *param_1;
  lVar1 = param_1[3];
  *(long *)this = lVar2;
  *(long *)(this + *(long *)(lVar2 + -0x18)) = lVar1;
                    /* try { // try from 0066aade to 0066aae2 has its CatchHandler @ 0066ab45 */
  wfilebuf::wfilebuf(this_00);
                    /* try { // try from 0066aaf0 to 0066ab32 has its CatchHandler @ 0066ab3c */
  wios::init((wios *)(this + *(long *)(*(long *)this + -0x18)),(wstreambuf *)this_00);
  lVar2 = wfilebuf::open(this_00,param_3,param_4 | 0x10);
  pwVar3 = (wios *)(this + *(long *)(*(long *)this + -0x18));
  if (lVar2 != 0) {
    wios::clear(pwVar3,0);
    return;
  }
  wios::clear(pwVar3,*(uint *)(pwVar3 + 0x20) | 4);
  return;
}

