
void FUN_00783310(long param_1,char param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *puVar21;
  undefined4 *puVar22;
  long *plVar23;
  long *plVar24;
  undefined1 *puVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  long in_FS_OFFSET;
  undefined1 auStack_b8 [8];
  long *local_b0;
  int local_a8;
  uint local_a4;
  long *local_a0;
  long local_98;
  long local_90;
  char local_85;
  uint local_84;
  long local_80;
  undefined1 *local_78;
  undefined **local_70;
  long local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  char local_46;
  char local_45;
  uint local_44;
  undefined8 local_40;
  
  local_78 = auStack_b8;
  local_46 = param_2;
  local_80 = param_1 * 0xa0 + 0x93eb88;
  local_70 = &PTR_DAT_0093eb60 + param_1 * 0x14;
  do {
    DAT_0094ad54 = 1;
    uVar27 = *(uint *)(local_70 + 1);
    local_40 = (long *)(ulong)uVar27;
    uVar28 = (ulong)uVar27 * 8 + 0xf;
    puVar21 = local_78 + -(uVar28 & 0xfffffffffffff000);
    for (puVar25 = local_78; puVar25 != puVar21; puVar25 = puVar25 + -0x1000) {
      *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
    }
    uVar28 = (ulong)((uint)uVar28 & 0xff0);
    lVar5 = -uVar28;
    if (uVar28 != 0) {
      *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
    }
    puVar10 = *local_70;
    if (puVar10 == (undefined *)0x0) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      puVar16 = (undefined8 *)(puVar25 + lVar5);
      do {
        *(uint *)(puVar10 + 0x3f4) = uVar19;
        uVar19 = uVar19 + 1;
        puVar10[0x31d] = puVar10[0x31d] & 0xf9;
        *puVar16 = puVar10;
        puVar10 = *(undefined **)(puVar10 + 0x18);
        puVar16 = puVar16 + 1;
      } while (puVar10 != (undefined *)0x0);
    }
    if (uVar27 != uVar19) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar25 + lVar5 + -8) = 0x784045;
      FUN_006e2220("idx == nloaded","dl-close.c",0xb8,"_dl_close_worker");
    }
    uVar19 = 0;
    if (uVar27 == 0) {
      *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783f4a;
      FUN_00789640((long)puVar25 + lVar5,0,param_1 == 0,1);
    }
    else {
LAB_0078342b:
      do {
        lVar14 = *(long *)(puVar25 + (long)(int)uVar19 * 8 + lVar5);
        if ((*(byte *)(lVar14 + 0x31d) & 4) == 0) {
          if (((((*(ulong *)(lVar14 + 0x318) & 0x3ffffffff) == 0x200000000) &&
               (*(char *)(lVar14 + 799) == '\0')) && (*(long *)(lVar14 + 0x468) == 0)) &&
             ((*(byte *)(lVar14 + 0x31d) & 2) == 0)) {
            uVar19 = uVar19 + 1;
            if (uVar27 <= uVar19) break;
            goto LAB_0078342b;
          }
          plVar11 = *(long **)(lVar14 + 0x3d0);
          *(byte *)(lVar14 + 0x31d) = *(byte *)(lVar14 + 0x31d) | 6;
          *(undefined4 *)(lVar14 + 0x3f4) = 0xffffffff;
          if (plVar11 != (long *)0x0) {
            lVar18 = plVar11[1];
            while (lVar18 != 0) {
              uVar20 = *(uint *)(lVar18 + 0x3f4);
              if (uVar20 != 0xffffffff) {
                if (((int)uVar20 < 0) || (uVar27 <= uVar20)) {
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)(puVar25 + lVar5 + -8) = 0x7834f1;
                  FUN_006e2220("(*lp)->l_idx >= 0 && (*lp)->l_idx < nloaded","dl-close.c",0xde,
                               "_dl_close_worker");
                }
                if ((*(byte *)(lVar18 + 0x31d) & 2) == 0) {
                  *(byte *)(lVar18 + 0x31d) = *(byte *)(lVar18 + 0x31d) | 2;
                  iVar9 = *(int *)(plVar11[1] + 0x3f4);
                  if (iVar9 <= (int)uVar19) {
                    uVar19 = iVar9 - 1;
                  }
                }
              }
              lVar18 = plVar11[2];
              plVar11 = plVar11 + 1;
            }
          }
          piVar1 = *(int **)(lVar14 + 0x3d8);
          if ((piVar1 != (int *)0x0) && (iVar9 = *piVar1, iVar9 != 0)) {
            plVar11 = (long *)(piVar1 + 2);
            do {
              lVar14 = *plVar11;
              uVar20 = *(uint *)(lVar14 + 0x3f4);
              if (uVar20 != 0xffffffff) {
                if (((int)uVar20 < 0) || (uVar27 <= uVar20)) {
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783571;
                  FUN_006e2220("jmap->l_idx >= 0 && jmap->l_idx < nloaded","dl-close.c",0xf7,
                               "_dl_close_worker");
                }
                if ((*(byte *)(lVar14 + 0x31d) & 2) == 0) {
                  *(byte *)(lVar14 + 0x31d) = *(byte *)(lVar14 + 0x31d) | 2;
                  if ((int)uVar20 <= (int)uVar19) {
                    uVar19 = uVar20 - 1;
                  }
                }
              }
              plVar11 = plVar11 + 1;
            } while ((long *)(piVar1 + (ulong)(iVar9 - 1) * 2 + 4) != plVar11);
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar27);
      *(undefined8 *)(puVar25 + lVar5 + -8) = 0x7835c8;
      local_58 = (long *)(puVar25 + lVar5);
      FUN_00789640((long)puVar25 + lVar5,uVar27,param_1 == 0);
      uVar28 = 0;
      local_44 = local_44 & 0xffffff00;
      local_84 = uVar27;
      uVar19 = 0xffffffff;
      local_a8 = uVar27 - 1;
      local_45 = '\0';
      local_50 = (long *)((ulong)local_50 & 0xffffffff00000000);
      plVar11 = local_58;
      do {
        while( true ) {
          lVar14 = plVar11[uVar28];
          uVar27 = (uint)uVar28;
          if (*(long *)(lVar14 + 0x30) != param_1) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783f33;
            FUN_006e2220("imap->l_ns == nsid","dl-close.c",0x111,"_dl_close_worker");
          }
          bVar7 = *(byte *)(lVar14 + 0x31c);
          if ((*(byte *)(lVar14 + 0x31d) & 2) != 0) break;
          if (((bVar7 & 3) != 2) || (*(char *)(lVar14 + 799) != '\0')) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783fa7;
            FUN_006e2220("imap->l_type == lt_loaded && !imap->l_nodelete_active","dl-close.c",0x115,
                         "_dl_close_worker");
          }
          if ((bVar7 & 8) != 0) {
            if (((byte)DAT_0094b0e4 & 2) != 0) {
              uVar2 = *(undefined8 *)(lVar14 + 8);
              *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783950;
              local_58 = plVar11;
              local_44 = uVar19;
              FUN_00787060("\ncalling fini: %s [%lu]\n\n",uVar2,param_1);
              plVar11 = local_58;
              uVar19 = local_44;
            }
            if ((*(long *)(lVar14 + 0x110) == 0) && (*(long *)(lVar14 + 0xa8) == 0)) {
              bVar7 = *(byte *)(lVar14 + 0x31c);
            }
            else {
              *(undefined8 *)(puVar25 + lVar5 + -8) = 0x78364e;
              local_58 = plVar11;
              local_44 = uVar19;
              FUN_0078db70(0,FUN_00783160,lVar14);
              bVar7 = *(byte *)(lVar14 + 0x31c);
              plVar11 = local_58;
              uVar19 = local_44;
            }
          }
          *(byte *)(lVar14 + 0x31e) = *(byte *)(lVar14 + 0x31e) | 2;
          local_44 = CONCAT31(local_44._1_3_,1);
          local_50 = (long *)CONCAT44(local_50._4_4_,
                                      ((int)local_50 + 1) - (uint)((bVar7 & 0x10) == 0));
          if (uVar27 < uVar19) {
            uVar19 = uVar27;
          }
LAB_00783678:
          uVar28 = uVar28 + 1;
          if (local_40 == (long *)uVar28) goto LAB_0078383c;
        }
        if ((bVar7 & 3) != 2) goto LAB_00783678;
        if (*(long *)(lVar14 + 0x2c0) == 0) {
          lVar18 = *(long *)(lVar14 + 0x3d0);
          if (lVar18 == 0) {
            uVar26 = 1;
            lVar18 = **(long **)(lVar14 + 0x398);
            local_58 = *(long **)(lVar14 + 0x398);
            lVar17 = 0;
            if (lVar18 == 0) goto LAB_00783807;
LAB_007836e2:
            cVar8 = '\0';
            plVar24 = local_58 + 1;
            lVar12 = lVar18;
            plVar13 = plVar24;
LAB_00783728:
            do {
              if (lVar14 + 0x2d0 != lVar12) {
                if (*(long *)(lVar12 + -0x290) != param_1) {
                    /* WARNING: Subroutine does not return */
                  *(undefined **)(puVar25 + lVar5 + -8) = &UNK_0078409f;
                  FUN_006e2220("tmap->l_ns == nsid","dl-close.c",0x160,"_dl_close_worker");
                }
                if (*(int *)(lVar12 + 0x134) != -1) {
                  lVar12 = *plVar13;
                  plVar13 = plVar13 + 1;
                  cVar8 = '\x01';
                  if (lVar12 == 0) break;
                  goto LAB_00783728;
                }
              }
              lVar12 = *plVar13;
              plVar13 = plVar13 + 1;
              uVar26 = uVar26 + 1;
            } while (lVar12 != 0);
            if (cVar8 == '\0') {
              if (lVar17 != 0) goto LAB_00783919;
            }
            else {
              plVar13 = (long *)(lVar14 + 0x370);
              local_60 = plVar13;
              if ((plVar13 == local_58) || (local_68 = 4, 3 < uVar26)) {
                local_68 = *(long *)(lVar14 + 0x390);
                *(undefined8 *)(puVar25 + lVar5 + -8) = 0x7838b9;
                local_b0 = plVar11;
                local_a4 = uVar19;
                local_a0 = plVar24;
                local_98 = lVar17;
                local_90 = lVar18;
                local_85 = cVar8;
                plVar13 = (long *)FUN_007101b0(local_68 * 8);
                lVar17 = local_98;
                lVar18 = local_90;
                plVar24 = local_a0;
                plVar11 = local_b0;
                uVar19 = local_a4;
                cVar8 = local_85;
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783907;
                  FUN_0078db10(0xc,"dlclose",0,"cannot create scope list");
                }
              }
              lVar12 = 0;
              do {
                while ((lVar14 + 0x2d0 != lVar18 && (*(int *)(lVar18 + 0x134) != -1))) {
                  if (lVar17 != 0) {
                    plVar13[lVar12] = lVar17;
                    lVar12 = lVar12 + 1;
                    lVar17 = 0;
                  }
                  lVar18 = *plVar24;
                  plVar24 = plVar24 + 1;
                  if (lVar18 == 0) goto LAB_007837b8;
                }
                plVar13[lVar12] = lVar18;
                lVar12 = lVar12 + 1;
                lVar18 = *plVar24;
                plVar24 = plVar24 + 1;
              } while (lVar18 != 0);
LAB_007837b8:
              plVar13[lVar12] = 0;
              *(long **)(lVar14 + 0x398) = plVar13;
              if (local_60 == local_58) {
                local_45 = cVar8;
              }
              else {
                local_58 = (long *)CONCAT44(local_58._4_4_,uVar19);
                *(undefined8 *)(puVar25 + lVar5 + -8) = 0x7837e2;
                local_60 = plVar11;
                iVar9 = FUN_00789440();
                if (iVar9 != 0) {
                  local_45 = '\0';
                }
                plVar11 = local_60;
                uVar19 = (uint)local_58;
              }
              *(long *)(lVar14 + 0x390) = local_68;
            }
          }
          else {
            if (*(long *)(lVar18 + 8) == 0) {
              lVar12 = 0x10;
              uVar20 = 1;
            }
            else {
              uVar26 = 1;
              do {
                iVar9 = (int)uVar26;
                uVar20 = iVar9 + 1;
                uVar26 = (ulong)uVar20;
              } while (*(long *)(lVar18 + uVar26 * 8) != 0);
              lVar12 = (ulong)(iVar9 + 2) << 3;
            }
            *(uint *)(lVar14 + 0x2c8) = uVar20;
            lVar17 = lVar14 + 0x2c0;
            *(long *)(lVar14 + 0x2c0) = lVar12 + lVar18;
            lVar18 = **(long **)(lVar14 + 0x398);
            local_58 = *(long **)(lVar14 + 0x398);
            if (lVar18 != 0) {
              uVar26 = 2;
              goto LAB_007836e2;
            }
LAB_00783919:
            *(undefined8 *)(lVar14 + 0x2c0) = 0;
            *(undefined4 *)(lVar14 + 0x2c8) = 0;
          }
        }
        else {
          uVar26 = 1;
          lVar17 = 0;
          lVar18 = **(long **)(lVar14 + 0x398);
          local_58 = *(long **)(lVar14 + 0x398);
          if (lVar18 != 0) goto LAB_007836e2;
        }
