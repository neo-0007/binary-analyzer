
/* std::wifstream::wifstream(char const*, std::_Ios_Openmode) */

void __thiscall
std::wifstream::wifstream(wifstream *this,long *param_1,undefined8 param_3,uint param_4)

{
  wfilebuf *this_00;
  long lVar1;
  long lVar2;
  long lVar3;
  wios *pwVar4;
  
  lVar3 = param_1[1];
  lVar1 = param_1[2];
  this_00 = (wfilebuf *)(this + 0x10);
  lVar2 = *(long *)(lVar3 + -0x18);
  *(long *)this = lVar3;
  *(long *)(this + lVar2) = lVar1;
  *(undefined8 *)(this + 8) = 0;
  wios::init((wios *)(this + *(long *)(lVar3 + -0x18)),(wstreambuf *)0x0);
  lVar3 = *param_1;
  lVar1 = param_1[3];
  *(long *)this = lVar3;
  *(long *)(this + *(long *)(lVar3 + -0x18)) = lVar1;
                    /* try { // try from 0066a8fb to 0066a8ff has its CatchHandler @ 0066a965 */
  wfilebuf::wfilebuf(this_00);
                    /* try { // try from 0066a90d to 0066a952 has its CatchHandler @ 0066a95c */
  wios::init((wios *)(this + *(long *)(*(long *)this + -0x18)),(wstreambuf *)this_00);
  lVar3 = wfilebuf::open(this_00,param_3,param_4 | 8);
  pwVar4 = (wios *)(this + *(long *)(*(long *)this + -0x18));
  if (lVar3 != 0) {
    wios::clear(pwVar4,0);
    return;
  }
  wios::clear(pwVar4,*(uint *)(pwVar4 + 0x20) | 4);
  return;
}

