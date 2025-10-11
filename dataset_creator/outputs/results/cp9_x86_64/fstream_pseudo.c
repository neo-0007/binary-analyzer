
/* std::fstream::fstream(char const*, std::_Ios_Openmode) */

void __thiscall
std::fstream::fstream(fstream *this,long *param_1,undefined8 param_3,undefined4 param_4)

{
  filebuf *this_00;
  long lVar1;
  long lVar2;
  long lVar3;
  ios *piVar4;
  
  lVar3 = param_1[2];
  lVar1 = param_1[3];
  lVar2 = *(long *)(lVar3 + -0x18);
  *(long *)this = lVar3;
  *(long *)(this + lVar2) = lVar1;
  *(undefined8 *)(this + 8) = 0;
  ios::init((ios *)(this + *(long *)(lVar3 + -0x18)),(streambuf *)0x0);
  lVar3 = param_1[4];
  *(long *)(this + 0x10) = lVar3;
  lVar3 = *(long *)(lVar3 + -0x18);
  *(long *)(this + lVar3 + 0x10) = param_1[5];
                    /* try { // try from 0066750b to 0066750f has its CatchHandler @ 006675c6 */
  ios::init((ios *)(this + lVar3 + 0x10),(streambuf *)0x0);
  lVar3 = param_1[1];
  lVar1 = param_1[6];
  this_00 = (filebuf *)(this + 0x18);
  *(long *)this = lVar3;
  *(long *)(this + *(long *)(lVar3 + -0x18)) = lVar1;
  *(long *)(this + 0x10) = param_1[7];
  lVar3 = *param_1;
  lVar1 = param_1[8];
  *(long *)this = lVar3;
  *(long *)(this + *(long *)(lVar3 + -0x18)) = lVar1;
  *(long *)(this + 0x10) = param_1[9];
                    /* try { // try from 00667550 to 00667554 has its CatchHandler @ 006675bd */
  filebuf::filebuf(this_00);
                    /* try { // try from 00667563 to 006675aa has its CatchHandler @ 006675b4 */
  ios::init((ios *)(this + *(long *)(*(long *)this + -0x18)),(streambuf *)this_00);
  lVar3 = filebuf::open(this_00,param_3,param_4);
  piVar4 = (ios *)(this + *(long *)(*(long *)this + -0x18));
  if (lVar3 != 0) {
    ios::clear(piVar4,0);
    return;
  }
  ios::clear(piVar4,*(uint *)(piVar4 + 0x20) | 4);
  return;
}

