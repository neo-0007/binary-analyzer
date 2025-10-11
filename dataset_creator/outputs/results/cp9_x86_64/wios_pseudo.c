
/* std::wios::wios(std::wstreambuf*) */

void __thiscall std::wios::wios(wios *this,wstreambuf *param_1)

{
  ios_base::ios_base((ios_base *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR__wios_0092a578;
  this[0xe4] = (wios)0x0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
                    /* try { // try from 0066ccd3 to 0066ccd7 has its CatchHandler @ 0066cce0 */
  init(this,param_1);
  return;
}

