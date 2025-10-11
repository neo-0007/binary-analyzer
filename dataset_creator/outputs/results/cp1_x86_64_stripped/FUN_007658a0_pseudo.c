
uint * FUN_007658a0(uint *param_1,long param_2,uint *param_3,uint *param_4,int param_5,char *param_6
                   ,long param_7)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint **ppuVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  int *piVar12;
  char **ppcVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  char **ppcVar19;
  undefined8 extraout_RDX;
  uint *puVar20;
  uint **ppuVar21;
  uint uVar22;
  undefined1 *puVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint *puVar29;
  uint *puVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  long in_FS_OFFSET;
  bool bVar34;
  byte bVar35;
  uint *local_148;
  uint *local_140;
  char **local_138;
  undefined8 uStack_130;
  uint *local_128;
  int local_120;
  uint local_11c;
  char *local_118;
  char *local_110;
  long local_108;
  long local_100;
  uint *local_f8;
  uint *local_f0;
  int local_e8;
  uint local_e4;
  long local_e0;
  char *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98 [10];
  uint local_44;
  long local_40 [2];
  
  ppuVar21 = &local_148;
  local_e0 = param_2;
  local_f8 = param_4;
  local_e8 = param_5;
  local_110 = param_6;
  local_100 = param_7;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = *(char **)(param_4 + 0xc);
  local_108 = *(long *)(param_7 + 0x10);
  uVar7 = param_4[2];
  if ((int)uVar7 < 0xd) {
    local_e4 = 0xc;
    if (uVar7 != 0) {
      local_e4 = uVar7;
    }
  }
  else {
    local_e4 = uVar7 - 0xc;
  }
  uVar7 = *param_3;
  puVar30 = (uint *)0x0;
  ppuVar5 = &local_148;
  if (uVar7 == 0) {
LAB_00765982:
    ppuVar21 = ppuVar5;
    if ((param_1 != (uint *)0x0) && (local_e0 != 0)) {
      *param_1 = 0;
    }
LAB_007659a3:
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      return puVar30;
    }
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)ppuVar21 + -8) = 0x767f2e;
    FUN_00771f60();
  }
  local_11c = ~local_e4 >> 0x1f;
  puVar14 = param_1;
LAB_00765944:
  puVar10 = local_f8;
  lVar31 = local_108;
  puVar9 = local_128;
  if (uVar7 == 0x25) {
    uVar7 = param_3[1];
    iVar24 = 0;
    iVar27 = 0;
    puVar11 = param_3 + 1;
    local_f0 = (uint *)((ulong)local_f0 & 0xffffffff00000000);
    iVar17 = uVar7 - 0x30;
    bVar34 = uVar7 == 0x30;
    puVar15 = param_3;
    if (bVar34) goto LAB_00765a2e;
    do {
      param_1 = puVar14;
      puVar29 = puVar14;
      if (bVar34 || SBORROW4(uVar7,0x30) != iVar17 < 0) {
        if (uVar7 == 0x23) {
          iVar24 = 1;
          puVar15 = puVar11;
        }
        else {
          if (uVar7 != 0x2d) goto LAB_00765a78;
          iVar27 = 0x2d;
          puVar15 = puVar11;
        }
      }
      else if (uVar7 == 0x5e) {
        local_f0 = (uint *)CONCAT44(local_f0._4_4_,1);
        puVar15 = puVar11;
      }
      else {
        if (uVar7 != 0x5f) {
          uVar16 = uVar7 - 0x30;
          if (uVar16 < 10) {
            iVar17 = 0;
            puVar20 = puVar11;
            goto LAB_00765ad7;
          }
          iVar17 = -1;
          goto LAB_00765b11;
        }
        iVar27 = 0x5f;
        puVar15 = puVar11;
      }
      while( true ) {
        uVar7 = puVar15[1];
        puVar11 = puVar15 + 1;
        iVar17 = uVar7 - 0x30;
        bVar34 = iVar17 == 0;
        if (!bVar34) break;
LAB_00765a2e:
        iVar27 = 0x30;
        puVar15 = puVar11;
      }
    } while( true );
  }
  if ((ulong)(local_e0 - (long)puVar30) < 2) goto LAB_007659a0;
  if (puVar14 != (uint *)0x0) {
    *puVar14 = uVar7;
    puVar14 = puVar14 + 1;
  }
  puVar30 = (uint *)((long)puVar30 + 1);
  param_1 = puVar14;
  goto LAB_00765971;
LAB_00765ad7:
  do {
    puVar11 = puVar20 + 1;
    if ((iVar17 < 0xccccccd) && ((iVar17 != 0xccccccc || ((int)uVar7 < 0x38)))) {
      iVar17 = uVar16 + iVar17 * 10;
      puVar8 = puVar20;
    }
    else {
      iVar17 = 0x7fffffff;
      puVar8 = puVar11;
      puVar15 = puVar20;
      uVar7 = puVar20[1];
      if (9 < puVar20[1] - 0x30) break;
    }
    uVar7 = puVar8[1];
    puVar11 = puVar8 + 1;
    uVar16 = uVar7 - 0x30;
    puVar15 = puVar8;
    puVar20 = puVar11;
  } while (uVar16 < 10);
LAB_00765b11:
  if (uVar7 != 0x45) goto LAB_00765a7e;
  uVar7 = puVar11[1];
  param_3 = puVar11 + 1;
  switch(uVar7) {
  case 0:
    param_3 = puVar11;
    break;
  default:
    goto switchD_00765ac0_caseD_1;
  case 0x41:
  case 0x42:
  case 0x44:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4d:
  case 0x53:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x61:
  case 100:
  case 0x65:
  case 0x67:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x77:
    break;
  case 0x43:
    local_128 = (uint *)CONCAT44(local_128._4_4_,iVar27);
    *(undefined8 *)((long)ppuVar21 + -8) = 0x76757b;
    local_138 = (char **)FUN_007681f0(puVar10);
    iVar27 = (uint)local_128;
    if (local_138 == (char **)0x0) goto switchD_00765a9c_caseD_43;
    puVar10 = *(uint **)((long)local_138 + 0x30);
    local_120 = (uint)local_128;
    local_148 = puVar10;
    *(undefined8 *)((long)ppuVar21 + -8) = 0x7675ac;
    local_140 = (uint *)thunk_FUN_007564d0(puVar10);
    iVar17 = iVar17 - (int)local_140;
    iVar27 = 0;
    if (-1 < iVar17) {
      iVar27 = iVar17;
    }
    local_128 = (uint *)(long)(iVar27 + (int)local_140);
    puVar9 = local_128;
    if ((uint *)(local_e0 - (long)puVar30) <= local_128) goto LAB_007659a0;
    if (puVar14 != (uint *)0x0) {
      puVar9 = local_148;
      puVar10 = puVar14;
      if (0 < iVar17) {
        puVar10 = puVar14 + iVar17;
        if (local_120 == 0x30) {
          *(undefined8 *)((long)ppuVar21 + -8) = 0x767ef3;
          thunk_FUN_007a90f0(puVar14);
          puVar9 = *(uint **)((long)local_138 + 0x30);
        }
        else {
          *(undefined8 *)((long)ppuVar21 + -8) = 0x76761f;
          thunk_FUN_007a90f0(puVar14);
          puVar9 = *(uint **)((long)local_138 + 0x30);
        }
      }
      lVar33 = (long)(int)local_140;
      lVar31 = lVar33;
      if ((int)local_f0 == 0) {
        *(undefined8 *)((long)ppuVar21 + -8) = 0x76764f;
        FUN_00756660(puVar10,puVar9,lVar33);
      }
      else {
        for (; lVar31 != 0; lVar31 = lVar31 + -1) {
          uVar7 = puVar9[lVar31 + -1];
          local_f0 = param_3;
          *(undefined8 *)((long)ppuVar21 + -8) = 0x767dc3;
          uVar7 = FUN_00771a10(uVar7);
          puVar10[lVar31 + -1] = uVar7;
          param_3 = local_f0;
        }
      }
      puVar14 = puVar10 + lVar33;
      puVar9 = local_128;
    }
    goto LAB_00766777;
  case 0x50:
    goto switchD_00765ac0_caseD_50;
  case 0x52:
    goto switchD_00765ac0_caseD_52;
  case 0x54:
    goto switchD_00765ac0_caseD_54;
  case 0x58:
    ppcVar13 = (char **)*(int **)(local_108 + 0x360);
    if (**(int **)(local_108 + 0x360) == 0) goto switchD_00765a9c_caseD_58;
    goto LAB_007663f8;
  case 0x59:
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar27);
    *(undefined8 *)((long)ppuVar21 + -8) = 0x7674b6;
    lVar31 = FUN_007681f0(puVar10,lVar31);
    iVar27 = (uint)local_138;
    if (lVar31 != 0) {
      ppcVar13 = (char **)*(int **)(lVar31 + 0x38);
      if ((uint)local_138 != 0) {
        local_e8 = (uint)local_138;
      }
      goto LAB_007663f8;
    }
    goto switchD_00765a9c_caseD_59;
  case 0x5a:
    goto switchD_00765ac0_caseD_5a;
  case 0x62:
  case 0x68:
    if (iVar24 == 0) {
      iVar24 = (int)local_f0;
    }
    local_f0 = (uint *)CONCAT44(local_f0._4_4_,iVar24);
    goto switchD_00765a9c_caseD_1;
  case 99:
    ppcVar13 = (char **)*(int **)(local_108 + 0x358);
    if (**(int **)(local_108 + 0x358) != 0) goto LAB_007663f8;
    goto switchD_00765a9c_caseD_63;
  case 0x6e:
    goto switchD_00765ac0_caseD_6e;
  case 0x70:
    goto switchD_00765ac0_caseD_70;
  case 0x72:
    goto switchD_00765ac0_caseD_72;
  case 0x73:
    goto switchD_00765ac0_caseD_73;
  case 0x74:
    goto switchD_00765ac0_caseD_74;
  case 0x75:
    iVar24 = 0x45;
    goto LAB_00767295;
  case 0x78:
    ppcVar13 = (char **)*(int **)(local_108 + 0x348);
    if (**(int **)(local_108 + 0x348) != 0) goto LAB_007663f8;
    goto switchD_00765a9c_caseD_78;
  case 0x79:
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar27);
    *(undefined8 *)((long)ppuVar21 + -8) = 0x767513;
    lVar31 = FUN_007681f0(puVar10);
    iVar27 = (uint)local_138;
    if (lVar31 == 0) goto switchD_00765a9c_caseD_79;
    if (local_e8 != 0) {
      iVar27 = local_e8;
    }
    iVar24 = 2;
    if (1 < iVar17) {
      iVar24 = iVar17;
    }
    uVar32 = (ulong)((local_f8[5] - *(int *)(lVar31 + 8)) * *(int *)(lVar31 + 0x40) +
                    *(int *)(lVar31 + 4));
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar24);
    goto LAB_00766bb8;
  case 0x7a:
    iVar24 = 0x45;
    goto LAB_00767182;
  }
  goto switchD_00765ac0_caseD_41;
