
undefined8 FUN_005a4ea0(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 200) = param_2;
  }
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
  lVar5 = *(long *)(param_1 + 0x20) + 8;
  if (((uVar1 & 2) == 0) && (lVar5 = 0, (uVar1 & 0x200000) != 0)) {
    return 1;
  }
  uVar3 = FUN_005a9810(param_2);
  iVar2 = FUN_005a3b90(uVar3,lVar5);
  if (iVar2 == 0) {
    if (param_3 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xb0) = 0xf;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
    lVar4 = FUN_005a9820(param_2);
    if (lVar4 == 0) goto LAB_005a4ff6;
    uVar3 = FUN_005a9820(param_2);
    iVar2 = FUN_005a3b90(uVar3,lVar5);
    if (iVar2 == 0) goto LAB_005a4fe0;
    if (-1 < iVar2) goto LAB_005a4ff6;
LAB_005a4fb0:
    if ((*(byte *)(param_1 + 0xd0) & 2) != 0) goto LAB_005a4f55;
    if (param_3 == 0) {
      return 0;
    }
LAB_005a4fc0:
    *(undefined4 *)(param_1 + 0xb0) = 0xc;
LAB_005a4fea:
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    if (iVar2 < 1) {
      lVar4 = FUN_005a9820(param_2);
      if (lVar4 != 0) {
        uVar3 = FUN_005a9820(param_2);
        iVar2 = FUN_005a3b90(uVar3,lVar5);
        if (iVar2 == 0) {
          if (param_3 == 0) {
            return 0;
          }
          goto LAB_005a4fe0;
        }
        if (iVar2 < 0) goto LAB_005a4fb0;
      }
    }
    else {
      if (param_3 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xb0) = 0xb;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 == 0) {
        return 0;
      }
      lVar4 = FUN_005a9820(param_2);
      if (lVar4 == 0) goto LAB_005a4ff6;
      uVar3 = FUN_005a9820(param_2);
      iVar2 = FUN_005a3b90(uVar3,lVar5);
      if (iVar2 == 0) {
LAB_005a4fe0:
        *(undefined4 *)(param_1 + 0xb0) = 0x10;
        goto LAB_005a4fea;
      }
      if (-1 < iVar2) goto LAB_005a4ff6;
      if ((*(byte *)(param_1 + 0xd0) & 2) == 0) goto LAB_005a4fc0;
    }
LAB_005a4f55:
    if (param_3 == 0) {
      return 1;
    }
  }
LAB_005a4ff6:
  *(undefined8 *)(param_1 + 200) = 0;
  return 1;
}

