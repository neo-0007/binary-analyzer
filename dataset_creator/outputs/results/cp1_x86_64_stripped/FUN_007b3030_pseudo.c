
int FUN_007b3030(undefined8 param_1,ulong *param_2,undefined1 *param_3)

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
  ulong uVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int *piVar19;
  ulong *puVar20;
  char *pcVar21;
  long in_FS_OFFSET;
  undefined8 local_58;
  ulong *local_50;
  int *local_48;
  ulong *local_40;
  
  puVar16 = &local_58;
  puVar17 = &local_58;
  puVar18 = &local_58;
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
    pcVar21 = "file too short";
    iVar13 = *(int *)(in_FS_OFFSET + -0x58);
    puVar17 = &local_58;
    if (iVar13 != 0) {
      pcVar21 = "cannot read file data";
      puVar17 = &local_58;
    }
    goto LAB_007b347e;
  }
  if (((((param_2[1] == 0x10102464c457f) || (param_2[1] == 0x3010102464c457f)) &&
       (((byte)param_2[2] == 0 ||
        ((*(char *)((long)param_2 + 0xf) == '\x03' && ((byte)param_2[2] < 4)))))) &&
      (*(int *)((long)param_2 + 0x11) == 0)) &&
     ((*(short *)((long)param_2 + 0x15) == 0 && (*(char *)((long)param_2 + 0x17) == '\0')))) {
    iVar13 = 0;
    if (*(int *)((long)param_2 + 0x1c) != 1) {
      pcVar21 = "ELF file version does not match current one";
      puVar17 = &local_58;
      goto LAB_007b347e;
    }
    if (*(short *)((long)param_2 + 0x1a) == 0x3e) {
      if (1 < (ushort)((short)param_2[3] - 2U)) {
        pcVar21 = "only ET_DYN and ET_EXEC can be loaded";
        puVar17 = &local_58;
LAB_007b347e:
        *(undefined8 *)((long)puVar17 + -8) = 0x7b3486;
        FUN_0076e4b0(iVar5);
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)puVar17 + -8) = 0x7b3495;
        FUN_0078db10(iVar13,param_1,0,pcVar21);
      }
      if (*(short *)((long)param_2 + 0x3e) != 0x38) {
        pcVar21 = "ELF file\'s phentsize not the expected size";
        puVar17 = &local_58;
        goto LAB_007b347e;
      }
      uVar11 = (ulong)(ushort)param_2[8];
      uVar2 = param_2[5];
      lVar6 = uVar11 * 0x38;
      if (uVar7 < lVar6 + uVar2) {
        puVar18 = &local_58;
        while (puVar16 != (undefined8 *)((long)&local_58 - (lVar6 + 0x17U & 0xfffffffffffff000))) {
          puVar17 = (undefined8 *)((long)puVar18 + -0x1000);
          *(undefined8 *)((long)puVar18 + -8) = *(undefined8 *)((long)puVar18 + -8);
          puVar16 = (undefined8 *)((long)puVar18 + -0x1000);
          puVar18 = (undefined8 *)((long)puVar18 + -0x1000);
        }
        uVar7 = (ulong)((uint)(lVar6 + 0x17U) & 0xff0);
        lVar3 = -uVar7;
        puVar18 = (undefined8 *)((long)puVar17 + lVar3);
        if (uVar7 != 0) {
          *(undefined8 *)((long)puVar17 + -8) = *(undefined8 *)((long)puVar17 + -8);
        }
        local_48 = (int *)((ulong)((long)puVar17 + lVar3 + 0xf) & 0xfffffffffffffff0);
        *(undefined8 *)((long)puVar17 + lVar3 + -8) = 0x7b33f1;
        lVar9 = FUN_007abc10(iVar5,local_48,lVar6,uVar2);
        if (lVar9 != lVar6) {
LAB_007b35dd:
          pcVar21 = "cannot read file data";
          iVar13 = *(int *)(in_FS_OFFSET + -0x58);
          puVar17 = puVar18;
          goto LAB_007b347e;
        }
        uVar11 = (ulong)(ushort)param_2[8];
        lVar6 = uVar11 * 0x38;
        puVar18 = (undefined8 *)((long)puVar17 + lVar3);
        piVar19 = local_48;
      }
      else {
        puVar18 = &local_58;
        piVar19 = (int *)((long)local_40 + uVar2);
      }
      if (piVar19 < (int *)(lVar6 + (long)piVar19)) {
        local_58 = param_1;
        puVar10 = (ulong *)0x0;
        piVar14 = piVar19;
        do {
          if (((*piVar14 == 4) && (piVar12 = *(int **)(piVar14 + 8), (int *)0x1f < piVar12)) &&
             ((*(long *)(piVar14 + 0xc) - 4U & 0xfffffffffffffffb) == 0)) {
            puVar20 = *(ulong **)(piVar14 + 2);
            if (*param_2 < (ulong)((long)piVar12 + (long)puVar20)) {
              local_50 = puVar20;
              local_48 = piVar12;
              if (piVar12 < (int *)0x10000) {
                for (puVar15 = (undefined1 *)puVar18;
                    puVar15 !=
                    (undefined1 *)((long)puVar18 + -((long)piVar12 + 0x17U & 0xfffffffffffff000));
                    puVar15 = puVar15 + -0x1000) {
                  *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
                }
                uVar7 = (ulong)((uint)((long)piVar12 + 0x17U) & 0xff0);
                lVar6 = -uVar7;
                puVar18 = (undefined8 *)(puVar15 + lVar6);
                if (uVar7 != 0) {
                  *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
                }
                puVar20 = (ulong *)((ulong)(puVar15 + lVar6 + 0xf) & 0xfffffffffffffff0);
              }
              else {
                *(undefined8 *)((long)puVar18 + -8) = 0x7b3443;
                puVar10 = (ulong *)FUN_00710840(puVar10,piVar12);
                puVar20 = puVar10;
                param_1 = local_58;
                if (puVar10 == (ulong *)0x0) goto LAB_007b35dd;
              }
              *(undefined8 *)((long)puVar18 + -8) = 0x7b32a9;
              puVar4 = local_50;
              local_50 = puVar10;
              piVar8 = (int *)FUN_007abc10(iVar5,puVar20,local_48,puVar4);
              param_1 = local_58;
              piVar12 = local_48;
              puVar10 = local_50;
              if (piVar8 != local_48) {
                *(undefined8 *)((long)puVar18 + -8) = 0x7b35dd;
                FUN_007104f0(local_50);
                goto LAB_007b35dd;
              }
            }
            else {
              puVar20 = (ulong *)((long)local_40 + (long)puVar20);
            }
            for (; puVar20[1] != 0x554e4700000001 || *puVar20 != 0x1000000004;
                puVar20 = (ulong *)((long)puVar20 + (long)piVar8)) {
              lVar6 = *(long *)(piVar14 + 0xc);
              piVar8 = (int *)((lVar6 + 0xb + (ulong)(uint)*puVar20 & -lVar6) +
                               lVar6 + -1 + (ulong)*(uint *)((long)puVar20 + 4) & -lVar6);
              if (piVar12 + -8 < piVar8) goto LAB_007b3380;
              piVar12 = (int *)((long)piVar12 - (long)piVar8);
            }
            if (piVar12 != (int *)0x0) {
              if (((uint)puVar20[2] != 0) ||
                 ((DAT_0094ae98 <
                   ((*(uint *)((long)puVar20 + 0x14) & 0xff) * 0x100 + ((uint)puVar20[3] & 0xff)) *
                   0x100 + (*(uint *)((long)puVar20 + 0x1c) & 0xff) && (DAT_0094ae98 != 0))))
              goto LAB_007b3110;
              break;
            }
LAB_007b3380:
            uVar11 = (ulong)(ushort)param_2[8];
          }
          piVar14 = piVar14 + 0xe;
        } while (piVar14 < piVar19 + uVar11 * 0xe);
      }
      else {
        puVar10 = (ulong *)0x0;
      }
      goto LAB_007b3134;
    }