LAB_00783807:
        if ((*(long *)(lVar14 + 0x2e0) != 0) && (*(int *)(*(long *)(lVar14 + 0x2e0) + 0x3f4) != -1))
        {
          *(undefined8 *)(lVar14 + 0x2e0) = 0;
        }
        if (uVar27 < uVar19) {
          uVar19 = uVar27;
        }
        uVar28 = uVar28 + 1;
      } while (local_40 != (long *)uVar28);
LAB_0078383c:
      uVar27 = local_84;
      if ((char)local_44 != '\0') {
        *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783a0f;
        local_58 = plVar11;
        local_40._0_4_ = uVar19;
        local_60 = (long *)FUN_007841f0(param_1);
        *(undefined4 *)(local_60 + 3) = 2;
        *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783a22;
        FUN_007841e0();
        if ((int)local_50 != 0) {
          plVar11 = (long *)local_70[2];
          uVar28 = (ulong)*(uint *)(plVar11 + 1);
          do {
            uVar19 = (uint)uVar28;
            if (uVar19 == 0) goto LAB_00783eb5;
            lVar14 = *plVar11;
            uVar28 = (ulong)(uVar19 - 1);
          } while ((*(byte *)(*(long *)(lVar14 + uVar28 * 8) + 0x31e) & 2) != 0);
          if (*(uint *)(plVar11 + 1) != uVar19 + (int)local_50) {
            lVar18 = 0;
            uVar28 = 0;
            do {
              lVar12 = *(long *)(lVar14 + lVar18 * 8);
              if ((*(byte *)(lVar12 + 0x31e) & 2) == 0) {
                if ((int)uVar28 != (int)lVar18) {
                  *(long *)(lVar14 + uVar28 * 8) = lVar12;
                }
                uVar28 = (ulong)((int)uVar28 + 1);
              }
              lVar18 = lVar18 + 1;
            } while ((uint)lVar18 < uVar19);
            uVar19 = (uint)uVar28;
          }
LAB_00783eb5:
          *(uint *)(plVar11 + 1) = uVar19;
        }
        plVar11 = local_58;
        uVar19 = (uint)local_40;
        if ((*(int *)(in_FS_OFFSET + 0x18) != 0) &&
           ((((int)local_50 != 0 || (local_45 != '\0')) ||
            ((DAT_0094adf8 != (long *)0x0 && (*DAT_0094adf8 != 0)))))) {
          local_50 = local_58;
          *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783e07;
          FUN_00789ac0();
          uVar19 = (uint)local_40;
          plVar11 = local_50;
          plVar24 = DAT_0094adf8;
          if (DAT_0094adf8 != (long *)0x0) {
            lVar14 = *DAT_0094adf8;
            while (lVar14 != 0) {
              *plVar24 = lVar14 + -1;
              lVar14 = plVar24[lVar14];
              *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783e44;
              FUN_007104f0(lVar14);
              lVar14 = *plVar24;
            }
          }
        }
        local_40 = (long *)CONCAT44(local_40._4_4_,uVar19);
        *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783a5a;
        local_50 = plVar11;
        FUN_0070a340(&DAT_0093ea60);
        *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783a66;
        FUN_0070a340(&DAT_0093eaa0);
        plVar11 = local_50;
        uVar19 = (uint)local_40;
        uVar28 = (ulong)local_40 & 0xffffffff;
        if ((uint)local_40 < uVar27) {
          local_58 = (long *)((ulong)local_58 & 0xffffffffffffff00);
          local_40 = (long *)0x0;
          plVar24 = local_50 + uVar28;
          uVar19 = local_a8 - uVar19;
          local_50 = (long *)0x0;
          do {
            while (lVar14 = *plVar24, (*(byte *)(lVar14 + 0x31d) & 2) != 0) {
              plVar24 = plVar24 + 1;
              if (plVar24 == plVar11 + uVar19 + uVar28 + 1) goto LAB_00783c0d;
            }
            bVar7 = *(byte *)(lVar14 + 0x31c);
            if ((bVar7 & 3) != 2) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783fd2;
              FUN_006e2220("imap->l_type == lt_loaded","dl-close.c",0x20c,"_dl_close_worker");
            }
            plVar13 = DAT_00945860;
            plVar6 = local_40;
            if (*(long *)(lVar14 + 0x440) != 0) {
              if (DAT_00945878 != 0) {
                uVar2 = *(undefined8 *)(lVar14 + 0x460);
                *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783d42;
                cVar8 = FUN_007831e0(uVar2,DAT_00945878,0,bVar7 >> 3 & 1);
                if (cVar8 == '\0') {
                  DAT_00945888 = DAT_00945870;
                }
              }
              plVar4 = *(long **)(lVar14 + 0x458);
              local_58 = (long *)CONCAT71(local_58._1_7_,(char)local_44);
              plVar13 = DAT_00945860;
              plVar6 = local_40;
              if (1 < (long)plVar4 + 1U) {
                plVar6 = plVar4;
                if ((local_50 == (long *)0x0) || (plVar4 == local_50)) {
                  local_50 = (long *)((long)plVar4 - *(long *)(lVar14 + 0x440));
                  local_58 = (long *)CONCAT71(local_58._1_7_,(char)local_44);
                  if (local_40 != (long *)0x0) {
                    plVar6 = local_40;
                  }
                }
                else {
                  plVar23 = (long *)((long)plVar4 - *(long *)(lVar14 + 0x440));
                  if (plVar23 != local_40) {
                    if (DAT_00945860 == local_40) {
                      DAT_00945860 = local_50;
                      plVar13 = DAT_00945860;
                      local_50 = plVar23;
                    }
                    else {
                      plVar13 = plVar23;
                      plVar6 = local_40;
                      if ((plVar4 != DAT_00945860) && (plVar13 = DAT_00945860, local_40 < plVar4)) {
                        local_50 = plVar23;
                        plVar6 = plVar4;
                      }
                    }
                  }
                }
              }
            }
            local_40 = plVar6;
            DAT_00945860 = plVar13;
            if (local_46 != '\0') {
              *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783c99;
              FUN_0070a340(local_80);
              puVar15 = (undefined4 *)local_70[10];
              if ((puVar15 != (undefined4 *)0x0) && (local_70[0xb] != (undefined *)0x0)) {
                puVar22 = puVar15 + (long)local_70[0xb] * 8;
                do {
                  if ((*(long *)(puVar15 + 2) != 0) && (lVar14 == *(long *)(puVar15 + 6))) {
                    *(undefined8 *)(puVar15 + 2) = 0;
                    *puVar15 = 0;
                    local_70[0xc] = local_70[0xc] + -1;
                  }
                  puVar15 = puVar15 + 8;
                } while (puVar15 != puVar22);
              }
              *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783caf;
              FUN_0070abb0(local_80);
            }
            *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783af8;
            FUN_0078d290(lVar14);
            if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar25 + lVar5 + -8) = 0x784078;
              FUN_006e2220("nsid == LM_ID_BASE","dl-close.c",0x29a,"_dl_close_worker");
            }
            lVar18 = *(long *)(lVar14 + 0x20);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar25 + lVar5 + -8) = 0x784026;
              FUN_006e2220("imap->l_prev != NULL","dl-close.c",0x29b,"_dl_close_worker");
            }
            lVar12 = *(long *)(lVar14 + 0x18);
            DAT_0093eb68 = DAT_0093eb68 + -1;
            *(long *)(lVar18 + 0x18) = lVar12;
            if (lVar12 != 0) {
              *(long *)(lVar12 + 0x20) = lVar18;
            }
            *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783b2e;
            FUN_00785630(lVar14);
            uVar2 = *(undefined8 *)(lVar14 + 0x2e8);
            *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783b3a;
            FUN_007104f0(uVar2);
            if (*(long *)(lVar14 + 0x350) != -1) {
              *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783b4c;
              FUN_007104f0();
            }
            uVar2 = *(undefined8 *)(lVar14 + 0x3d8);
            *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783b58;
            FUN_007104f0(uVar2);
            if (((byte)DAT_0094b0e4 & 0x40) != 0) {
              uVar2 = *(undefined8 *)(lVar14 + 0x30);
              uVar3 = *(undefined8 *)(lVar14 + 8);
              *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783d1b;
              FUN_00787060("\nfile=%s [%lu];  destroying link map\n",uVar3,uVar2);
            }
            uVar2 = *(undefined8 *)(lVar14 + 8);
            *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783b6e;
            FUN_007104f0(uVar2);
            lVar18 = *(long *)(lVar14 + 0x38);
            do {
              while (lVar12 = *(long *)(lVar18 + 8), *(int *)(lVar18 + 0x10) != 0) {
                lVar18 = lVar12;
                if (lVar12 == 0) goto LAB_00783b95;
              }
              *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783b90;
              FUN_007104f0();
              lVar18 = lVar12;
            } while (lVar12 != 0);
