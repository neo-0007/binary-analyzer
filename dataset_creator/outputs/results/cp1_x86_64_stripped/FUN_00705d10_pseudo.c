
undefined8 FUN_00705d10(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  
  lVar9 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x58);
  plVar4 = *(long **)(param_1 + 0x60);
  lVar10 = *(long *)(param_1 + 0x48);
  lVar11 = param_2 - lVar9;
  uVar12 = lVar2 - lVar10;
  plVar6 = plVar4;
  lVar8 = lVar11;
  if (plVar4 == (long *)0x0) {
    lVar10 = lVar2;
    if (-1 < lVar11) {
      *(long *)(param_1 + 0x50) = lVar2;
      return 0;
    }
LAB_00705e48:
    thunk_FUN_00713610(lVar10,lVar2 + lVar8,-lVar8);
    lVar9 = *(long *)(param_1 + 0x18);
    lVar10 = (uVar12 - lVar8) + *(long *)(param_1 + 0x48);
    uVar7 = param_2 - lVar9;
LAB_00705e6a:
    thunk_FUN_00713a50(lVar10,lVar9,uVar7);
    lVar11 = *(long *)(param_1 + 0x18);
    plVar4 = *(long **)(param_1 + 0x60);
    lVar13 = uVar12 + *(long *)(param_1 + 0x48);
  }
  else {
    do {
      plVar1 = plVar6 + 2;
      plVar6 = (long *)*plVar6;
      if ((int)*plVar1 < lVar8) {
        lVar8 = (long)(int)*plVar1;
      }
    } while (plVar6 != (long *)0x0);
    uVar7 = lVar11 - lVar8;
    if (uVar7 <= uVar12) {
      uVar12 = uVar12 - uVar7;
      lVar10 = lVar10 + uVar12;
      if (lVar8 < 0) goto LAB_00705e48;
      if (uVar7 == 0) {
        *(long *)(param_1 + 0x50) = lVar10;
        goto LAB_00705d90;
      }
      lVar9 = lVar9 + lVar8;
      goto LAB_00705e6a;
    }
    lVar3 = FUN_007101b0(uVar7 + 100);
    if (lVar3 == 0) {
      return 0xffffffff;
    }
    lVar13 = lVar3 + 100;
    if (lVar8 < 0) {
      uVar5 = thunk_FUN_00713820(lVar13,lVar2 + lVar8,-lVar8);
      thunk_FUN_00713a50(uVar5,lVar9,lVar11);
    }
    else {
      thunk_FUN_00713a50(lVar13,lVar9 + lVar8,uVar7);
    }
    FUN_007104f0(lVar10);
    lVar11 = *(long *)(param_1 + 0x18);
    plVar4 = *(long **)(param_1 + 0x60);
    *(long *)(param_1 + 0x48) = lVar3;
    *(ulong *)(param_1 + 0x58) = lVar3 + uVar7 + 100;
  }
  lVar11 = param_2 - lVar11;
  *(long *)(param_1 + 0x50) = lVar13;
  if (plVar4 == (long *)0x0) {
    return 0;
  }
LAB_00705d90:
  do {
    *(int *)(plVar4 + 2) = (int)plVar4[2] - (int)lVar11;
    plVar4 = (long *)*plVar4;
  } while (plVar4 != (long *)0x0);
  return 0;
}

