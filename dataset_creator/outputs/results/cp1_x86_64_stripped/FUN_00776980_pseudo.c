
undefined8 FUN_00776980(int param_1,undefined1 *param_2,undefined8 param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  undefined1 *local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [56];
  long local_40;
  uint uVar18;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 2) {
    iVar9 = FUN_00795620(local_78,"%u.%u.%u.%u",*param_2,param_2[1],param_2[2],param_2[3]);
    if ((ulong)(long)iVar9 < (ulong)param_4) {
      uVar10 = thunk_FUN_00712800(param_3,local_78);
      goto LAB_007769d2;
    }
    goto LAB_00776b90;
  }
  if (param_1 != 10) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x61;
    uVar10 = 0;
    goto LAB_007769d2;
  }
  uVar12 = CONCAT22(0,CONCAT11(*param_2,param_2[1]));
  uVar1 = CONCAT11(param_2[2],param_2[3]);
  uVar16 = (uint)uVar1;
  uVar11 = CONCAT22(0,CONCAT11(param_2[4],param_2[5]));
  local_a8._4_2_ = uVar1;
  local_a8._0_4_ = uVar12;
  local_a8._6_2_ = 0;
  uVar2 = CONCAT11(param_2[6],param_2[7]);
  local_a8._12_2_ = uVar2;
  local_a8._8_4_ = uVar11;
  uVar3 = CONCAT11(param_2[8],param_2[9]);
  uVar8 = CONCAT22(0,uVar3);
  local_a8._14_2_ = 0;
  sVar6 = CONCAT11(param_2[10],param_2[0xb]);
  local_98._4_2_ = sVar6;
  local_98._0_4_ = uVar8;
  local_98._6_2_ = 0;
  uVar4 = CONCAT11(param_2[0xc],param_2[0xd]);
  local_98._10_2_ = 0;
  local_98._8_2_ = uVar4;
  sVar5 = CONCAT11(param_2[0xe],param_2[0xf]);
  local_98._12_2_ = sVar5;
  local_98._14_2_ = 0;
  if (CONCAT11(*param_2,param_2[1]) == 0) {
    if (uVar1 == 0) {
      uVar17 = 2;
      if (uVar11 == 0) {
        uVar17 = 3;
        uVar16 = 0;
        uVar11 = (uint)uVar2;
        if (uVar2 != 0) goto LAB_00776c3b;
LAB_00776bcd:
        uVar16 = uVar11;
        uVar17 = uVar17 + 1;
        uVar11 = uVar16;
        if (uVar3 == 0) goto LAB_00776bdc;
      }
      else {
LAB_00776cd0:
        if (uVar2 != 0) goto LAB_00776c3b;
        if (uVar3 == 0) goto LAB_00776d23;
      }
LAB_00776b50:
      uVar11 = uVar16;
      uVar12 = uVar17;
      if (sVar6 != 0) goto joined_r0x00776c83;
      if (uVar4 != 0) goto LAB_00776f4d;
LAB_00776b67:
      uVar8 = 2;
      uVar11 = 5;
      uVar12 = 5;
      uVar15 = uVar16;
      uVar18 = uVar17;
      if (sVar5 == 0) goto LAB_00776f0e;
LAB_00776c9b:
      uVar15 = uVar11;
      if ((uVar17 < uVar8) || (uVar16 == 0xffffffff)) {
LAB_00776ca6:
        uVar16 = uVar15;
        uVar17 = uVar8;
      }
LAB_00776cac:
      uVar15 = uVar16;
      uVar18 = uVar17;
      if (1 < uVar17) {
LAB_00776f7d:
        uVar17 = uVar18;
        uVar16 = uVar15;
        goto LAB_00776f1c;
      }
      bVar7 = false;
      uVar16 = 0xffffffff;
      goto LAB_00776d81;
    }
    uVar17 = 1;
    if (uVar11 == 0) {
      if (uVar2 == 0) {
        if (uVar3 == 0) {
          uVar16 = 0;
          uVar17 = 2;
          uVar11 = 2;
          uVar8 = 1;
          goto LAB_00776be1;
        }
        uVar17 = 2;
        uVar16 = 2;
        goto LAB_00776b50;
      }
      if (uVar3 != 0) {
        uVar16 = 0;
        uVar17 = 1;
        goto LAB_00776c72;
      }
      uVar17 = 1;
      if (sVar6 == 0) {
        if (uVar4 == 0) {
          uVar16 = 0;
          uVar12 = 2;
          uVar11 = 4;
          uVar17 = 1;
          goto LAB_00776c08;
        }
        uVar8 = 2;
        uVar15 = 4;
        goto LAB_00776ca6;
      }
    }
    else {
LAB_00776d10:
      uVar16 = uVar12;
      if (uVar2 != 0) goto LAB_00776c3b;
      if (uVar3 != 0) {
        if ((uVar17 == 0) || (uVar12 == 0xffffffff)) {
          uVar16 = 3;
          uVar17 = 1;
        }
        goto LAB_00776b50;
      }
LAB_00776d23:
      if (sVar6 == 0) {
        uVar12 = 2;
        uVar11 = 3;
        goto LAB_00776bf1;
      }
      uVar12 = 2;
      uVar11 = 3;
      uVar8 = uVar16;
LAB_00776d41:
      if ((uVar17 < uVar12) || (uVar8 == 0xffffffff)) goto joined_r0x00776c83;
    }
    uVar11 = uVar8;
    uVar12 = uVar17;
joined_r0x00776c83:
    uVar17 = uVar12;
    uVar16 = uVar11;
    if (uVar4 == 0) {
      if (sVar5 == 0) {
        uVar8 = 1;
        uVar12 = 6;
        uVar15 = uVar16;
        uVar18 = uVar17;
        goto LAB_00776f0e;
      }
      uVar8 = 1;
      uVar11 = 6;
      goto LAB_00776c9b;
    }
    uVar8 = uVar17;
    uVar15 = uVar16;
    if (sVar5 != 0) {
      if (uVar16 != 0xffffffff) goto LAB_00776ca6;
      bVar7 = false;
      goto LAB_00776d77;
    }
    if ((uVar17 != 0) && (uVar16 != 0xffffffff)) goto LAB_00776ca6;
    bVar7 = false;
    uVar17 = 1;
    uVar16 = 0xffffffff;
LAB_00776d8b:
    puVar13 = local_78;
    lVar14 = 0;
    do {
      uVar8 = (uint)lVar14;
      if ((((int)uVar8 < (int)uVar16) || (!bVar7)) || ((int)(uVar16 + uVar17) <= (int)uVar8)) {
        if (lVar14 != 0) {
          *puVar13 = 0x3a;
          puVar13 = puVar13 + 1;
        }
        iVar9 = FUN_00795620(puVar13,&DAT_0082dff0,*(undefined4 *)(local_a8 + lVar14 * 4));
        puVar13 = puVar13 + iVar9;
      }
      else if (uVar16 == uVar8) {
        *puVar13 = 0x3a;
        puVar13 = puVar13 + 1;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != 8);
  }
  else {
    if (uVar1 != 0) {
      if (uVar11 != 0) {
        uVar17 = 0;
        uVar12 = 0xffffffff;
        goto LAB_00776d10;
      }
      if (uVar2 != 0) {
        uVar16 = 2;
        uVar17 = 1;
        goto LAB_00776c3b;
      }
      uVar17 = 2;
      uVar16 = 2;
      uVar11 = uVar16;
      if (uVar3 != 0) goto LAB_00776b50;
LAB_00776bdc:
      uVar16 = 0xffffffff;
LAB_00776be1:
      uVar12 = uVar17 + 1;
      uVar17 = uVar8;
      if (sVar6 != 0) goto joined_r0x00776c83;
LAB_00776bf1:
      uVar12 = uVar12 + 1;
      uVar8 = uVar12;
      uVar15 = uVar11;
      if (uVar4 == 0) goto LAB_00776c08;
      goto LAB_00776ca6;
    }
    if (uVar11 != 0) {
      uVar17 = 1;
      uVar16 = 1;
      goto LAB_00776cd0;
    }
    uVar17 = 2;
    uVar16 = 1;
    if (uVar2 == 0) {
      uVar11 = 1;
      goto LAB_00776bcd;
    }
LAB_00776c3b:
    if (uVar3 != 0) {
LAB_00776c72:
      uVar11 = uVar16;
      uVar12 = uVar17;
      if (sVar6 != 0) goto joined_r0x00776c83;
      if (uVar4 == 0) goto LAB_00776b67;
      uVar8 = 1;
      uVar15 = 5;
LAB_00776f3a:
      if ((uVar17 < uVar8) || (uVar16 == 0xffffffff)) goto LAB_00776ca6;
LAB_00776f4d:
      uVar8 = uVar17;
      uVar15 = uVar16;
      if (sVar5 == 0) goto LAB_00776ca6;
      goto LAB_00776cac;
    }
    if (sVar6 != 0) {
      uVar12 = 1;
      uVar11 = 4;
      uVar8 = uVar16;
      goto LAB_00776d41;
    }
    uVar8 = 2;
    uVar12 = 2;
    uVar11 = 4;
    uVar15 = 4;
    if (uVar4 != 0) goto LAB_00776f3a;
LAB_00776c08:
    uVar8 = uVar12 + 1;
    uVar12 = uVar11;
    uVar15 = uVar16;
    uVar18 = uVar17;
    if (sVar5 != 0) goto LAB_00776c9b;
LAB_00776f0e:
    uVar16 = uVar12;
    uVar17 = uVar8 + 1;
    if ((uVar15 != 0xffffffff) && (uVar17 <= uVar18)) goto LAB_00776f7d;
LAB_00776f1c:
    bVar7 = true;
LAB_00776d77:
    if (uVar17 == 5) {
      puVar13 = local_78;
      lVar14 = 0;
      do {
        uVar8 = (uint)lVar14;
        if ((((int)uVar8 < (int)uVar16) || (!bVar7)) || ((int)(uVar16 + 5) <= (int)uVar8)) {
          if (lVar14 != 0) {
            *puVar13 = 0x3a;
            puVar13 = puVar13 + 1;
            if (((uVar16 == 0) && (uVar8 == 6)) && (sVar6 == -1)) goto LAB_00776f96;
          }
          iVar9 = FUN_00795620(puVar13,&DAT_0082dff0,*(undefined4 *)(local_a8 + lVar14 * 4));
          puVar13 = puVar13 + iVar9;
        }
        else if (uVar16 == uVar8) {
          *puVar13 = 0x3a;
          puVar13 = puVar13 + 1;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != 8);
    }
    else {
LAB_00776d81:
      if (uVar17 != 6) goto LAB_00776d8b;
      puVar13 = local_78;
      lVar14 = 0;
      do {
        uVar8 = (uint)lVar14;
        if ((((int)uVar8 < (int)uVar16) || (!bVar7)) || ((int)(uVar16 + 6) <= (int)uVar8)) {
          if (lVar14 != 0) {
            *puVar13 = 0x3a;
            puVar13 = puVar13 + 1;
            if ((uVar8 == 6) && (uVar16 == 0)) goto LAB_00776f96;
          }
          iVar9 = FUN_00795620(puVar13,&DAT_0082dff0,*(undefined4 *)(local_a8 + lVar14 * 4));
          puVar13 = puVar13 + iVar9;
        }
        else if (uVar8 == uVar16) {
          *puVar13 = 0x3a;
          puVar13 = puVar13 + 1;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != 8);
    }
  }
  if ((uVar16 != 0xffffffff) && (uVar16 + uVar17 == 8)) {
    *puVar13 = 0x3a;
    puVar13 = puVar13 + 1;
  }
LAB_00776dfd:
  local_b8 = local_78;
  *puVar13 = 0;
  if ((uint)(((int)puVar13 + 1) - (int)local_b8) <= param_4) {
    uVar10 = thunk_FUN_00712800(param_3,local_b8);
    goto LAB_007769d2;
  }
  goto LAB_00776b90;
LAB_00776f96:
  local_b8 = local_78;
  iVar9 = FUN_00795620(local_88,"%u.%u.%u.%u",param_2[0xc],param_2[0xd],param_2[0xe],param_2[0xf]);
  if ((ulong)(long)iVar9 < (ulong)(((int)local_b8 - (int)puVar13) + 0x2e)) {
    puVar13 = (undefined1 *)thunk_FUN_00713930(puVar13,local_88);
    goto LAB_00776dfd;
  }
LAB_00776b90:
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x1c;
  uVar10 = 0;
LAB_007769d2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar10;
}

