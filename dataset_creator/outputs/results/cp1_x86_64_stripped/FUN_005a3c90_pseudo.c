
bool FUN_005a3c90(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar7;
  long lVar8;
  ulong uVar6;
  
  uVar6 = param_3 & 0xffffffff;
  uVar5 = (uint)param_3;
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
  lVar8 = *(long *)(param_1 + 0x20) + 8;
  if (((uVar7 & 2) == 0) && (lVar8 = 0, (uVar7 & 0x200000) != 0)) {
    return true;
  }
  uVar3 = FUN_005a1b50(param_2);
  uVar1 = FUN_005a3b90(uVar3,lVar8);
  if (-1 < (int)(~uVar5 | uVar1)) {
    return false;
  }
  if (uVar1 == 0) {
    if ((int)uVar5 < 0) {
      uVar6 = (ulong)*(uint *)(param_1 + 0xac);
    }
    else {
      *(uint *)(param_1 + 0xac) = uVar5;
    }
    lVar4 = param_2;
    if (param_2 == 0) {
      lVar4 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),uVar6);
    }
    *(long *)(param_1 + 0xb8) = lVar4;
    *(undefined4 *)(param_1 + 0xb0) = 0xd;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
  }
  else {
    if ((int)uVar1 < 1) goto LAB_005a3d27;
    if ((int)uVar5 < 0) {
      uVar7 = (ulong)*(uint *)(param_1 + 0xac);
    }
    else {
      *(uint *)(param_1 + 0xac) = uVar5;
      uVar7 = param_3 & 0xffffffff;
    }
    lVar4 = param_2;
    if (param_2 == 0) {
      lVar4 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),uVar7);
    }
    *(long *)(param_1 + 0xb8) = lVar4;
    *(undefined4 *)(param_1 + 0xb0) = 9;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
  }
  if (iVar2 == 0) {
    return false;
  }
LAB_005a3d27:
  uVar3 = FUN_005a1b60(param_2);
  iVar2 = FUN_005a3b90(uVar3,lVar8);
  if ((iVar2 < 1) && ((param_3 >> 0x1f & 1) != 0)) {
    return false;
  }
  if (iVar2 == 0) {
    if ((int)uVar5 < 0) {
      uVar5 = *(uint *)(param_1 + 0xac);
    }
    else {
      *(uint *)(param_1 + 0xac) = uVar5;
    }
    if (param_2 == 0) {
      param_2 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),uVar5);
    }
    *(long *)(param_1 + 0xb8) = param_2;
    *(undefined4 *)(param_1 + 0xb0) = 0xe;
  }
  else {
    if (-1 < iVar2) {
      return true;
    }
    if ((int)uVar5 < 0) {
      uVar5 = *(uint *)(param_1 + 0xac);
    }
    else {
      *(uint *)(param_1 + 0xac) = uVar5;
    }
    if (param_2 == 0) {
      param_2 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),uVar5);
    }
    *(long *)(param_1 + 0xb8) = param_2;
    *(undefined4 *)(param_1 + 0xb0) = 10;
  }
  iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
  return iVar2 != 0;
}

