
undefined8 FUN_005b4b70(ulong param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0x7fffffff;
  if (param_1 < 0x80000000) {
    uVar2 = param_1;
  }
  uVar3 = *param_2;
  if ((((uVar3 & 1) != 0) && (iVar1 = FUN_005466e0(uVar2 & 0xffffffff), iVar1 == 0)) &&
     (param_1 != 0x20)) {
    uVar3 = uVar3 & 0xfffffffffffffffe;
  }
  if ((uVar3 & 2) != 0) {
    iVar1 = FUN_005466b0(uVar2 & 0xffffffff,0x800);
    if (iVar1 == 0) {
      uVar3 = uVar3 & 0xfffffffffffffffd;
    }
  }
  if (((uVar3 & 0x10) != 0) && ((uVar2 & 0xffffff80) != 0)) {
    uVar3 = uVar3 & 0xffffffffffffffef;
  }
  if (((uVar3 & 4) != 0) && (0xff < param_1)) {
    uVar3 = uVar3 & 0xfffffffffffffffb;
  }
  if (((uVar3 & 0x800) != 0) && (0xffff < param_1)) {
    uVar3 = uVar3 & 0xfffffffffffff7ff;
  }
  if ((uVar3 & 0x2000) != 0) {
    if ((param_1 < 0x110000) && (0x7ff < param_1 - 0xd800)) goto LAB_005b4c1f;
    uVar3 = uVar3 & 0xffffffffffffdfff;
  }
  if (uVar3 == 0) {
    return 0xffffffff;
  }
LAB_005b4c1f:
  *param_2 = uVar3;
  return 1;
}

