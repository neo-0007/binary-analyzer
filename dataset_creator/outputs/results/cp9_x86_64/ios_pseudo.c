
/* std::ios::ios(std::streambuf*) */

void __thiscall std::ios::ios(ios *this,streambuf *param_1)

{
  ios_base::ios_base((ios_base *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR__ios_0092a558;
  *(undefined2 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
                    /* try { // try from 0066c37b to 0066c37f has its CatchHandler @ 0066c388 */
  init(this,param_1);
  return;
}