LAB_00765a78:
  iVar17 = -1;
LAB_00765a7e:
  param_3 = puVar11;
  if (uVar7 == 0x4f) {
    uVar7 = puVar11[1];
    param_3 = puVar11 + 1;
    bVar35 = (byte)local_11c;
    switch(uVar7) {
    case 0:
      param_3 = puVar11;
      goto switchD_00765ac0_caseD_41;
    default:
      goto switchD_00765ac0_caseD_1;
    case 0x41:
    case 0x44:
    case 0x46:
    case 0x58:
    case 0x59:
    case 0x61:
    case 99:
    case 0x78:
      goto switchD_00765ac0_caseD_41;
    case 0x42:
      if (iVar24 == 0) {
        iVar24 = (int)local_f0;
      }
      puVar23 = &DAT_007d0973;
      uVar7 = local_f8[4];
      if (uVar7 < 0xc) {
        puVar23 = *(undefined1 **)(local_108 + 0x40 + (ulong)(uVar7 + 0x2007b & 0xffff) * 8);
      }
      local_148 = (uint *)CONCAT44(local_148._4_4_,uVar7);
      local_140 = (uint *)CONCAT44(local_140._4_4_,iVar24);
      local_128 = (uint *)CONCAT44(local_128._4_4_,iVar27);
      *(undefined8 *)((long)ppuVar21 + -8) = 0x7673a8;
      local_f0 = (uint *)thunk_FUN_007564d0(puVar23);
      iVar17 = iVar17 - (int)local_f0;
      iVar27 = 0;
      if (-1 < iVar17) {
        iVar27 = iVar17;
      }
      local_138 = (char **)(long)(iVar27 + (int)local_f0);
      puVar9 = local_128;
      if ((int *)(local_e0 - (long)puVar30) <= local_138) goto LAB_007659a0;
      if (puVar14 != (uint *)0x0) {
        puVar10 = puVar14;
        uVar7 = (uint)local_148;
        puVar9 = local_140;
        if (0 < iVar17) {
          local_128 = (uint *)CONCAT44(local_128._4_4_,(int)local_140);
          puVar10 = puVar14 + iVar17;
          *(undefined8 *)((long)ppuVar21 + -8) = 0x767429;
          thunk_FUN_007a90f0(puVar14);
          uVar7 = local_f8[4];
          puVar9 = local_128;
        }
        lVar31 = (long)(int)local_f0;
        if ((int)puVar9 == 0) {
          puVar23 = &DAT_007d0973;
          if (uVar7 < 0xc) {
            puVar23 = *(undefined1 **)(local_108 + 0x40 + (ulong)(uVar7 + 0x2007b & 0xffff) * 8);
          }
          *(undefined8 *)((long)ppuVar21 + -8) = 0x767476;
          FUN_00756660(puVar10,puVar23,lVar31);
        }
        else {
          puVar23 = &DAT_007d0973;
          lVar33 = lVar31;
          if (uVar7 < 0xc) {
            puVar23 = *(undefined1 **)(local_108 + 0x40 + (ulong)(uVar7 + 0x2007b & 0xffff) * 8);
          }
          for (; lVar33 != 0; lVar33 = lVar33 + -1) {
            uVar3 = *(undefined4 *)(puVar23 + lVar33 * 4 + -4);
            local_f0 = puVar30;
            *(undefined8 *)((long)ppuVar21 + -8) = 0x767e28;
            uVar7 = FUN_00771a10(uVar3);
            puVar10[lVar33 + -1] = uVar7;
            puVar30 = local_f0;
          }
        }
        puVar14 = puVar10 + lVar31;
      }
      goto LAB_00765c47;
    case 0x43:
      bVar35 = 1;
      goto LAB_00766e2d;
    case 0x47:
    case 0x56:
    case 0x67:
      bVar35 = true;
      goto LAB_00765c55;
    case 0x48:
      bVar35 = 1;
      goto LAB_00766f58;
    case 0x49:
      goto LAB_00766f38;
    case 0x4d:
      bVar35 = 1;
      goto LAB_00766eca;
    case 0x50:
switchD_00765ac0_caseD_50:
      puVar11 = param_3;
      goto switchD_00765a9c_caseD_50;
    case 0x52:
switchD_00765ac0_caseD_52:
      puVar11 = param_3;
      goto switchD_00765a9c_caseD_52;
    case 0x53:
      bVar35 = 1;
      goto LAB_00766ef8;
    case 0x54:
switchD_00765ac0_caseD_54:
      puVar11 = param_3;
      goto switchD_00765a9c_caseD_54;
    case 0x55:
      bVar35 = 1;
      goto LAB_00766e7d;
    case 0x57:
      bVar35 = 1;
      goto LAB_00766f86;
    case 0x5a:
switchD_00765ac0_caseD_5a:
      goto switchD_00765a9c_caseD_5a;
    case 0x62:
    case 0x68:
      if (iVar24 == 0) {
        iVar24 = (int)local_f0;
      }
      puVar23 = &DAT_007d0973;
      uVar7 = local_f8[4];
      local_f0 = (uint *)CONCAT44(local_f0._4_4_,iVar24);
      if (uVar7 < 0xc) {
        puVar23 = *(undefined1 **)(local_108 + 0x40 + (ulong)(uVar7 + 0x20093 & 0xffff) * 8);
      }
      local_148 = (uint *)CONCAT44(local_148._4_4_,uVar7);
      local_140 = (uint *)CONCAT44(local_140._4_4_,iVar27);
      *(undefined8 *)((long)ppuVar21 + -8) = 0x766047;
      local_138 = (char **)thunk_FUN_007564d0(puVar23);
      iVar17 = iVar17 - (int)local_138;
      iVar27 = 0;
      if (-1 < iVar17) {
        iVar27 = iVar17;
      }
      local_128 = (uint *)(long)(iVar27 + (int)local_138);
      puVar9 = local_128;
      if ((uint *)(local_e0 - (long)puVar30) <= local_128) goto LAB_007659a0;
      if (puVar14 != (uint *)0x0) {
        uVar7 = (uint)local_148;
        puVar10 = puVar14;
        if (0 < iVar17) {
          puVar10 = puVar14 + iVar17;
          if ((int)local_140 == 0x30) {
            *(undefined8 *)((long)ppuVar21 + -8) = 0x767eae;
            thunk_FUN_007a90f0(puVar14);
            uVar7 = local_f8[4];
          }
          else {
            *(undefined8 *)((long)ppuVar21 + -8) = 0x7660b9;
            thunk_FUN_007a90f0(puVar14);
            uVar7 = local_f8[4];
          }
        }
        lVar31 = (long)(int)(uint)local_138;
        if ((int)local_f0 == 0) {
          puVar23 = &DAT_007d0973;
          if (uVar7 < 0xc) {
            puVar23 = *(undefined1 **)(local_108 + 0x40 + (ulong)(uVar7 + 0x20093 & 0xffff) * 8);
          }
          *(undefined8 *)((long)ppuVar21 + -8) = 0x766106;
          FUN_00756660(puVar10,puVar23,lVar31);
        }
        else {
          puVar23 = &DAT_007d0973;
          lVar33 = lVar31;
          if (uVar7 < 0xc) {
            puVar23 = *(undefined1 **)(local_108 + 0x40 + (ulong)(uVar7 + 0x20093 & 0xffff) * 8);
          }
          for (; lVar33 != 0; lVar33 = lVar33 + -1) {
            uVar3 = *(undefined4 *)(puVar23 + lVar33 * 4 + -4);
            local_f0 = param_3;
            *(undefined8 *)((long)ppuVar21 + -8) = 0x767e8a;
            uVar7 = FUN_00771a10(uVar3);
            puVar10[lVar33 + -1] = uVar7;
            param_3 = local_f0;
          }
        }
        puVar14 = puVar10 + lVar31;
      }
      puVar30 = (uint *)((long)puVar30 + (long)local_128);
      param_1 = puVar14;
      goto LAB_00765971;
    case 100:
      bVar35 = 1;
      goto LAB_00767154;
    case 0x65:
      bVar35 = 1;
      goto LAB_00767126;
    case 0x6a:
      bVar35 = 1;
      goto LAB_00767106;
    case 0x6b:
      bVar35 = 1;
      goto LAB_007670a4;
    case 0x6c:
      goto LAB_0076706d;
    case 0x6d:
      bVar35 = 1;
      goto LAB_007670cf;
    case 0x6e:
switchD_00765ac0_caseD_6e:
      puVar11 = param_3;
      goto switchD_00765a9c_caseD_6e;
    case 0x70:
switchD_00765ac0_caseD_70:
      puVar11 = param_3;
      goto switchD_00765a9c_caseD_70;
    case 0x72:
switchD_00765ac0_caseD_72:
      goto switchD_00765a9c_caseD_72;
    case 0x73:
switchD_00765ac0_caseD_73:
      goto switchD_00765a9c_caseD_73;
    case 0x74:
switchD_00765ac0_caseD_74:
      puVar11 = param_3;
      goto switchD_00765a9c_caseD_74;
    case 0x75:
      iVar24 = 0x4f;
LAB_00767295:
      bVar35 = iVar24 == 0x4f;
      goto LAB_0076700a;
    case 0x77:
      bVar35 = 1;
      goto LAB_00766fdc;
    case 0x79:
      bVar35 = true;
      goto LAB_00766df1;
    case 0x7a:
      iVar24 = 0x4f;
      goto LAB_00767182;
    }
  }
  switch(uVar7) {
  case 0:
    uVar7 = puVar11[-1];
    param_3 = puVar15;
switchD_00765ac0_caseD_1:
    if (uVar7 != 0x25) goto switchD_00765ac0_caseD_41;
    iVar24 = 1;
    puVar15 = (uint *)0x0;
    puVar11 = param_3;
    goto LAB_00765ba0;
  default:
    goto switchD_00765a9c_caseD_1;
  case 0x25:
    iVar17 = iVar17 + -1;
    iVar24 = 0;
    if (-1 < iVar17) {
      iVar24 = iVar17;
    }
    uVar32 = (ulong)(iVar24 + 1);
    if ((ulong)(local_e0 - (long)puVar30) <= uVar32) goto LAB_007659a0;
    if (puVar14 != (uint *)0x0) {
      if (0 < iVar17) {
        puVar14 = puVar14 + iVar17;
        if (iVar27 == 0x30) {
          *(undefined8 *)((long)ppuVar21 + -8) = 0x767cd0;
          thunk_FUN_007a90f0();
          uVar7 = *puVar11;
        }
        else {
          *(undefined8 *)((long)ppuVar21 + -8) = 0x766907;
          thunk_FUN_007a90f0();
          uVar7 = *puVar11;
        }
      }
      *puVar14 = uVar7;
      puVar14 = puVar14 + 1;
    }
    goto LAB_00766177;
  case 0x41:
    if (iVar24 == 0) {
      iVar24 = (int)local_f0;
    }
    local_f0 = (uint *)CONCAT44(local_f0._4_4_,iVar24);
    local_138 = (char **)CONCAT44(local_138._4_4_,local_f8[6]);
    local_128 = (uint *)CONCAT44(local_128._4_4_,iVar27);
    *(undefined8 *)((long)ppuVar21 + -8) = 0x766965;
    ppcVar13 = (char **)thunk_FUN_007564d0();
    iVar17 = iVar17 - (int)ppcVar13;
    iVar27 = 0;
    if (-1 < iVar17) {
      iVar27 = iVar17;
    }
    puVar10 = (uint *)(long)(iVar27 + (int)ppcVar13);
    puVar9 = local_128;
    if ((uint *)(local_e0 - (long)puVar30) <= puVar10) goto LAB_007659a0;
    if (puVar14 == (uint *)0x0) goto LAB_00765eaa;
    uVar7 = (uint)local_138;
    if (0 < iVar17) {
      puVar14 = puVar14 + iVar17;
      local_138 = ppcVar13;
      *(undefined8 *)((long)ppuVar21 + -8) = 0x7669d1;
      thunk_FUN_007a90f0();
      uVar7 = local_f8[6];
      ppcVar13 = local_138;
    }
    local_138 = (char **)(long)(int)ppcVar13;
    piVar12 = (int *)local_138;
    puVar15 = local_128;
    puVar29 = local_f0;
    if ((int)local_f0 == 0) {
      puVar23 = &DAT_007d0973;
      if (uVar7 < 7) {
        puVar23 = *(undefined1 **)(local_108 + 0x40 + (ulong)(uVar7 + 0x2003b & 0xffff) * 8);
      }
LAB_007668a0:
      ppcVar13 = local_138;
      *(undefined8 *)((long)ppuVar21 + -8) = 0x7668af;
      FUN_00756660(puVar14,puVar23,ppcVar13);
      puVar15 = local_128;
      puVar29 = local_f0;
    }
    else {
      for (; local_128 = puVar11, local_f0 = puVar10, param_3 = local_128, puVar10 = local_f0,
          piVar12 != (int *)0x0; piVar12 = (int *)((long)piVar12 + -1)) {
        *(undefined8 *)((long)ppuVar21 + -8) = 0x767c07;
        uVar7 = FUN_00771a10();
        puVar14[(long)((long)piVar12 + -1)] = uVar7;
        puVar10 = local_f0;
        puVar11 = local_128;
        puVar15 = local_128;
        puVar29 = local_f0;
      }
    }
    goto LAB_00765e9e;
  case 0x42:
    puVar23 = &DAT_007d0973;
    if (iVar24 == 0) {
      iVar24 = (int)local_f0;
    }
    uVar7 = local_f8[4];
    if (uVar7 < 0xc) {
      puVar23 = *(undefined1 **)(local_108 + 0x40 + (ulong)(uVar7 + 0x2004e & 0xffff) * 8);
    }
    local_140 = (uint *)CONCAT44(local_140._4_4_,iVar24);
    local_128 = (uint *)CONCAT44(local_128._4_4_,uVar7);
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar27);
    *(undefined8 *)((long)ppuVar21 + -8) = 0x766cee;
    iVar24 = thunk_FUN_007564d0(puVar23);
    iVar17 = iVar17 - iVar24;
    iVar27 = 0;
    if (-1 < iVar17) {
      iVar27 = iVar17;
    }
    local_f0 = (uint *)(long)(iVar27 + iVar24);
    puVar9 = local_128;
    if ((uint *)(local_e0 - (long)puVar30) <= local_f0) goto LAB_007659a0;
    if (puVar14 != (uint *)0x0) {
      uVar7 = (uint)local_128;
      ppcVar13 = (char **)local_140;
      if (0 < iVar17) {
        local_138 = (char **)CONCAT44(local_138._4_4_,(int)local_140);
        puVar14 = puVar14 + iVar17;
        *(undefined8 *)((long)ppuVar21 + -8) = 0x766d6a;
        thunk_FUN_007a90f0();
        uVar7 = local_f8[4];
        ppcVar13 = local_138;
      }
      local_138 = (char **)(long)iVar24;
      piVar12 = (int *)local_138;
      if ((int)ppcVar13 == 0) {
        puVar23 = &DAT_007d0973;
        if (uVar7 < 0xc) {
          puVar23 = *(undefined1 **)(local_108 + 0x40 + (ulong)(uVar7 + 0x2004e & 0xffff) * 8);
        }
LAB_00765fc2:
        ppcVar13 = local_138;
        *(undefined8 *)((long)ppuVar21 + -8) = 0x765fd1;
        FUN_00756660(puVar14,puVar23,ppcVar13);
      }
      else {
        for (; piVar12 != (int *)0x0; piVar12 = (int *)((long)piVar12 + -1)) {
          local_128 = puVar11;
          *(undefined8 *)((long)ppuVar21 + -8) = 0x767d26;
          uVar7 = FUN_00771a10();
          puVar14[(long)((long)piVar12 + -1)] = uVar7;
          puVar11 = local_128;
        }
      }
LAB_00765fd1:
      puVar14 = puVar14 + (long)local_138;
      param_3 = puVar11;
    }
    goto LAB_00765fdd;
  case 0x43:
