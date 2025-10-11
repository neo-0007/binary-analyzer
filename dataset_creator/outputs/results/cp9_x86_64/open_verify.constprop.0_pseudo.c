
int open_verify_constprop_0(undefined8 param_1,ulong *param_2,undefined1 *param_3)

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
  ulong *__ptr;
  ulong uVar10;
  int *__size;
  int iVar11;
  int *piVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int *piVar17;
  ulong *puVar18;
  char *pcVar19;
  long in_FS_OFFSET;
  undefined8 local_58;
  ulong *local_50;
  int *local_48;
  ulong *local_40;
  
  puVar14 = &local_58;
  puVar15 = &local_58;
  puVar16 = &local_58;
  iVar5 = __open64_nocancel(param_1,0x80000);
  if (iVar5 == -1) {
    return -1;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
  local_40 = param_2 + 1;
  *param_2 = 0;
  uVar7 = 0;
  do {
    lVar6 = __read_nocancel(iVar5,(long)local_40 + uVar7,0x340 - uVar7);
    if (lVar6 < 1) {
      uVar7 = *param_2;
      break;
    }
    uVar7 = lVar6 + *param_2;
    *param_2 = uVar7;
  } while (uVar7 < 0x40);
  if ((long)uVar7 < 0x40) {
    pcVar19 = "file too short";
    iVar11 = *(int *)(in_FS_OFFSET + -0x58);
    puVar15 = &local_58;
    if (iVar11 != 0) {
      pcVar19 = "cannot read file data";
      puVar15 = &local_58;
    }
    goto LAB_007a9b3e;
  }
  if (((((param_2[1] == 0x10102464c457f) || (param_2[1] == 0x3010102464c457f)) &&
       (((byte)param_2[2] == 0 ||
        ((*(char *)((long)param_2 + 0xf) == '\x03' && ((byte)param_2[2] < 4)))))) &&
      (*(int *)((long)param_2 + 0x11) == 0)) &&
     ((*(short *)((long)param_2 + 0x15) == 0 && (*(char *)((long)param_2 + 0x17) == '\0')))) {
    iVar11 = 0;
    if (*(int *)((long)param_2 + 0x1c) != 1) {
      pcVar19 = "ELF file version does not match current one";
      puVar15 = &local_58;
      goto LAB_007a9b3e;
    }
    if (*(short *)((long)param_2 + 0x1a) == 0x3e) {
      if (1 < (ushort)((short)param_2[3] - 2U)) {
        pcVar19 = "only ET_DYN and ET_EXEC can be loaded";
        puVar15 = &local_58;
LAB_007a9b3e:
        *(undefined8 *)((long)puVar15 + -8) = 0x7a9b46;
        __close_nocancel(iVar5);
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)puVar15 + -8) = 0x7a9b55;
        _dl_signal_error(iVar11,param_1,0,pcVar19);
      }
      if (*(short *)((long)param_2 + 0x3e) != 0x38) {
        pcVar19 = "ELF file\'s phentsize not the expected size";
        puVar15 = &local_58;
        goto LAB_007a9b3e;
      }
      uVar10 = (ulong)(ushort)param_2[8];
      uVar2 = param_2[5];
      lVar6 = uVar10 * 0x38;
      if (uVar7 < lVar6 + uVar2) {
        puVar16 = &local_58;
        while (puVar14 != (undefined8 *)((long)&local_58 - (lVar6 + 0x17U & 0xfffffffffffff000))) {
          puVar15 = (undefined8 *)((long)puVar16 + -0x1000);
          *(undefined8 *)((long)puVar16 + -8) = *(undefined8 *)((long)puVar16 + -8);
          puVar14 = (undefined8 *)((long)puVar16 + -0x1000);
          puVar16 = (undefined8 *)((long)puVar16 + -0x1000);
        }
        uVar7 = (ulong)((uint)(lVar6 + 0x17U) & 0xff0);
        lVar3 = -uVar7;
        puVar16 = (undefined8 *)((long)puVar15 + lVar3);
        if (uVar7 != 0) {
          *(undefined8 *)((long)puVar15 + -8) = *(undefined8 *)((long)puVar15 + -8);
        }
        local_48 = (int *)((ulong)((long)puVar15 + lVar3 + 0xf) & 0xfffffffffffffff0);
        *(undefined8 *)((long)puVar15 + lVar3 + -8) = 0x7a9ab1;
        lVar9 = __pread64_nocancel(iVar5,local_48,lVar6,uVar2);
        if (lVar9 != lVar6) {
LAB_007a9c9d:
          pcVar19 = "cannot read file data";
          iVar11 = *(int *)(in_FS_OFFSET + -0x58);
          puVar15 = puVar16;
          goto LAB_007a9b3e;
        }
        uVar10 = (ulong)(ushort)param_2[8];
        lVar6 = uVar10 * 0x38;
        puVar16 = (undefined8 *)((long)puVar15 + lVar3);
        piVar17 = local_48;
      }
      else {
        puVar16 = &local_58;
        piVar17 = (int *)((long)local_40 + uVar2);
      }
      if (piVar17 < (int *)(lVar6 + (long)piVar17)) {
        local_58 = param_1;
        __ptr = (ulong *)0x0;
        piVar12 = piVar17;
        do {
          if (((*piVar12 == 4) && (__size = *(int **)(piVar12 + 8), (int *)0x1f < __size)) &&
             ((*(long *)(piVar12 + 0xc) - 4U & 0xfffffffffffffffb) == 0)) {
            puVar18 = *(ulong **)(piVar12 + 2);
            if (*param_2 < (ulong)((long)__size + (long)puVar18)) {
              local_50 = puVar18;
              local_48 = __size;
              if (__size < (int *)0x10000) {
                for (puVar13 = (undefined1 *)puVar16;
                    puVar13 !=
                    (undefined1 *)((long)puVar16 + -((long)__size + 0x17U & 0xfffffffffffff000));
                    puVar13 = puVar13 + -0x1000) {
                  *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
                }
                uVar7 = (ulong)((uint)((long)__size + 0x17U) & 0xff0);
                lVar6 = -uVar7;
                puVar16 = (undefined8 *)(puVar13 + lVar6);
                if (uVar7 != 0) {
                  *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
                }
                puVar18 = (ulong *)((ulong)(puVar13 + lVar6 + 0xf) & 0xfffffffffffffff0);
              }
              else {
                *(undefined8 *)((long)puVar16 + -8) = 0x7a9b03;
                __ptr = (ulong *)realloc(__ptr,(size_t)__size);
                puVar18 = __ptr;
                param_1 = local_58;
                if (__ptr == (ulong *)0x0) goto LAB_007a9c9d;
              }
              *(undefined8 *)((long)puVar16 + -8) = 0x7a9969;
              puVar4 = local_50;
              local_50 = __ptr;
              piVar8 = (int *)__pread64_nocancel(iVar5,puVar18,local_48,puVar4);
              param_1 = local_58;
              __size = local_48;
              __ptr = local_50;
              if (piVar8 != local_48) {
                *(undefined8 *)((long)puVar16 + -8) = 0x7a9c9d;
                free(local_50);
                goto LAB_007a9c9d;
              }
            }
            else {
              puVar18 = (ulong *)((long)local_40 + (long)puVar18);
            }
            for (; puVar18[1] != 0x554e4700000001 || *puVar18 != 0x1000000004;
                puVar18 = (ulong *)((long)puVar18 + (long)piVar8)) {
              lVar6 = *(long *)(piVar12 + 0xc);
              piVar8 = (int *)((lVar6 + 0xb + (ulong)(uint)*puVar18 & -lVar6) +
                               lVar6 + -1 + (ulong)*(uint *)((long)puVar18 + 4) & -lVar6);
              if (__size + -8 < piVar8) goto LAB_007a9a40;
              __size = (int *)((long)__size - (long)piVar8);
            }
            if (__size != (int *)0x0) {
              if (((uint)puVar18[2] != 0) ||
                 ((_dl_osversion <
                   ((*(uint *)((long)puVar18 + 0x14) & 0xff) * 0x100 + ((uint)puVar18[3] & 0xff)) *
                   0x100 + (*(uint *)((long)puVar18 + 0x1c) & 0xff) && (_dl_osversion != 0))))
              goto LAB_007a97d0;
              break;
            }
LAB_007a9a40:
            uVar10 = (ulong)(ushort)param_2[8];
          }
          piVar12 = piVar12 + 0xe;
        } while (piVar12 < piVar17 + uVar10 * 0xe);
      }
      else {
        __ptr = (ulong *)0x0;
      }
      goto LAB_007a97f4;
    }
