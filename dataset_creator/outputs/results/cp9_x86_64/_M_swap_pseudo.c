
/* std::ios_base::_M_swap(std::ios_base&) */

void __thiscall std::ios_base::_M_swap(ios_base *this,ios_base *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ios_base *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ios_base *piVar6;
  ios_base *piVar7;
  ios_base *piVar8;
  ios_base *piVar9;
  ios_base *piVar10;
  long in_FS_OFFSET;
  locale alStack_48 [8];
  long local_40;
  
  piVar6 = this + 0x40;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar1 = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar2 = *(undefined8 *)(this + 0x28);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  piVar8 = param_1 + 0x40;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  piVar7 = *(ios_base **)(this + 200);
  piVar3 = *(ios_base **)(param_1 + 200);
  if (piVar7 == piVar6) {
    if (piVar3 == piVar8) {
      do {
        uVar5 = *(undefined8 *)(piVar8 + 8);
        uVar2 = *(undefined8 *)piVar6;
        piVar7 = piVar6 + 0x10;
        uVar4 = *(undefined8 *)(piVar6 + 8);
        *(undefined8 *)piVar6 = *(undefined8 *)piVar8;
        *(undefined8 *)(piVar6 + 8) = uVar5;
        *(undefined8 *)piVar8 = uVar2;
        *(undefined8 *)(piVar8 + 8) = uVar4;
        piVar6 = piVar7;
        piVar8 = piVar8 + 0x10;
      } while (this + 0xc0 != piVar7);
      goto LAB_0066d423;
    }
    if (piVar7 != piVar6) goto LAB_0066d3f8;
LAB_0066d3c3:
    piVar9 = this;
    piVar10 = param_1;
    if (piVar7 == piVar6) {
      piVar6 = piVar8;
      piVar7 = piVar3;
      piVar9 = param_1;
      piVar10 = this;
    }
    memmove(piVar9 + 0x40,piVar10 + 0x40,0x80);
    *(ios_base **)(piVar10 + 200) = piVar7;
    *(ios_base **)(piVar9 + 200) = piVar6;
  }
  else {
LAB_0066d3f8:
    if (piVar3 == piVar8) goto LAB_0066d3c3;
    *(ios_base **)(this + 200) = piVar3;
    *(ios_base **)(param_1 + 200) = piVar7;
  }
  uVar1 = *(undefined4 *)(this + 0xc0);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xc0) = uVar1;
LAB_0066d423:
  locale::locale(alStack_48,(locale *)(this + 0xd0));
  locale::operator=((locale *)(this + 0xd0),(locale *)(param_1 + 0xd0));
  locale::operator=((locale *)(param_1 + 0xd0),alStack_48);
  locale::~locale(alStack_48);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

