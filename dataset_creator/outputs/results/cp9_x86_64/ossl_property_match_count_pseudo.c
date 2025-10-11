
int ossl_property_match_count(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = *param_1;
  if (iVar3 < 1) {
    return 0;
  }
  iVar9 = 0;
  iVar7 = 0;
  iVar8 = 0;
  do {
    while( true ) {
      piVar1 = param_1 + (long)iVar7 * 6 + 2;
      iVar4 = piVar1[2];
      if (iVar4 != 2) break;
LAB_0042d902:
      iVar7 = iVar7 + 1;
      if (iVar3 <= iVar7) {
        return iVar9;
      }
    }
    if (*param_2 <= iVar8) {
LAB_0042d937:
      if (piVar1[1] == 2) {
        if (iVar4 == 1) goto LAB_0042d944;
      }
      else if (piVar1[1] == 0) {
        if (iVar4 == 0) {
          if (piVar1[4] == 2) {
LAB_0042d944:
            iVar9 = iVar9 + 1;
            goto LAB_0042d902;
          }
        }
        else {
          if (iVar4 != 1) goto LAB_0042d944;
          if (piVar1[4] != 2) {
            iVar9 = iVar9 + 1;
            goto LAB_0042d902;
          }
        }
      }
      if ((*(byte *)(piVar1 + 3) & 1) == 0) {
        return -1;
      }
      goto LAB_0042d902;
    }
    piVar2 = param_2 + (long)iVar8 * 6 + 2;
    iVar5 = *piVar2;
    iVar6 = *piVar1;
    if (iVar6 == iVar5 || iVar6 < iVar5) {
      if (iVar6 != iVar5) goto LAB_0042d937;
      if ((piVar2[1] == piVar1[1]) && (*(long *)(piVar2 + 4) == *(long *)(piVar1 + 4))) {
        if (iVar4 == 0) goto LAB_0042d9be;
LAB_0042d95f:
        if ((*(byte *)(piVar1 + 3) & 1) == 0) {
          return -1;
        }
      }
      else {
        if (iVar4 != 1) goto LAB_0042d95f;
LAB_0042d9be:
        iVar9 = iVar9 + 1;
      }
      iVar7 = iVar7 + 1;
    }
    iVar8 = iVar8 + 1;
    if (iVar3 <= iVar7) {
      return iVar9;
    }
  } while( true );
}