LAB_00783b95:
            uVar2 = *(undefined8 *)(lVar14 + 0x3d0);
            *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783ba1;
            FUN_007104f0(uVar2);
            if (*(long *)(lVar14 + 0x398) != lVar14 + 0x370) {
              *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783bb9;
              FUN_007104f0();
            }
            if ((*(byte *)(lVar14 + 0x31d) & 8) != 0) {
              uVar2 = *(undefined8 *)(lVar14 + 0x2a8);
              *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783c8b;
              FUN_007104f0(uVar2);
            }
            if (*(long *)(lVar14 + 0x330) != -1) {
              *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783bd9;
              FUN_007104f0();
            }
            if (*(long *)(lVar14 + 0x3c0) != -1) {
              *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783beb;
              FUN_007104f0();
            }
            if (lVar14 == DAT_0094ae80) {
              DAT_0094ae80 = 0;
            }
            plVar24 = plVar24 + 1;
            *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783c04;
            FUN_007104f0(lVar14);
          } while (plVar24 != plVar11 + uVar19 + uVar28 + 1);
LAB_00783c0d:
          *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783c19;
          FUN_0070abb0(&DAT_0093eaa0);
          if ((char)local_58 != '\0') {
            lVar14 = DAT_00945840 + 1;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783fe6;
              FUN_007873c0(
                          "TLS generation counter wrapped!  Please report as described in <https://bugs.launchpad.net/ubuntu/+source/glibc/+bugs>.\n"
                          );
            }
            DAT_00945840 = lVar14;
            if (DAT_00945860 == local_40) {
              DAT_00945860 = local_50;
            }
          }
        }
        else {
          *(undefined8 *)(puVar25 + lVar5 + -8) = 0x784054;
          FUN_0070abb0(&DAT_0093eaa0);
        }
        *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783c5b;
        FUN_0070abb0(&DAT_0093ea60);
        if ((*local_70 == (undefined *)0x0) && (DAT_0093eb28 + -1 == param_1)) {
          DAT_0093eb28 = param_1;
        }
        *(undefined4 *)(local_60 + 3) = 0;
        *(undefined8 *)(puVar25 + lVar5 + -8) = 0x783c79;
        FUN_007841e0();
      }
    }
    if (DAT_0094ad54 != 2) {
      DAT_0094ad54 = 0;
      return;
    }
  } while( true );
}

