
/* std::wfstream::wfstream(char const*, std::_Ios_Openmode) */

void __thiscall
std::wfstream::wfstream(wfstream *this,long *param_1,undefined8 param_3,undefined4 param_4)

{
  wfilebuf *this_00;
  long lVar1;
  long lVar2;
  long lVar3;
  wios *pwVar4;
  
  lVar3 = param_1[2];
  lVar1 = param_1[3];
  lVar2 = *(long *)(lVar3 + -0x18);
  *(long *)this = lVar3;
  *(long *)(this + lVar2) = lVar1;
  *(undefined8 *)(this + 8) = 0;
  wios::init((wios *)(this + *(long *)(lVar3 + -0x18)),(wstreambuf *)0x0);
  lVar3 = param_1[4];
  *(long *)(this + 0x10) = lVar3;
  lVar3 = *(long *)(lVar3 + -0x18);
  *(long *)(this + lVar3 + 0x10) = param_1[5];
                    /* try { // try from 0066a0fb to 0066a0ff has its CatchHandler @ 0066a1b6 */
  wios::init((wios *)(this + lVar3 + 0x10),(wstreambuf *)0x0);
  lVar3 = param_1[1];
  lVar1 = param_1[6];
  this_00 = (wfilebuf *)(this + 0x18);
  *(long *)this = lVar3;
  *(long *)(this + *(long *)(lVar3 + -0x18)) = lVar1;
  *(long *)(this + 0x10) = param_1[7];
  lVar3 = *param_1;
  lVar1 = param_1[8];
  *(long *)this = lVar3;
  *(long *)(this + *(long *)(lVar3 + -0x18)) = lVar1;
  *(long *)(this + 0x10) = param_1[9];
                    /* try { // try from 0066a140 to 0066a144 has its CatchHandler @ 0066a1ad */
  wfilebuf::wfilebuf(this_00);
                    /* try { // try from 0066a153 to 0066a19a has its CatchHandler @ 0066a1a4 */
  wios::init((wios *)(this + *(long *)(*(long *)this + -0x18)),(wstreambuf *)this_00);
  lVar3 = wfilebuf::open(this_00,param_3,param_4);
  pwVar4 = (wios *)(this + *(long *)(*(long *)this + -0x18));
  if (lVar3 != 0) {
    wios::clear(pwVar4,0);
    return;
  }
  wios::clear(pwVar4,*(uint *)(pwVar4 + 0x20) | 4);
  return;
}

