
/* std::ios_base::_M_move(std::ios_base&) */

void __thiscall std::ios_base::_M_move(ios_base *this,ios_base *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ios_base *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ios_base *piVar7;
  
  piVar7 = this + 0x40;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(this + 0x28) = uVar2;
  piVar3 = *(ios_base **)(this + 200);
  if ((piVar3 != piVar7) && (piVar3 != (ios_base *)0x0)) {
    operator_delete__(piVar3);
  }
  piVar3 = *(ios_base **)(param_1 + 200);
  if (piVar3 == param_1 + 0x40) {
    *(ios_base **)(this + 200) = piVar7;
    lVar6 = 0;
    *(undefined4 *)(this + 0xc0) = 8;
    while( true ) {
      piVar7 = piVar7 + lVar6;
      puVar5 = (undefined8 *)(*(long *)(param_1 + 200) + lVar6);
      lVar6 = lVar6 + 0x10;
      uVar2 = *puVar5;
      uVar4 = puVar5[1];
      *puVar5 = 0;
      puVar5[1] = 0;
      *(undefined8 *)piVar7 = uVar2;
      *(undefined8 *)(piVar7 + 8) = uVar4;
      if (lVar6 == 0x80) break;
      piVar7 = *(ios_base **)(this + 200);
    }
  }
  else {
    *(ios_base **)(param_1 + 200) = param_1 + 0x40;
    *(ios_base **)(this + 200) = piVar3;
    uVar1 = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0xc0) = 8;
    *(undefined4 *)(this + 0xc0) = uVar1;
  }
  locale::operator=((locale *)(this + 0xd0),(locale *)(param_1 + 0xd0));
  return;
}