switchD_00765a9c_caseD_43:
    bVar35 = 0;
LAB_00766e2d:
    iVar24 = 1;
    if (0 < iVar17) {
      iVar24 = iVar17;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar24);
    uVar7 = (int)(local_f8[5] + 0x76c) / 100 + ((int)(local_f8[5] + 0x76c) % 100 >> 0x1f);
    uVar32 = (ulong)uVar7;
    bVar35 = bVar35 & (byte)~(byte)(uVar7 >> 0x18) >> 7;
    break;
  case 0x44:
    local_138 = (char **)&DAT_00821f08;
    ppcVar13 = local_138;
    goto LAB_007663f8;
  case 0x46:
    local_138 = (char **)&DAT_0082c958;
    ppcVar13 = local_138;
    goto LAB_007663f8;
  case 0x47:
  case 0x56:
  case 0x67:
    bVar35 = false;
LAB_00765c55:
    uVar16 = local_f8[7];
    uVar2 = local_f8[6];
    uVar25 = local_f8[5];
    iVar24 = (uVar16 - uVar2) + 0x17e;
    iVar26 = (uVar16 - iVar24) + 3 + (iVar24 / 7) * 7;
    if (iVar26 < 0) {
      uVar25 = uVar25 + 0x76b;
      iVar24 = 0x16d;
      uVar32 = (ulong)uVar25;
      if (((uVar25 & 3) == 0) &&
         (iVar24 = 0x16e, (uVar25 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar25 * 0x40000000) < 0x28f5c29)
         ) {
        iVar24 = 0x16e - (uint)((int)uVar25 % 400 != 0);
      }
      iVar26 = ((iVar24 + uVar16) - uVar2) + 0x17e;
      iVar26 = ((iVar24 + uVar16) - iVar26) + 3 + (iVar26 / 7) * 7;
    }
    else {
      uVar1 = uVar25 + 0x76c;
      uVar32 = (ulong)uVar1;
      iVar24 = 0x16d;
      if ((uVar25 & 3) == 0) {
        iVar24 = 0x16e;
        uVar22 = uVar1 * -0x3d70a3d7 + 0x51eb850;
        if ((uVar22 >> 2 | uVar25 * 0x40000000) < 0x28f5c29) {
          iVar24 = ((uVar22 >> 4 | uVar1 * -0x70000000) < 0xa3d70b) + 0x16d;
        }
      }
      iVar6 = ((uVar16 - iVar24) - uVar2) + 0x17e;
      iVar24 = ((uVar16 - iVar24) - iVar6) + 3 + (iVar6 / 7) * 7;
      if (-1 < iVar24) {
        uVar32 = (ulong)(uVar25 + 0x76d);
        iVar26 = iVar24;
      }
    }
    uVar16 = (uint)uVar32;
    if (uVar7 != 0x47) {
      if (uVar7 != 0x67) {
        iVar24 = 2;
        if (1 < iVar17) {
          iVar24 = iVar17;
        }
        iVar26 = iVar26 / 7;
        goto LAB_00767058;
      }
      iVar24 = 2;
      if (1 < iVar17) {
        iVar24 = iVar17;
      }
      local_138 = (char **)CONCAT44(local_138._4_4_,iVar24);
      goto LAB_00765d8e;
    }
    iVar24 = 1;
    if (0 < iVar17) {
      iVar24 = iVar17;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar24);
    bVar35 = bVar35 & (byte)~(byte)(uVar32 >> 0x18) >> 7;
    break;
  case 0x48:
    bVar35 = 0;