LAB_007a9ba0:
    __ptr = (ulong *)0x0;
  }
  else {
    if ((int)param_2[1] != 0x464c457f) {
      iVar11 = 0;
      pcVar19 = "invalid ELF header";
      puVar15 = &local_58;
      goto LAB_007a9b3e;
    }
    if (*(char *)((long)param_2 + 0xc) == '\x02') {
      if (*(short *)((long)param_2 + 0x1a) == 0x3e) {
        pcVar19 = "ELF file data encoding not little-endian";
        puVar15 = &local_58;
        iVar11 = 0;
        if (((*(char *)((long)param_2 + 0xd) == '\x01') &&
            (pcVar19 = "ELF file version ident does not match current one", puVar15 = &local_58,
            iVar11 = 0, *(char *)((long)param_2 + 0xe) == '\x01')) &&
           ((cVar1 = *(char *)((long)param_2 + 0xf), cVar1 == '\0' ||
            (pcVar19 = "ELF file OS ABI invalid", puVar15 = &local_58, cVar1 == '\x03')))) {
          if (((byte)param_2[2] == 0) || (((byte)param_2[2] < 4 && (cVar1 == '\x03')))) {
            if ((*(int *)((long)param_2 + 0x11) == 0) &&
               ((*(short *)((long)param_2 + 0x15) == 0 && (*(char *)((long)param_2 + 0x17) == '\0'))
               )) {
              iVar11 = 0;
              pcVar19 = "internal error";
              puVar15 = &local_58;
            }
            else {
              iVar11 = 0;
              pcVar19 = "nonzero padding in e_ident";
              puVar15 = &local_58;
            }
          }
          else {
            iVar11 = 0;
            pcVar19 = "ELF file ABI version invalid";
            puVar15 = &local_58;
          }
        }
        goto LAB_007a9b3e;
      }
      goto LAB_007a9ba0;
    }
    *param_3 = 1;
    __ptr = (ulong *)0x0;
    puVar16 = &local_58;
  }
LAB_007a97d0:
  local_40 = __ptr;
  *(undefined8 *)((long)puVar16 + -8) = 0x7a97e2;
  __close_nocancel(iVar5);
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 2;
  __ptr = local_40;
  iVar5 = -1;
LAB_007a97f4:
  *(undefined8 *)((long)puVar16 + -8) = 0x7a97fc;
  free(__ptr);
  return iVar5;
}

