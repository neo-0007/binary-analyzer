
void __mpn_impn_sqr_n(long param_1,long param_2,ulong param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long local_50;
  
  uVar9 = (ulong)((uint)param_3 & 1);
  if ((param_3 & 1) != 0) {
    lVar7 = param_3 - 1;
    if (lVar7 < 0x20) {
      __mpn_impn_sqr_n_basecase(param_1,param_2,lVar7);
    }
    else {
      __mpn_impn_sqr_n(param_1,param_2,lVar7);
    }
    puVar1 = (undefined8 *)(param_2 + lVar7 * 8);
    lVar12 = lVar7 * 8 + param_1;
    uVar6 = __mpn_addmul_1(lVar12,param_2,lVar7,*puVar1);
    *(undefined8 *)(param_1 + lVar7 * 0x10) = uVar6;
    uVar6 = __mpn_addmul_1(lVar12,param_2,param_3,*puVar1);
    *(undefined8 *)(param_1 + (lVar7 + param_3) * 8) = uVar6;
    return;
  }
  uVar11 = (long)param_3 >> 1;
  lVar12 = uVar11 * 8;
  lVar7 = param_2 + lVar12;
  lVar3 = param_3 * 8;
  plVar2 = (long *)(param_1 + lVar3);
  if ((long)uVar11 < 0x20) {
    __mpn_impn_sqr_n_basecase(plVar2,lVar7,uVar11);
  }
  else {
    __mpn_impn_sqr_n(plVar2,lVar7,uVar11);
  }
  iVar5 = __mpn_cmp(lVar7,param_2,uVar11);
  if (iVar5 < 0) {
    __mpn_sub_n(param_1,param_2,lVar7,uVar11);
  }
  else {
    __mpn_sub_n(param_1,lVar7,param_2,uVar11);
  }
  if ((long)uVar11 < 0x20) {
    __mpn_impn_sqr_n_basecase(param_4,param_1,uVar11);
    if (0 < (long)uVar11) goto LAB_006ea63a;
    puVar10 = (ulong *)(param_1 + (uVar11 + param_3) * 8);
    local_50 = __mpn_add_n(plVar2,plVar2,puVar10,uVar11);
    lVar7 = __mpn_sub_n(param_1 + lVar12,param_1 + lVar12,param_4,param_3);
    local_50 = local_50 - lVar7;
LAB_006ea890:
    __mpn_impn_sqr_n_basecase(param_4,param_2,uVar11);
    lVar7 = __mpn_add_n(param_1 + lVar12,param_1 + lVar12,param_4,param_3);
    uVar8 = lVar7 + local_50;
    if ((uVar8 != 0) && (uVar4 = *puVar10, *puVar10 = *puVar10 + uVar8, CARRY8(uVar4,uVar8))) {
LAB_006ea8c5:
      lVar7 = 0;
      do {
        if (uVar11 - 1 == lVar7) break;
        uVar8 = puVar10[lVar7 + 1];
        puVar10[lVar7 + 1] = uVar8 + 1;
        lVar7 = lVar7 + 1;
      } while (uVar8 + 1 == 0);
    }
    if ((long)uVar11 < 1) goto LAB_006ea7a1;
  }
  else {
    __mpn_impn_sqr_n(param_4,param_1,uVar11,param_4 + lVar3);
LAB_006ea63a:
    if ((lVar3 + 8 == lVar12) || ((long)uVar11 < 4)) {
      lVar7 = 0;
      do {
        *(long *)(param_1 + lVar12 + lVar7 * 8) = plVar2[lVar7];
        lVar7 = lVar7 + 1;
      } while (lVar7 < (long)uVar11);
    }
    else {
      uVar8 = 1;
      if (0 < (long)uVar11) {
        uVar8 = uVar11;
      }
      lVar7 = 0;
      do {
        uVar6 = ((undefined8 *)((long)plVar2 + lVar7))[1];
        puVar1 = (undefined8 *)(param_1 + lVar12 + lVar7);
        *puVar1 = *(undefined8 *)((long)plVar2 + lVar7);
        puVar1[1] = uVar6;
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != (uVar8 >> 1) * 0x10);
      if ((uVar8 & 1) != 0) {
        *(undefined8 *)(param_1 + ((uVar8 & 0xfffffffffffffffe) + uVar11) * 8) =
             *(undefined8 *)(param_1 + (param_3 + (uVar8 & 0xfffffffffffffffe)) * 8);
      }
    }
    lVar13 = param_1 + lVar12;
    puVar10 = (ulong *)(param_1 + (uVar11 + param_3) * 8);
    local_50 = __mpn_add_n(plVar2,plVar2,puVar10,uVar11);
    lVar7 = __mpn_sub_n(lVar13,lVar13,param_4,param_3);
    local_50 = local_50 - lVar7;
    if ((long)uVar11 < 0x20) goto LAB_006ea890;
    __mpn_impn_sqr_n(param_4,param_2,uVar11,lVar3 + param_4);
    lVar7 = __mpn_add_n(lVar13,lVar13,param_4,param_3);
    uVar8 = lVar7 + local_50;
    if ((uVar8 != 0) && (uVar4 = *puVar10, *puVar10 = *puVar10 + uVar8, CARRY8(uVar4,uVar8)))
    goto LAB_006ea8c5;
  }
  if ((param_1 == param_4 + 8) || ((long)uVar11 < 4)) {
    do {
      *(undefined8 *)(param_1 + uVar9 * 8) = *(undefined8 *)(param_4 + uVar9 * 8);
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)uVar11);
  }
  else {
    uVar9 = 1;
    if (0 < (long)uVar11) {
      uVar9 = uVar11;
    }
    lVar7 = 0;
    do {
      uVar6 = ((undefined8 *)(param_4 + lVar7))[1];
      *(undefined8 *)(param_1 + lVar7) = *(undefined8 *)(param_4 + lVar7);
      ((undefined8 *)(param_1 + lVar7))[1] = uVar6;
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != (uVar9 >> 1) * 0x10);
    if ((uVar9 & 1) != 0) {
      *(undefined8 *)(param_1 + (uVar9 & 0xfffffffffffffffe) * 8) =
           *(undefined8 *)(param_4 + (uVar9 & 0xfffffffffffffffe) * 8);
    }
  }
LAB_006ea7a1:
  lVar7 = __mpn_add_n(param_1 + lVar12,param_1 + lVar12,lVar12 + param_4,uVar11);
  if ((lVar7 != 0) && (lVar7 = *plVar2, *plVar2 = lVar7 + 1, lVar7 == -1)) {
    lVar7 = 0;
    do {
      if (lVar7 == param_3 - 1) {
        return;
      }
      lVar12 = plVar2[lVar7 + 1];
      plVar2[lVar7 + 1] = lVar12 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar12 + 1 == 0);
  }
  return;
}

