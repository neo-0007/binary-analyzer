
undefined8 FUN_007697f0(long param_1,int param_2,undefined8 *param_3,long *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  if (*(long *)param_3[3] == 0) {
    return 1;
  }
  lVar8 = 0;
  do {
    lVar8 = lVar8 + 1;
  } while (((long *)param_3[3])[lVar8] != 0);
  if (lVar8 == 0) {
    return 1;
  }
  if (0x10 < *(uint *)((long)param_3 + 0x14)) {
    return 1;
  }
  plVar4 = (long *)*param_4;
  if (plVar4 == (long *)0x0) {
    lVar9 = 0;
    lVar6 = lVar8;
  }
  else {
    lVar9 = 0;
    plVar3 = plVar4;
    do {
      plVar3 = (long *)*plVar3;
      lVar9 = lVar9 + 1;
    } while (plVar3 != (long *)0x0);
    lVar6 = lVar9 + lVar8;
  }
  plVar4 = (long *)FUN_00710840(plVar4,lVar6 * 0x28);
  if (plVar4 == (long *)0x0) {
LAB_007699f6:
    uVar7 = 0;
  }
  else {
    *param_4 = (long)plVar4;
    *(bool *)((long)param_4 + 0x19) = param_2 == 10;
    *(undefined1 *)(param_4 + 3) = 1;
    if (param_4[2] == 0) {
      lVar6 = FUN_007128a0(*param_3);
      param_4[2] = lVar6;
      if (lVar6 == 0) goto LAB_007699f6;
    }
    if (lVar9 != 0) {
      plVar3 = plVar4;
      do {
        plVar5 = plVar3 + 5;
        *plVar3 = (long)plVar5;
        plVar3 = plVar5;
      } while (plVar5 != plVar4 + lVar9 * 5);
    }
    plVar4 = plVar4 + lVar9 * 5;
    thunk_FUN_00713720(plVar4,0,lVar8 * 0x28);
    if (param_2 == 2) {
      lVar9 = 0;
      lVar6 = (long)plVar4 + 0x14;
      do {
        while (puVar2 = *(undefined4 **)(param_3[3] + lVar9), *(int *)(param_1 + 4) != 10) {
          *(undefined4 *)(lVar6 + -4) = 2;
          lVar9 = lVar9 + 8;
          lVar6 = thunk_FUN_00713a50(lVar6,puVar2,(long)*(int *)((long)param_3 + 0x14));
          *(long *)(lVar6 + -0x14) = lVar6 + 0x14;
          lVar6 = lVar6 + 0x28;
          if (lVar9 == lVar8 * 8) goto LAB_0076993a;
        }
        *(undefined4 *)(lVar6 + -4) = 10;
        uVar1 = *puVar2;
        lVar9 = lVar9 + 8;
        *(undefined4 *)(lVar6 + 8) = 0xffff0000;
        *(undefined4 *)(lVar6 + 0xc) = uVar1;
        *(long *)(lVar6 + -0x14) = lVar6 + 0x14;
        lVar6 = lVar6 + 0x28;
      } while (lVar8 * 8 != lVar9);
    }
    else {
      lVar6 = 0;
      plVar3 = plVar4;
      do {
        uVar7 = *(undefined8 *)(param_3[3] + lVar6);
        *(int *)(plVar3 + 2) = param_2;
        lVar6 = lVar6 + 8;
        thunk_FUN_00713a50((long)plVar3 + 0x14,uVar7,(long)*(int *)((long)param_3 + 0x14));
        *plVar3 = (long)(plVar3 + 5);
        plVar3 = plVar3 + 5;
      } while (lVar6 != lVar8 * 8);
    }
LAB_0076993a:
    plVar4[lVar8 * 5 + -5] = 0;
    uVar7 = 1;
  }
  return uVar7;
}

