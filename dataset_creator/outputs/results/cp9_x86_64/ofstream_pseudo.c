
/* std::ofstream::ofstream(char const*, std::_Ios_Openmode) */

void __thiscall
std::ofstream::ofstream(ofstream *this,long *param_1,undefined8 param_3,uint param_4)

{
  filebuf *this_00;
  long lVar1;
  long lVar2;
  ios *piVar3;
  
  lVar2 = param_1[1];
  this_00 = (filebuf *)(this + 8);
  *(long *)this = lVar2;
  lVar2 = *(long *)(lVar2 + -0x18);
  *(long *)(this + lVar2) = param_1[2];
  ios::init((ios *)(this + lVar2),(streambuf *)0x0);
  lVar2 = *param_1;
  lVar1 = param_1[3];
  *(long *)this = lVar2;
  *(long *)(this + *(long *)(lVar2 + -0x18)) = lVar1;
                    /* try { // try from 00667eee to 00667ef2 has its CatchHandler @ 00667f55 */
  filebuf::filebuf(this_00);
                    /* try { // try from 00667f00 to 00667f42 has its CatchHandler @ 00667f4c */
  ios::init((ios *)(this + *(long *)(*(long *)this + -0x18)),(streambuf *)this_00);
  lVar2 = filebuf::open(this_00,param_3,param_4 | 0x10);
  piVar3 = (ios *)(this + *(long *)(*(long *)this + -0x18));
  if (lVar2 != 0) {
    ios::clear(piVar3,0);
    return;
  }
  ios::clear(piVar3,*(uint *)(piVar3 + 0x20) | 4);
  return;
}