LAB_00766f58:
    iVar24 = 2;
    if (1 < iVar17) {
      iVar24 = iVar17;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar24);
    uVar32 = (ulong)local_f8[2];
    bVar35 = bVar35 & (byte)~(byte)(local_f8[2] >> 0x18) >> 7;
    break;
  case 0x49:
    bVar35 = 0;
LAB_00766f38:
    uVar32 = (ulong)local_e4;
    iVar24 = 2;
    if (1 < iVar17) {
      iVar24 = iVar17;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar24);
    break;
  case 0x4d:
    bVar35 = 0;
LAB_00766eca:
    iVar24 = 2;
    if (1 < iVar17) {
      iVar24 = iVar17;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar24);
    uVar32 = (ulong)local_f8[1];
    bVar35 = bVar35 & (byte)~(byte)(local_f8[1] >> 0x18) >> 7;
    break;
  case 0x50:
switchD_00765a9c_caseD_50:
    iVar26 = 1;
    param_3 = puVar11;
    goto LAB_00766a67;
  case 0x52:
switchD_00765a9c_caseD_52:
    local_138 = (char **)&DAT_0082c9b0;
    param_3 = puVar11;
    ppcVar13 = local_138;
    goto LAB_007663f8;
  case 0x53:
    bVar35 = 0;
LAB_00766ef8:
    iVar24 = 2;
    if (1 < iVar17) {
      iVar24 = iVar17;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar24);
    uVar32 = (ulong)*local_f8;
    bVar35 = bVar35 & (byte)~(byte)(*local_f8 >> 0x18) >> 7;
    break;
  case 0x54:
switchD_00765a9c_caseD_54:
    local_138 = (char **)&DAT_00821f30;
    param_3 = puVar11;
    ppcVar13 = local_138;
    goto LAB_007663f8;
  case 0x55:
    bVar35 = 0;
LAB_00766e7d:
    iVar24 = 2;
    if (1 < iVar17) {
      iVar24 = iVar17;
    }
    iVar26 = local_f8[7] - local_f8[6];
    goto LAB_00766e9c;
  case 0x57:
    bVar35 = 0;
LAB_00766f86:
    iVar24 = 2;
    if (1 < iVar17) {
      iVar24 = iVar17;
    }
    local_128 = (uint *)CONCAT44(local_128._4_4_,local_f8[7]);
    iVar26 = local_f8[7] - (int)(local_f8[6] + 6) % 7;
LAB_00766e9c:
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar24);
    uVar32 = (ulong)(uint)((iVar26 + 7) / 7);
    bVar35 = -0xe < iVar26 & bVar35;
    break;
  case 0x58:
switchD_00765a9c_caseD_58:
    ppcVar13 = (char **)*(int **)(local_108 + 0x330);
    goto LAB_007663f8;
  case 0x59:
switchD_00765a9c_caseD_59:
    iVar24 = 1;
    if (0 < iVar17) {
      iVar24 = iVar17;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar24);
    local_128 = (uint *)CONCAT44(local_128._4_4_,local_f8[5]);
    uVar32 = (ulong)(local_f8[5] + 0x76c);
    goto LAB_00766bb8;
  case 0x5a:
switchD_00765a9c_caseD_5a:
    iVar26 = 0;
    if (iVar24 == 0) {
      iVar26 = (int)local_f0;
    }
    local_f0 = (uint *)CONCAT44(local_f0._4_4_,iVar26);
    if (local_118 == (char *)0x0) {
      uVar7 = local_f8[8];
      if (-1 < (int)uVar7) goto LAB_00766594;
LAB_007679b2:
      local_118 = "";
    }
    else if ((*local_118 == '\0') && (uVar7 = local_f8[8], -1 < (int)uVar7)) {
LAB_00766594:
      if (*local_110 == '\0') {
        local_138 = (char **)CONCAT44(local_138._4_4_,iVar24);
        local_118 = (char *)CONCAT44(local_118._4_4_,iVar27);
        *(undefined8 *)((long)ppuVar21 + -8) = 0x767c4b;
        FUN_00761f50();
        *local_110 = '\x01';
        uVar7 = local_f8[8];
        iVar27 = (int)local_118;
        iVar24 = (uint)local_138;
      }
      local_118 = "?";
      if (((int)uVar7 < 2) &&
         (local_118 = (&PTR_DAT_0093ea00)[(int)uVar7], local_118 == (char *)0x0)) goto LAB_007679b2;
    }
    lVar31 = local_100;
    local_d8 = local_118;
    local_128 = (uint *)CONCAT44(local_128._4_4_,iVar27);
    local_98[0] = 0;
    local_148 = (uint *)local_98;
    local_138 = &local_d8;
    local_140._0_4_ = iVar24;
    *(undefined8 *)((long)ppuVar21 + -8) = 0x766611;
    puVar10 = (uint *)FUN_0075a900(0,&local_d8,0,local_98,lVar31);
    ppcVar13 = local_138;
    uVar32 = (long)puVar10 * 4 + 0x1b;
    for (puVar23 = (undefined1 *)ppuVar21;
        puVar23 != (undefined1 *)((long)ppuVar21 + -(uVar32 & 0xfffffffffffff000));
        puVar23 = puVar23 + -0x1000) {
      *(undefined8 *)(puVar23 + -8) = *(undefined8 *)(puVar23 + -8);
    }
    uVar32 = (ulong)((uint)uVar32 & 0xff0);
    lVar31 = -uVar32;
    ppuVar21 = (uint **)(puVar23 + lVar31);
    if (uVar32 != 0) {
      *(undefined8 *)(puVar23 + -8) = *(undefined8 *)(puVar23 + -8);
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,(int)local_140);
    local_140 = (uint *)CONCAT44(local_140._4_4_,(uint)local_128);
    *(undefined8 *)(puVar23 + lVar31 + -8) = 0x7666ae;
    local_128 = puVar10;
    FUN_0075a900((ulong)(puVar23 + lVar31 + 0xf) & 0xfffffffffffffff0,ppcVar13,puVar10,local_148,
                 local_100);
    iVar17 = iVar17 - (int)local_128;
    iVar27 = 0;
    if (-1 < iVar17) {
      iVar27 = iVar17;
    }
    puVar9 = (uint *)(long)(iVar27 + (int)local_128);
    if ((uint *)(local_e0 - (long)puVar30) <= puVar9) goto LAB_007659a0;
    ppuVar21 = (uint **)(puVar23 + lVar31);
    if (puVar14 != (uint *)0x0) {
      iVar27 = (int)local_138;
      puVar10 = local_128;
      if (0 < iVar17) {
        iVar27 = (int)local_140;
        local_140 = local_128;
        puVar14 = puVar14 + iVar17;
        local_128 = puVar9;
        if (iVar27 == 0x30) {
          *(undefined8 *)(puVar23 + lVar31 + -8) = 0x767c83;
          thunk_FUN_007a90f0();
          iVar27 = (int)local_138;
          puVar10 = local_140;
          puVar9 = local_128;
        }
        else {
          *(undefined8 *)(puVar23 + lVar31 + -8) = 0x76672e;
          thunk_FUN_007a90f0();
          iVar27 = (int)local_138;
          puVar10 = local_140;
          puVar9 = local_128;
        }
      }
      local_128 = puVar9;
      local_138 = (char **)(long)(int)puVar10;
      piVar12 = (int *)local_138;
      if (iVar27 == 0) {
        if ((int)local_f0 == 0) {
          *(undefined8 *)(puVar23 + lVar31 + -8) = 0x76676b;
          FUN_00756660(puVar14,(ulong)(puVar23 + lVar31 + 0xf) & 0xfffffffffffffff0,local_138);
        }
        else {
          for (; piVar12 != (int *)0x0; piVar12 = (int *)((long)piVar12 + -1)) {
            *(undefined8 *)(puVar23 + lVar31 + -8) = 0x767add;
            local_f0 = param_3;
            uVar7 = FUN_00771a10();
            puVar14[(long)((long)piVar12 + -1)] = uVar7;
            param_3 = local_f0;
          }
        }
      }
      else {
        for (; piVar12 != (int *)0x0; piVar12 = (int *)((long)piVar12 + -1)) {
          *(undefined8 *)(puVar23 + lVar31 + -8) = 0x767b1b;
          local_f0 = param_3;
          uVar7 = FUN_007719b0();
          puVar14[(long)((long)piVar12 + -1)] = uVar7;
          param_3 = local_f0;
        }
      }
      puVar14 = puVar14 + (long)local_138;
      ppuVar21 = (uint **)(puVar23 + lVar31);
      puVar9 = local_128;
    }
