
undefined8 FUN_0043b870(int *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  iVar11 = *param_1;
  if (iVar11 != 0) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    bVar7 = false;
    bVar8 = false;
    bVar9 = false;
    bVar10 = false;
    lVar12 = DAT_00940e90;
    lVar13 = DAT_00940e88;
    lVar14 = DAT_00940e60;
    lVar15 = DAT_00940e68;
    lVar16 = DAT_00940ea8;
    lVar17 = DAT_00940ea0;
    lVar18 = DAT_00940e98;
    lVar19 = DAT_00940e80;
    lVar20 = DAT_00940e78;
    lVar21 = DAT_00940e70;
    do {
      switch(iVar11) {
      case 0x28:
        if (lVar16 == 0) {
          bVar10 = true;
          lVar16 = *(long *)(param_1 + 2);
        }
        break;
      case 0x29:
        if (lVar17 == 0) {
          bVar9 = true;
          lVar17 = *(long *)(param_1 + 2);
        }
        break;
      case 0x2a:
        if (lVar18 == 0) {
          bVar8 = true;
          lVar18 = *(long *)(param_1 + 2);
        }
        break;
      case 0x2b:
        if (lVar12 == 0) {
          bVar7 = true;
          lVar12 = *(long *)(param_1 + 2);
        }
        break;
      case 0x2c:
        if (lVar21 == 0) {
          bVar3 = true;
          lVar21 = *(long *)(param_1 + 2);
        }
        break;
      case 0x2d:
        if (lVar15 == 0) {
          lVar15 = *(long *)(param_1 + 2);
          bVar2 = true;
        }
        break;
      case 0x2e:
        if (lVar14 == 0) {
          lVar14 = *(long *)(param_1 + 2);
          bVar1 = true;
        }
        break;
      case 0x30:
        if (lVar19 == 0) {
          bVar5 = true;
          lVar19 = *(long *)(param_1 + 2);
        }
        break;
      case 0x31:
        if (lVar13 == 0) {
          bVar6 = true;
          lVar13 = *(long *)(param_1 + 2);
        }
        break;
      case 0x32:
        if (lVar20 == 0) {
          bVar4 = true;
          lVar20 = *(long *)(param_1 + 2);
        }
      }
      iVar11 = param_1[4];
      param_1 = param_1 + 4;
    } while (iVar11 != 0);
    if (bVar1) {
      DAT_00940e60 = lVar14;
    }
    if (bVar2) {
      DAT_00940e68 = lVar15;
    }
    if (bVar3) {
      DAT_00940e70 = lVar21;
    }
    if (bVar4) {
      DAT_00940e78 = lVar20;
    }
    if (bVar5) {
      DAT_00940e80 = lVar19;
    }
    if (bVar6) {
      DAT_00940e88 = lVar13;
    }
    if (bVar7) {
      DAT_00940e90 = lVar12;
    }
    if (bVar8) {
      DAT_00940e98 = lVar18;
    }
    if (bVar9) {
      DAT_00940ea0 = lVar17;
    }
    if (bVar10) {
      DAT_00940ea8 = lVar16;
    }
    return 1;
  }
  return 1;
}

