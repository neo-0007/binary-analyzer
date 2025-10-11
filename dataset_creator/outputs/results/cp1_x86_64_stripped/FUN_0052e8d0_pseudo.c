
ulong FUN_0052e8d0(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar3 = FUN_004098f0();
  if (*(int *)(lVar3 + 0x118) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(lVar3 + 0x2ec) < 0) {
    if (*(int *)(lVar3 + 0x11c) == 0) {
      return 0xffffffff;
    }
    if (param_3 != 0) {
      if (param_2 == 0) {
        iVar2 = FUN_0054e3e0(lVar3 + 0x120,param_3,param_4);
      }
      else {
        iVar2 = FUN_004098b0(param_1);
        if (iVar2 == 0) {
          iVar2 = FUN_0054e990(lVar3 + 0x120,param_3,param_2,param_4);
        }
        else {
          iVar2 = FUN_0054e520();
        }
      }
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      return param_4 & 0xffffffff;
    }
    iVar2 = FUN_004098b0(param_1);
    if (iVar2 != 0) {
      uVar4 = FUN_00409fc0(param_1);
      FUN_0054f630(lVar3 + 0x120,uVar4,0x10);
      *(undefined4 *)(lVar3 + 0x2e4) = 0x10;
      *(undefined4 *)(lVar3 + 0x11c) = 0;
      return 0;
    }
    iVar2 = *(int *)(lVar3 + 0x2e4);
    if (iVar2 < 0) {
      return 0xffffffff;
    }
    uVar4 = FUN_00409fc0(param_1);
    uVar5 = FUN_0054f480(lVar3 + 0x120,uVar4,(long)iVar2);
    if ((int)uVar5 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(lVar3 + 0x11c) = 0;
    return uVar5;
  }
  lVar3 = FUN_004098f0(param_1);
  if (param_3 != param_2) {
    return 0xffffffff;
  }
  if (param_4 < 0x18) {
    return 0xffffffff;
  }
  iVar2 = FUN_004098b0(param_1);
  iVar2 = FUN_00536c00(param_1,(-(iVar2 == 0) & 5U) + 0x13,8,param_2);
  if (0 < iVar2) {
    iVar2 = *(int *)(lVar3 + 0x2ec);
    lVar1 = lVar3 + 0x120;
    uVar4 = FUN_00409fc0(param_1);
    iVar2 = FUN_0054e3e0(lVar1,uVar4,(long)iVar2);
    if (iVar2 == 0) {
      param_2 = param_2 + 8;
      param_4 = param_4 - 0x18;
      iVar2 = FUN_004098b0(param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_0054e990();
        if (iVar2 == 0) {
          uVar4 = FUN_00409fc0(param_1);
          FUN_0054f630(lVar1,uVar4,0x10);
          uVar4 = FUN_00409fc0(param_1);
          iVar2 = FUN_00422820(uVar4,param_3 + 8 + param_4,0x10);
          uVar5 = param_4 & 0xffffffff;
          if (iVar2 == 0) goto LAB_0052ea6d;
          FUN_004227b0(param_2,param_4);
        }
      }
      else {
        iVar2 = FUN_0054e520(lVar1,param_3 + 8,param_2,param_4);
        if (iVar2 == 0) {
          FUN_0054f630(lVar1,param_2 + param_4,0x10);
          uVar5 = (ulong)((int)param_4 + 0x18);
          goto LAB_0052ea6d;
        }
      }
    }
  }
  uVar5 = 0xffffffff;
LAB_0052ea6d:
  *(undefined4 *)(lVar3 + 0x11c) = 0;
  *(undefined4 *)(lVar3 + 0x2ec) = 0xffffffff;
  return uVar5;
}