LAB_00766777:
    local_128 = puVar9;
    puVar30 = (uint *)((long)puVar30 + (long)local_128);
    param_1 = puVar14;
    goto LAB_00765971;
  case 0x61:
    if (iVar24 == 0) {
      iVar24 = (int)local_f0;
    }
    puVar23 = &DAT_007d0973;
    uVar7 = local_f8[6];
    local_f0 = (uint *)CONCAT44(local_f0._4_4_,iVar24);
    if (uVar7 < 7) {
      puVar23 = *(undefined1 **)(local_108 + 0x40 + (ulong)(uVar7 + 0x20034 & 0xffff) * 8);
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,uVar7);
    local_128 = (uint *)CONCAT44(local_128._4_4_,iVar27);
    *(undefined8 *)((long)ppuVar21 + -8) = 0x7667e8;
    ppcVar13 = (char **)thunk_FUN_007564d0(puVar23);
    iVar17 = iVar17 - (int)ppcVar13;
    iVar27 = 0;
    if (-1 < iVar17) {
      iVar27 = iVar17;
    }
    puVar10 = (uint *)(long)(iVar27 + (int)ppcVar13);
    puVar9 = local_128;
    if ((uint *)(local_e0 - (long)puVar30) <= puVar10) goto LAB_007659a0;
    if (puVar14 != (uint *)0x0) {
      puVar9 = puVar14;
      uVar7 = (uint)local_138;
      if (0 < iVar17) {
        puVar9 = puVar14 + iVar17;
        local_138 = ppcVar13;
        *(undefined8 *)((long)ppuVar21 + -8) = 0x766854;
        thunk_FUN_007a90f0(puVar14);
        uVar7 = local_f8[6];
        ppcVar13 = local_138;
      }
      local_138 = (char **)(long)(int)ppcVar13;
      puVar14 = puVar9;
      if ((int)local_f0 == 0) {
        puVar23 = &DAT_007d0973;
        if (uVar7 < 7) {
          puVar23 = *(undefined1 **)(local_108 + 0x40 + (ulong)(uVar7 + 0x20034 & 0xffff) * 8);
        }
        goto LAB_007668a0;
      }
      puVar23 = &DAT_007d0973;
      piVar12 = (int *)local_138;
      puVar15 = local_128;
      puVar29 = local_f0;
      if (uVar7 < 7) {
        puVar23 = *(undefined1 **)(local_108 + 0x40 + (ulong)(uVar7 + 0x20034 & 0xffff) * 8);
      }
      for (; local_128 = puVar11, local_f0 = puVar10, param_3 = local_128, puVar10 = local_f0,
          piVar12 != (int *)0x0; piVar12 = (int *)((long)piVar12 + -1)) {
        uVar3 = *(undefined4 *)(puVar23 + (long)piVar12 * 4 + -4);
        *(undefined8 *)((long)ppuVar21 + -8) = 0x767b8a;
        uVar7 = FUN_00771a10(uVar3);
        puVar9[(long)((long)piVar12 + -1)] = uVar7;
        puVar10 = local_f0;
        puVar11 = local_128;
        puVar15 = local_128;
        puVar29 = local_f0;
      }
      goto LAB_00765e9e;
    }
    goto LAB_00765eaa;
  case 0x62:
  case 0x68:
    puVar23 = &DAT_007d0973;
    if (iVar24 == 0) {
      iVar24 = (int)local_f0;
    }
    uVar7 = local_f8[4];
    if (uVar7 < 0xc) {
      puVar23 = *(undefined1 **)(local_108 + 0x40 + (ulong)(uVar7 + 0x20042 & 0xffff) * 8);
    }
    local_140 = (uint *)CONCAT44(local_140._4_4_,iVar24);
    local_128 = (uint *)CONCAT44(local_128._4_4_,uVar7);
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar27);
    *(undefined8 *)((long)ppuVar21 + -8) = 0x765f01;
    iVar24 = thunk_FUN_007564d0(puVar23);
    iVar17 = iVar17 - iVar24;
    iVar27 = 0;
    if (-1 < iVar17) {
      iVar27 = iVar17;
    }
    local_f0 = (uint *)(long)(iVar27 + iVar24);
    puVar9 = local_128;
    if ((uint *)(local_e0 - (long)puVar30) <= local_f0) goto LAB_007659a0;
    if (puVar14 != (uint *)0x0) {
      puVar10 = puVar14;
      uVar7 = (uint)local_128;
      ppcVar13 = (char **)local_140;
      if (0 < iVar17) {
        local_138 = (char **)CONCAT44(local_138._4_4_,(int)local_140);
        puVar10 = puVar14 + iVar17;
        *(undefined8 *)((long)ppuVar21 + -8) = 0x765f7d;
        thunk_FUN_007a90f0(puVar14);
        uVar7 = local_f8[4];
        ppcVar13 = local_138;
      }
      local_138 = (char **)(long)iVar24;
      puVar14 = puVar10;
      if ((int)ppcVar13 == 0) {
        puVar23 = &DAT_007d0973;
        if (uVar7 < 0xc) {
          puVar23 = *(undefined1 **)(local_108 + 0x40 + (ulong)(uVar7 + 0x20042 & 0xffff) * 8);
        }
        goto LAB_00765fc2;
      }
      puVar23 = &DAT_007d0973;
      piVar12 = (int *)local_138;
      if (uVar7 < 0xc) {
        puVar23 = *(undefined1 **)(local_108 + 0x40 + (ulong)(uVar7 + 0x20042 & 0xffff) * 8);
      }
      for (; piVar12 != (int *)0x0; piVar12 = (int *)((long)piVar12 + -1)) {
        uVar3 = *(undefined4 *)(puVar23 + (long)piVar12 * 4 + -4);
        local_128 = puVar11;
        *(undefined8 *)((long)ppuVar21 + -8) = 0x767d8c;
        uVar7 = FUN_00771a10(uVar3);
        puVar10[(long)((long)piVar12 + -1)] = uVar7;
        puVar11 = local_128;
      }
      goto LAB_00765fd1;
    }
LAB_00765fdd:
    puVar30 = (uint *)((long)puVar30 + (long)local_f0);
    param_1 = puVar14;
    goto LAB_00765971;
  case 99:
switchD_00765a9c_caseD_63:
    ppcVar13 = (char **)*(int **)(local_108 + 800);
    goto LAB_007663f8;
  case 100:
    bVar35 = 0;
LAB_00767154:
    iVar24 = 2;
    if (1 < iVar17) {
      iVar24 = iVar17;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar24);
    uVar32 = (ulong)local_f8[3];
    bVar35 = bVar35 & (byte)~(byte)(local_f8[3] >> 0x18) >> 7;
    break;
  case 0x65:
    bVar35 = 0;
