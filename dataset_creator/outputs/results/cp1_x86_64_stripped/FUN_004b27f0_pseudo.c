
int FUN_004b27f0(long *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  bool bVar9;
  uint local_3c;
  
  if ((param_2 != (char *)0x0) && (cVar2 = *param_2, cVar2 != '\0')) {
    bVar9 = cVar2 == '-';
    if (bVar9) {
      cVar2 = param_2[1];
      param_2 = param_2 + 1;
    }
    local_3c = (uint)bVar9;
    lVar7 = 0;
    while( true ) {
      iVar5 = (int)lVar7;
      iVar3 = FUN_005466e0((int)cVar2);
      if (iVar3 == 0) break;
      lVar7 = lVar7 + 1;
      if (lVar7 == 0x20000000) goto LAB_004b2948;
      cVar2 = param_2[lVar7];
    }
    if (iVar5 == 0) {
LAB_004b2948:
      lVar7 = 0;
    }
    else {
      iVar3 = local_3c + iVar5;
      if (param_1 == (long *)0x0) {
        return iVar3;
      }
      lVar7 = *param_1;
      if (lVar7 == 0) {
        lVar7 = FUN_004b7690();
        if (lVar7 == 0) {
          return 0;
        }
      }
      else {
        FUN_004b7b50(lVar7);
      }
      if ((iVar5 * 4 < 0x7fffffc1) &&
         ((iVar5 * 4 + 0x3f >> 6 <= *(int *)(lVar7 + 0xc) ||
          (lVar6 = FUN_004b8000(lVar7), lVar6 != 0)))) {
        iVar4 = (iVar5 / 0x13) * 0x13 - iVar5;
        iVar8 = iVar4 + 0x13;
        if (iVar4 == 0) {
          iVar8 = 0;
        }
        lVar6 = 0;
        pcVar1 = param_2 + (ulong)(iVar5 - 1) + 1;
        do {
          while( true ) {
            cVar2 = *param_2;
            iVar8 = iVar8 + 1;
            param_2 = param_2 + 1;
            lVar6 = (long)(cVar2 + -0x30) + lVar6 * 10;
            if (iVar8 != 0x13) break;
            iVar5 = FUN_004bcd70(lVar7,10000000000000000000);
            if ((iVar5 == 0) || (iVar5 = FUN_004bcc70(lVar7,lVar6), iVar5 == 0)) goto LAB_004b294a;
            iVar8 = 0;
            lVar6 = 0;
            if (param_2 == pcVar1) goto LAB_004b2928;
          }
        } while (param_2 != pcVar1);
LAB_004b2928:
        FUN_004b8490(lVar7);
        iVar5 = *(int *)(lVar7 + 8);
        *param_1 = lVar7;
        if (iVar5 != 0) {
          *(uint *)(lVar7 + 0x10) = local_3c;
          return iVar3;
        }
        return iVar3;
      }
    }
LAB_004b294a:
    if (*param_1 == 0) {
      FUN_004b7fa0(lVar7);
    }
  }
  return 0;
}

