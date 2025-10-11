
/* std::ios_base::ios_base() */

void __thiscall std::ios_base::ios_base(ios_base *this)

{
  ios_base *piVar1;
  ios_base *piVar2;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__ios_base_0092a5a8;
  piVar1 = this + 0x40;
  do {
    *(undefined8 *)piVar1 = 0;
    piVar2 = piVar1 + 0x10;
    *(undefined8 *)(piVar1 + 8) = 0;
    piVar1 = piVar2;
  } while (this + 0xc0 != piVar2);
  *(ios_base **)(this + 200) = this + 0x40;
  *(undefined4 *)(this + 0xc0) = 8;
  locale::locale((locale *)(this + 0xd0));
  return;
}