LAB_00767126:
    iVar24 = 2;
    if (1 < iVar17) {
      iVar24 = iVar17;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar24);
    uVar32 = (ulong)local_f8[3];
    bVar35 = bVar35 & (byte)~(byte)(local_f8[3] >> 0x18) >> 7;
    goto LAB_00767086;
  case 0x6a:
    bVar35 = 0;
LAB_00767106:
    iVar24 = 3;
    if (2 < iVar17) {
      iVar24 = iVar17;
    }
    uVar7 = local_f8[7];
    goto LAB_007670eb;
  case 0x6b:
    bVar35 = 0;
LAB_007670a4:
    iVar24 = 2;
    if (1 < iVar17) {
      iVar24 = iVar17;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar24);
    uVar32 = (ulong)local_f8[2];
    bVar35 = bVar35 & (byte)~(byte)(local_f8[2] >> 0x18) >> 7;
    goto LAB_00767086;
  case 0x6c:
    bVar35 = 0;
LAB_0076706d:
    uVar32 = (ulong)local_e4;
    iVar24 = 2;
    if (1 < iVar17) {
      iVar24 = iVar17;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar24);
LAB_00767086:
    if ((iVar27 != 0x30) && (iVar27 != 0x2d)) {
      iVar27 = 0x5f;
    }
    break;
  case 0x6d:
    bVar35 = 0;
LAB_007670cf:
    iVar24 = 2;
    if (1 < iVar17) {
      iVar24 = iVar17;
    }
    uVar7 = local_f8[4];
LAB_007670eb:
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar24);
    uVar32 = (ulong)(uVar7 + 1);
    local_128 = (uint *)CONCAT44(local_128._4_4_,uVar7);
    bVar35 = bVar35 & (byte)~(byte)(uVar7 + 1 >> 0x18) >> 7;
    break;
  case 0x6e:
switchD_00765a9c_caseD_6e:
    iVar17 = iVar17 + -1;
    iVar24 = 0;
    if (-1 < iVar17) {
      iVar24 = iVar17;
    }
    uVar32 = (ulong)(iVar24 + 1);
    if ((ulong)(local_e0 - (long)puVar30) <= uVar32) goto LAB_007659a0;
    param_3 = puVar11;
    if (puVar14 != (uint *)0x0) {
      puVar10 = puVar14;
      if (0 < iVar17) {
        puVar10 = puVar14 + iVar17;
        if (iVar27 == 0x30) {
          *(undefined8 *)((long)ppuVar21 + -8) = 0x767ca6;
          thunk_FUN_007a90f0(puVar14);
        }
        else {
          *(undefined8 *)((long)ppuVar21 + -8) = 0x76654a;
          thunk_FUN_007a90f0(puVar14);
        }
      }
      *puVar10 = 10;
      puVar14 = puVar10 + 1;
    }
    goto LAB_00766177;
  case 0x70:
switchD_00765a9c_caseD_70:
    iVar26 = 0;
    param_3 = puVar11;
LAB_00766a67:
    if (iVar24 != 0) {
      iVar26 = iVar24;
      local_f0._0_4_ = 0;
    }
    local_140 = (uint *)CONCAT44(local_140._4_4_,iVar27);
    local_128 = (uint *)CONCAT44(local_128._4_4_,local_f8[2]);
    uVar4 = *(undefined8 *)(local_108 + 0x40 + (long)(int)((0xb < (int)local_f8[2]) + 0x5a) * 8);
    *(undefined8 *)((long)ppuVar21 + -8) = 0x766ab6;
    puVar10 = (uint *)thunk_FUN_007564d0(uVar4);
    iVar17 = iVar17 - (int)puVar10;
    iVar27 = 0;
    if (-1 < iVar17) {
      iVar27 = iVar17;
    }
    local_138 = (char **)(long)(iVar27 + (int)puVar10);
    puVar9 = local_128;
    if ((int *)(local_e0 - (long)puVar30) <= local_138) goto LAB_007659a0;
    if (puVar14 != (uint *)0x0) {
      uVar7 = (uint)local_128;
      if (0 < iVar17) {
        puVar29 = puVar14 + iVar17;
        local_128 = puVar10;
        *(undefined8 *)((long)ppuVar21 + -8) = 0x766b2a;
        thunk_FUN_007a90f0(puVar14);
        uVar7 = local_f8[2];
        puVar10 = local_128;
      }
      puVar14 = (uint *)(long)(int)puVar10;
      local_128 = puVar14;
      puVar9 = param_3;
      puVar10 = local_f0;
      if (iVar26 == 0) {
        puVar9 = param_3;
        if ((int)local_f0 == 0) {
          uVar4 = *(undefined8 *)(local_108 + 0x40 + (long)(int)((0xb < (int)uVar7) + 0x5a) * 8);
          *(undefined8 *)((long)ppuVar21 + -8) = 0x766b86;
          FUN_00756660(puVar29,uVar4,puVar14);
          puVar10 = local_f0;
        }
        else {
          for (; local_f0 = puVar9, param_3 = local_f0, puVar14 != (uint *)0x0;
              puVar14 = (uint *)((long)puVar14 + -1)) {
            *(undefined8 *)((long)ppuVar21 + -8) = 0x767a2d;
            uVar7 = FUN_00771a10();
            puVar29[(long)((long)puVar14 + -1)] = uVar7;
            puVar9 = local_f0;
            puVar10 = local_f0;
          }
        }
      }
      else {
        for (; local_f0 = puVar9, param_3 = local_f0, puVar14 != (uint *)0x0;
            puVar14 = (uint *)((long)puVar14 + -1)) {
          *(undefined8 *)((long)ppuVar21 + -8) = 0x7678dd;
          uVar7 = FUN_007719b0();
          puVar29[(long)((long)puVar14 + -1)] = uVar7;
          puVar9 = local_f0;
          puVar10 = local_f0;
        }
      }
LAB_00765c3b:
      local_f0 = puVar10;
      puVar14 = puVar29 + (long)local_128;
    }
LAB_00765c47:
    puVar30 = (uint *)((long)puVar30 + (long)local_138);
    param_1 = puVar14;
    goto LAB_00765971;
  case 0x72:
switchD_00765a9c_caseD_72:
    ppcVar13 = (char **)&DAT_0082c980;
    if (**(int **)(local_108 + 0x338) != 0) {
      ppcVar13 = (char **)*(int **)(local_108 + 0x338);
    }
    goto LAB_007663f8;
  case 0x73:
switchD_00765a9c_caseD_73:
    local_128 = (uint *)CONCAT44(local_128._4_4_,iVar27);
    local_138 = *(char ***)(local_f8 + 8);
    uStack_130 = *(undefined8 *)(local_f8 + 10);
    local_d8 = *(char **)local_f8;
    uStack_d0 = *(undefined8 *)(local_f8 + 2);
    local_c8 = *(undefined8 *)(local_f8 + 4);
    uStack_c0 = *(undefined8 *)(local_f8 + 6);
    local_a8 = *(undefined8 *)(local_f8 + 0xc);
    local_b8 = local_138;
    uStack_b0 = uStack_130;
    *(undefined8 *)((long)ppuVar21 + -8) = 0x7661d1;
    uVar32 = FUN_007aaee0(&local_d8);
    ppcVar13 = (char **)local_40;
    iVar27 = (uint)local_128;
    if ((long)uVar32 < 0) {
      do {
        ppcVar13 = (char **)((long)ppcVar13 + -4);
        uVar18 = (long)uVar32 / 10;
        *(uint *)ppcVar13 = 0x30 - ((int)uVar32 + (int)uVar18 * -10);
        uVar32 = uVar18;
      } while (uVar18 != 0);
      local_138 = (char **)CONCAT44(local_138._4_4_,1);
      goto LAB_00766c10;
    }
    do {
      puVar10 = (uint *)ppcVar13;
      uVar18 = uVar32 / 10;
      ppcVar13 = (char **)(puVar10 + -1);
      *(uint *)ppcVar13 = (int)uVar32 + (int)uVar18 * -10 + 0x30;
      uVar32 = uVar18;
    } while (uVar18 != 0);
    local_138 = (char **)CONCAT44(local_138._4_4_,1);
    bVar34 = false;
    goto LAB_00766230;
  case 0x74:
switchD_00765a9c_caseD_74:
    iVar17 = iVar17 + -1;
    iVar24 = 0;
    if (-1 < iVar17) {
      iVar24 = iVar17;
    }
    uVar32 = (ulong)(iVar24 + 1);
    if ((ulong)(local_e0 - (long)puVar30) <= uVar32) goto LAB_007659a0;
    param_3 = puVar11;
    if (puVar14 != (uint *)0x0) {
      puVar10 = puVar14;
      if (0 < iVar17) {
        puVar10 = puVar14 + iVar17;
        if (iVar27 == 0x30) {
          *(undefined8 *)((long)ppuVar21 + -8) = 0x767cbb;
          thunk_FUN_007a90f0(puVar14);
        }
        else {
          *(undefined8 *)((long)ppuVar21 + -8) = 0x76616b;
          thunk_FUN_007a90f0(puVar14);
        }
      }
      *puVar10 = 9;
      puVar14 = puVar10 + 1;
    }
