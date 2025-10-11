
long search_object(ulong *param_1,ulong param_2)

{
  long *plVar1;
  size_t __size;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  void *__ptr;
  ulong uVar10;
  byte bVar11;
  long *plVar12;
  code *pcVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  ulong *puVar19;
  ulong local_78;
  ulong local_70;
  long local_68;
  ulong local_60;
  ulong local_50;
  ulong *local_48;
  void *local_40;
  
  bVar2 = (byte)param_1[4];
  if ((bVar2 & 1) == 0) {
    uVar4 = (uint)param_1[4] >> 0xb;
    local_70 = (ulong)uVar4;
    if (uVar4 == 0) {
      plVar12 = (long *)param_1[3];
      if ((bVar2 & 2) == 0) {
        local_70 = classify_object_over_fdes();
        if (local_70 != 0xffffffffffffffff) goto LAB_006c5639;
LAB_006c5464:
        param_1[4] = 0x7f8;
        param_1[3] = (ulong)&terminator_3;
      }
      else if (*plVar12 == 0) {
        *(uint *)(param_1 + 4) = (uint)param_1[4] & 0x7ff;
      }
      else {
        do {
          lVar8 = classify_object_over_fdes(param_1);
          if (lVar8 == -1) goto LAB_006c5464;
          plVar1 = plVar12 + 1;
          plVar12 = plVar12 + 1;
          local_70 = local_70 + lVar8;
        } while (*plVar1 != 0);
LAB_006c5639:
        uVar4 = (uint)local_70 & 0x1fffff;
        if (uVar4 != local_70) {
          uVar4 = 0;
        }
        *(uint *)(param_1 + 4) = (uint)param_1[4] & 0x7ff | uVar4 << 0xb;
        if (local_70 != 0) goto LAB_006c5738;
      }
    }
    else {
LAB_006c5738:
      __size = local_70 * 8 + 0x10;
      puVar9 = (ulong *)malloc(__size);
      local_48 = puVar9;
      if (puVar9 != (ulong *)0x0) {
        puVar9[1] = 0;
        __ptr = malloc(__size);
        if (__ptr != (void *)0x0) {
          *(undefined8 *)((long)__ptr + 8) = 0;
        }
        uVar10 = param_1[4];
        plVar12 = (long *)param_1[3];
        local_40 = __ptr;
        if ((uVar10 & 2) == 0) {
          add_fdes(param_1,&local_48,plVar12);
        }
        else {
          if (*plVar12 == 0) goto code_r0x00404567;
          do {
            plVar12 = plVar12 + 1;
            add_fdes(param_1);
          } while (*plVar12 != 0);
        }
        uVar14 = puVar9[1];
        if (uVar14 != local_70) goto code_r0x00404567;
        pcVar13 = fde_mixed_encoding_compare;
        if (((uVar10 & 4) == 0) && (pcVar13 = fde_unencoded_compare, (param_1[4] & 0x7f8) != 0)) {
          pcVar13 = fde_single_encoding_compare;
        }
        if (__ptr == (void *)0x0) {
          frame_heapsort(param_1,pcVar13,puVar9);
        }
        else {
          puVar17 = &marker_4;
          local_60 = 0;
          puVar19 = puVar9 + 2;
          while( true ) {
            *(ulong **)((long)__ptr + local_60 * 8 + 0x10) = puVar17;
            local_60 = local_60 + 1;
            puVar17 = puVar19;
            if (local_60 == uVar14) break;
            do {
              iVar5 = (*pcVar13)(param_1,puVar19[1],*puVar17);
              if (-1 < iVar5) break;
              lVar8 = ((long)puVar17 - (long)(puVar9 + 2) >> 3) + 2;
              puVar17 = *(ulong **)((long)__ptr + lVar8 * 8);
              *(undefined8 *)((long)__ptr + lVar8 * 8) = 0;
            } while (puVar17 != &marker_4);
            puVar19 = puVar19 + 1;
          }
          lVar8 = 0;
          uVar6 = 0;
          uVar10 = 0;
          do {
            if (*(long *)((long)__ptr + uVar10 * 8 + 0x10) == 0) {
              *(ulong *)((long)__ptr + lVar8 * 8 + 0x10) = puVar9[uVar10 + 2];
              lVar8 = lVar8 + 1;
            }
            else {
              puVar9[uVar6 + 2] = puVar9[uVar10 + 2];
              uVar6 = uVar6 + 1;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar14);
          puVar9[1] = uVar6;
          *(long *)((long)__ptr + 8) = lVar8;
          if (uVar6 + lVar8 != local_70) goto code_r0x00404567;
          frame_heapsort(param_1,pcVar13,__ptr);
          local_68 = *(long *)((long)__ptr + 8);
          if (local_68 != 0) {
            uVar10 = puVar9[1];
            do {
              lVar8 = local_68 + -1;
              local_70 = *(ulong *)((long)__ptr + (local_68 + 1) * 8);
              if (uVar10 == 0) {
                puVar9[local_68 + 1] = local_70;
                if (lVar8 == 0) break;
                lVar18 = local_68 + -2;
                local_70 = *(ulong *)((long)__ptr + local_68 * 8);
                local_68 = lVar18;
              }
              else {
                lVar18 = local_68 + -1 + uVar10;
                do {
                  uVar14 = uVar10 - 1;
                  iVar5 = (*pcVar13)(param_1,puVar9[uVar10 + 1],local_70);
                  local_68 = lVar8;
                  if (iVar5 < 1) goto LAB_006c596f;
                  puVar9[lVar18 + 2] = puVar9[uVar10 + 1];
                  lVar18 = lVar18 + -1;
                  uVar10 = uVar14;
                } while (uVar14 != 0);
                uVar10 = 0;
                lVar18 = lVar8;
              }
LAB_006c596f:
              puVar9[lVar18 + 2] = local_70;
            } while (local_68 != 0);
            puVar9[1] = puVar9[1] + *(long *)((long)__ptr + 8);
          }
          free(__ptr);
        }
        uVar10 = param_1[3];
        *(byte *)(param_1 + 4) = (byte)param_1[4] | 1;
        param_1[3] = (ulong)puVar9;
        *puVar9 = uVar10;
      }
    }
    if (param_2 < *param_1) {
      return 0;
    }
    bVar2 = (byte)param_1[4];
    plVar12 = (long *)param_1[3];
    if ((bVar2 & 1) == 0) {
      if ((bVar2 & 2) == 0) {
        lVar8 = linear_search_fdes(param_1,plVar12,param_2);
        return lVar8;
      }
      lVar8 = *plVar12;
      while( true ) {
        if (lVar8 == 0) {
          return 0;
        }
        lVar8 = linear_search_fdes(param_1,lVar8,param_2);
        if (lVar8 != 0) break;
        lVar8 = plVar12[1];
        plVar12 = plVar12 + 1;
      }
      return lVar8;
    }
  }
  uVar10 = param_1[3];
  if ((bVar2 & 4) != 0) {
    if (*(ulong *)(uVar10 + 8) == 0) {
      return 0;
    }
    local_78 = 0;
    uVar14 = *(ulong *)(uVar10 + 8);
LAB_006c5592:
    uVar6 = uVar14 + local_78 >> 1;
    lVar8 = *(long *)(uVar10 + 0x10 + uVar6 * 8);
    bVar2 = get_cie_encoding((lVar8 + 4) - (long)*(int *)(lVar8 + 4));
    if (bVar2 != 0xff) {
      bVar11 = bVar2 & 0x70;
      if (bVar11 == 0x20) {
        uVar15 = param_1[1];
        goto LAB_006c55e8;
      }
      if (0x20 < bVar11) {
        if (bVar11 == 0x30) {
          uVar15 = param_1[2];
          goto LAB_006c55e8;
        }
        if (bVar11 != 0x50) {
                    /* WARNING: Subroutine does not return */
          search_object_cold();
        }
        goto LAB_006c56e8;
      }
      if ((bVar2 & 0x60) != 0) goto code_r0x00404567;
    }
LAB_006c56e8:
    uVar15 = 0;
LAB_006c55e8:
    uVar7 = read_encoded_value_with_base(bVar2,uVar15,lVar8 + 8,&local_50);
    read_encoded_value_with_base(bVar2 & 0xf,0,uVar7,&local_48);
    if (local_50 <= param_2) {
      if (param_2 < local_50 + (long)local_48) {
        return lVar8;
      }
      local_78 = uVar6 + 1;
      uVar6 = uVar14;
    }
    uVar14 = uVar6;
    if (uVar6 <= local_78) {
      return 0;
    }
    goto LAB_006c5592;
  }
  if (((ushort)param_1[4] & 0x7f8) == 0) {
    uVar14 = 0;
    uVar6 = *(ulong *)(uVar10 + 8);
    do {
      uVar15 = uVar6;
      if (uVar15 <= uVar14) {
        return 0;
      }
      while( true ) {
        uVar6 = uVar15 + uVar14 >> 1;
        lVar8 = *(long *)(uVar10 + 0x10 + uVar6 * 8);
        if (param_2 < *(ulong *)(lVar8 + 8)) break;
        if (param_2 < *(ulong *)(lVar8 + 8) + *(long *)(lVar8 + 0x10)) {
          return lVar8;
        }
        uVar14 = uVar6 + 1;
        if (uVar15 <= uVar14) {
          return 0;
        }
      }
    } while( true );
  }
  uVar3 = (ushort)param_1[4] >> 3;
  bVar2 = (byte)uVar3;
  if (bVar2 != 0xff) {
    bVar11 = bVar2 & 0x70;
    if (bVar11 == 0x20) {
      uVar14 = param_1[1];
      goto LAB_006c54b8;
    }
    if (bVar11 < 0x21) {
      if ((uVar3 & 0x60) != 0) {
code_r0x00404567:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (bVar11 == 0x30) {
        uVar14 = param_1[2];
        goto LAB_006c54b8;
      }
      if (bVar11 != 0x50) {
                    /* WARNING: Subroutine does not return */
        search_object_cold();
      }
    }
  }
  uVar14 = 0;
LAB_006c54b8:
  if (*(ulong *)(uVar10 + 8) != 0) {
    uVar6 = 0;
    uVar15 = *(ulong *)(uVar10 + 8);
    do {
      uVar16 = uVar15 + uVar6 >> 1;
      lVar8 = *(long *)(uVar10 + 0x10 + uVar16 * 8);
      uVar7 = read_encoded_value_with_base(bVar2,uVar14,lVar8 + 8,&local_50);
      read_encoded_value_with_base(uVar3 & 0xf,0,uVar7,&local_48);
      if (local_50 <= param_2) {
        if (param_2 < local_50 + (long)local_48) {
          return lVar8;
        }
        uVar6 = uVar16 + 1;
        uVar16 = uVar15;
      }
      uVar15 = uVar16;
    } while (uVar6 < uVar16);
  }
  return 0;
}

