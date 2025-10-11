
/* std::ios_base::_M_grow_words(int, bool) */

ios_base * __thiscall std::ios_base::_M_grow_words(ios_base *this,int param_1,bool param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ios_base *piVar4;
  long lVar5;
  ios_base *piVar6;
  char *pcVar7;
  int iVar8;
  
  if (0x7ffffffe < (uint)param_1) {
    pcVar7 = "ios_base::_M_grow_words is not valid";
LAB_0066cfef:
    uVar1 = *(uint *)(this + 0x20);
    *(uint *)(this + 0x20) = uVar1 | 1;
    if (((uVar1 | 1) & *(uint *)(this + 0x1c)) != 0) {
                    /* WARNING: Subroutine does not return */
      __throw_ios_failure(pcVar7);
    }
    if (param_2) {
      *(undefined8 *)(this + 0x38) = 0;
    }
    else {
      *(undefined8 *)(this + 0x30) = 0;
    }
    return this + 0x30;
  }
  iVar8 = 8;
  piVar4 = this + 0x40;
  if (7 < param_1) {
    iVar8 = param_1 + 1;
    piVar4 = (ios_base *)operator_new__((long)iVar8 << 4,(nothrow_t *)&nothrow);
    if (piVar4 == (ios_base *)0x0) {
      pcVar7 = "ios_base::_M_grow_words allocation failed";
      goto LAB_0066cfef;
    }
    lVar5 = (long)iVar8 + -2;
    piVar6 = piVar4;
    do {
      lVar5 = lVar5 + -1;
      *(undefined8 *)piVar6 = 0;
      *(undefined8 *)(piVar6 + 8) = 0;
      piVar6 = piVar6 + 0x10;
    } while (lVar5 != -2);
    iVar2 = *(int *)(this + 0xc0);
    piVar6 = *(ios_base **)(this + 200);
    lVar5 = 0;
    if (0 < iVar2) {
      do {
        uVar3 = *(undefined8 *)(piVar6 + lVar5 + 8);
        *(undefined8 *)(piVar4 + lVar5) = *(undefined8 *)(piVar6 + lVar5);
        *(undefined8 *)(piVar4 + lVar5 + 8) = uVar3;
        lVar5 = lVar5 + 0x10;
      } while ((long)iVar2 * 0x10 != lVar5);
    }
    if ((this + 0x40 != piVar6) && (piVar6 != (ios_base *)0x0)) {
      operator_delete__(piVar6);
    }
  }
  *(ios_base **)(this + 200) = piVar4;
  *(int *)(this + 0xc0) = iVar8;
  return piVar4 + (long)param_1 * 0x10;
}

