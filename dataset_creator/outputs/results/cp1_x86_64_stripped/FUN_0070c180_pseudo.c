
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0070c180(undefined4 *param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  ulong *puVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long in_FS_OFFSET;
  bool bVar17;
  int *piStack_1200;
  long lStack_11e8;
  long lStack_11e0;
  long lStack_11d0;
  long lStack_11c8;
  long lStack_11c0;
  long lStack_11b8;
  long lStack_11b0;
  long lStack_11a8;
  long lStack_11a0;
  long lStack_1198;
  long lStack_1190;
  long lStack_1188;
  undefined1 auStack_1180 [320];
  undefined1 auStack_1040 [16];
  undefined8 uStack_1030;
  long lStack_1028;
  undefined1 auStack_60 [8];
  long lStack_58;
  undefined8 uStack_48;
  long lStack_40;
  int *piStack_38;
  
  lVar16 = *(long *)(in_FS_OFFSET + -0x20);
  if (DAT_0094a9b0 != (int *)0x0) {
    LOCK();
    bVar17 = DAT_0094a9b8 == 0;
    if (bVar17) {
      DAT_0094a9b8 = 1;
    }
    UNLOCK();
    if (!bVar17) {
      param_1 = &DAT_0094a9b8;
      FUN_00709590(&DAT_0094a9b8);
    }
    piVar13 = DAT_0094a9b0;
    if (DAT_0094a9b0 != (int *)0x0) {
      if (*(long *)(DAT_0094a9b0 + 0x220) != 0) {
        DAT_0094a9b0 = *(int **)(DAT_0094a9b0 + 0x21e);
                    /* WARNING: Subroutine does not return */
        FUN_0070bf60("result->attached_threads == 0","arena.c",0x335,"get_free_list");
      }
      DAT_0094a9b0 = *(int **)(DAT_0094a9b0 + 0x21e);
      piVar13[0x220] = 1;
      piVar13[0x221] = 0;
      if (lVar16 != 0) {
        if (*(long *)(lVar16 + 0x880) == 0) {
          FUN_0070c150();
          piStack_38 = piVar13;
          uStack_48 = 0xffffffffffffffe0;
          lStack_58 = *(long *)(in_FS_OFFSET + 0x28);
          lStack_1198 = 0;
          lStack_11a0 = 0;
          lStack_11a8 = 0;
          lStack_11b0 = 0;
          lStack_11c8 = 0;
          lStack_11b8 = 0;
          piStack_1200 = &DAT_0093e160;
          lStack_11d0 = 0;
          lStack_11c0 = 0;
          lStack_40 = lVar16;
          do {
            FUN_007954a0(param_1,"<heap nr=\"%d\">\n<sizes>\n");
            LOCK();
            iVar2 = *piStack_1200;
            if (iVar2 == 0) {
              *piStack_1200 = 1;
            }
            UNLOCK();
            if (iVar2 != 0) {
              FUN_00709590(piStack_1200);
            }
            lStack_11e8 = 0;
            lStack_11e0 = 0;
            uVar3 = *(ulong *)(piStack_1200 + 0x18);
            puVar12 = (ulong *)(piStack_1200 + 4);
            uVar7 = *(ulong *)(uVar3 + 8);
            pauVar8 = (undefined1 (*) [16])auStack_1180;
            do {
              uVar4 = *puVar12;
              if (uVar4 == 0) {
                *(undefined8 *)(pauVar8[1] + 8) = 0;
                lVar16 = 0;
                *pauVar8 = (undefined1  [16])0x0;
              }
              else {
                lVar16 = 0;
                uVar9 = uVar4;
                do {
                  if ((uVar9 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0070bdd0("__malloc_info(): unaligned fastbin chunk detected");
                  }
                  puVar1 = (ulong *)(uVar9 + 0x10);
                  lVar16 = lVar16 + 1;
                  uVar6 = uVar9 + 0x10 >> 0xc;
                  uVar9 = *puVar1 ^ uVar6;
                } while (*puVar1 != uVar6);
                uVar4 = *(ulong *)(uVar4 + 8);
                lStack_11e8 = lStack_11e8 + lVar16;
                *(long *)(pauVar8[1] + 8) = lVar16;
                uVar4 = uVar4 & 0xfffffffffffffff8;
                lStack_11e0 = lStack_11e0 + uVar4 * lVar16;
                *(ulong *)*pauVar8 = uVar4 - 0xf;
                *(ulong *)(*pauVar8 + 8) = uVar4;
              }
              pauVar10 = pauVar8 + 2;
              puVar12 = puVar12 + 1;
              *(long *)pauVar8[1] = lVar16 * *(long *)(*pauVar8 + 8);
              pauVar8 = pauVar10;
            } while (&auStack_1040 != pauVar10);
            uVar7 = uVar7 & 0xfffffffffffffff8;
            lVar16 = 1;
            piVar13 = piStack_1200 + 0x18;
            pauVar8 = &auStack_1040;
            do {
              piVar5 = *(int **)(piVar13 + 4);
              *(undefined8 *)*pauVar8 = _DAT_00829460;
              *(undefined8 *)(*pauVar8 + 8) = _UNK_00829468;
              pauVar8[1] = (undefined1  [16])0x0;
              if ((piVar5 == (int *)0x0) || (piVar5 == piVar13)) {
LAB_0070c410:
                *(undefined8 *)*pauVar8 = 0;
              }
              else {
                uVar4 = 0;
                uVar9 = 0xffffffffffffffff;
                lVar14 = 0;
                lVar15 = 1;
                do {
                  lVar11 = lVar15;
                  uVar6 = *(ulong *)(piVar5 + 2);
                  piVar5 = *(int **)(piVar5 + 4);
                  lVar14 = lVar14 + uVar6;
                  if (uVar6 < uVar9) {
                    uVar9 = uVar6;
                  }
                  if (uVar4 < uVar6) {
                    uVar4 = uVar6;
                  }
                  lVar15 = lVar11 + 1;
                } while (piVar5 != piVar13);
                lVar16 = lVar16 + lVar11;
                *(ulong *)*pauVar8 = uVar9;
                *(ulong *)(*pauVar8 + 8) = uVar4;
                *(long *)pauVar8[1] = lVar14;
                *(long *)(pauVar8[1] + 8) = lVar11;
                if (lVar11 == 0) goto LAB_0070c410;
              }
              uVar7 = uVar7 + *(long *)pauVar8[1];
              pauVar8 = pauVar8 + 2;
              piVar13 = piVar13 + 4;
            } while (pauVar8 != (undefined1 (*) [16])auStack_60);
            if (piStack_1200 == &DAT_0093e160) {
              lStack_1188 = 0;
              lVar15 = 0;
              lStack_1190 = 0;
            }
            else {
              uVar4 = DAT_0093e0f0 * -4;
              if (DAT_0093e0f0 == 0) {
                uVar4 = 0xfffffffffc000000;
              }
              lStack_1188 = 0;
              lVar15 = 0;
              lStack_1190 = 0;
              uVar4 = uVar4 & uVar3;
              do {
                lStack_1190 = lStack_1190 + *(long *)(uVar4 + 0x10);
                lVar15 = lVar15 + *(long *)(uVar4 + 0x18);
                lStack_1188 = lStack_1188 + 1;
                uVar4 = *(ulong *)(uVar4 + 8);
              } while (uVar4 != 0);
            }
            LOCK();
            iVar2 = *piStack_1200;
            *piStack_1200 = 0;
            UNLOCK();
            if (1 < iVar2) {
              FUN_00709660();
            }
            lStack_11c0 = lStack_11c0 + lVar16;
            lStack_11d0 = lStack_11d0 + lStack_11e8;
            lStack_11b8 = lStack_11b8 + uVar7;
            lStack_11c8 = lStack_11c8 + lStack_11e0;
            lVar14 = 0;
            pauVar8 = (undefined1 (*) [16])auStack_1180;
            do {
              if ((lVar14 != 10) && (*(long *)(pauVar8[1] + 8) != 0)) {
                FUN_007954a0(param_1,
                             "  <size from=\"%zu\" to=\"%zu\" total=\"%zu\" count=\"%zu\"/>\n",
                             *(undefined8 *)*pauVar8,*(undefined8 *)(*pauVar8 + 8),
                             *(undefined8 *)pauVar8[1]);
              }
              lVar14 = lVar14 + 1;
              pauVar8 = pauVar8 + 2;
            } while (lVar14 != 0x89);
            if (lStack_1028 != 0) {
              FUN_007954a0(param_1,
                           "  <unsorted from=\"%zu\" to=\"%zu\" total=\"%zu\" count=\"%zu\"/>\n",
                           auStack_1040._0_8_,auStack_1040._8_8_,uStack_1030);
            }
            lStack_11b0 = lStack_11b0 + *(long *)(piStack_1200 + 0x222);
            lStack_11a8 = lStack_11a8 + *(long *)(piStack_1200 + 0x224);
            FUN_007954a0(param_1,
                         "</sizes>\n<total type=\"fast\" count=\"%zu\" size=\"%zu\"/>\n<total type=\"rest\" count=\"%zu\" size=\"%zu\"/>\n<system type=\"current\" size=\"%zu\"/>\n<system type=\"max\" size=\"%zu\"/>\n"
                         ,lStack_11e8,lStack_11e0,lVar16,uVar7,*(long *)(piStack_1200 + 0x222),
                         *(long *)(piStack_1200 + 0x224));
            if (piStack_1200 == &DAT_0093e160) {
              FUN_007954a0(param_1,
                           "<aspace type=\"total\" size=\"%zu\"/>\n<aspace type=\"mprotect\" size=\"%zu\"/>\n"
                          );
              lStack_1190 = DAT_0093e9e8;
              FUN_006fdb20("</heap>\n",param_1);
              piStack_1200 = (int *)PTR_DAT_0093e9d0;
              lVar15 = lStack_1190;
            }
            else {
              FUN_007954a0(param_1,
                           "<aspace type=\"total\" size=\"%zu\"/>\n<aspace type=\"mprotect\" size=\"%zu\"/>\n<aspace type=\"subheaps\" size=\"%zu\"/>\n"
                           ,lStack_1190,lVar15,lStack_1188);
              FUN_006fdb20("</heap>\n",param_1);
              piStack_1200 = *(int **)(piStack_1200 + 0x21c);
            }
            lStack_1198 = lStack_1198 + lVar15;
            lStack_11a0 = lStack_11a0 + lStack_1190;
            if (piStack_1200 == &DAT_0093e160) {
              FUN_007954a0(param_1,
                           "<total type=\"fast\" count=\"%zu\" size=\"%zu\"/>\n<total type=\"rest\" count=\"%zu\" size=\"%zu\"/>\n<total type=\"mmap\" count=\"%d\" size=\"%zu\"/>\n<system type=\"current\" size=\"%zu\"/>\n<system type=\"max\" size=\"%zu\"/>\n<aspace type=\"total\" size=\"%zu\"/>\n<aspace type=\"mprotect\" size=\"%zu\"/>\n</malloc>\n"
                           ,lStack_11d0,lStack_11c8,lStack_11c0,lStack_11b8,DAT_0093e0fc,
                           DAT_0093e110,lStack_11b0,lStack_11a8,lStack_11a0,lStack_1198);
              if (lStack_58 == *(long *)(in_FS_OFFSET + 0x28)) {
                return (int *)0x0;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00771f60();
            }
          } while( true );
        }
        *(long *)(lVar16 + 0x880) = *(long *)(lVar16 + 0x880) + -1;
      }
    }
    iVar2 = DAT_0094a9b8;
    LOCK();
    DAT_0094a9b8 = 0;
    UNLOCK();
    if (1 < iVar2) {
      FUN_00709660(&DAT_0094a9b8);
    }
    if (piVar13 != (int *)0x0) {
      LOCK();
      iVar2 = *piVar13;
      if (iVar2 == 0) {
        *piVar13 = 1;
      }
      UNLOCK();
      if (iVar2 != 0) {
        FUN_00709590(piVar13);
      }
      *(int **)(in_FS_OFFSET + -0x20) = piVar13;
      return piVar13;
    }
  }
  return (int *)0x0;
}

