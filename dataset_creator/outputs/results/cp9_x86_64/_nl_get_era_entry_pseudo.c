
long _nl_get_era_entry(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  bool bVar12;
  
  plVar8 = *(long **)(param_2 + 0x28);
  if (plVar8 == (long *)0x0) {
    if (*(int *)(param_2 + 0x1d0) == 0) {
      return 0;
    }
  }
  else if (((int)plVar8[2] != 0) || (*(int *)(param_2 + 0x1d0) == 0)) goto LAB_0075e818;
  _nl_init_era_entries_part_0(param_2);
  plVar8 = *(long **)(param_2 + 0x28);
  if (plVar8 == (long *)0x0) {
    return 0;
  }
LAB_0075e818:
  lVar6 = plVar8[1];
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0xc);
  if (lVar6 != 0) {
    lVar9 = *plVar8;
    lVar10 = 0;
    do {
      while( true ) {
        iVar5 = *(int *)(lVar9 + 8);
        if ((iVar5 < iVar2) ||
           ((iVar2 == iVar5 &&
            ((*(int *)(lVar9 + 0xc) < iVar3 ||
             ((iVar3 == *(int *)(lVar9 + 0xc) && (*(int *)(lVar9 + 0x10) <= iVar4)))))))) break;
        if (*(int *)(lVar9 + 0x14) < iVar2) {
LAB_0075e870:
          if ((iVar2 < iVar5) ||
             ((iVar2 == iVar5 &&
              ((iVar3 < *(int *)(lVar9 + 0xc) ||
               ((iVar3 == *(int *)(lVar9 + 0xc) && (iVar4 <= *(int *)(lVar9 + 0x10))))))))) {
            return lVar9;
          }
        }
        else if (iVar2 == *(int *)(lVar9 + 0x14)) {
          if (*(int *)(lVar9 + 0x18) < iVar3) goto LAB_0075e870;
          if (iVar3 == *(int *)(lVar9 + 0x18)) goto LAB_0075e89e;
        }
LAB_0075e850:
        lVar10 = lVar10 + 1;
        lVar9 = lVar9 + 0x48;
        if (lVar6 == lVar10) {
          return 0;
        }
      }
      iVar1 = *(int *)(lVar9 + 0x14);
      bVar12 = SBORROW4(iVar2,iVar1);
      iVar7 = iVar2 - iVar1;
      bVar11 = iVar2 == iVar1;
      if (iVar2 < iVar1) {
        return lVar9;
      }
      if (!bVar11) {
LAB_0075e86e:
        if (!bVar11 && bVar12 == iVar7 < 0) goto LAB_0075e870;
        goto LAB_0075e850;
      }
      iVar1 = *(int *)(lVar9 + 0x18);
      bVar12 = SBORROW4(iVar3,iVar1);
      iVar7 = iVar3 - iVar1;
      bVar11 = iVar3 == iVar1;
      if (iVar3 < iVar1) {
        return lVar9;
      }
      if (!bVar11) goto LAB_0075e86e;
      if (iVar4 <= *(int *)(lVar9 + 0x1c)) {
        return lVar9;
      }
LAB_0075e89e:
      if (*(int *)(lVar9 + 0x1c) <= iVar4) goto LAB_0075e870;
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x48;
    } while (lVar6 != lVar10);
  }
  return 0;
}

