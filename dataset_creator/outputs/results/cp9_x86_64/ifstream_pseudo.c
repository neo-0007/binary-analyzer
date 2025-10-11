
/* std::ifstream::ifstream(char const*, std::_Ios_Openmode) */

void __thiscall
std::ifstream::ifstream(ifstream *this,long *param_1,undefined8 param_3,uint param_4)

{
  filebuf *this_00;
  long lVar1;
  long lVar2;
  long lVar3;
  ios *piVar4;
  
  lVar3 = param_1[1];
  lVar1 = param_1[2];
  this_00 = (filebuf *)(this + 0x10);
  lVar2 = *(long *)(lVar3 + -0x18);
  *(long *)this = lVar3;
  *(long *)(this + lVar2) = lVar1;
  *(undefined8 *)(this + 8) = 0;
  ios::init((ios *)(this + *(long *)(lVar3 + -0x18)),(streambuf *)0x0);
  lVar3 = *param_1;
  lVar1 = param_1[3];
  *(long *)this = lVar3;
  *(long *)(this + *(long *)(lVar3 + -0x18)) = lVar1;
                    /* try { // try from 00667d0b to 00667d0f has its CatchHandler @ 00667d75 */
  filebuf::filebuf(this_00);
                    /* try { // try from 00667d1d to 00667d62 has its CatchHandler @ 00667d6c */
  ios::init((ios *)(this + *(long *)(*(long *)this + -0x18)),(streambuf *)this_00);
  lVar3 = filebuf::open(this_00,param_3,param_4 | 8);
  piVar4 = (ios *)(this + *(long *)(*(long *)this + -0x18));
  if (lVar3 != 0) {
    ios::clear(piVar4,0);
    return;
  }
  ios::clear(piVar4,*(uint *)(piVar4 + 0x20) | 4);
  return;
}

