
ulong FUN_00704270(uint *param_1,long param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(long *)(param_1 + 0xe) == 0) {
    if (*(long *)(param_1 + 0x12) != 0) {
      FUN_007104f0();
      *param_1 = *param_1 & 0xfffffeff;
    }
    FUN_00706a10(param_1);
  }
  uVar7 = param_3;
  if (param_3 == 0) {
    return 0;
  }
LAB_007042a8:
  do {
    lVar3 = *(long *)(param_1 + 2);
    uVar5 = *(long *)(param_1 + 4) - lVar3;
    if (uVar7 <= uVar5) {
LAB_007043e0:
      thunk_FUN_00713a50(param_2,lVar3,uVar7);
      *(ulong *)(param_1 + 2) = *(long *)(param_1 + 2) + uVar7;
      return param_3;
    }
    while( true ) {
      if (uVar5 == 0) {
        uVar4 = *param_1;
      }
      else {
        uVar7 = uVar7 - uVar5;
        param_2 = thunk_FUN_00713820(param_2,lVar3,uVar5);
        *(ulong *)(param_1 + 2) = *(long *)(param_1 + 2) + uVar5;
        uVar4 = *param_1;
      }
      if ((uVar4 & 0x100) == 0) break;
      FUN_00706410(param_1);
      lVar3 = *(long *)(param_1 + 2);
      uVar5 = *(long *)(param_1 + 4) - lVar3;
      if (uVar7 <= uVar5) goto LAB_007043e0;
    }
    lVar3 = *(long *)(param_1 + 0xe);
    uVar5 = uVar7;
    if (lVar3 != 0) {
      uVar6 = *(long *)(param_1 + 0x10) - lVar3;
      if (uVar7 < uVar6) {
        iVar2 = FUN_007065e0(param_1);
        if (iVar2 == -1) {
          return param_3 - uVar7;
        }
        goto LAB_007042a8;
      }
      if (0x7f < uVar6) {
        uVar5 = uVar7 - uVar7 % uVar6;
      }
    }
    lVar1 = *(long *)(param_1 + 0x36);
    *(long *)(param_1 + 2) = lVar3;
    *(long *)(param_1 + 4) = lVar3;
    *(long *)(param_1 + 6) = lVar3;
    *(long *)(param_1 + 8) = lVar3;
    *(long *)(param_1 + 10) = lVar3;
    *(long *)(param_1 + 0xc) = lVar3;
    if (0x827 < lVar1 - 0x93f160U) {
      FUN_00703130();
    }
    lVar3 = (**(code **)(lVar1 + 0x70))(param_1,param_2,uVar5);
    if (lVar3 < 1) {
      uVar4 = *param_1 | 0x10;
      if (lVar3 != 0) {
        uVar4 = *param_1 | 0x20;
      }
      *param_1 = uVar4;
      return param_3 - uVar7;
    }
    param_2 = param_2 + lVar3;
    uVar7 = uVar7 - lVar3;
    if (*(long *)(param_1 + 0x24) != -1) {
      *(long *)(param_1 + 0x24) = *(long *)(param_1 + 0x24) + lVar3;
    }
    if (uVar7 == 0) {
      return param_3;
    }
  } while( true );
}

