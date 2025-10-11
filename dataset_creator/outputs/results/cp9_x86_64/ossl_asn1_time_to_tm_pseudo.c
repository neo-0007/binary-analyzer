
undefined8 ossl_asn1_time_to_tm(undefined8 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  long in_FS_OFFSET;
  bool bVar21;
  int local_9c;
  int local_94;
  int local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2[1] == 0x17) {
    uVar4 = *(ulong *)(param_2 + 4);
    local_94 = 5;
    local_9c = 6;
    iVar7 = (-(uint)((uVar4 & 0x100) == 0) & 0xfffffffe) + 0xd;
  }
  else {
    if (param_2[1] != 0x18) goto LAB_005a4410;
    uVar4 = *(ulong *)(param_2 + 4);
    local_94 = 6;
    local_9c = 7;
    iVar7 = (-(uint)((uVar4 & 0x100) == 0) & 0xfffffffe) + 0xf;
  }
  bVar21 = (uVar4 & 0x100) == 0;
  pcVar5 = *(char **)(param_2 + 2);
  iVar2 = *param_2;
  local_48 = 0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (iVar7 <= iVar2) {
    cVar6 = *pcVar5;
    iVar14 = 0;
    pcVar13 = pcVar5;
    iVar7 = 0;
    do {
      iVar8 = ossl_ascii_isdigit((int)cVar6);
      if (((iVar8 == 0) || (cVar6 = *pcVar13, iVar2 == iVar7 + 1)) ||
         (iVar8 = ossl_ascii_isdigit((int)pcVar13[1]), iVar8 == 0)) break;
      iVar8 = iVar7 + 2;
      iVar12 = (int)pcVar13[1] + (cVar6 + -0x30) * 10;
      iVar9 = iVar12 + -0x30;
      if (iVar2 == iVar8) break;
      iVar3 = param_2[1];
      iVar16 = (uint)(iVar3 == 0x17) + iVar14;
      if ((iVar9 < *(int *)(min_5 + (long)iVar16 * 4)) ||
         (*(int *)(max_4 + (long)iVar16 * 4) < iVar9)) break;
      switch(iVar16) {
      case 0:
        local_68._4_4_ = iVar9 * 100 + -0x76c;
        break;
      case 1:
        if (iVar3 == 0x17) {
          if (iVar9 < 0x32) {
            iVar9 = iVar12 + 0x34;
          }
          local_68._4_4_ = iVar9;
        }
        else {
          local_68._4_4_ = local_68._4_4_ + iVar9;
        }
        break;
      case 2:
        local_68._0_4_ = iVar12 + -0x31;
        break;
      case 3:
        if (local_68._0_4_ == 1) {
          iVar16 = 0x1d;
          uVar17 = local_68._4_4_ + 0x76c;
          uVar18 = uVar17 * -0x3d70a3d7 + 0x51eb850;
          if ((0xa3d70a < (uVar18 >> 4 | uVar17 * -0x70000000)) &&
             (iVar16 = 0x1c, 0x28f5c28 < (uVar18 >> 2 | local_68._4_4_ * 0x40000000))) {
            iVar16 = ((uVar17 & 3) == 0) + 0x1c;
          }
          if (iVar16 < iVar9) goto LAB_005a4410;
          iVar12 = iVar12 + -0x12;
LAB_005a469f:
          uVar17 = local_68._4_4_ + 0x76b;
          iVar19 = local_68._0_4_ + 0xe;
          iVar16 = (int)uVar17 % 100;
        }
        else {
          if (*(int *)(mdays_3 + (long)(int)local_68._0_4_ * 4) < iVar9) goto LAB_005a4410;
          uVar17 = local_68._4_4_ + 0x76c;
          iVar12 = *(int *)(ydays_2 + (long)(int)local_68._0_4_ * 4) + iVar9 + -1;
          if ((int)local_68._0_4_ < 2) goto LAB_005a469f;
          iVar16 = (int)uVar17 % 100;
          iVar20 = *(int *)(ydays_2 + (long)(int)local_68._0_4_ * 4) + iVar9;
          if ((0xa3d70a < (uVar17 * -0x3d70a3d7 + 0x51eb850 >> 4 | uVar17 * -0x70000000)) &&
             (iVar20 = iVar12, iVar16 != 0)) {
            iVar20 = iVar12 + (uint)((uVar17 & 3) == 0);
          }
          iVar19 = local_68._0_4_ + 2;
          iVar12 = iVar20;
        }
        local_78._12_4_ = iVar9;
        iVar20 = iVar16 + 3;
        if (-1 < iVar16) {
          iVar20 = iVar16;
        }
        local_68._8_4_ =
             ((iVar20 >> 2) + (iVar19 * 0xd) / 5 + iVar9 + iVar16 + (int)uVar17 / 400 + 6 +
             ((int)uVar17 / 100) * 5) % 7;
        local_68._12_4_ = iVar12;
        break;
      case 4:
        local_78._8_4_ = iVar9;
        break;
      case 5:
        local_78._4_4_ = iVar9;
        break;
      case 6:
        local_78._0_4_ = iVar9;
      }
      cVar6 = pcVar13[2];
      iVar14 = iVar14 + 1;
      if ((local_9c == iVar14) ||
         (((bVar21 && (local_94 == iVar14)) && (((cVar6 - 0x2bU & 0xfd) == 0 || (cVar6 == 'Z'))))))
      {
        if ((iVar3 == 0x18) && (cVar6 == '.')) {
          if (((bVar21) && (iVar7 = iVar7 + 3, iVar2 != iVar7)) && (iVar7 < iVar2)) {
            pcVar13 = pcVar5 + iVar7;
            iVar8 = iVar7;
            goto LAB_005a48a9;
          }
        }
        else {
          if (cVar6 == 'Z') goto LAB_005a48e0;
          if (bVar21) goto LAB_005a46d0;
        }
        break;
      }
      pcVar13 = pcVar13 + 2;
      iVar7 = iVar8;
    } while( true );
  }
  goto LAB_005a4410;
