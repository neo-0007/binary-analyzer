
undefined8 ossl_prov_bio_from_dispatch(int *param_1)

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
    lVar12 = c_bio_write_ex;
    lVar13 = c_bio_gets;
    lVar14 = c_bio_vprintf;
    lVar15 = c_bio_free;
    lVar16 = c_bio_new_file;
    lVar17 = c_bio_new_membuf;
    lVar18 = c_bio_read_ex;
    lVar19 = c_bio_puts;
    lVar20 = c_bio_ctrl;
    lVar21 = c_bio_up_ref;
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
      c_bio_vprintf = lVar14;
    }
    if (bVar2) {
      c_bio_free = lVar15;
    }
    if (bVar3) {
      c_bio_up_ref = lVar21;
    }
    if (bVar4) {
      c_bio_ctrl = lVar20;
    }
    if (bVar5) {
      c_bio_puts = lVar19;
    }
    if (bVar6) {
      c_bio_gets = lVar13;
    }
    if (bVar7) {
      c_bio_write_ex = lVar12;
    }
    if (bVar8) {
      c_bio_read_ex = lVar18;
    }
    if (bVar9) {
      c_bio_new_membuf = lVar17;
    }
    if (bVar10) {
      c_bio_new_file = lVar16;
    }
    return 1;
  }
  return 1;
}

