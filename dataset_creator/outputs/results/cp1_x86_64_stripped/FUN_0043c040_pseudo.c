
undefined8 FUN_0043c040(int *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  iVar5 = *param_1;
  if (iVar5 == 0) {
    return 1;
  }
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  lVar6 = DAT_00940eb8;
  lVar7 = DAT_00940eb0;
  lVar8 = DAT_00940ec0;
  lVar9 = DAT_00940ec8;
  do {
    if (iVar5 == 0x67) {
      if (lVar6 == 0) {
        bVar2 = true;
        lVar6 = *(long *)(param_1 + 2);
      }
      else if (*(long *)(param_1 + 2) != lVar6) goto LAB_0043c0cd;
LAB_0043c0a0:
      iVar5 = param_1[4];
    }
    else {
      if (iVar5 < 0x68) {
        if (iVar5 == 0x65) {
          if (lVar9 == 0) {
            bVar4 = true;
            lVar9 = *(long *)(param_1 + 2);
          }
          else if (*(long *)(param_1 + 2) != lVar9) {
LAB_0043c0cd:
            if (bVar1) {
              DAT_00940eb0 = lVar7;
            }
            if (bVar2) {
              DAT_00940eb8 = lVar6;
            }
            if (bVar3) {
              DAT_00940ec0 = lVar8;
            }
            if (bVar4) {
              DAT_00940ec8 = lVar9;
            }
            return 0;
          }
        }
        else if (iVar5 == 0x66) {
          if (lVar8 == 0) {
            bVar3 = true;
            lVar8 = *(long *)(param_1 + 2);
          }
          else if (*(long *)(param_1 + 2) != lVar8) goto LAB_0043c0cd;
        }
        goto LAB_0043c0a0;
      }
      if (iVar5 != 0x68) goto LAB_0043c0a0;
      if (lVar7 == 0) {
        bVar1 = true;
        lVar7 = *(long *)(param_1 + 2);
        goto LAB_0043c0a0;
      }
      if (*(long *)(param_1 + 2) != lVar7) goto LAB_0043c0cd;
      iVar5 = param_1[4];
    }
    param_1 = param_1 + 4;
    if (iVar5 == 0) {
      if (bVar1) {
        DAT_00940eb0 = lVar7;
      }
      if (bVar2) {
        DAT_00940eb8 = lVar6;
      }
      if (bVar3) {
        DAT_00940ec0 = lVar8;
      }
      if (bVar4) {
        DAT_00940ec8 = lVar9;
      }
      return 1;
    }
  } while( true );
}