LAB_005a46d0:
  if (((cVar6 - 0x2bU & 0xfd) == 0) && (iVar8 + 5 == iVar2)) {
    local_80 = 0;
    lVar15 = (long)(iVar8 + 3);
    iVar7 = local_9c;
    do {
      iVar14 = ossl_ascii_isdigit((int)pcVar5[lVar15 + -2]);
      if (iVar14 == 0) goto LAB_005a4410;
      cVar1 = pcVar5[lVar15 + -2];
      iVar14 = ossl_ascii_isdigit((int)pcVar5[lVar15 + -1]);
      if (iVar14 == 0) goto LAB_005a4410;
      iVar14 = pcVar5[lVar15 + -1] + -0x30 + (cVar1 + -0x30) * 10;
      lVar10 = (long)(int)((uint)(param_2[1] == 0x17) + iVar7);
      if ((iVar14 < *(int *)(min_5 + lVar10 * 4)) || (*(int *)(max_4 + lVar10 * 4) < iVar14))
      goto LAB_005a4410;
      if (param_1 != (undefined8 *)0x0) {
        if (local_9c == iVar7) {
          local_80 = iVar14 * 0xe10;
        }
        else if (local_9c + 1 == iVar7) {
          local_80 = local_80 + iVar14 * 0x3c;
        }
      }
      iVar8 = (int)lVar15;
      iVar7 = iVar7 + 1;
      lVar15 = lVar15 + 2;
    } while (iVar7 != local_9c + 2);
    if ((local_80 == 0) ||
       (iVar7 = OPENSSL_gmtime_adj(local_78,0,
                                   (long)(int)(local_80 *
                                              (((cVar6 == '-') - 1) + (uint)(cVar6 == '-')))),
       iVar7 != 0)) goto LAB_005a47f8;
  }
  goto LAB_005a4410;
LAB_005a48a9:
  iVar14 = ossl_ascii_isdigit((int)*pcVar13);
  if (iVar14 != 0) {
    iVar8 = iVar8 + 1;
    pcVar13 = pcVar13 + 1;
    if (iVar2 == iVar8) goto LAB_005a4410;
    goto LAB_005a48a9;
  }
  if ((iVar2 == iVar8) || (iVar7 == iVar8)) goto LAB_005a4410;
  cVar6 = pcVar5[iVar8];
  if (cVar6 != 'Z') goto LAB_005a46d0;
LAB_005a48e0:
  iVar8 = iVar8 + 1;
LAB_005a47f8:
  if (iVar8 == iVar2) {
    uVar11 = 1;
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = local_78._0_8_;
      param_1[1] = local_78._8_8_;
      param_1[6] = local_48;
      param_1[2] = local_68._0_8_;
      param_1[3] = local_68._8_8_;
      param_1[4] = local_58._0_8_;
      param_1[5] = local_58._8_8_;
    }
    goto LAB_005a4412;
  }
LAB_005a4410:
  uVar11 = 0;
LAB_005a4412:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar11;
}

