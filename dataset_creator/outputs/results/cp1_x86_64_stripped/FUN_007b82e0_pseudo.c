
undefined *
FUN_007b82e0(byte *param_1,undefined *param_2,long *param_3,long *param_4,undefined8 *param_5,
            int param_6,uint param_7,long param_8)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  int *piVar10;
  byte *pbVar11;
  char *pcVar12;
  undefined *puVar13;
  long lVar14;
  int iVar15;
  char *pcVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  long *plVar20;
  char *pcVar21;
  undefined1 *puVar22;
  long *plVar23;
  undefined *puVar24;
  long in_FS_OFFSET;
  undefined *puStack_c0;
  long *local_98;
  long local_90;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [40];
  
  uVar4 = param_7 & 8;
  uVar5 = param_7 & 4;
  local_98 = param_4;
LAB_007b8339:
  while( true ) {
    bVar1 = *param_1;
    if (bVar1 == 0) {
      iVar15 = 0x1505;
    }
    else {
      iVar15 = 0x1505;
      pbVar11 = param_1;
      do {
        pbVar11 = pbVar11 + 1;
        iVar15 = iVar15 * 0x21 + (uint)bVar1;
        bVar1 = *pbVar11;
      } while (bVar1 != 0);
    }
    local_70 = 0xffffffff;
    local_68 = (undefined1  [16])0x0;
    if ((param_5 != (undefined8 *)0x0) && ((param_7 & 2) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("version == NULL || !(flags & DL_LOOKUP_RETURN_NEWEST)","dl-lookup.c",0x352,
                   "_dl_lookup_symbol_x");
    }
    plVar20 = (long *)*local_98;
    if (param_8 == 0) break;
    if (param_8 == *(long *)*plVar20) {
      local_90 = 0;
    }
    else {
      local_90 = 0;
      do {
        local_90 = local_90 + 1;
      } while (((long *)*plVar20)[local_90] != param_8);
    }
LAB_007b83bf:
    plVar23 = local_98;
    do {
      iVar6 = FUN_007b7610(param_1,iVar15,&local_70,*param_3,local_68,plVar20,local_90,param_5,
                           param_7,param_8,param_6);
      if (iVar6 != 0) break;
      plVar20 = (long *)plVar23[1];
      plVar23 = plVar23 + 1;
      local_90 = 0;
    } while (plVar20 != (long *)0x0);
    lVar7 = *param_3;
    if (local_68._0_8_ == 0) goto LAB_007b8566;
    puStack_c0 = param_2;
    if ((lVar7 == 0) || ((*(byte *)(lVar7 + 5) & 3) != 3)) {
      bVar3 = false;
      puVar24 = (undefined *)local_68._8_8_;
    }
    else {
      puVar24 = param_2;
      if (param_6 == 1) {
        lVar14 = local_68._0_8_;
        if ((undefined *)local_68._8_8_ != param_2) {
          local_68._8_8_ = param_2;
          local_68._0_8_ = lVar7;
          lVar14 = lVar7;
        }
        bVar3 = true;
        puVar13 = param_2;
        goto LAB_007b8460;
      }
      local_58._0_16_ = (undefined1  [16])0x0;
      plVar20 = local_98;
      if (*local_98 == 0) {
LAB_007b8770:
        puVar24 = (undefined *)local_68._8_8_;
      }
      else {
        do {
          puStack_c0 = (undefined *)0x0;
          iVar6 = FUN_007b7610(param_1,iVar15,&local_70);
          if (iVar6 != 0) break;
          plVar23 = plVar20 + 1;
          plVar20 = plVar20 + 1;
        } while (*plVar23 != 0);
        if ((local_58._0_8_ == 0) || ((undefined *)local_58._8_8_ == param_2)) goto LAB_007b8770;
        local_68._8_8_ = param_2;
        local_68._0_8_ = *param_3;
      }
      bVar3 = true;
    }
    if ((((((puVar24[0x31c] & 3) != 2) || ((param_7 & 1) == 0)) || (param_2 == puVar24)) ||
        (puVar24[799] != '\0')) || ((uVar4 != 0 && (puVar24[800] != '\0')))) {
      lVar14 = local_68._0_8_;
      puVar13 = puVar24;
      goto LAB_007b8460;
    }
    puVar17 = *(uint **)(param_2 + 0x3d8);
    plVar20 = *(long **)(param_2 + 0x3d0);
    if (plVar20 != (long *)0x0) {
      uVar8 = 0;
      puVar13 = (undefined *)*plVar20;
      while (puVar13 != (undefined *)0x0) {
        if (puVar13 == puVar24) goto LAB_007b8730;
        uVar8 = (ulong)((int)uVar8 + 1);
        puVar13 = (undefined *)plVar20[uVar8];
      }
    }
    if (puVar17 == (uint *)0x0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *puVar17;
      if (uVar18 != 0) {
        puVar9 = puVar17 + 2;
        do {
          if (*(undefined **)puVar9 == puVar24) goto LAB_007b8730;
          puVar9 = puVar9 + 2;
        } while (puVar17 + (ulong)(uVar18 - 1) * 2 + 4 != puVar9);
      }
    }
    lVar7 = *(long *)(puVar24 + 0x480);
    if (uVar5 == 0) {
      FUN_0070a340(&DAT_0093eae0);
      uVar8 = (ulong)uVar18;
    }
    else {
      LOCK();
      iVar15 = *(int *)(in_FS_OFFSET + 0x1c);
      *(int *)(in_FS_OFFSET + 0x1c) = 0;
      UNLOCK();
      if (iVar15 == 2) {
        syscall();
      }
      FUN_0070a340(&DAT_0093eae0);
      plVar23 = *(long **)(param_2 + 0x3d0);
      if (((plVar23 != plVar20) && (plVar23 != (long *)0x0)) &&
         (puVar13 = (undefined *)*plVar23, puVar13 != (undefined *)0x0)) {
        uVar8 = 0;
        do {
          if (puVar24 == puVar13) goto LAB_007b8999;
          uVar8 = (ulong)((int)uVar8 + 1);
          puVar13 = (undefined *)plVar23[uVar8];
        } while (puVar13 != (undefined *)0x0);
      }
      puVar9 = *(uint **)(param_2 + 0x3d8);
      uVar8 = (ulong)uVar18;
      if (puVar9 != (uint *)0x0) {
        uVar19 = *puVar9;
        if (puVar17 == puVar9) {
          if (uVar18 < uVar19) {
            lVar14 = 0;
            do {
              if (puVar24 == *(undefined **)(puVar17 + (ulong)uVar18 * 2 + lVar14 * 2 + 2))
              goto LAB_007b8999;
              lVar14 = lVar14 + 1;
              uVar8 = (ulong)uVar19;
            } while (uVar18 + (int)lVar14 < uVar19);
          }
        }
        else if (uVar19 == 0) {
          uVar8 = 0;
        }
        else {
          puVar17 = puVar9 + 2;
          do {
            if (puVar24 == *(undefined **)puVar17) goto LAB_007b8999;
            puVar17 = puVar17 + 2;
            uVar8 = (ulong)uVar19;
          } while (puVar9 + (ulong)(uVar19 - 1) * 2 + 4 != puVar17);
        }
      }
    }
    for (puVar13 = (&PTR_DAT_0093eb60)[*(long *)(param_2 + 0x30) * 0x14];
        puVar13 != (undefined *)0x0; puVar13 = *(undefined **)(puVar13 + 0x18)) {
      if (puVar13 == puVar24) {
        if ((puVar13 != (undefined *)0x0) && (lVar7 == *(long *)(puVar24 + 0x480))) {
          if ((puVar24[799] != '\0') || ((uVar4 != 0 && (puVar24[800] != '\0')))) {
            puStack_c0 = (undefined *)0x7b8896;
            FUN_0070abb0(&DAT_0093eae0);
            if (uVar5 != 0) goto LAB_007b88a1;
            goto LAB_007b8730;
          }
          if ((param_2[0x31c] & 3) == 2) {
            uVar18 = *(uint *)(param_2 + 0x3e0);
            uVar19 = (uint)uVar8;
            if (uVar19 < uVar18) {
              *(undefined **)(*(long *)(param_2 + 0x3d8) + 8 + uVar8 * 8) = puVar24;
              **(int **)(param_2 + 0x3d8) = uVar19 + 1;
            }
            else {
              uVar2 = 10;
              if (uVar18 != 0) {
                uVar2 = uVar18 * 2;
              }
              piVar10 = (int *)FUN_007101b0((ulong)uVar2 * 8 + 8);
              if (piVar10 == (int *)0x0) {
                if ((DAT_0094b0e4 & 4) != 0) {
                  if ((uVar4 != 0) && (puVar24[800] != '\0')) goto LAB_007b8a8a;
                  FUN_00787060("marking %s [%lu] as NODELETE due to memory allocation failure\n",
                               *(undefined8 *)(puVar24 + 8),*(undefined8 *)(puVar24 + 0x30));
                }
                goto LAB_007b89f7;
              }
              if (uVar19 != 0) {
                thunk_FUN_00713a50(piVar10 + 2,*(long *)(param_2 + 0x3d8) + 8,uVar8 * 8);
              }
              *(undefined **)(piVar10 + uVar8 * 2 + 2) = puVar24;
              *piVar10 = uVar19 + 1;
              lVar7 = *(long *)(param_2 + 0x3d8);
              *(uint *)(param_2 + 0x3e0) = uVar2;
              *(int **)(param_2 + 0x3d8) = piVar10;
              if (lVar7 != 0) {
                FUN_00789440();
              }
            }
            if ((DAT_0094b0e4 & 0x40) != 0) {
              pcVar12 = *(char **)(param_2 + 8);
              if ((*pcVar12 == '\0') &&
                 (pcVar12 = *(char **)PTR_PTR_0093adf8, pcVar12 == (char *)0x0)) {
                pcVar12 = "<main program>";
              }
              pcVar21 = *(char **)(puVar24 + 8);
              if ((*pcVar21 == '\0') &&
                 (pcVar21 = *(char **)PTR_PTR_0093adf8, pcVar21 == (char *)0x0)) {
                pcVar21 = "<main program>";
              }
              FUN_00787060("\nfile=%s [%lu];  needed by %s [%lu] (relocation dependency)\n\n",
                           pcVar21,*(undefined8 *)(puVar24 + 0x30),pcVar12,
                           *(undefined8 *)(param_2 + 0x30));
            }
          }
          else {
            if ((DAT_0094b0e4 & 4) == 0) {
LAB_007b89f7:
              if (uVar4 == 0) {
                puVar24[799] = 1;
                goto LAB_007b8a0a;
              }
            }
            else if ((uVar4 == 0) || (puVar24[800] == '\0')) {
              if (**(char **)(param_2 + 8) == '\0') {
                FUN_00787060("marking %s [%lu] as NODELETE due to reference to main program\n",
                             *(undefined8 *)(puVar24 + 8),*(undefined8 *)(puVar24 + 0x30));
              }
              else {
                FUN_00787060("marking %s [%lu] as NODELETE due to reference to %s [%lu]\n",
                             *(undefined8 *)(puVar24 + 8),*(undefined8 *)(puVar24 + 0x30),
                             *(char **)(param_2 + 8),*(long *)(param_2 + 0x30));
              }
              goto LAB_007b89f7;
            }
LAB_007b8a8a:
            puVar24[800] = 1;
          }
LAB_007b8a0a:
          puStack_c0 = (undefined *)0x7b8a16;
          FUN_0070abb0(&DAT_0093eae0);
          lVar14 = local_68._0_8_;
          puVar13 = (undefined *)local_68._8_8_;
          if (uVar5 != 0) {
            *(undefined4 *)(in_FS_OFFSET + 0x1c) = 1;
          }
          goto LAB_007b8460;
        }
        break;
      }
    }
    FUN_0070abb0(&DAT_0093eae0);
    if (uVar5 != 0) goto LAB_007b88db;
  }
  if (plVar20 != (long *)0x0) {
    local_90 = 0;
    goto LAB_007b83bf;
  }
  lVar7 = *param_3;
LAB_007b8566:
  if (((lVar7 == 0) || (*(byte *)(lVar7 + 4) >> 4 != 2)) && ((DAT_0094b0e4 & 0x100) == 0)) {
    if (param_2 == (undefined *)0x0) goto LAB_007b8d25;
    pcVar21 = "";
    pcVar12 = *(char **)(param_2 + 8);
    puVar22 = &DAT_0083e5c2;
    if (param_5 != (undefined8 *)0x0) {
      pcVar21 = ", version ";
      puVar22 = (undefined1 *)*param_5;
      if (puVar22 == (undefined1 *)0x0) {
        puVar22 = &DAT_0083e5c2;
      }
    }
    if (*pcVar12 == '\0') goto LAB_007b8d4b;
    do {
      FUN_007843e0(local_58,pcVar12,"undefined symbol: %s%s%s",param_1,pcVar21,puVar22);
      FUN_0078dac0(0,local_58,"symbol lookup error");
LAB_007b8d25:
      pcVar21 = "";
      puVar22 = &DAT_0083e5c2;
      if (param_5 != (undefined8 *)0x0) {
        pcVar21 = ", version ";
        puVar22 = (undefined1 *)*param_5;
        if (puVar22 == (undefined1 *)0x0) {
          puVar22 = &DAT_0083e5c2;
        }
      }
LAB_007b8d4b:
      pcVar12 = *(char **)PTR_PTR_0093adf8;
      if (pcVar12 == (char *)0x0) {
        pcVar12 = "<main program>";
      }
    } while( true );
  }
  lVar14 = 0;
  puVar13 = (undefined *)0x0;
  goto LAB_007b8480;
LAB_007b8999:
  if (lVar7 == *(long *)(puVar24 + 0x480)) {
    puStack_c0 = (undefined *)0x7b8c92;
    FUN_0070abb0(&DAT_0093eae0);
LAB_007b88a1:
    *(undefined4 *)(in_FS_OFFSET + 0x1c) = 1;
LAB_007b8730:
    lVar14 = local_68._0_8_;
    puVar13 = (undefined *)local_68._8_8_;
LAB_007b8460:
    if (*(int *)(puVar24 + 0x3e4) == 0) {
      *(undefined4 *)(puVar24 + 0x3e4) = 1;
    }
    if (((DAT_0094b0e4 & 0x804) != 0) && ((DAT_0094b0e4 & 4) != 0)) {
      pcVar12 = *(char **)(puVar13 + 8);
      pcVar21 = "protected";
      if (!bVar3) {
        pcVar21 = "normal";
      }
      if ((*pcVar12 == '\0') && (pcVar12 = *(char **)PTR_PTR_0093adf8, pcVar12 == (char *)0x0)) {
        pcVar12 = "<main program>";
      }
      pcVar16 = *(char **)(param_2 + 8);
      if ((*pcVar16 == '\0') && (pcVar16 = *(char **)PTR_PTR_0093adf8, pcVar16 == (char *)0x0)) {
        pcVar16 = "<main program>";
      }
      FUN_00787060("binding file %s [%lu] to %s [%lu]: %s symbol `%s\'",pcVar16,
                   *(undefined8 *)(param_2 + 0x30),pcVar12,*(undefined8 *)(puVar13 + 0x30),pcVar21,
                   param_1);
      if (param_5 == (undefined8 *)0x0) {
        FUN_00787110(&DAT_008243ea);
      }
      else {
        FUN_00787110(" [%s]\n",*param_5,puStack_c0);
      }
    }
LAB_007b8480:
    *param_3 = lVar14;
    return puVar13;
  }
  FUN_0070abb0(&DAT_0093eae0);
LAB_007b88db:
  *(undefined4 *)(in_FS_OFFSET + 0x1c) = 1;
  local_98 = *(long **)(param_2 + 0x398);
  goto LAB_007b8339;
}

