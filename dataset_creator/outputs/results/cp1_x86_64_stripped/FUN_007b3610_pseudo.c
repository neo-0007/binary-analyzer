
int FUN_007b3610(undefined8 param_1,ulong *param_2,undefined1 *param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  int *piVar14;
  int *piVar15;
  char *pcVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int *piVar20;
  int iVar21;
  ulong *puVar22;
  long in_FS_OFFSET;
  undefined8 local_58;
  ulong *local_50;
  int *local_48;
  ulong *local_40;
  
  puVar17 = &local_58;
  puVar18 = &local_58;
  puVar19 = &local_58;
  iVar5 = FUN_0076e620(param_1,0x80000);
  if (iVar5 == -1) {
    return -1;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
  local_40 = param_2 + 1;
  *param_2 = 0;
  uVar7 = 0;
  do {
    lVar6 = FUN_0076e770(iVar5,(long)local_40 + uVar7,0x340 - uVar7);
    if (lVar6 < 1) {
      uVar7 = *param_2;
      break;
    }
    uVar7 = lVar6 + *param_2;
    *param_2 = uVar7;
  } while (uVar7 < 0x40);
  if ((long)uVar7 < 0x40) {
    iVar21 = *(int *)(in_FS_OFFSET + -0x58);
    pcVar16 = "cannot read file data";
    puVar18 = &local_58;
    if (iVar21 == 0) {
      pcVar16 = "file too short";
      puVar18 = &local_58;
    }
    goto LAB_007b3a73;
  }
  if (((((param_2[1] == 0x10102464c457f) || (param_2[1] == 0x3010102464c457f)) &&
       (((byte)param_2[2] == 0 ||
        ((*(char *)((long)param_2 + 0xf) == '\x03' && ((byte)param_2[2] < 4)))))) &&
      (*(int *)((long)param_2 + 0x11) == 0)) &&
     ((*(short *)((long)param_2 + 0x15) == 0 && (*(char *)((long)param_2 + 0x17) == '\0')))) {
    iVar21 = 0;
    if (*(int *)((long)param_2 + 0x1c) != 1) {
      pcVar16 = "ELF file version does not match current one";
      puVar18 = &local_58;
      goto LAB_007b3a73;
    }
    if (*(short *)((long)param_2 + 0x1a) == 0x3e) {
      if (1 < (ushort)((short)param_2[3] - 2U)) {
        pcVar16 = "only ET_DYN and ET_EXEC can be loaded";
        puVar18 = &local_58;
LAB_007b3a73:
        *(undefined8 *)((long)puVar18 + -8) = 0x7b3a7b;
        lVar6 = thunk_FUN_007129d0(param_1);
        puVar13 = (undefined1 *)((long)puVar18 + -(lVar6 + 0x18U & 0xfffffffffffff000));
        for (; puVar18 != (undefined8 *)puVar13; puVar18 = (undefined8 *)((long)puVar18 + -0x1000))
        {
          *(undefined8 *)((long)puVar18 + -8) = *(undefined8 *)((long)puVar18 + -8);
        }
        uVar7 = (ulong)((uint)(lVar6 + 0x18U) & 0xff0);
        lVar3 = -uVar7;
        if (uVar7 != 0) {
          *(undefined8 *)((long)puVar18 + -8) = *(undefined8 *)((long)puVar18 + -8);
        }
        *(undefined8 *)((long)puVar18 + lVar3 + -8) = 0x7b3ad8;
        uVar11 = thunk_FUN_00713a50((ulong)((long)puVar18 + lVar3 + 0xf) & 0xfffffffffffffff0,
                                    param_1,lVar6 + 1);
        *(undefined8 *)((long)puVar18 + lVar3 + -8) = 0x7b3ae3;
        FUN_007104f0(param_1);
        *(undefined8 *)((long)puVar18 + lVar3 + -8) = 0x7b3aeb;
        FUN_0076e4b0(iVar5);
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)puVar18 + lVar3 + -8) = 0x7b3afb;
        FUN_0078db10(iVar21,uVar11,0,pcVar16);
      }
      if (*(short *)((long)param_2 + 0x3e) != 0x38) {
        pcVar16 = "ELF file\'s phentsize not the expected size";
        puVar18 = &local_58;
        goto LAB_007b3a73;
      }
      uVar12 = (ulong)(ushort)param_2[8];
      uVar2 = param_2[5];
      lVar6 = uVar12 * 0x38;
      if (uVar7 < lVar6 + uVar2) {
        puVar19 = &local_58;
        while (puVar17 != (undefined8 *)((long)&local_58 - (lVar6 + 0x17U & 0xfffffffffffff000))) {
          puVar18 = (undefined8 *)((long)puVar19 + -0x1000);
          *(undefined8 *)((long)puVar19 + -8) = *(undefined8 *)((long)puVar19 + -8);
          puVar17 = (undefined8 *)((long)puVar19 + -0x1000);
          puVar19 = (undefined8 *)((long)puVar19 + -0x1000);
        }
        uVar7 = (ulong)((uint)(lVar6 + 0x17U) & 0xff0);
        lVar3 = -uVar7;
        puVar19 = (undefined8 *)((long)puVar18 + lVar3);
        if (uVar7 != 0) {
          *(undefined8 *)((long)puVar18 + -8) = *(undefined8 *)((long)puVar18 + -8);
        }
        local_48 = (int *)((ulong)((long)puVar18 + lVar3 + 0xf) & 0xfffffffffffffff0);
        *(undefined8 *)((long)puVar18 + lVar3 + -8) = 0x7b39e1;
        lVar9 = FUN_007abc10(iVar5,local_48,lVar6,uVar2);
        if (lVar9 != lVar6) {
LAB_007b3c3f:
          pcVar16 = "cannot read file data";
          iVar21 = *(int *)(in_FS_OFFSET + -0x58);
          puVar18 = puVar19;
          goto LAB_007b3a73;
        }
        uVar12 = (ulong)(ushort)param_2[8];
        lVar6 = uVar12 * 0x38;
        puVar19 = (undefined8 *)((long)puVar18 + lVar3);
        piVar20 = local_48;
      }
      else {
        puVar19 = &local_58;
        piVar20 = (int *)((long)local_40 + uVar2);
      }
      if (piVar20 < (int *)(lVar6 + (long)piVar20)) {
        local_58 = param_1;
        puVar10 = (ulong *)0x0;
        piVar15 = piVar20;
        do {
          if (((*piVar15 == 4) && (piVar14 = *(int **)(piVar15 + 8), (int *)0x1f < piVar14)) &&
             ((*(long *)(piVar15 + 0xc) - 4U & 0xfffffffffffffffb) == 0)) {
            puVar22 = *(ulong **)(piVar15 + 2);
            if (*param_2 < (ulong)((long)piVar14 + (long)puVar22)) {
              local_50 = puVar22;
              local_48 = piVar14;
              if (piVar14 < (int *)0x10000) {
                for (puVar13 = (undefined1 *)puVar19;
                    puVar13 !=
                    (undefined1 *)((long)puVar19 + -((long)piVar14 + 0x17U & 0xfffffffffffff000));
                    puVar13 = puVar13 + -0x1000) {
                  *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
                }
                uVar7 = (ulong)((uint)((long)piVar14 + 0x17U) & 0xff0);
                lVar6 = -uVar7;
                puVar19 = (undefined8 *)(puVar13 + lVar6);
                if (uVar7 != 0) {
                  *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
                }
                puVar22 = (ulong *)((ulong)(puVar13 + lVar6 + 0xf) & 0xfffffffffffffff0);
              }
              else {
                *(undefined8 *)((long)puVar19 + -8) = 0x7b3a33;
                puVar10 = (ulong *)FUN_00710840(puVar10,piVar14);
                puVar22 = puVar10;
                param_1 = local_58;
                if (puVar10 == (ulong *)0x0) goto LAB_007b3c3f;
              }
              *(undefined8 *)((long)puVar19 + -8) = 0x7b3891;
              puVar4 = local_50;
              local_50 = puVar10;
              piVar8 = (int *)FUN_007abc10(iVar5,puVar22,local_48,puVar4);
              param_1 = local_58;
              piVar14 = local_48;
              puVar10 = local_50;
              if (piVar8 != local_48) {
                *(undefined8 *)((long)puVar19 + -8) = 0x7b3c3f;
                FUN_007104f0(local_50);
                goto LAB_007b3c3f;
              }
            }
            else {
              puVar22 = (ulong *)((long)local_40 + (long)puVar22);
            }
            for (; puVar22[1] != 0x554e4700000001 || *puVar22 != 0x1000000004;
                puVar22 = (ulong *)((long)puVar22 + (long)piVar8)) {
              lVar6 = *(long *)(piVar15 + 0xc);
              piVar8 = (int *)((lVar6 + 0xb + (ulong)(uint)*puVar22 & -lVar6) +
                               lVar6 + -1 + (ulong)*(uint *)((long)puVar22 + 4) & -lVar6);
              if (piVar14 + -8 < piVar8) goto LAB_007b3970;
              piVar14 = (int *)((long)piVar14 - (long)piVar8);
            }
            if (piVar14 != (int *)0x0) {
              if (((uint)puVar22[2] != 0) ||
                 ((DAT_0094ae98 <
                   ((*(uint *)((long)puVar22 + 0x14) & 0xff) * 0x100 + ((uint)puVar22[3] & 0xff)) *
                   0x100 + (*(uint *)((long)puVar22 + 0x1c) & 0xff) && (DAT_0094ae98 != 0))))
              goto LAB_007b36f0;
              break;
            }
LAB_007b3970:
            uVar12 = (ulong)(ushort)param_2[8];
          }
          piVar15 = piVar15 + 0xe;
        } while (piVar15 < piVar20 + uVar12 * 0xe);
      }
      else {
        puVar10 = (ulong *)0x0;
      }
      goto LAB_007b3714;
    }
LAB_007b3b48:
    puVar10 = (ulong *)0x0;
  }
  else {
    if ((int)param_2[1] != 0x464c457f) {
      iVar21 = 0;
      pcVar16 = "invalid ELF header";
      puVar18 = &local_58;
      goto LAB_007b3a73;
    }
    if (*(char *)((long)param_2 + 0xc) == '\x02') {
      if (*(short *)((long)param_2 + 0x1a) == 0x3e) {
        pcVar16 = "ELF file data encoding not little-endian";
        puVar18 = &local_58;
        iVar21 = 0;
        if (((*(char *)((long)param_2 + 0xd) == '\x01') &&
            (pcVar16 = "ELF file version ident does not match current one", puVar18 = &local_58,
            iVar21 = 0, *(char *)((long)param_2 + 0xe) == '\x01')) &&
           ((cVar1 = *(char *)((long)param_2 + 0xf), cVar1 == '\0' ||
            (pcVar16 = "ELF file OS ABI invalid", puVar18 = &local_58, cVar1 == '\x03')))) {
          if (((byte)param_2[2] == 0) || (((byte)param_2[2] < 4 && (cVar1 == '\x03')))) {
            if ((*(int *)((long)param_2 + 0x11) == 0) &&
               ((*(short *)((long)param_2 + 0x15) == 0 && (*(char *)((long)param_2 + 0x17) == '\0'))
               )) {
              iVar21 = 0;
              pcVar16 = "internal error";
              puVar18 = &local_58;
            }
            else {
              iVar21 = 0;
              pcVar16 = "nonzero padding in e_ident";
              puVar18 = &local_58;
            }
          }
          else {
            iVar21 = 0;
            pcVar16 = "ELF file ABI version invalid";
            puVar18 = &local_58;
          }
        }
        goto LAB_007b3a73;
      }
      goto LAB_007b3b48;
    }
    *param_3 = 1;
    puVar10 = (ulong *)0x0;
    puVar19 = &local_58;
  }
LAB_007b36f0:
  local_40 = puVar10;
  *(undefined8 *)((long)puVar19 + -8) = 0x7b3702;
  FUN_0076e4b0(iVar5);
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 2;
  puVar10 = local_40;
  iVar5 = -1;
LAB_007b3714:
  *(undefined8 *)((long)puVar19 + -8) = 0x7b371c;
  FUN_007104f0(puVar10);
  return iVar5;
}