LAB_00766177:
    puVar30 = (uint *)((long)puVar30 + uVar32);
    param_1 = puVar14;
    goto LAB_00765971;
  case 0x75:
    bVar35 = false;
LAB_0076700a:
    iVar24 = 1;
    if (0 < iVar17) {
      iVar24 = iVar17;
    }
    local_128 = (uint *)CONCAT44(local_128._4_4_,local_f8[6]);
    iVar26 = (int)(local_f8[6] + 6) % 7;
LAB_00767058:
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar24);
    uVar32 = (ulong)(iVar26 + 1U);
    bVar35 = bVar35 & (byte)~(byte)(iVar26 + 1U >> 0x18) >> 7;
    break;
  case 0x77:
    bVar35 = 0;
LAB_00766fdc:
    iVar24 = 1;
    if (0 < iVar17) {
      iVar24 = iVar17;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar24);
    uVar32 = (ulong)local_f8[6];
    bVar35 = bVar35 & (byte)~(byte)(local_f8[6] >> 0x18) >> 7;
    break;
  case 0x78:
switchD_00765a9c_caseD_78:
    ppcVar13 = (char **)*(int **)(local_108 + 0x328);
LAB_007663f8:
    local_138 = ppcVar13;
    *(long *)((long)ppuVar21 + -0x10) = local_100;
    iVar24 = local_e8;
    puVar10 = local_f8;
    ppcVar13 = local_138;
    local_128 = (uint *)CONCAT44(local_128._4_4_,iVar27);
    *(undefined8 *)((long)ppuVar21 + -0x18) = 0x766433;
    iVar24 = FUN_007658a0(0,0xffffffffffffffff,ppcVar13,puVar10,iVar24);
    iVar17 = iVar17 - iVar24;
    iVar27 = 0;
    if (-1 < iVar17) {
      iVar27 = iVar17;
    }
    puVar10 = (uint *)(local_e0 - (long)puVar30);
    puVar9 = local_128;
    if (puVar10 <= (uint *)(long)(iVar27 + iVar24)) goto LAB_007659a0;
    puVar30 = (uint *)((long)puVar30 + (long)(iVar27 + iVar24));
    if (puVar14 != (uint *)0x0) {
      puVar9 = puVar14;
      if (0 < iVar17) {
        puVar9 = puVar14 + iVar17;
        local_128 = puVar10;
        if ((uint)local_128 == 0x30) {
          *(undefined8 *)((long)ppuVar21 + -8) = 0x7677e3;
          thunk_FUN_007a90f0(puVar14,0x30);
          puVar10 = local_128;
        }
        else {
          *(undefined8 *)((long)ppuVar21 + -8) = 0x76649d;
          thunk_FUN_007a90f0(puVar14,0x20);
          puVar10 = local_128;
        }
      }
      *(long *)((long)ppuVar21 + -0x10) = local_100;
      iVar17 = local_e8;
      puVar11 = local_f8;
      ppcVar13 = local_138;
      param_1 = puVar9 + iVar24;
      *(undefined8 *)((long)ppuVar21 + -0x18) = 0x7664dc;
      FUN_007658a0(puVar9,puVar10,ppcVar13,puVar11,iVar17);
      lVar31 = local_100;
      uVar4 = *(undefined8 *)((long)ppuVar21 + -8);
      if ((int)local_f0 != 0) {
        for (; puVar14 < param_1; puVar14 = puVar14 + 1) {
          uVar7 = *puVar14;
          *(undefined8 *)((long)ppuVar21 + -8) = 0x7677c8;
          uVar7 = FUN_00771a10(uVar7,lVar31,uVar4);
          *puVar14 = uVar7;
          uVar4 = extraout_RDX;
        }
      }
    }
    goto LAB_00765971;
  case 0x79:
switchD_00765a9c_caseD_79:
    bVar35 = false;
LAB_00766df1:
    iVar24 = 2;
    if (1 < iVar17) {
      iVar24 = iVar17;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar24);
    uVar16 = local_f8[5];
LAB_00765d8e:
    uVar32 = (ulong)(((int)uVar16 % 100 + 100U) % 100);
    break;
  case 0x7a:
    iVar24 = 0;
