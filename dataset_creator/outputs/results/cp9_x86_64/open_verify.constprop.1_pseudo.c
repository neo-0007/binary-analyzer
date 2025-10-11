
int open_verify_constprop_1(char *param_1,ulong *param_2,undefined1 *param_3)

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
  size_t sVar10;
  void *pvVar11;
  ulong uVar12;
  undefined1 *puVar13;
  int *__size;
  int *piVar14;
  char *pcVar15;
  char **ppcVar16;
  char **ppcVar17;
  char **ppcVar18;
  int *piVar19;
  int iVar20;
  ulong *puVar21;
  long in_FS_OFFSET;
  char *local_58;
  ulong *local_50;
  int *local_48;
  ulong *local_40;
  
  ppcVar16 = &local_58;
  ppcVar17 = &local_58;
  ppcVar18 = &local_58;
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
    iVar20 = *(int *)(in_FS_OFFSET + -0x58);
    pcVar15 = "cannot read file data";
    ppcVar17 = &local_58;
    if (iVar20 == 0) {
      pcVar15 = "file too short";
      ppcVar17 = &local_58;
    }
    goto LAB_007aa133;
  }
  if (((((param_2[1] == 0x10102464c457f) || (param_2[1] == 0x3010102464c457f)) &&
       (((byte)param_2[2] == 0 ||
        ((*(char *)((long)param_2 + 0xf) == '\x03' && ((byte)param_2[2] < 4)))))) &&
      (*(int *)((long)param_2 + 0x11) == 0)) &&
     ((*(short *)((long)param_2 + 0x15) == 0 && (*(char *)((long)param_2 + 0x17) == '\0')))) {
    iVar20 = 0;
    if (*(int *)((long)param_2 + 0x1c) != 1) {
      pcVar15 = "ELF file version does not match current one";
      ppcVar17 = &local_58;
      goto LAB_007aa133;
    }
    if (*(short *)((long)param_2 + 0x1a) == 0x3e) {
      if (1 < (ushort)((short)param_2[3] - 2U)) {
        pcVar15 = "only ET_DYN and ET_EXEC can be loaded";
        ppcVar17 = &local_58;
LAB_007aa133:
        *(undefined8 *)((long)ppcVar17 + -8) = 0x7aa13b;
        sVar10 = strlen(param_1);
        puVar13 = (undefined1 *)((long)ppcVar17 + -(sVar10 + 0x18 & 0xfffffffffffff000));
        for (; ppcVar17 != (char **)puVar13; ppcVar17 = (char **)((long)ppcVar17 + -0x1000)) {
          *(undefined8 *)((long)ppcVar17 + -8) = *(undefined8 *)((long)ppcVar17 + -8);
        }
        uVar7 = (ulong)((uint)(sVar10 + 0x18) & 0xff0);
        lVar6 = -uVar7;
        if (uVar7 != 0) {
          *(undefined8 *)((long)ppcVar17 + -8) = *(undefined8 *)((long)ppcVar17 + -8);
        }
        *(undefined8 *)((long)ppcVar17 + lVar6 + -8) = 0x7aa198;
        pvVar11 = memcpy((void *)((ulong)((long)ppcVar17 + lVar6 + 0xf) & 0xfffffffffffffff0),
                         param_1,sVar10 + 1);
        *(undefined8 *)((long)ppcVar17 + lVar6 + -8) = 0x7aa1a3;
        free(param_1);
        *(undefined8 *)((long)ppcVar17 + lVar6 + -8) = 0x7aa1ab;
        __close_nocancel(iVar5);
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)ppcVar17 + lVar6 + -8) = 0x7aa1bb;
        _dl_signal_error(iVar20,pvVar11,0,pcVar15);
      }
      if (*(short *)((long)param_2 + 0x3e) != 0x38) {
        pcVar15 = "ELF file\'s phentsize not the expected size";
        ppcVar17 = &local_58;
        goto LAB_007aa133;
      }
      uVar12 = (ulong)(ushort)param_2[8];
      uVar2 = param_2[5];
      lVar6 = uVar12 * 0x38;
      if (uVar7 < lVar6 + uVar2) {
        ppcVar18 = &local_58;
        while (ppcVar16 != (char **)((long)&local_58 - (lVar6 + 0x17U & 0xfffffffffffff000))) {
          ppcVar17 = (char **)((long)ppcVar18 + -0x1000);
          *(undefined8 *)((long)ppcVar18 + -8) = *(undefined8 *)((long)ppcVar18 + -8);
          ppcVar16 = (char **)((long)ppcVar18 + -0x1000);
          ppcVar18 = (char **)((long)ppcVar18 + -0x1000);
        }
        uVar7 = (ulong)((uint)(lVar6 + 0x17U) & 0xff0);
        lVar3 = -uVar7;
        ppcVar18 = (char **)((long)ppcVar17 + lVar3);
        if (uVar7 != 0) {
          *(undefined8 *)((long)ppcVar17 + -8) = *(undefined8 *)((long)ppcVar17 + -8);
        }
        local_48 = (int *)((ulong)((long)ppcVar17 + lVar3 + 0xf) & 0xfffffffffffffff0);
        *(undefined8 *)((long)ppcVar17 + lVar3 + -8) = 0x7aa0a1;
        lVar9 = __pread64_nocancel(iVar5,local_48,lVar6,uVar2);
        if (lVar9 != lVar6) {
LAB_007aa2ff:
          pcVar15 = "cannot read file data";
          iVar20 = *(int *)(in_FS_OFFSET + -0x58);
          ppcVar17 = ppcVar18;
          goto LAB_007aa133;
        }
        uVar12 = (ulong)(ushort)param_2[8];
        lVar6 = uVar12 * 0x38;
        ppcVar18 = (char **)((long)ppcVar17 + lVar3);
        piVar19 = local_48;
      }
      else {
        ppcVar18 = &local_58;
        piVar19 = (int *)((long)local_40 + uVar2);
      }
      if (piVar19 < (int *)(lVar6 + (long)piVar19)) {
        local_58 = param_1;
        __ptr = (ulong *)0x0;
        piVar14 = piVar19;
        do {
          if (((*piVar14 == 4) && (__size = *(int **)(piVar14 + 8), (int *)0x1f < __size)) &&
             ((*(long *)(piVar14 + 0xc) - 4U & 0xfffffffffffffffb) == 0)) {
            puVar21 = *(ulong **)(piVar14 + 2);
            if (*param_2 < (ulong)((long)__size + (long)puVar21)) {
              local_50 = puVar21;
              local_48 = __size;
              if (__size < (int *)0x10000) {
                for (puVar13 = (undefined1 *)ppcVar18;
                    puVar13 !=
                    (undefined1 *)((long)ppcVar18 + -((long)__size + 0x17U & 0xfffffffffffff000));
                    puVar13 = puVar13 + -0x1000) {
                  *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
                }
                uVar7 = (ulong)((uint)((long)__size + 0x17U) & 0xff0);
                lVar6 = -uVar7;
                ppcVar18 = (char **)(puVar13 + lVar6);
                if (uVar7 != 0) {
                  *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
                }
                puVar21 = (ulong *)((ulong)(puVar13 + lVar6 + 0xf) & 0xfffffffffffffff0);
              }
              else {
                *(undefined8 *)((long)ppcVar18 + -8) = 0x7aa0f3;
                __ptr = (ulong *)realloc(__ptr,(size_t)__size);
                puVar21 = __ptr;
                param_1 = local_58;
                if (__ptr == (ulong *)0x0) goto LAB_007aa2ff;
              }
              *(undefined8 *)((long)ppcVar18 + -8) = 0x7a9f51;
              puVar4 = local_50;
              local_50 = __ptr;
              piVar8 = (int *)__pread64_nocancel(iVar5,puVar21,local_48,puVar4);
              param_1 = local_58;
              __size = local_48;
              __ptr = local_50;
              if (piVar8 != local_48) {
                *(undefined8 *)((long)ppcVar18 + -8) = 0x7aa2ff;
                free(local_50);
                goto LAB_007aa2ff;
              }
            }
            else {
              puVar21 = (ulong *)((long)local_40 + (long)puVar21);
            }
            for (; puVar21[1] != 0x554e4700000001 || *puVar21 != 0x1000000004;
                puVar21 = (ulong *)((long)puVar21 + (long)piVar8)) {
              lVar6 = *(long *)(piVar14 + 0xc);
              piVar8 = (int *)((lVar6 + 0xb + (ulong)(uint)*puVar21 & -lVar6) +
                               lVar6 + -1 + (ulong)*(uint *)((long)puVar21 + 4) & -lVar6);
              if (__size + -8 < piVar8) goto LAB_007aa030;
              __size = (int *)((long)__size - (long)piVar8);
            }
            if (__size != (int *)0x0) {
              if (((uint)puVar21[2] != 0) ||
                 ((_dl_osversion <
                   ((*(uint *)((long)puVar21 + 0x14) & 0xff) * 0x100 + ((uint)puVar21[3] & 0xff)) *
                   0x100 + (*(uint *)((long)puVar21 + 0x1c) & 0xff) && (_dl_osversion != 0))))
              goto LAB_007a9db0;
              break;
            }
LAB_007aa030:
            uVar12 = (ulong)(ushort)param_2[8];
          }
          piVar14 = piVar14 + 0xe;
        } while (piVar14 < piVar19 + uVar12 * 0xe);
      }
      else {
        __ptr = (ulong *)0x0;
      }
      goto LAB_007a9dd4;
    }
