
bool FUN_00484e10(undefined8 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  if (param_3 == 0) {
    return false;
  }
  iVar1 = FUN_00433230(param_3);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = FUN_00433340(param_3);
  iVar2 = FUN_004333a0(param_3);
  iVar3 = FUN_004333c0(param_3);
  iVar4 = FUN_00433340(0);
  iVar5 = FUN_004333a0(0);
  iVar6 = FUN_004333c0(0);
  if (iVar1 == 0x2a2) {
    puVar10 = &DAT_007e6300;
    uVar9 = 0xf;
  }
  else if (iVar1 < 0x2a3) {
    if (iVar1 == 0x2a0) {
      puVar10 = &DAT_007e6320;
      uVar9 = 0xf;
    }
    else if (iVar1 == 0x2a1) {
      puVar10 = &DAT_007e6310;
      uVar9 = 0xf;
    }
    else {
      if (iVar1 != 0x40) {
        return false;
      }
      puVar10 = &DAT_007e6340;
      uVar9 = 0xb;
    }
  }
  else if (iVar1 == 0x446) {
    puVar10 = &DAT_007e62f0;
    uVar9 = 0xf;
  }
  else if (iVar1 == 0x447) {
    puVar10 = &DAT_007e62e0;
    uVar9 = 0xf;
  }
  else {
    if (iVar1 != 0x2a3) {
      return false;
    }
    puVar10 = &DAT_007e6330;
    uVar9 = 0xf;
  }
  iVar7 = FUN_00546d60(param_1,param_2);
  if (iVar7 == 0) {
    return false;
  }
  if ((iVar3 != iVar6) && (iVar3 = FUN_00546c30(param_1,3,(long)iVar3), iVar3 == 0)) {
    return false;
  }
  if ((iVar2 != iVar5) && (iVar2 = FUN_00546c30(param_1,2,(long)iVar2), iVar2 == 0)) {
    return false;
  }
  iVar2 = FUN_00433360(param_3);
  if (iVar2 != 0x38f) {
    return false;
  }
  iVar2 = FUN_00433380(param_3);
  if (iVar2 == 0x2a2) {
    puVar8 = &DAT_007e6260;
  }
  else if (iVar2 < 0x2a3) {
    if (iVar2 == 0x2a0) {
      puVar8 = &DAT_007e62a0;
    }
    else {
      puVar8 = &DAT_007e6280;
      if (iVar2 != 0x2a1) {
        if (iVar2 != 0x40) {
          return false;
        }
        goto LAB_00484fcc;
      }
    }
  }
  else if (iVar2 == 0x446) {
    puVar8 = &DAT_007e6240;
  }
  else {
    puVar8 = &DAT_007e6220;
    if ((iVar2 != 0x447) && (puVar8 = &DAT_007e62c0, iVar2 != 0x2a3)) {
      return false;
    }
  }
  iVar2 = FUN_00546a10(param_1,1,puVar8,0x1c);
  if (iVar2 == 0) {
    return false;
  }
LAB_00484fcc:
  if ((iVar1 != iVar4) && (iVar1 = FUN_00546a10(param_1,0,puVar10,uVar9), iVar1 == 0)) {
    return false;
  }
  iVar1 = FUN_00546da0(param_1,param_2);
  return iVar1 != 0;
}

