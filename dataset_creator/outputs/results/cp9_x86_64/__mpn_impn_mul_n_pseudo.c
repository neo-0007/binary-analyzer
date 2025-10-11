
void __mpn_impn_mul_n(long param_1,long param_2,long param_3,ulong param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  bool bVar13;
  long local_68;
  
  uVar10 = (ulong)((uint)param_4 & 1);
  if ((param_4 & 1) != 0) {
    lVar8 = param_4 - 1;
    if (lVar8 < 0x20) {
      __mpn_impn_mul_n_basecase();
    }
    else {
      __mpn_impn_mul_n();
    }
    lVar1 = param_1 + lVar8 * 8;
    uVar7 = __mpn_addmul_1(lVar1,param_2,lVar8,*(undefined8 *)(param_3 + lVar8 * 8));
    *(undefined8 *)(param_1 + lVar8 * 0x10) = uVar7;
    uVar7 = __mpn_addmul_1(lVar1,param_3,param_4,*(undefined8 *)(param_2 + lVar8 * 8));
    *(undefined8 *)(param_1 + (lVar8 + param_4) * 8) = uVar7;
    return;
  }
  uVar12 = (long)param_4 >> 1;
  lVar1 = uVar12 * 8;
  lVar8 = param_3 + lVar1;
  lVar11 = param_2 + lVar1;
  lVar4 = param_4 * 8;
  plVar2 = (long *)(param_1 + lVar4);
  if ((long)uVar12 < 0x20) {
    __mpn_impn_mul_n_basecase(plVar2,lVar11,lVar8,uVar12);
  }
  else {
    __mpn_impn_mul_n(plVar2,lVar11,lVar8,uVar12);
  }
  iVar6 = __mpn_cmp(lVar11,param_2,uVar12);
  bVar13 = iVar6 < 0;
  if (bVar13) {
    __mpn_sub_n(param_1,param_2,lVar11,uVar12);
  }
  else {
    __mpn_sub_n(param_1,lVar11,param_2,uVar12);
  }
  iVar6 = __mpn_cmp(lVar8,param_3,uVar12);
  lVar11 = param_1 + lVar1;
  if (iVar6 < 0) {
    __mpn_sub_n(lVar11,param_3,lVar8,uVar12);
  }
  else {
    __mpn_sub_n(lVar11,lVar8,param_3,uVar12);
    bVar13 = !bVar13;
  }
  if ((long)uVar12 < 0x20) {
    __mpn_impn_mul_n_basecase(param_5,param_1,lVar11,uVar12);
    if (0 < (long)uVar12) goto LAB_006e9fd8;
  }
  else {
    __mpn_impn_mul_n(param_5,param_1,lVar11,uVar12,param_5 + lVar4);
LAB_006e9fd8:
    if ((lVar4 + 8 == lVar1) || ((long)uVar12 < 4)) {
      lVar8 = 0;
      do {
        *(long *)(lVar11 + lVar8 * 8) = plVar2[lVar8];
        lVar8 = lVar8 + 1;
      } while (lVar8 < (long)uVar12);
    }
    else {
      uVar9 = 1;
      if (0 < (long)uVar12) {
        uVar9 = uVar12;
      }
      lVar8 = 0;
      do {
        uVar7 = ((undefined8 *)((long)plVar2 + lVar8))[1];
        *(undefined8 *)(lVar11 + lVar8) = *(undefined8 *)((long)plVar2 + lVar8);
        ((undefined8 *)(lVar11 + lVar8))[1] = uVar7;
        lVar8 = lVar8 + 0x10;
      } while (lVar8 != (uVar9 >> 1) * 0x10);
      if ((uVar9 & 1) != 0) {
        *(undefined8 *)(param_1 + ((uVar9 & 0xfffffffffffffffe) + uVar12) * 8) =
             *(undefined8 *)(param_1 + (param_4 + (uVar9 & 0xfffffffffffffffe)) * 8);
      }
    }
  }
  puVar3 = (ulong *)(param_1 + (uVar12 + param_4) * 8);
  local_68 = __mpn_add_n(plVar2,plVar2,puVar3,uVar12);
  if (bVar13) {
    lVar8 = __mpn_sub_n(lVar11,lVar11,param_5,param_4);
    lVar8 = -lVar8;
  }
  else {
    lVar8 = __mpn_add_n(lVar11,lVar11,param_5,param_4);
  }
  local_68 = local_68 + lVar8;
  if ((long)uVar12 < 0x20) {
    __mpn_impn_mul_n_basecase(param_5,param_2,param_3,uVar12);
    lVar8 = __mpn_add_n(lVar11,lVar11,param_5,param_4);
    uVar9 = lVar8 + local_68;
    if ((uVar9 != 0) && (uVar5 = *puVar3, *puVar3 = *puVar3 + uVar9, CARRY8(uVar5,uVar9))) {
LAB_006ea253:
      lVar8 = 0;
      do {
        if (uVar12 - 1 == lVar8) break;
        uVar9 = puVar3[lVar8 + 1];
        puVar3[lVar8 + 1] = uVar9 + 1;
        lVar8 = lVar8 + 1;
      } while (uVar9 + 1 == 0);
    }
    if ((long)uVar12 < 1) goto LAB_006ea168;
  }
  else {
    __mpn_impn_mul_n(param_5,param_2,param_3,uVar12,lVar4 + param_5);
    lVar8 = __mpn_add_n(lVar11,lVar11,param_5,param_4);
    uVar9 = lVar8 + local_68;
    if ((uVar9 != 0) && (uVar5 = *puVar3, *puVar3 = *puVar3 + uVar9, CARRY8(uVar5,uVar9)))
    goto LAB_006ea253;
  }
  if ((param_1 == param_5 + 8) || ((long)uVar12 < 4)) {
    do {
      *(undefined8 *)(param_1 + uVar10 * 8) = *(undefined8 *)(param_5 + uVar10 * 8);
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)uVar12);
  }
  else {
    uVar10 = 1;
    if (0 < (long)uVar12) {
      uVar10 = uVar12;
    }
    lVar8 = 0;
    do {
      uVar7 = ((undefined8 *)(param_5 + lVar8))[1];
      *(undefined8 *)(param_1 + lVar8) = *(undefined8 *)(param_5 + lVar8);
      ((undefined8 *)(param_1 + lVar8))[1] = uVar7;
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != (uVar10 >> 1) * 0x10);
    if ((uVar10 & 1) != 0) {
      *(undefined8 *)(param_1 + (uVar10 & 0xfffffffffffffffe) * 8) =
           *(undefined8 *)(param_5 + (uVar10 & 0xfffffffffffffffe) * 8);
    }
  }
LAB_006ea168:
  lVar8 = __mpn_add_n(lVar11,lVar11,lVar1 + param_5,uVar12);
  if ((lVar8 != 0) && (lVar8 = *plVar2, *plVar2 = lVar8 + 1, lVar8 == -1)) {
    lVar8 = 0;
    do {
      if (lVar8 == param_4 - 1) {
        return;
      }
      lVar1 = plVar2[lVar8 + 1];
      plVar2[lVar8 + 1] = lVar1 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar1 + 1 == 0);
  }
  return;
}