LAB_007b34e0:
    puVar10 = (ulong *)0x0;
  }
  else {
    if ((int)param_2[1] != 0x464c457f) {
      iVar13 = 0;
      pcVar21 = "invalid ELF header";
      puVar17 = &local_58;
      goto LAB_007b347e;
    }
    if (*(char *)((long)param_2 + 0xc) == '\x02') {
      if (*(short *)((long)param_2 + 0x1a) == 0x3e) {
        pcVar21 = "ELF file data encoding not little-endian";
        puVar17 = &local_58;
        iVar13 = 0;
        if (((*(char *)((long)param_2 + 0xd) == '\x01') &&
            (pcVar21 = "ELF file version ident does not match current one", puVar17 = &local_58,
            iVar13 = 0, *(char *)((long)param_2 + 0xe) == '\x01')) &&
           ((cVar1 = *(char *)((long)param_2 + 0xf), cVar1 == '\0' ||
            (pcVar21 = "ELF file OS ABI invalid", puVar17 = &local_58, cVar1 == '\x03')))) {
          if (((byte)param_2[2] == 0) || (((byte)param_2[2] < 4 && (cVar1 == '\x03')))) {
            if ((*(int *)((long)param_2 + 0x11) == 0) &&
               ((*(short *)((long)param_2 + 0x15) == 0 && (*(char *)((long)param_2 + 0x17) == '\0'))
               )) {
              iVar13 = 0;
              pcVar21 = "internal error";
              puVar17 = &local_58;
            }
            else {
              iVar13 = 0;
              pcVar21 = "nonzero padding in e_ident";
              puVar17 = &local_58;
            }
          }
          else {
            iVar13 = 0;
            pcVar21 = "ELF file ABI version invalid";
            puVar17 = &local_58;
          }
        }
        goto LAB_007b347e;
      }
      goto LAB_007b34e0;
    }
    *param_3 = 1;
    puVar10 = (ulong *)0x0;
    puVar18 = &local_58;
  }
LAB_007b3110:
  local_40 = puVar10;
  *(undefined8 *)((long)puVar18 + -8) = 0x7b3122;
  FUN_0076e4b0(iVar5);
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 2;
  puVar10 = local_40;
  iVar5 = -1;
LAB_007b3134:
  *(undefined8 *)((long)puVar18 + -8) = 0x7b313c;
  FUN_007104f0(puVar10);
  return iVar5;
}