LAB_00767182:
    if ((int)local_f8[8] < 0) goto LAB_00765971;
    iVar6 = iVar17 + -1;
    iVar28 = (int)*(ulong *)(local_f8 + 10);
    uVar32 = *(ulong *)(local_f8 + 10) & 0xffffffff;
    iVar26 = 0;
    if (-1 < iVar6) {
      iVar26 = iVar6;
    }
    local_138 = (char **)(long)(iVar26 + 1);
    if (iVar28 < 0) {
      if ((int *)(local_e0 - (long)puVar30) <= local_138) goto LAB_007659a0;
      if (puVar14 != (uint *)0x0) {
        if (0 < iVar6) {
          local_140 = (uint *)CONCAT44(local_140._4_4_,iVar27);
          local_148 = puVar14 + iVar6;
          local_128 = (uint *)CONCAT44(local_128._4_4_,iVar24);
          if (iVar27 == 0x30) {
            *(undefined8 *)((long)ppuVar21 + -8) = 0x767f10;
            thunk_FUN_007a90f0(puVar14,0x30);
            iVar24 = (int)local_128;
            puVar14 = local_148;
            iVar27 = (int)local_140;
          }
          else {
            *(undefined8 *)((long)ppuVar21 + -8) = 0x767a85;
            thunk_FUN_007a90f0(puVar14,0x20);
            iVar24 = (int)local_128;
            puVar14 = local_148;
            iVar27 = (int)local_140;
          }
        }
        *puVar14 = 0x2d;
        puVar14 = puVar14 + 1;
      }
      uVar32 = (ulong)(uint)-iVar28;
    }
    else {
      if ((int *)(local_e0 - (long)puVar30) <= local_138) goto LAB_007659a0;
      if (puVar14 != (uint *)0x0) {
        puVar10 = puVar14;
        if (0 < iVar6) {
          local_148 = (uint *)CONCAT44(local_148._4_4_,iVar28);
          local_140 = (uint *)CONCAT44(local_140._4_4_,iVar27);
          puVar10 = puVar14 + iVar6;
          local_128 = (uint *)CONCAT44(local_128._4_4_,iVar24);
          if (iVar27 == 0x30) {
            *(undefined8 *)((long)ppuVar21 + -8) = 0x767ecd;
            thunk_FUN_007a90f0(puVar14,0x30);
            iVar24 = (int)local_128;
            uVar32 = (ulong)local_148 & 0xffffffff;
            iVar27 = (int)local_140;
          }
          else {
            *(undefined8 *)((long)ppuVar21 + -8) = 0x767212;
            thunk_FUN_007a90f0(puVar14,0x20);
            uVar32 = (ulong)local_148 & 0xffffffff;
            iVar24 = (int)local_128;
            iVar27 = (int)local_140;
          }
        }
        *puVar10 = 0x2b;
        puVar14 = puVar10 + 1;
      }
    }
    puVar30 = (uint *)((long)puVar30 + (long)local_138);
    iVar26 = 4;
    if (3 < iVar17) {
      iVar26 = iVar17;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar26);
    bVar35 = iVar24 == 0x4f;
    uVar32 = (ulong)(uint)((int)(uVar32 / 0xe10) * 0x28 + (int)(uVar32 / 0x3c));
  }
  if (bVar35 == 0) {
LAB_00766bb8:
    bVar34 = false;
    if ((int)uVar32 < 0) {
      uVar32 = (ulong)(uint)-(int)uVar32;
      bVar34 = true;
    }
LAB_00766bc7:
    ppcVar13 = (char **)local_40;
    do {
      puVar10 = (uint *)ppcVar13;
      ppcVar13 = (char **)(puVar10 + -1);
      uVar7 = (uint)uVar32;
      *(uint *)ppcVar13 = uVar7 + (int)(uVar32 / 10) * -10 + 0x30;
      uVar32 = uVar32 / 10;
    } while (9 < uVar7);
    if (bVar34) {
LAB_00766c10:
      puVar10 = (uint *)ppcVar13;
      puVar10[-1] = 0x2d;
      bVar34 = true;
      ppcVar13 = (char **)(puVar10 + -1);
    }
LAB_00766230:
    lVar31 = (long)local_40 - (long)ppcVar13;
    iVar24 = iVar17;
    if (iVar27 != 0x2d) {
      iVar26 = (uint)local_138 - (int)(lVar31 >> 2);
      if (0 < iVar26) {
        puVar9 = local_128;
        if (iVar27 == 0x5f) {
          ppcVar19 = (char **)(long)iVar26;
          if ((int *)(local_e0 - (long)puVar30) <= ppcVar19) goto LAB_007659a0;
          if (puVar14 != (uint *)0x0) {
            local_148 = (uint *)CONCAT44(local_148._4_4_,iVar26);
            local_128 = (uint *)CONCAT44(local_128._4_4_,0x5f);
            local_140 = (uint *)ppcVar13;
            local_138 = ppcVar19;
            *(undefined8 *)((long)ppuVar21 + -8) = 0x76775a;
            thunk_FUN_007a90f0();
            puVar14 = puVar14 + (long)local_138;
            ppcVar19 = local_138;
            ppcVar13 = (char **)local_140;
            iVar27 = (uint)local_128;
            iVar26 = (uint)local_148;
          }
          puVar30 = (uint *)((long)puVar30 + (long)ppcVar19);
          iVar24 = 0;
          if (iVar26 < iVar17) {
            iVar24 = iVar17 - iVar26;
          }
        }
        else {
          if ((int *)(local_e0 - (long)puVar30) <= (int *)(long)(int)(uint)local_138)
          goto LAB_007659a0;
          lVar33 = (long)iVar26;
          if (bVar34) {
            lVar31 = (long)local_40 - (long)puVar10;
            puVar30 = (uint *)((long)puVar30 + 1);
            ppcVar13 = (char **)puVar10;
            if (puVar14 != (uint *)0x0) {
              *puVar14 = 0x2d;
              puVar14 = puVar14 + 1;
LAB_007662a7:
              local_138 = (char **)CONCAT44(local_138._4_4_,iVar27);
              local_128 = (uint *)ppcVar13;
              *(undefined8 *)((long)ppuVar21 + -8) = 0x7662ca;
              thunk_FUN_007a90f0(puVar14,0x30,lVar33);
              ppcVar13 = (char **)local_128;
              puVar14 = puVar14 + lVar33;
              iVar27 = (uint)local_138;
            }
          }
          else if (puVar14 != (uint *)0x0) goto LAB_007662a7;
          puVar30 = (uint *)((long)puVar30 + lVar33);
          iVar24 = 0;
        }
      }
    }
    puVar11 = (uint *)(lVar31 >> 2);
    iVar24 = iVar24 - (int)puVar11;
    iVar17 = 0;
    if (-1 < iVar24) {
      iVar17 = iVar24;
    }
    puVar10 = (uint *)(long)(iVar17 + (int)puVar11);
    puVar9 = local_128;
    if ((uint *)(local_e0 - (long)puVar30) <= puVar10) {
LAB_007659a0:
      local_128 = puVar9;
      puVar30 = (uint *)0x0;
      goto LAB_007659a3;
    }
    if (puVar14 != (uint *)0x0) {
      if (0 < iVar24) {
        puVar14 = puVar14 + iVar24;
        local_138 = ppcVar13;
        local_128 = puVar11;
        if (iVar27 == 0x30) {
          *(undefined8 *)((long)ppuVar21 + -8) = 0x76770d;
          thunk_FUN_007a90f0();
          puVar11 = local_128;
          ppcVar13 = local_138;
        }
        else {
          *(undefined8 *)((long)ppuVar21 + -8) = 0x76634a;
          thunk_FUN_007a90f0();
          puVar11 = local_128;
          ppcVar13 = local_138;
        }
      }
      piVar12 = (int *)(long)(int)puVar11;
      local_138 = (char **)piVar12;
      if ((int)local_f0 == 0) {
LAB_00765e90:
        local_138 = (char **)piVar12;
        *(undefined8 *)((long)ppuVar21 + -8) = 0x765e9e;
        FUN_00756660(puVar14,ppcVar13,piVar12);
        puVar15 = local_128;
        puVar29 = local_f0;
      }
      else {
        puVar15 = local_128;
        puVar29 = local_f0;
        if (piVar12 != (int *)0x0) {
          local_f0 = puVar10;
          local_128 = param_3;
          do {
            *(undefined8 *)((long)ppuVar21 + -8) = 0x7663ad;
            uVar7 = FUN_00771a10();
            puVar14[(long)((long)piVar12 + -1)] = uVar7;
            piVar12 = (int *)((long)piVar12 + -1);
            param_3 = local_128;
            puVar10 = local_f0;
            puVar15 = local_128;
            puVar29 = local_f0;
          } while (piVar12 != (int *)0x0);
        }
      }
LAB_00765e9e:
      local_f0 = puVar29;
      local_128 = puVar15;
      puVar14 = puVar14 + (long)local_138;
    }
  }
  else {
    local_128 = (uint *)CONCAT44(local_128._4_4_,iVar27);
    *(undefined8 *)((long)ppuVar21 + -8) = 0x765dcf;
    puVar10 = (uint *)FUN_007684e0(uVar32);
    iVar27 = (uint)local_128;
    if (puVar10 == (uint *)0x0) {
LAB_00767670:
      bVar34 = false;
      goto LAB_00766bc7;
    }
    local_140 = puVar10;
    *(undefined8 *)((long)ppuVar21 + -8) = 0x765dee;
    puVar11 = (uint *)thunk_FUN_007564d0();
    iVar27 = (uint)local_128;
    if (puVar11 == (uint *)0x0) goto LAB_00767670;
    iVar17 = iVar17 - (int)puVar11;
    iVar27 = 0;
    if (-1 < iVar17) {
      iVar27 = iVar17;
    }
    puVar10 = (uint *)(long)(iVar27 + (int)puVar11);
    puVar9 = local_128;
    if ((uint *)(local_e0 - (long)puVar30) <= puVar10) goto LAB_007659a0;
    if (puVar14 != (uint *)0x0) {
      ppcVar13 = (char **)local_140;
      if (0 < iVar17) {
        local_138 = (char **)local_140;
        puVar14 = puVar14 + iVar17;
        local_128 = puVar11;
        if ((uint)local_128 == 0x30) {
          *(undefined8 *)((long)ppuVar21 + -8) = 0x76782f;
          thunk_FUN_007a90f0();
          puVar11 = local_128;
          ppcVar13 = local_138;
        }
        else {
          *(undefined8 *)((long)ppuVar21 + -8) = 0x765e68;
          thunk_FUN_007a90f0();
          puVar11 = local_128;
          ppcVar13 = local_138;
        }
      }
      piVar12 = (int *)(long)(int)puVar11;
      local_138 = (char **)piVar12;
      puVar9 = param_3;
      puVar15 = local_128;
      puVar29 = local_f0;
      if ((int)local_f0 == 0) goto LAB_00765e90;
      for (; local_128 = puVar9, local_f0 = puVar10, param_3 = local_128, puVar10 = local_f0,
          piVar12 != (int *)0x0; piVar12 = (int *)((long)piVar12 + -1)) {
        *(undefined8 *)((long)ppuVar21 + -8) = 0x7676ed;
        uVar7 = FUN_00771a10();
        puVar14[(long)((long)piVar12 + -1)] = uVar7;
        puVar10 = local_f0;
        puVar9 = local_128;
        puVar15 = local_128;
        puVar29 = local_f0;
      }
      goto LAB_00765e9e;
    }
  }
LAB_00765eaa:
  puVar30 = (uint *)((long)puVar30 + (long)puVar10);
  param_1 = puVar14;
LAB_00765971:
  uVar7 = param_3[1];
  param_3 = param_3 + 1;
  ppuVar5 = ppuVar21;
  puVar14 = param_1;
  if (uVar7 == 0) goto LAB_00765982;
  goto LAB_00765944;
switchD_00765ac0_caseD_41:
switchD_00765a9c_caseD_1:
  iVar24 = 1;
  puVar10 = (uint *)0xfffffffffffffffc;
  do {
    puVar15 = puVar10;
    iVar24 = iVar24 + 1;
    puVar10 = puVar15 + -1;
    puVar11 = (uint *)((long)param_3 + (long)puVar15);
  } while (*(int *)((long)param_3 + (long)puVar15) != 0x25);
LAB_00765ba0:
  iVar17 = iVar17 - iVar24;
  iVar26 = 0;
  if (-1 < iVar17) {
    iVar26 = iVar17;
  }
  local_138 = (char **)(long)(iVar26 + iVar24);
  if ((int *)(local_e0 - (long)puVar30) <= local_138) goto LAB_007659a0;
  if (puVar14 != (uint *)0x0) {
    local_128._0_4_ = iVar24;
    if (0 < iVar17) {
      local_128 = (uint *)CONCAT44(local_128._4_4_,iVar24);
      puVar29 = puVar14 + iVar17;
      local_140 = puVar15;
      if (iVar27 == 0x30) {
        *(undefined8 *)((long)ppuVar21 + -8) = 0x7677ff;
        thunk_FUN_007a90f0(puVar14,0x30);
      }
      else {
        *(undefined8 *)((long)ppuVar21 + -8) = 0x765c07;
        thunk_FUN_007a90f0(puVar14,0x20);
      }
    }
    puVar9 = (uint *)(long)(int)(uint)local_128;
    local_128 = puVar9;
    puVar14 = param_3;
    if ((int)local_f0 == 0) {
      *(undefined8 *)((long)ppuVar21 + -8) = 0x765c3b;
      FUN_00756660(puVar29,puVar11,puVar9);
      puVar10 = local_f0;
    }
    else {
      do {
        local_f0 = puVar14;
        *(undefined8 *)((long)ppuVar21 + -8) = 0x76769d;
        uVar7 = FUN_00771a10();
        puVar29[(long)((long)puVar9 + -1)] = uVar7;
        puVar9 = (uint *)((long)puVar9 + -1);
        param_3 = local_f0;
        puVar10 = local_f0;
        puVar14 = local_f0;
      } while (puVar9 != (uint *)0x0);
    }
    goto LAB_00765c3b;
  }
  goto LAB_00765c47;
}

