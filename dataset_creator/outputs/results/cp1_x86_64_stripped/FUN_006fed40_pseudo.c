
undefined8 FUN_006fed40(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  plVar4 = *(long **)(param_1 + 0x60);
  lVar6 = *(long *)(lVar1 + 0x10);
  lVar2 = *(long *)(lVar1 + 0x50);
  lVar12 = lVar2 - *(long *)(lVar1 + 0x40);
  lVar13 = param_2 - lVar6 >> 2;
  uVar11 = lVar12 >> 2;
  plVar7 = plVar4;
  lVar9 = lVar13;
  if (plVar4 == (long *)0x0) {
    lVar10 = lVar2;
    if (-1 < param_2 - lVar6) {
      *(long *)(lVar1 + 0x48) = lVar2;
      return 0;
    }
LAB_006feec0:
    FUN_00756670(lVar10,lVar2 + lVar9 * 4,-lVar9);
    lVar1 = *(long *)(*(long *)(param_1 + 0xa0) + 0x10);
    FUN_00756660(*(long *)(*(long *)(param_1 + 0xa0) + 0x40) + (uVar11 - lVar9) * 4,lVar1,
                 param_2 - lVar1 >> 2);
    lVar6 = *(long *)(param_1 + 0xa0);
    lVar12 = lVar12 + *(long *)(lVar6 + 0x40);
LAB_006fee94:
    lVar1 = *(long *)(lVar6 + 0x10);
    plVar4 = *(long **)(param_1 + 0x60);
  }
  else {
    do {
      plVar3 = (long *)*plVar7;
      if ((int)plVar7[2] < lVar9) {
        lVar9 = (long)(int)plVar7[2];
      }
      plVar7 = plVar3;
    } while (plVar3 != (long *)0x0);
    uVar8 = lVar13 - lVar9;
    if (uVar11 < uVar8) {
      lVar1 = uVar8 * 4 + 400;
      lVar10 = FUN_007101b0(lVar1);
      if (lVar10 == 0) {
        return 0xffffffff;
      }
      lVar12 = lVar10 + 400;
      if (lVar9 < 0) {
        uVar5 = FUN_00756680(lVar12,lVar9 * 4 + lVar2,-lVar9);
        FUN_00756680(uVar5,lVar6,lVar13);
      }
      else {
        FUN_00756660(lVar12,lVar9 * 4 + lVar6,uVar8);
      }
      FUN_007104f0(*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x40));
      lVar6 = *(long *)(param_1 + 0xa0);
      *(long *)(lVar6 + 0x40) = lVar10;
      *(long *)(lVar6 + 0x50) = lVar1 + lVar10;
      goto LAB_006fee94;
    }
    uVar11 = uVar11 - uVar8;
    lVar12 = uVar11 * 4;
    lVar10 = *(long *)(lVar1 + 0x40) + lVar12;
    if (lVar9 < 0) goto LAB_006feec0;
    if (uVar8 == 0) {
      *(long *)(lVar1 + 0x48) = lVar10;
      goto LAB_006fedf0;
    }
    FUN_00756660(lVar10,lVar6 + lVar9 * 4);
    lVar6 = *(long *)(param_1 + 0xa0);
    plVar4 = *(long **)(param_1 + 0x60);
    lVar1 = *(long *)(lVar6 + 0x10);
    lVar12 = lVar12 + *(long *)(lVar6 + 0x40);
  }
  lVar13 = param_2 - lVar1 >> 2;
  *(long *)(lVar6 + 0x48) = lVar12;
  if (plVar4 == (long *)0x0) {
    return 0;
  }
LAB_006fedf0:
  do {
    *(int *)(plVar4 + 2) = (int)plVar4[2] - (int)lVar13;
    plVar4 = (long *)*plVar4;
  } while (plVar4 != (long *)0x0);
  return 0;
}