LAB_007aa208:
    __ptr = (ulong *)0x0;
  }
  else {
    if ((int)param_2[1] != 0x464c457f) {
      iVar20 = 0;
      pcVar15 = "invalid ELF header";
      ppcVar17 = &local_58;
      goto LAB_007aa133;
    }
    if (*(char *)((long)param_2 + 0xc) == '\x02') {
      if (*(short *)((long)param_2 + 0x1a) == 0x3e) {
        pcVar15 = "ELF file data encoding not little-endian";
        ppcVar17 = &local_58;
        iVar20 = 0;
        if (((*(char *)((long)param_2 + 0xd) == '\x01') &&
            (pcVar15 = "ELF file version ident does not match current one", ppcVar17 = &local_58,
            iVar20 = 0, *(char *)((long)param_2 + 0xe) == '\x01')) &&
           ((cVar1 = *(char *)((long)param_2 + 0xf), cVar1 == '\0' ||
            (pcVar15 = "ELF file OS ABI invalid", ppcVar17 = &local_58, cVar1 == '\x03')))) {
          if (((byte)param_2[2] == 0) || (((byte)param_2[2] < 4 && (cVar1 == '\x03')))) {
            if ((*(int *)((long)param_2 + 0x11) == 0) &&
               ((*(short *)((long)param_2 + 0x15) == 0 && (*(char *)((long)param_2 + 0x17) == '\0'))
               )) {
              iVar20 = 0;
              pcVar15 = "internal error";
              ppcVar17 = &local_58;
            }
            else {
              iVar20 = 0;
              pcVar15 = "nonzero padding in e_ident";
              ppcVar17 = &local_58;
            }
          }
          else {
            iVar20 = 0;
            pcVar15 = "ELF file ABI version invalid";
            ppcVar17 = &local_58;
          }
        }
        goto LAB_007aa133;
      }
      goto LAB_007aa208;
    }
    *param_3 = 1;
    __ptr = (ulong *)0x0;
    ppcVar18 = &local_58;
  }
LAB_007a9db0:
  local_40 = __ptr;
  *(undefined8 *)((long)ppcVar18 + -8) = 0x7a9dc2;
  __close_nocancel(iVar5);
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 2;
  __ptr = local_40;
  iVar5 = -1;
LAB_007a9dd4:
  *(undefined8 *)((long)ppcVar18 + -8) = 0x7a9ddc;
  free(__ptr);
  return iVar5;
}

