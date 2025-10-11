
void FUN_00785f50(undefined8 *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  long local_60;
  
  uVar11 = *param_1;
  uVar22 = *(uint *)(param_1 + 1);
  lVar7 = thunk_FUN_00712710(uVar11,0x24);
  if ((lVar7 == 0) && (lVar7 = param_1[4], lVar7 != -2)) {
    lVar9 = thunk_FUN_00712710(uVar11,0x2f);
    puVar8 = (undefined *)0x0;
    if (lVar9 == 0) goto LAB_00785f81;
  }
  else {
LAB_00785f81:
    puVar3 = PTR_DAT_0093eb60;
    puVar8 = (undefined *)FUN_00785b70(param_1[2]);
    lVar7 = param_1[4];
    if (puVar8 == (undefined *)0x0) {
      puVar8 = puVar3;
    }
    if (lVar7 == -2) {
      lVar7 = *(long *)(puVar8 + 0x30);
      param_1[4] = lVar7;
    }
  }
  uVar1 = *(undefined4 *)(&DAT_0093eb7c + lVar7 * 0xa0);
  *(bool *)((long)param_1 + 0x2c) = *(long *)(&DAT_0093eb80 + lVar7 * 0xa0) != 0;
  *(undefined4 *)(param_1 + 5) = uVar1;
  FUN_00784240(0,lVar7);
  lVar7 = FUN_007b66f0(puVar8,uVar11,2,0,uVar22 | 0x10000000,param_1[4]);
  param_1[3] = lVar7;
  if (lVar7 == 0) {
    if ((uVar22 & 4) != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("mode & RTLD_NOLOAD","dl-open.c",0x21d,"dl_open_worker_begin");
  }
  if ((uVar22 & 0x40000000) != 0) {
    return;
  }
  uVar21 = uVar22 & 0x1000;
  *(int *)(lVar7 + 0x318) = *(int *)(lVar7 + 0x318) + 1;
  if (*(long *)(lVar7 + 0x2c0) == 0) {
    if (uVar21 != 0) {
      *(undefined1 *)(lVar7 + 800) = 1;
    }
    uVar12 = 0;
    FUN_007b1870(lVar7,0,0,0);
    uVar21 = *(uint *)(lVar7 + 0x2c8);
    if (uVar21 != 0) {
      do {
        while( true ) {
          plVar10 = *(long **)(*(long *)(*(long *)(lVar7 + 0x2c0) + uVar12 * 8) + 0x28);
          if (plVar10[0x5d] != 0) break;
          FUN_0078b640(plVar10,0,0);
          if (plVar10[0x16] == 0) {
LAB_007860ee:
            uVar21 = *(uint *)(lVar7 + 0x2c8);
          }
          else {
            lVar9 = 0;
            if ((*(byte *)((long)plVar10 + 0x31e) & 0x20) != 0) {
              lVar9 = *plVar10;
            }
            iVar5 = thunk_FUN_00712780(*(long *)(plVar10[0x16] + 8) + *(long *)(plVar10[0xd] + 8) +
                                       lVar9);
            if (iVar5 != 0) goto LAB_007860ee;
            FUN_007907b0(plVar10);
            uVar21 = *(uint *)(lVar7 + 0x2c8);
          }
          uVar23 = (int)uVar12 + 1;
          uVar12 = (ulong)uVar23;
          if (uVar21 <= uVar23) goto LAB_00786100;
        }
        uVar23 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar23;
      } while (uVar23 < uVar21);
    }
LAB_00786100:
    lVar9 = FUN_007841f0(param_1[4]);
    *(undefined4 *)(lVar9 + 0x18) = 0;
    FUN_007841e0();
    if (*(int *)(lVar7 + 0x2c8) != 0) {
      plVar10 = *(long **)(lVar7 + 0x3d0) + (*(int *)(lVar7 + 0x2c8) - 1);
      do {
        lVar9 = *plVar10;
        if (((*(byte *)(lVar9 + 0x31c) & 8) == 0) &&
           (*(uint *)(lVar9 + 0x328) != (*(uint *)(lVar9 + 0x328) & DAT_0094aff8))) {
                    /* WARNING: Subroutine does not return */
          FUN_0078db10(0,*(undefined8 *)(lVar9 + 8),"dlopen","CPU ISA level is lower than required")
          ;
        }
        bVar24 = *(long **)(lVar7 + 0x3d0) != plVar10;
        plVar10 = plVar10 + -1;
      } while (bVar24);
    }
    FUN_0078d2e0(lVar7);
    if ((DAT_0094b0e4._1_1_ & 2) != 0) {
      FUN_00785df0(lVar7,0);
    }
    uVar21 = uVar22 & 0x8000001;
    if (DAT_0094b0e0 == 0) {
      uVar21 = uVar22 & 0x8000000;
    }
    plVar10 = *(long **)(lVar7 + 0x3d0);
    uVar20 = 0;
    uVar14 = 0xffffffff;
    lVar9 = *plVar10;
    uVar23 = 0;
    do {
      uVar6 = uVar23 + 1;
      if (((*(byte *)(*(long *)(lVar9 + 0x28) + 0x31c) & 4) == 0) &&
         (uVar20 = uVar6, uVar14 == 0xffffffff)) {
        uVar14 = uVar23;
      }
      lVar9 = plVar10[uVar6];
      uVar23 = uVar6;
    } while (lVar9 != 0);
    uVar23 = uVar20 - 1;
    if (uVar14 < uVar20) {
      lVar9 = (ulong)uVar23 * 8;
      while( true ) {
        lVar18 = *(long *)((long)plVar10 + lVar9);
        if ((*(byte *)(*(long *)(lVar18 + 0x28) + 0x31c) & 4) == 0) {
          FUN_00787760(lVar18,*(undefined8 *)(lVar18 + 0x398),uVar21,0);
        }
        if (((ulong)uVar23 - (ulong)(uVar23 - uVar14)) * 8 == lVar9) break;
        plVar10 = *(long **)(lVar7 + 0x3d0);
        lVar9 = lVar9 + -8;
      }
    }
    uVar21 = *(uint *)(lVar7 + 0x2c8);
    uVar23 = 0;
    if (uVar21 != 0) {
      do {
        lVar9 = *(long *)(*(long *)(lVar7 + 0x2c0) + (ulong)uVar23 * 8);
        if ((*(byte *)(lVar9 + 0x31c) & 0xb) == 10) {
          plVar10 = *(long **)(lVar9 + 0x398);
          lVar18 = *plVar10;
          if (lVar18 == 0) {
            uVar12 = 1;
          }
          else {
            plVar15 = plVar10;
            do {
              plVar15 = plVar15 + 1;
              if (lVar18 == lVar7 + 0x2c0) goto LAB_00786260;
              lVar18 = *plVar15;
            } while (lVar18 != 0);
            do {
              lVar16 = lVar18;
              lVar18 = lVar16 + 1;
            } while (plVar10[lVar18] != 0);
            uVar12 = lVar16 + 2;
          }
          uVar19 = *(ulong *)(lVar9 + 0x390);
          if (uVar19 <= uVar12) {
            plVar15 = (long *)(lVar9 + 0x370);
            if ((3 < uVar19) || (local_60 = 4, plVar13 = plVar15, plVar15 == plVar10)) {
              local_60 = uVar19 * 2;
              plVar13 = (long *)FUN_007101b0(uVar19 << 4);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0078db10(0xc,"dlopen",0,"cannot create scope list");
              }
            }
            uVar11 = thunk_FUN_00713a50(plVar13,plVar10,uVar12 << 3);
            plVar10 = *(long **)(lVar9 + 0x398);
            *(undefined8 *)(lVar9 + 0x398) = uVar11;
            if (plVar15 != plVar10) {
              FUN_00789440();
            }
            uVar21 = *(uint *)(lVar7 + 0x2c8);
            *(long *)(lVar9 + 0x390) = local_60;
          }
        }
LAB_00786260:
        uVar23 = uVar23 + 1;
      } while (uVar23 < uVar21);
      if (uVar21 != 0) {
        uVar23 = 0;
        bVar24 = false;
        do {
          while ((bVar2 = bVar24, lVar9 = *(long *)(*(long *)(lVar7 + 0x2c0) + (ulong)uVar23 * 8),
                 (*(byte *)(lVar9 + 0x31c) & 8) != 0 || (*(long *)(lVar9 + 0x440) == 0))) {
            uVar23 = uVar23 + 1;
            bVar24 = bVar2;
            if (uVar21 <= uVar23) goto LAB_00786430;
          }
          uVar23 = uVar23 + 1;
          bVar2 = true;
          FUN_0078a6c0(lVar9,0);
          uVar21 = *(uint *)(lVar7 + 0x2c8);
          bVar24 = true;
        } while (uVar23 < uVar21);
        goto LAB_00786430;
      }
    }
    bVar2 = false;
LAB_00786430:
    if ((uVar22 & 0x100) != 0) {
      FUN_007859f0(lVar7);
    }
    for (puVar8 = (&PTR_DAT_0093eb60)[*(long *)(lVar7 + 0x30) * 0x14]; puVar8 != (undefined *)0x0;
        puVar8 = *(undefined **)(puVar8 + 0x18)) {
      if (puVar8[800] != '\0') {
        if (((byte)DAT_0094b0e4 & 0x40) != 0) {
          FUN_00787060("activating NODELETE for %s [%lu]\n",*(undefined8 *)(puVar8 + 8),
                       *(undefined8 *)(puVar8 + 0x30));
        }
        *(undefined2 *)(puVar8 + 799) = 1;
      }
    }
    uVar22 = *(uint *)(lVar7 + 0x2c8);
    uVar21 = 0;
    if (uVar22 != 0) {
      do {
        lVar18 = 0;
        lVar9 = *(long *)(*(long *)(lVar7 + 0x2c0) + (ulong)uVar21 * 8);
        if ((*(byte *)(lVar9 + 0x31c) & 0xb) == 10) {
          plVar10 = *(long **)(lVar9 + 0x398);
          lVar18 = *plVar10;
          if (lVar18 == 0) {
            uVar12 = 1;
            lVar16 = 0;
            lVar18 = 0;
          }
          else {
            plVar15 = plVar10;
            do {
              plVar15 = plVar15 + 1;
              if (lVar18 == lVar7 + 0x2c0) goto LAB_007864b4;
              lVar18 = *plVar15;
            } while (lVar18 != 0);
            lVar18 = 0;
            do {
              lVar17 = lVar18;
              lVar18 = lVar17 + 1;
              lVar16 = lVar18 * 8;
            } while (plVar10[lVar18] != 0);
            uVar12 = lVar17 + 2;
          }
          if (*(ulong *)(lVar9 + 0x390) <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("cnt + 1 < imap->l_scope_max","dl-open.c",0x153,"update_scopes");
          }
          plVar10[uVar12] = 0;
          *(long *)(*(long *)(lVar9 + 0x398) + lVar16) = lVar7 + 0x2c0;
        }
        if ((DAT_0094b0e4._1_1_ & 2) != 0) {
          FUN_00785df0(lVar9,lVar18);
        }
        uVar22 = *(uint *)(lVar7 + 0x2c8);
LAB_007864b4:
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar22);
    }
    cVar4 = FUN_00785100(lVar7);
    if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_0078db10(0xc,**(undefined8 **)(lVar7 + 0x38),0,"cannot allocate address lookup data");
    }
    if (bVar2) {
      uVar12 = (ulong)*(uint *)(lVar7 + 0x2c8);
      if (*(uint *)(lVar7 + 0x2c8) == 0) {
        uVar12 = 0;
      }
      else {
        uVar22 = 0;
        uVar19 = uVar12;
        do {
          lVar9 = *(long *)(*(long *)(lVar7 + 0x2c0) + (ulong)uVar22 * 8);
          if (((*(byte *)(lVar9 + 0x31c) & 8) == 0) && (*(long *)(lVar9 + 0x440) != 0)) {
            FUN_0078a6c0(lVar9,1);
            uVar19 = (ulong)*(uint *)(lVar7 + 0x2c8);
            if (((*(byte *)(lVar9 + 0x31d) & 0x40) != 0) &&
               (*(uint *)(lVar7 + 0x2c8) == (uint)uVar12)) {
              uVar12 = (ulong)uVar22;
            }
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 < (uint)uVar19);
      }
      lVar9 = DAT_00945840 + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007873c0("TLS generation counter wrapped!  Please report this.");
      }
      uVar22 = *(uint *)(lVar7 + 0x2c8);
      DAT_00945840 = lVar9;
      if ((uint)uVar12 < uVar22) {
        do {
          lVar9 = *(long *)(*(long *)(lVar7 + 0x2c0) + uVar12 * 8);
          if (((*(ushort *)(lVar9 + 0x31c) & 0x4008) == 0x4000) && (*(long *)(lVar9 + 0x440) != 0))
          {
            *(byte *)(lVar9 + 0x31d) = *(byte *)(lVar9 + 0x31d) & 0xbf;
            FUN_0078a7c0(lVar9);
            if ((*(byte *)(lVar9 + 0x31d) & 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("imap->l_need_tls_init == 0","dl-open.c",0x1b6,"update_tls_slotinfo");
            }
            uVar22 = *(uint *)(lVar7 + 0x2c8);
          }
          uVar21 = (int)uVar12 + 1;
          uVar12 = (ulong)uVar21;
        } while (uVar21 < uVar22);
      }
    }
    if (*(char *)((long)param_1 + 0x2c) == '\0') {
      FUN_007b1400(*(undefined8 *)(&DAT_0093eb80 + param_1[4] * 0xa0),0);
    }
    *(undefined1 *)((long)param_1 + 0x2d) = 1;
    return;
  }
  if (((byte)DAT_0094b0e4 & 0x40) != 0) {
    FUN_00787060("opening file=%s [%lu]; direct_opencount=%u\n\n",*(undefined8 *)(lVar7 + 8),
                 *(undefined8 *)(lVar7 + 0x30));
  }
  if ((uVar22 & 0x100) == 0) {
    if (uVar21 != 0) {
      if ((((byte)DAT_0094b0e4 & 0x40) != 0) && (*(char *)(lVar7 + 799) == '\0')) {
        FUN_00787060("marking %s [%lu] as NODELETE\n",*(undefined8 *)(lVar7 + 8),
                     *(undefined8 *)(lVar7 + 0x30));
      }
      *(undefined1 *)(lVar7 + 799) = 1;
    }
    goto LAB_007867d3;
  }
  if ((*(byte *)(lVar7 + 0x31c) & 0x10) == 0) {
    FUN_007859f0(lVar7);
    if (uVar21 != 0) goto LAB_0078677c;
  }
  else {
    if (uVar21 == 0) goto LAB_007867d3;
LAB_0078677c:
    if ((((byte)DAT_0094b0e4 & 0x40) != 0) && (*(char *)(lVar7 + 799) == '\0')) {
      FUN_00787060("marking %s [%lu] as NODELETE\n",*(undefined8 *)(lVar7 + 8),
                   *(undefined8 *)(lVar7 + 0x30));
    }
    *(undefined1 *)(lVar7 + 799) = 1;
  }
  if ((*(byte *)(lVar7 + 0x31c) & 0x10) == 0) {
    FUN_00785780(lVar7);
  }
LAB_007867d3:
  lVar7 = FUN_007841f0(param_1[4]);
  if (*(int *)(lVar7 + 0x18) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006e2220("_dl_debug_update (args->nsid)->r_state == RT_CONSISTENT","dl-open.c",0x245,
               "dl_open_worker_begin");
}

